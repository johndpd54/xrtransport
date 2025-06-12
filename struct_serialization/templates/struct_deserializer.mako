<%def name="generic_deserializer()">
template <typename T>
static void deserialize(T* x, std::istream& in) {
    static_assert(
        ${" || ".join(f"std::is_same<T, {t}>::value" for t in spec.supported_types)},
        "T must be a supported type"
    );
    in.read(std::reinterpret_cast<char*>(x), sizeof(*x));
}
</%def>

<%def name="forward_deserializer(struct)">
static void deserialize(${struct.name}* s, std::istream& in);
</%def>

<%def name="deserializer(struct)">
static void deserialize(${struct.name}* s, std::istream& in) {
% if struct.xr_type:
    deserialize(&s->type, in);
    ## next_type is XR_TYPE_UNKNOWN if this is the end of the chain,
    ## otherwise, it is the XrStructureType of the next struct in the chain
    XrStructureType next_type{};
    deserialize(&next_type, in);
    if (next_type != XR_TYPE_UNKNOWN) {
        XrBaseOutStructure* next{};
        allocator_lookup(next_type)(&next, 1);
        deserializer_lookup(next_type)(next, in);
        s->next = next;
    }
    else {
        s->next = nullptr;
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
    % if member.pointer:
    std::uint8_t marker{};
    deserialize(&marker, in);
    if (marker) {
        % if member.len:
        std::size_t num_items = ${f"count_null_terminated(s->{member.name})" if member.len == "null-terminated" else f"s->{member.len}"};
        allocate(&s->${member.name}, num_items);
        for (int i = 0; i < num_items; i++) {
            deserialize(&s->${member.name}[i], in);
        }
        % else:
        allocate(&s->${member.name}, 1);
        deserialize(s->${member.name}, in);
        % endif
    }
    else {
        s->${member.name} = nullptr;
    }
    % elif member.array:
        <% array_size = member.array[1:-1] %>
    for (int i = 0; i < ${array_size}; i++) {
        deserialize(&s->${member.name}[i], in);
    }
    % else:
    deserialize(&s->${member.name}, in);
    % endif
% endfor
}
</%def>