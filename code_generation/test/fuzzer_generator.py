import random
import os
from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions

# This stuff is very unwieldy to do in a Mako template, so it's defined here
class RandomStructGenerator:
    def __init__(self, spec):
        self.spec = spec
        self.test_structs = [s for s in spec.test_structs if not s.name in spec.custom_structs and not s.header]
        self.test_xr_structs = [s for s in self.test_structs if s.xr_type]
        self.nullptr_chance = 0.6
    
    def _fill_member(self, out, type_name, name, binding, indent=0):
        struct = self.spec.find_struct(type_name)
        if struct:
            self._fill_struct(out, struct, name, binding, indent)
        else:
            self._fill_primitive(out, type_name, name, binding, indent)

    def _fill_struct(self, out, struct, name, binding, indent=0):
        if struct.xr_type:
            out.append(f"{indent * ' '}{binding}.type = {struct.xr_type};")
            if random.random() < self.nullptr_chance:
                out.append(f"{indent * ' '}{binding}.next = nullptr;")
            else:
                next_struct = self.choose_xr_struct()
                self._gen_struct(out, next_struct, f"{name}_next", indent)
                out.append(f"{indent * ' '}{binding}.next = &{name}_next;")
            rest_members = struct.members[2:]
        else:
            rest_members = struct.members
        for member in rest_members:
            if member.pointer:
                if random.random() < self.nullptr_chance:
                    # allow pointer chains to terminate
                    if member.len and member.len != "null-terminated":
                        # if this is set to nullptr, its length should also be zero
                        # out.append(f"{indent * ' '}{binding}.{member.len} = 0;")
                        pass
                        # actually, the serializer/deserializer should be able to handle this kind
                        # of invalid input and pass it on as-is. Even though this is an error state,
                        # we'll test for the possibility. It shouldn't crash and also the server runtime
                        # should hopefully handle it gracefully
                    out.append(f"{indent * ' '}{binding}.{member.name} = nullptr;")
                    continue
                if member.len == "null-terminated":
                    random_string = "".join(random.choices(string.ascii_letters + string.digits, k=random.randint(0, 100)))
                    out.append(f"{indent * ' '}{binding}.{member.name} = \"{random_string}\";")
                elif member.len:
                    # reset its length to a smaller number (overwrite member that specifies its length)
                    new_length = random.randint(1, 20)
                    out.append(f"{indent * ' '}{binding}.{member.len} = {new_length};")
                    out.append(f"{indent * ' '}{member.type} {name}_{member.name}[{new_length}]{{}};")
                    for i in range(new_length):
                        self._fill_member(out, member.type, f"{name}_{member.name}_{i}", f"{name}_{member.name}[{i}]", indent)
                    out.append(f"{indent * ' '}{binding}.{member.name} = {name}_{member.name};")
                else:
                    out.append(f"{indent * ' '}{member.type} {name}_{member.name}{{}};")
                    self._fill_member(out, member.type, f"{name}_{member.name}", f"{name}_{member.name}", indent)
                    out.append(f"{indent * ' '}{binding}.{member.name} = &{name}_{member.name};")
            elif member.array:
                array_length = member.array[1:-1]
                out.append(f"{indent * ' '}for (int i = 0; i < {array_length}; i++) {{")
                self._fill_member(out, member.type, f"{name}_{member.name}", f"{binding}.{member.name}[i]", indent + 4)
                out.append(f"{indent * ' '}}}")
            else:
                self._fill_member(out, member.type, f"{name}_{member.name}", f"{binding}.{member.name}", indent)
                

    def _fill_primitive(self, out, type_name, name, binding, indent=0):
        out.append(f"{indent * ' '}{binding} = ({type_name})({hex(random.randint(0, 2**64 - 1))});")

    def _gen_struct(self, out, struct, name, indent=0):
        out.append(f"{indent * ' '}{struct.name} {name}{{}};")
        self._fill_struct(out, struct, name, name, indent)
    
    def choose_struct(self):
        return random.choice(self.test_structs)
    
    def choose_xr_struct(self):
        return random.choice(self.test_xr_structs)

    def generate_struct(self, name, struct=None, indent=0):
        if struct == None:
            struct = self.choose_struct()
        lines = []
        self._gen_struct(lines, struct, name, indent)
        return os.linesep.join(lines)

def generate_struct_fuzzer(spec, templates_dir, out):
    template_lookup = TemplateLookup(directories=[f"{templates_dir}/test"])
    template = template_lookup.get_template("struct_fuzzer.mako")
    struct_generator = RandomStructGenerator(spec)
    try:
        out.write(template.render(spec=spec, struct_generator=struct_generator).encode())
    except:
        print("Warning! An exception occurred running serializer template.")
        print(exceptions.text_error_template().render())
