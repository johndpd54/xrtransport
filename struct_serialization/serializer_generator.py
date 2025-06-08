import sys
from common import get_xml_root, collect_structs
import json

HEADER = """
#ifndef XRTRANSPORT_SERIALIZER_H
#define XRTRANSPORT_SERIALIZER_H

#include "openxr/openxr.h"

namespace xrtransport {
"""

FOOTER = """
} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_H
"""

def main():
    if len(sys.argv) < 3:
        print("2 arguments required: xr.xml path, output file path")
        return
    xr_xml_path, out_path = sys.argv[1:3]
    xml_root = get_xml_root(xr_xml_path)
    structs = collect_structs(xml_root)
    generate_serializer(structs)

def generate_serializer(structs):
    print(json.dumps(structs, indent=4))

if __name__ == "__main__":
    main()