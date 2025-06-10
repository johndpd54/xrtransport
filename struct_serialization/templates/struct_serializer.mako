<%
# utility for iterating through structs
# parse the spec
%>

<%def name="serializer(struct)">
% if struct.xr_type:
## OpenXR struct serializer
static void serialize(const ${struct.name}* s, std::ostream& out) {

}
% else:
## Simple struct serializer
static void serialize(const ${struct.name}* s, std::ostream& out) {

}
% endif
</%def>
