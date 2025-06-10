import sys
from common import get_xml_root, parse_spec

HEADER = """
#ifndef XRTRANSPORT_SERIALIZER_GENERATED_H
#define XRTRANSPORT_SERIALIZER_GENERATED_H

#include "openxr/openxr.h"
#include "xrtransport_protocol.h"

#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>

namespace xrtransport {

// Only to be used with OpenXR pNext structs
using StructSerializer = void(*)(const XrBaseInStructure*, std::ostream&);
#define STRUCT_SERIALIZER_PTR(t) (reinterpret_cast<StructSerializer>(static_cast<void(*)(const t*, std::ostream&)>(&serialize)))

// To be used to know member offsets at compile time
constexpr size_t align(std::size_t x, std::size_t n) {
    return n > 8 ?
        (x + 7) & ~(7) :
        (x + (n - 1)) & ~(n - 1);
}
"""

SERIALIZER_LOOKUP = """
static StructSerializer serializer_lookup(XrStructureType struct_type) {
    const auto begin = serializer_lookup_table.begin();
    const auto end = serializer_lookup_table.end();

    auto it = std::lower_bound(begin, end, struct_type,
        [](const auto& tuple, XrStructureType value) {
            return std::get<0>(tuple) < value;
        });

    if (it != end && std::get<0>(*it) == struct_type) {
        return std::get<1>(*it);
    }
    
    assert(false && "XrStructureType not found in serializers lookup table");
}
"""

FOOTER = """
} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_GENERATED_H
"""

def main():
    if len(sys.argv) < 3:
        print("2 arguments required: xr.xml path, output file path")
        return
    xr_xml_path, out_path = sys.argv[1:3]
    xml_root = get_xml_root(xr_xml_path)
    spec = parse_spec(xml_root)
    with open(out_path, "w") as out:
        generate_serializer(spec, out)

def generate_serializer(spec, out):
    out.write(HEADER)
    write_lookup_table(spec, out)

    for struct in spec.structs:
        write_struct_serializer(spec, struct, out)

    out.write(FOOTER)

def write_lookup_table(spec, out):
    xr_structs = [s for s in spec.structs if s.xr_type]
    out.write(f"static std::vector<std::tuple<XrStructureType, StructSerializer>> serializer_lookup_table = {{\n")
    last_extension = None
    for struct in xr_structs:
        if struct.extension and struct.extension != last_extension:
            # if we haven't written any extensions, don't terminate the last one
            if last_extension != None:
                out.write(f"#endif // XRTRANSPORT_EXT_{last_extension}\n")
            last_extension = struct.extension
            out.write(f"#ifdef XRTRANSPORT_EXT_{last_extension}\n")
        out.write(f"{{{struct.xr_type}, STRUCT_SERIALIZER_PTR({struct.name})}},\n")
    out.write(f"#endif // XRTRANSPORT_EXT_{last_extension}\n") # end last extension section
    out.write("};\n")
    out.write(SERIALIZER_LOOKUP)

def write_struct_serializer(spec, struct, out):
    if struct.extension:
        out.write(f"#ifdef XRTRANSPORT_EXT_{struct.extension}\n")
    if struct.xr_type:
        write_openxr_struct_serializer(spec, struct, out)
    else:
        write_simple_struct_serializer(spec, struct, out)
    if struct.extension:
        out.write(f"#endif // XRTRANSPORT_EXT_{struct.extension}\n")

def write_openxr_struct_serializer(spec, struct, out):
    out.write(f"static void serialize(const {struct.name}* s, std::ostream& out) {{\n")
    
    out.write(f"constexpr std::size_t aligned_size = {construct_aligned_size(struct, '(*s)')};\n")

    out.write("}\n")

def write_simple_struct_serializer(spec, struct, out):
    pass

def construct_aligned_size(struct, struct_binding):
    members = struct.members

    result = "0"
    for i in range(len(members) - 1):
        member = members[i]
        next_member = members[i + 1]
        
        if member.is_next_ptr():
            # skip chaining pointer
            continue
        # add size of current member
        result = f"{result} + sizeof({struct_binding}.{member.name})"
        # align to size of next member
        result = f"align({result}, sizeof({struct_binding}.{next_member.name}))"
    
    last_member = members[-1]
    result = f"{result} + sizeof({struct_binding}.{last_member.name})"

    return result

if __name__ == "__main__":
    main()