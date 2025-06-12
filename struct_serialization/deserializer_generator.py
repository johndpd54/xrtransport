import sys
import os
from common import get_xml_root, parse_spec
from mako.template import Template
from mako.lookup import TemplateLookup

def main():
    if len(sys.argv) < 3:
        print("2 arguments required: xr.xml path, output file path")
        return
    xr_xml_path, out_path = sys.argv[1:3]
    xml_root = get_xml_root(xr_xml_path)
    spec = parse_spec(xml_root)
    with open(out_path, "wb") as out:
        generate_deserializer(spec, out)

def generate_deserializer(spec, out):
    base_path = os.path.dirname(os.path.realpath(__file__))
    base_path = os.path.relpath(base_path, os.getcwd())
    template_lookup = TemplateLookup(directories=[f"{base_path}/templates"])
    template = template_lookup.get_template("deserializer.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running serializer template.")
        print(exceptions.text_error_template().render())

if __name__ == "__main__":
    main()