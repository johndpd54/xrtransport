<%def name="generic_serializer()">
template <typename T>
static void serialize(const T* x, std::ostream& out) {
    static_assert(
        ${" || ".join(f"std::is_same<T, {t}>::value" for t in spec.supported_types)},
        "T must be a supported type"
    );
    out.write(reinterpret_cast<const char*>(x), sizeof(*x));
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
        // special marker to indicate next struct
        uint8_t marker = 1;
        serialize(&marker, out);
        serializer_lookup(next->type)(next, out);
    }
    else {
        // special marker to indicate no next struct
        uint8_t marker = 0;
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
    % if member.pointer:
        % if member.pointer != "*":
    #error auto-generator doesn't support double pointers (${struct.name}.${member.name})
            <% continue %>
        % endif
        % if member.len:
            % if "," in member.len:
    #error auto-generator doesn't support multi-variable lengths (${struct.name}.${member.name})
                <% continue %>
            % endif
            <% actual_length = f"count_null_terminated(s->{member.name})" if member.len == "null-terminated" else f"s->{member.len}" %>
    
    for (int i = 0; i < (${actual_length}); i++) {
        serialize(&s->${member.name}[i], out);
    }
        % else:
    serialize(s->${member.name}, out);
        % endif
    % elif member.array:
        <% array_size = member.array[1:-1] %>
    for (int i = 0; i < ${array_size}; i++) {
        serialize(&s->${member.name}, out);
    }
    % else:
    serialize(&s->${member.name}, out);
    % endif
% endfor
}
</%def>
