<%def name="generic_cleaner()">
template <typename T>
static void cleanup(const T* x) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    // no-op for base types
    (void)x;
}
</%def>

<%def name="forward_cleaner(struct)">
static void cleanup(const ${struct.name}* s);
</%def>

## to verify correctness of this function:
## check struct_deserializer.deserialize. there should be a cleanup in here for every deserialize in there,
## and a delete in here for every allocate in there.
<%def name="cleaner(struct)">
static void cleanup(const ${struct.name}* s) {
% if struct.xr_type:
    if (s->next != nullptr) {
        ## this needs to be const for some reason for some structs.
        ## it shouldn't matter because our only side effect is deleting
        const XrBaseOutStructure* next = reinterpret_cast<const XrBaseOutStructure*>(s->next);
        cleaner_lookup(next->type)(next);
        delete[] next;
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
    if (s->${member.name} != nullptr) {
        % if member.len:
        std::size_t num_items = ${f"count_null_terminated(s->{member.name})" if member.len == "null-terminated" else f"s->{member.len}"};
        for (int i = 0; i < num_items; i++) {
            cleanup(&s->${member.name}[i]);
            ## no need to delete individual items, as we don't allow double pointers
        }
        delete[] s->${member.name};

        % else:
        cleanup(s->${member.name});
        delete[] s->${member.name};
        % endif
    }
    % elif member.array:
        <% array_size = member.array[1:-1] %>
    for (int i = 0; i < ${array_size}; i++) {
        cleanup(&s->${member.name}[i]);
    }
    % else:
    cleanup(&s->${member.name});
    % endif
% endfor
}
</%def>