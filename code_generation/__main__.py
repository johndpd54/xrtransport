import sys
import os
from . import (
    get_xml_root,
    parse_spec,
    generate_common,
    generate_serializer,
    generate_deserializer,
    generate_struct_fuzzer,
    TEMPLATES_DIR
)

if len(sys.argv) < 3:
    print("2 arguments required: xr.xml path, generated folder")
    sys.exit(1)
xr_xml_path, generated_folder = sys.argv[1:3]
xml_root = get_xml_root(xr_xml_path)
spec = parse_spec(xml_root)

common_path = os.path.join(generated_folder, "common.h")
serializer_path = os.path.join(generated_folder, "serializer.h")
deserializer_path = os.path.join(generated_folder, "deserializer.h")
fuzzer_path = os.path.join(generated_folder, "fuzzer.cpp")

with open(common_path, "wb") as out:
    generate_common(spec, TEMPLATES_DIR, out)
with open(serializer_path, "wb") as out:
    generate_serializer(spec, TEMPLATES_DIR, out)
with open(deserializer_path, "wb") as out:
    generate_deserializer(spec, TEMPLATES_DIR, out)
with open(fuzzer_path, "wb") as out:
    generate_struct_fuzzer(spec, TEMPLATES_DIR, out)