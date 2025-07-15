import random
import os
from collections import deque
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
        self.asst = "assert"

    def _plan_member(self, plan, type_name):
        struct = self.spec.find_struct(type_name)
        if struct:
            self._plan_struct(plan, struct)
        else:
            self._plan_primitive(plan)

    def _plan_struct(self, plan, struct):
        if struct.xr_type:
            if random.random() < self.nullptr_chance: # push a boolean to indicate end of chain
                plan.append(True)
            else:
                plan.append(False)
                next_struct = self.choose_xr_struct()
                plan.append(next_struct) # push next struct type in chain
                self._plan_struct(plan, next_struct) # recurse down the chain
            rest_members = struct.members[2:]
        else:
            rest_members = struct.members
        for member in rest_members:
            if member.pointer:
                if random.random() < self.nullptr_chance: # push a boolean to indicate nullptr
                    plan.append(True)
                    continue
                plan.append(False)
                if member.len == "null-terminated":
                    random_string = "".join(random.choices(string.ascii_letters + string.digits, k=random.randint(0, 100)))
                    plan.append(random_string) # push string value
                elif member.len:
                    new_length = random.randint(1, 20) # push length of array ptr
                    plan.append(new_length)
                    for i in range(new_length):
                        self._plan_member(plan, member.type) # recurse for each element of array
                else:
                    self._plan_member(plan, member.type) # single item pointer
            elif member.array:
                self._plan_member(plan, member.type) # only plan for one item, each item in the array will be the same for convenience
            else:
                self._plan_member(plan, member.type) # singular item, plan for struct or primitive
                
    def _plan_primitive(self, plan):
        hex_value = hex(random.randint(0, 2**64 - 1))
        plan.append(hex_value) # plan primitive's value
    
    def choose_struct(self):
        return random.choice(self.test_structs)
    
    def choose_xr_struct(self):
        return random.choice(self.test_xr_structs)

    def generate_plan(self, struct=None):
        if struct == None:
            struct = self.choose_struct()
        plan = deque()
        plan.append(struct)
        self._plan_struct(plan, struct)
        return StructFuzzerPlan(plan, self.spec)

