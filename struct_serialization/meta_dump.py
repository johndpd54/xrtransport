import sys
from common import get_xml_root, parse_spec
import json

def main():
    if len(sys.argv) < 2:
        print("1 arguments required: xr.xml path")
        return
    xr_xml_path = sys.argv[1]
    xml_root = get_xml_root(xr_xml_path)
    spec = parse_spec(xml_root)
    with open("functions.json", "w") as functions_out:
        functions_out.write(json.dumps(spec.functions, indent=4))
    with open("function_aliases.json", "w") as function_aliases_out:
        function_aliases_out.write(json.dumps(spec.function_aliases, indent=4))
    with open("structs.json", "w") as structs_out:
        structs_out.write(json.dumps(spec.structs, indent=4))

if __name__ == "__main__":
    main()