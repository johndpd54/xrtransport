from mako.template import Template
from mako.lookup import TemplateLookup
from mako import exceptions

def generate_common(spec, templates_dir, out):
    template_lookup = TemplateLookup(directories=[templates_dir])
    template = template_lookup.get_template("common.mako")
    try:
        out.write(template.render(spec=spec).encode())
    except:
        print("Warning! An exception occurred running common template.")
        print(exceptions.text_error_template().render())