# represents a plan that comes from a first pass over a struct to determine how to generate it
class StructFuzzerPlan:
    def __init__(self, plan, spec):
        # save an unmodified copy of the deque to restore
        self.saved_plan = plan
        self.spec = spec
        self.asst = "assert"
    
    def _init_member(self, plan, out, type_name, name, binding, indent=0):
        struct = self.spec.find_struct(type_name)
        if struct:
            self._init_struct(plan, out, struct, name, binding, indent)
        else:
            self._init_primitive(plan, out, type_name, name, binding, indent)

    def _init_struct(self, plan, out, struct, name, binding, indent=0):
        if struct.xr_type:
            out.append(f"{indent * ' '}{binding}.type = {struct.xr_type};")
            if plan.popleft(): # should generate nullptr
                out.append(f"{indent * ' '}{binding}.next = nullptr;")
            else:
                next_struct = plan.popleft() # randomly chosen xr struct
                out.append(f"{indent * ' '}{next_struct.name} {name}_next{{}};")
                self._init_struct(plan, out, next_struct, f"{name}_next", f"{name}_next", indent)
                out.append(f"{indent * ' '}{binding}.next = &{name}_next;")
            rest_members = struct.members[2:]
        else:
            rest_members = struct.members
        for member in rest_members:
            if member.pointer:
                if plan.popleft(): # should generate nullptr
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
                    random_string = plan.popleft()
                    out.append(f"{indent * ' '}{binding}.{member.name} = \"{random_string}\";")
                elif member.len:
                    # reset its length to a smaller number (overwrite member that specifies its length)
                    new_length = plan.popleft()
                    out.append(f"{indent * ' '}{binding}.{member.len} = {new_length};")
                    out.append(f"{indent * ' '}{member.type} {name}_{member.name}[{new_length}]{{}};")
                    for i in range(new_length):
                        self._init_member(plan, out, member.type, f"{name}_{member.name}_{i}", f"{name}_{member.name}[{i}]", indent)
                    out.append(f"{indent * ' '}{binding}.{member.name} = {name}_{member.name};")
                else:
                    out.append(f"{indent * ' '}{member.type} {name}_{member.name}{{}};")
                    self._init_member(plan, out, member.type, f"{name}_{member.name}", f"{name}_{member.name}", indent)
                    out.append(f"{indent * ' '}{binding}.{member.name} = &{name}_{member.name};")
            elif member.array:
                out.append(f"{indent * ' '}for (int i = 0; i < {member.array}; i++) {{")
                self._init_member(plan, out, member.type, f"{name}_{member.name}", f"{binding}.{member.name}[i]", indent + 4)
                out.append(f"{indent * ' '}}}")
            else:
                self._init_member(plan, out, member.type, f"{name}_{member.name}", f"{binding}.{member.name}", indent)

    def _init_primitive(self, plan, out, type_name, name, binding, indent=0):
        hex_value = plan.popleft()
        out.append(f"{indent * ' '}{binding} = ({type_name})({hex_value});")
    
    def _compare_member(self, plan, out, type_name, name, binding, indent=0):
        struct = self.spec.find_struct(type_name)
        if struct:
            self._compare_struct(plan, out, struct, name, binding, indent)
        else:
            self._compare_primitive(plan, out, type_name, name, binding, indent)

    def _compare_struct(self, plan, out, struct, name, binding, indent=0):
        if struct.xr_type:
            out.append(f"{indent * ' '}{self.asst}({binding}.type == {struct.xr_type});")
            if plan.popleft():
                out.append(f"{indent * ' '}{self.asst}({binding}.next == nullptr);")
            else:
                next_struct = plan.popleft()
                self._compare_struct(plan, out, next_struct, f"{name}_next", f"(*({next_struct.name}*){binding}.next)", indent)
            rest_members = struct.members[2:]
        else:
            rest_members = struct.members
        for member in rest_members:
            if member.pointer:
                if plan.popleft(): # should generate nullptr
                    out.append(f"{indent * ' '}{self.asst}({binding}.{member.name} == nullptr);")
                    continue
                if member.len == "null-terminated":
                    random_string = plan.popleft()
                    out.append(f"{indent * ' '}{self.asst}(strcmp({binding}.{member.name}, \"{random_string}\") == 0);")
                elif member.len:
                    # reset its length to a smaller number (overwrite member that specifies its length)
                    new_length = plan.popleft()
                    for i in range(new_length):
                        self._compare_member(plan, out, member.type, f"{name}_{member.name}_{i}", f"{binding}.{member.name}[{i}]", indent)
                else:
                    self._compare_member(plan, out, member.type, f"{name}_{member.name}", f"{binding}->{member.name}", indent)
            elif member.array:
                out.append(f"{indent * ' '}for (int i = 0; i < {member.array}; i++) {{")
                self._compare_member(plan, out, member.type, f"{name}_{member.name}", f"{binding}.{member.name}[i]", indent + 4)
                out.append(f"{indent * ' '}}}")
            else:
                self._compare_member(plan, out, member.type, f"{name}_{member.name}", f"{binding}.{member.name}", indent)

    def _compare_primitive(self, plan, out, type_name, name, binding, indent=0):
        hex_value = plan.popleft()
        out.append(f"{indent * ' '}{self.asst}({binding} == ({type_name})({hex_value}));")
    
    def gen_init(self, name, indent=0):
        # copy the deque so it can be safely popped from
        plan = deque(self.saved_plan)
        struct = plan.popleft()
        lines = []
        lines.append(f"{indent * ' '}{struct.name} {name}{{}};")
        self._init_struct(plan, lines, struct, name, name, indent)
        return os.linesep.join(lines)
    
    def gen_compare(self, name, indent=0):
        # copy the deque so it can be safely popped from
        plan = deque(self.saved_plan)
        struct = plan.popleft()
        lines = []
        self._compare_struct(plan, lines, struct, name, name, indent)
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
