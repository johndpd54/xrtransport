import sys
from . import get_xml_root, parse_spec, generate_serializer, generate_deserializer, generate_struct_fuzzer, TEMPLATES_DIR

if len(sys.argv) < 5:
    print("4 arguments required: xr.xml path, serializer out path, deserializer out path, fuzzer out path")
    sys.exit(1)
xr_xml_path, serializer_path, deserializer_path, fuzzer_path = sys.argv[1:5]
xml_root = get_xml_root(xr_xml_path)
spec = parse_spec(xml_root)
with open(serializer_path, "wb") as out:
    generate_serializer(spec, TEMPLATES_DIR, out)
with open(deserializer_path, "wb") as out:
    generate_deserializer(spec, TEMPLATES_DIR, out)
with open(fuzzer_path, "wb") as out:
    generate_struct_fuzzer(spec, TEMPLATES_DIR, out)