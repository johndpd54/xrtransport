import xml.etree.ElementTree as ET
import json

# structs whose serializers and deserializers are manually specified
CUSTOM_STRUCTS = [
    "XrInstanceCreateInfo",
    "XrFrameEndInfo",
]

class XrSpec:
    def __init__(self, functions, function_aliases, structs, extensions):
        self.functions = functions
        self.function_aliases = function_aliases
        self.structs = structs
        self.extensions = extensions
        self.functions_index = {f.name: f for f in self.functions}
        self.structs_index = {s.name: s for s in self.structs}
        test_extensions = [None]
        self.test_structs = filter_test_structs(self.extensions, test_extensions)
    
    def find_function(self, name):
        return self.functions_index[name] if name in self.functions_index else None
    
    def find_struct(self, name):
        return self.structs_index[name] if name in self.structs_index else None

class XrExtension:
    def __init__(self, structs=None, functions=None):
        if structs == None:
            structs = []
        if functions == None:
            functions = []
        self.structs = structs
        self.functions = functions

class XrStruct:
    def __init__(self, name, members):
        self.name = name
        self.xr_type = None
        self.xr_type_value = None
        self.members = members
        self.header = None
        self.extension = None
        self.custom = False
        self.output_bindings = []
        self.binding_analyzed = False
    
class XrFunction:
    def __init__(self, name, type_, params):
        self.name = name
        self.type = type_
        self.params = params
        self.flag = None
        self.extension = None

class XrParam:
    def __init__(self, type_, name):
        self.qualifier = None
        self.type = type_
        self.pointer = None
        self.name = name
        self.array = None
        self.len = None
    
    def is_next_ptr(self):
        return self.type == "void" and self.pointer == "*" and self.name == "next"
    
    def full_type(self):
        full_type = self.type
        if self.qualifier:
            full_type = self.qualifier + " " + full_type
        if self.pointer:
            full_type += self.pointer
        if self.array:
            full_type += f"[{self.array}]"
        
        return full_type

struct_blacklist = {
    # ignore structs and functions associated with loader negotiation
    # all API layer logic will remain on the client, not transported
    "XrNegotiateLoaderInfo",
    "XrNegotiateApiLayerRequest",
    "XrNegotiateRuntimeRequest",
    "XrApiLayerNextInfo",
    "XrApiLayerCreateInfo",
    # ignore utility header structs
    "XrBaseInStructure",
    "XrBaseOutStructure",
}
function_blacklist = {
    
}

def get_xml_root(xml_path):
    xml_tree = ET.parse(xml_path)
    return xml_tree.getroot()

def parse_spec(xml_root):
    functions, function_aliases = collect_functions(xml_root)
    structs = collect_structs(xml_root)
    extensions = collect_extensions(xml_root, structs, functions)
    spec = XrSpec(functions, function_aliases, structs, extensions)
    return spec

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

def parse_param(tag):
    def add_if_present(p, key, value):
        if not value or not value.strip():
            return
        setattr(p, key, value.strip())
    
    assert len(tag) >= 2 # param needs at least <type> and <name>

    type_tag = tag[0]
    assert type_tag.tag == "type"
    name_tag = tag[1]
    assert name_tag.tag == "name"

    type_ = type_tag.text
    name = name_tag.text
    param = XrParam(type_, name)

    add_if_present(param, "qualifier", tag.text)
    add_if_present(param, "pointer", type_tag.tail)

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
        param.array = array.strip()[1:-1] # cut square brackets off

    if "len" in tag.attrib:
        param.len = tag.attrib["len"]

    return param

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
        struct = XrStruct(type_tag.attrib["name"], [])

        if struct.name in struct_blacklist:
            continue
        if struct.name in CUSTOM_STRUCTS:
            struct.custom = True

        # check if struct has corresponding structure type, if so add it
        xr_structure_type = get_xr_structure_type(type_tag)
        if xr_structure_type:
            struct.xr_type = xr_structure_type
            struct.xr_type_value = xr_structure_type_values[xr_structure_type]

        for member_tag in type_tag.findall("member"):
            member = parse_param(member_tag)
            struct.members.append(member)
        
        # check if struct is one that doesn't have an xr_type but still has a 'void* next'
        # these should not have generators, and using them should fallback to the generic case
        # because these are usually (always?) aliased headers that actually represent a different type
        if not struct.xr_type and any(m.is_next_ptr() for m in struct.members):
            struct.header = True

        structs.append(struct)

    # sort structs by their assigned XrStructureType
    def sort_key(struct):
        if not struct.xr_type in xr_structure_type_values:
            # sort non-typed structs to the beginning
            return 0
        # sort the rest by their XrStructureType value
        return xr_structure_type_values[struct.xr_type]
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
            proto_tag = command_tag.find("proto")
            name = proto_tag.find("name").text
            if name in function_blacklist:
                continue
            type_ = proto_tag.find("type").text # always XrResult
            function = XrFunction(name, type_, [])
            param_tags = command_tag.findall("param")
            for param_tag in param_tags:
                param = parse_param(param_tag)
                function.params.append(param)
            functions.append(function)
    
    # flag functions that likely need extra work
    for function in functions:
        if any(p.type.startswith("PFN") for p in function.params):
            function.flag = True
    
    return functions, function_aliases

