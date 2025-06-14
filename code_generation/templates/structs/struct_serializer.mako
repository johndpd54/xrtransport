<%def name="generic_serializer()">
template <typename T>
static void serialize(const T* x, std::ostream& out) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    out.write(reinterpret_cast<const char*>(x), sizeof(T));
}
</%def>

<%def name="forward_serializer(struct)">
static void serialize(const ${struct.name}* s, std::ostream& out);
</%def>

<%def name="serializer(struct)">
static void serialize(const ${struct.name}* s, std::ostream& out) {
% if struct.xr_type:
    serialize(&s->type, out);
    const XrBaseInStructure* next = reinterpret_cast<const XrBaseInStructure*>(s->next);
    if (next != nullptr) {
        ## serialize next's type to mark non-null and tell deserializer how to read
        ## note that this means the XrStructureType is written and read twice:
        ## first to tell that it's not null and dispatch to the correct function
        ## second as an actual part of the struct
        serialize(&next->type, out);
        serializer_lookup(next->type)(next, out);
    }
    else {
        // special marker to indicate no next struct
        XrStructureType marker = XR_TYPE_UNKNOWN;
        serialize(&marker, out);
    }
    <% rest_members = struct.members[2:] %>
% else:
    <% rest_members = struct.members %>
% endif
% for member in rest_members:
    % if member.pointer and member.array:
    #error auto-generator doesn't support array of pointers (${struct.name}.${member.name})
        <% continue %>
    % endif
    % if member.pointer and member.pointer != "*":
    #error auto-generator doesn't support double pointers (${struct.name}.${member.name})
        <% continue %>
    % endif
    % if member.len and "," in member.len:
    #error auto-generator doesn't support multi-variable lengths (${struct.name}.${member.name})
        <% continue %>
    % endif
    % if member.pointer and member.len and member_struct and member_struct.header:
    #error auto-generator doesn't support arrays of header structs (${struct.name}.${member.name})
        <% continue %>
    % endif
    % if member.pointer:
    if (s->${member.name} != nullptr) {
        std::uint8_t marker = 1;
        serialize(&marker, out);
        % if member.len:
        std::size_t num_items = ${f"count_null_terminated(s->{member.name})" if member.len == "null-terminated" else f"s->{member.len}"};
            % if member.len == "null-terminated":
        serialize(static_cast<const uint32_t*>(&num_items), out);
            % endif
        for (int i = 0; i < num_items; i++) {
            serialize(&s->${member.name}[i], out);
        }
        % else:
            % if member.header:
        XrStructureType header_real_type = s->${member.name}.type;
        serialize(&header_real_type, out);
        serializer_lookup(header_real_type)(reinterpret_cast<const XrBaseInStructure*>(s->${member.name}), out);
            % else:
        serialize(s->${member.name}, out);
            % endif
        % endif
    }
    else {
        std::uint8_t marker = 0;
        serialize(&marker, out);
    }
    % elif member.array:
        <% array_size = member.array[1:-1] %>
    for (int i = 0; i < ${array_size}; i++) {
        serialize(&s->${member.name}[i], out);
    }
    % else:
    serialize(&s->${member.name}, out);
    % endif
% endfor
}
</%def>
