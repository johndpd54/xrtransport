<%namespace name="common" file="common.mako"/>
<%
    grouped_xr_structs = [[s for s in g if s.xr_type] for g in spec.grouped_structs]
%>

// Only to be used with OpenXR pNext structs
using StructAllocator = void(*)(XrBaseOutStructure**, std::size_t);
#define STRUCT_ALLOCATOR_PTR(t) (reinterpret_cast<StructAllocator>(static_cast<void(*)(t**, std::size_t)>(&allocate)))

static std::tuple<XrStructureType, StructAllocator> allocator_lookup_table[] = {
<%common:for_grouped_structs grouped_structs="${grouped_xr_structs}" args="struct">
    {${struct.xr_type}, STRUCT_ALLOCATOR_PTR(${struct.name})},
</%common:for_grouped_structs>
};

static StructAllocator allocator_lookup(XrStructureType struct_type) {
    std::size_t array_size = sizeof(allocator_lookup_table) / sizeof(allocator_lookup_table[0]);
    std::size_t low = 0;
    std::size_t high = array_size - 1;

    while (low <= high) {
        std::size_t mid = low + (high - low) / 2;
        auto& at_mid = allocator_lookup_table[mid];
        XrStructureType at_mid_type = std::get<0>(at_mid);

        if (at_mid_type == struct_type) {
            return std::get<1>(at_mid);
        }

        if (at_mid_type < struct_type) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    assert(false && "XrStructureType not found in allocators lookup table");
}