def collect_extensions(xml_root, structs, functions):
    extension_tags = xml_root.findall("extensions/extension")
    no_extension_structs = set(structs)
    no_extension_functions = set(functions)
    extensions = {}
    for extension_tag in extension_tags:
        extension_name = extension_tag.attrib["name"]
        extension = XrExtension()
        for type_tag in extension_tag.findall("require/type"):
            name = type_tag.attrib["name"]
            # O(N^2), but this needs to be done before the spec is constructed
            # so we can't use find_struct. If this becomes a problem we can throw
            # them all in a dict first
            struct = next((s for s in structs if s.name == name), None)
            if struct:
                extension.structs.append(struct)
                no_extension_structs.discard(struct)
        for command_tag in extension_tag.findall("require/command"):
            name = command_tag.attrib["name"]
            function = next((f for f in functions if f.name == name), None)
            if function:
                extension.functions.append(function)
                no_extension_functions.discard(function)
        # Some structs are not referred to by their extension, but their XrStructureType is
        for enum_tag in extension_tag.findall("require/enum"):
            if "extends" in enum_tag.attrib and enum_tag.attrib["extends"] == "XrStructureType":
                enum_name = enum_tag.attrib["name"]
                struct = next((s for s in structs if s.xr_type == enum_name), None)
                if not struct:
                    print(f"Warning! found XrStructureType ({enum_name}) with no corresponding struct!")
                else:
                    extension.structs.append(struct)
                    no_extension_structs.discard(struct)
        if extension.structs or extension.functions:
            extensions[extension_name] = extension
    
    structs_list = sorted(no_extension_structs, key=lambda x: x.name)
    functions_list = sorted(no_extension_functions, key=lambda x: x.name)
    extensions[None] = XrExtension(structs_list, functions_list)

    return extensions
            
# concatenate the list of structs based on the list of extension names we're testing
def filter_test_structs(extensions, test_extensions):
    test_structs = []
    for ext_name, ext in extensions.items():
        if ext_name in test_extensions:
            test_structs += ext.structs
    return test_structs


# ----------------------------  Binding-Analysis Helpers  ----------------------------

def analyze_struct_outputs(struct, spec, processed_structs=None):
    """Return a list of member names of *struct* that may be modified (non-const pointers).
    The result is cached inside *struct* via get_struct_bindings().
    """
    if processed_structs is None:
        processed_structs = set()

    # Avoid infinite recursion for self-referencing structs
    if struct.name in processed_structs:
        return []
    processed_structs.add(struct.name)

    outputs = []
    for member in struct.members:
        # A member is considered an output if it is a pointer and not marked const
        if member.pointer and member.qualifier != "const":
            outputs.append(member.name)
            # We deliberately do *not* recurse into this member because the pointer itself
            # will be handled at runtime when the binding path is followed (see plan 2.1).
    return outputs


def get_struct_bindings(struct, spec):
    """Return cached output bindings for a struct, computing them once if necessary."""
    if not getattr(struct, "binding_analyzed", False):
        struct.output_bindings = analyze_struct_outputs(struct, spec)
        struct.binding_analyzed = True
    return struct.output_bindings


def analyze_output_bindings(func, spec):
    """Return a list of binding paths for *func* that may be modified by the server.
    Each path is in the form "param" or "param->nestedMember" according to the
    algorithm sketched in planning/runtime-plan.md.
    """
    bindings = []
    for param in func.params:
        # We care only about non-const pointer parameters
        if param.pointer and param.qualifier != "const":
            bindings.append(param.name)

            # If the parameter is a pointer to a struct, merge that struct's bindings
            if param.type in spec.structs_index:
                struct = spec.structs_index[param.type]
                struct_bindings = get_struct_bindings(struct, spec)
                bindings.extend([f"{param.name}->{b}" for b in struct_bindings])
    return bindings
