import os
import argparse
from . import (
    get_xml_root,
    parse_spec,
    generate_common,
    generate_serializer,
    generate_deserializer,
    generate_struct_fuzzer,
    TEMPLATES_DIR
)

parser = argparse.ArgumentParser(description="Generate serialization, deserialization, and test code based on OpenXR spec")
parser.add_argument("openxr_spec_path", help="Path to the xr.xml file for the OpenXR spec")
parser.add_argument("generated_out", help="Path to the folder to place generated source code in")
parser.add_argument("--fuzzer-seed", default=1337, type=int, help="Numerical seed to use for the fuzzer")
args = parser.parse_args()

xr_xml_path = args.openxr_spec_path
generated_folder = args.generated_out
fuzzer_seed = args.fuzzer_seed

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
    generate_struct_fuzzer(spec, TEMPLATES_DIR, out, fuzzer_seed)