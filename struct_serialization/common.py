import xml.etree.ElementTree as ET

class XrSpec:
    def __init__(self, functions, function_aliases, structs):
        self.functions = functions
        self.function_aliases = function_aliases
        self.structs = structs

def get_xml_root(xml_path):
    xml_tree = ET.parse(xml_path)
    return xml_tree.getroot()

def parse_spec(xml_root):
    functions, function_aliases = collect_functions(xml_root)
    structs = collect_structs(xml_root)
    return XrSpec(functions, function_aliases, structs)

def collect_xr_structure_type_values(xml_root):
    structure_types = {}
    # Collect base types
    base_enum_tag = xml_root.find("enums[@name='XrStructureType'][@type='enum']")
    enum_tags = base_enum_tag.findall("enum")
    for enum_tag in enum_tags:
        name = enum_tag.attrib["name"]
        value = int(enum_tag.attrib["value"])
        structure_types[name] = value
    
    # Collect types from feature levels
    feature_tags = xml_root.findall("feature")
    for feature_tag in feature_tags:
        for enum_tag in feature_tag.findall("require/enum"):
            if not "extends" in enum_tag.attrib or enum_tag.attrib["extends"] != "XrStructureType":
                continue
            # I haven't seen any aliases in this section, so I'm not handling them
            # Maybe in another feature release that will be a problem
            name = enum_tag.attrib["name"]
            extension_number = int(enum_tag.attrib["extnumber"])
            offset = int(enum_tag.attrib["offset"])
            # calculate value based on extension number and enum offset
            value = 1000000000 + (extension_number - 1) * 1000 + offset
            structure_types[name] = value
    
    # Collect types from extensions
    extension_tags = xml_root.findall("extensions/extension")
    for extension_tag in extension_tags:
        for enum_tag in extension_tag.findall("require/enum"):
            if not "extends" in enum_tag.attrib or enum_tag.attrib["extends"] != "XrStructureType":
                continue
            name = enum_tag.attrib["name"]
            if "alias" in enum_tag.attrib:
                continue # actually, we don't want duplicate values in the lookup table
                # # handle types that are aliases of other types
                # # this assumes that the aliased type is defined before this one
                # alias = enum_tag.attrib["alias"]
                # name = enum_tag.attrib["name"]
                # value = None
                # for other_name, other_value in structure_types:
                #     if other_name == alias:
                #         value = other_value
                #         break
            else:
                # calculate value based on extension number and enum offset
                extension_number = int(extension_tag.attrib["number"])
                offset = int(enum_tag.attrib["offset"])
                value = 1000000000 + (extension_number - 1) * 1000 + offset

            structure_types[name] = value

    return structure_types

def get_xr_structure_type(struct_type_tag):
    for member_tag in struct_type_tag.findall("member"):
        if member_tag.find("name").text != "type":
            continue
        if not "values" in member_tag.attrib:
            # this struct has a 'type' member, but it doesn't correspond to one specific XrStructureType
            break
        return member_tag.attrib["values"]
    
    # this struct doesn't have a defined XrStructureType value
    return None

def parse_declaration(tag):
    def add_if_present(member, key, value):
        if not value or not value.strip():
            return
        member[key] = value.strip()
    
    assert len(tag) >= 2 # member needs at least <type> and <name>

    member = {}

    type_tag = tag[0]
    assert type_tag.tag == "type"
    name_tag = tag[1]
    assert name_tag.tag == "name"

    add_if_present(member, "qualifier", tag.text)
    member["type"] = type_tag.text
    add_if_present(member, "pointer", type_tag.tail)
    member["name"] = name_tag.text

    if name_tag.tail:
        assert name_tag.tail.startswith("[")
        array = name_tag.tail
        # note: will not work with 2-deep tags after name
        # so far it doesn't seem like that exists
        for next_element in tag[2:]:
            if next_element.text:
                array += next_element.text
            if next_element.tail:
                array += next_element.tail
        member["array"] = array

    if "len" in tag.attrib:
        member["len"] = tag.attrib["len"]

    return member

def collect_structs(xml_root):
    xr_structure_type_values = collect_xr_structure_type_values(xml_root)

    structs = []
    struct_type_tags = xml_root.findall("types/type[@category='struct']")
    # tags that refer to an alias need to be processed after all others
    for type_tag in struct_type_tags:
        if "alias" in type_tag.attrib:
            # don't generate any functions that take an aliased type, as this will be a redefinition
            continue

        # initialize struct
        struct = {
            "name": type_tag.attrib["name"]
        }
        # check if struct has corresponding structure type, if so add it
        xr_structure_type = get_xr_structure_type(type_tag)
        if xr_structure_type:
            struct["xr_type"] = xr_structure_type
            struct["xr_type_value"] = xr_structure_type_values[xr_structure_type]
        struct["members"] = []

        for member_tag in type_tag.findall("member"):
            member = parse_declaration(member_tag)
            struct["members"].append(member)
        
        # check if struct is one that doesn't have an xr_type but still has a 'void* next'
        # these should not have generators, and using them should fallback to the generic case
        # because these are usually (always?) aliased headers that actually represent a different type
        if not "xr_type" in struct and any(m["type"] == "void" and m["pointer"] == "*" and m["name"] == "next" for m in struct["members"]):
            struct["header"] = True

        structs.append(struct)

    # sort structs by their assigned XrStructureType
    def sort_key(struct):
        if not "xr_type" in struct or not struct["xr_type"] in xr_structure_type_values:
            # sort non-typed structs to the beginning
            return 0
        # sort the rest by their XrStructureType value
        return xr_structure_type_values[struct["xr_type"]]
    structs.sort(key=sort_key)

    return structs

def collect_functions(xml_root):
    functions = []
    function_aliases = {}

    command_tags = xml_root.findall("commands/command")
    for command_tag in command_tags:
        if "alias" in command_tag.attrib:
            name = command_tag.attrib["name"]
            alias = command_tag.attrib["alias"]
            function_aliases[name] = alias
        else:
            function = {}
            proto_tag = command_tag.find("proto")
            function["name"] = proto_tag.find("name").text
            function["type"] = proto_tag.find("type").text # always XrResult
            function["params"] = []
            param_tags = command_tag.findall("param")
            for param_tag in param_tags:
                param = parse_declaration(param_tag)
                function["params"].append(param)
            functions.append(function)
    
    # flag functions that likely need extra work
    for function in functions:
        if any(p["type"].startswith("PFN") for p in function["params"]):
            function["flag"] = True
    
    return functions, function_aliases