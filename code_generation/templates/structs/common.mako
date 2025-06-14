<%def name="for_grouped_structs(grouped_structs=None)">
<% if grouped_structs == None: grouped_structs = spec.grouped_structs %>
% for struct_group in grouped_structs:
<% extension = struct_group[0].extension if len(struct_group) > 0 else None %>
% if extension:
#ifdef XRTRANSPORT_EXT_${extension}
% endif
% for struct in struct_group:
${caller.body(struct=struct)}
% endfor
% if extension:
#endif // XRTRANSPORT_EXT_${extension}
% endif
% endfor
</%def>

<%def name="for_grouped_types()">
<%
extensions_to_types = {}
for t in spec.supported_types:
    extension = spec.supported_types[t]
    if not extension in extensions_to_types:
        extensions_to_types[extension] = []
    extensions_to_types[extension].append(t)
grouped_types = sorted(extensions_to_types.items(), key=lambda x: x[0] if x[0] != None else "")
%>
% for extension, types in grouped_types:
% if extension:
#ifdef XRTRANSPORT_EXT_${extension}
% endif
% for t in types:
${caller.body(t=t)}
% endfor
% if extension:
#endif // XRTRANSPORT_EXT_${extension}
% endif
% endfor
</%def>