from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions

def generate_serializer(spec, templates_dir, out):
    template_lookup = TemplateLookup(directories=[f"{templates_dir}/structs"])
    template = template_lookup.get_template("serializer.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running serializer template.")
        print(exceptions.text_error_template().render())
