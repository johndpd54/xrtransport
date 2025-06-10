<%
    # group structs by extension
    grouped_structs = [[]]
    last_extension = None
    for struct in spec.structs:
        if not struct.xr_type:
            # the lookup table should contain only XR structs
            continue
        if struct.extension == last_extension:
            grouped_structs[-1].append(struct)
        else:
            grouped_structs.append([struct])
            last_extension = struct.extension
%>

// Only to be used with OpenXR pNext structs
using StructSerializer = void(*)(const XrBaseInStructure*, std::ostream&);
#define STRUCT_SERIALIZER_PTR(t) (reinterpret_cast<StructSerializer>(static_cast<void(*)(const t*, std::ostream&)>(&serialize)))

static std::vector<std::tuple<XrStructureType, StructSerializer>> serializer_lookup_table = {
% for struct_group in grouped_structs:
    <% extension = struct_group[0].extension if len(struct_group) > 0 else None %>
    % if extension:
#ifdef XRTRANSPORT_EXT_${extension}
    % endif
    % for struct in struct_group:
    {${struct.xr_type}, STRUCT_SERIALIZER_PTR(${struct.name})},
    % endfor
    % if extension:
#endif // XRTRANSPORT_EXT_${extension}
    % endif
% endfor
};

static StructSerializer serializer_lookup(XrStructureType struct_type) {
    const auto begin = serializer_lookup_table.begin();
    const auto end = serializer_lookup_table.end();

    auto it = std::lower_bound(begin, end, struct_type,
        [](const auto& tuple, XrStructureType value) {
            return std::get<0>(tuple) < value;
        });

    if (it != end && std::get<0>(*it) == struct_type) {
        return std::get<1>(*it);
    }
    
    assert(false && "XrStructureType not found in serializers lookup table");
}