import os
from .spec_parser import get_xml_root, parse_spec
from .reflection_struct import generate_reflection_struct
from .reflection_function import generate_reflection_function
from .test import generate_struct_fuzzer

PACKAGE_DIR = os.path.relpath(os.path.dirname(os.path.realpath(__file__)), os.getcwd())
TEMPLATES_DIR = os.path.join(PACKAGE_DIR, "templates")