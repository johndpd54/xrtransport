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