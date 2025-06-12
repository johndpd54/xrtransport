<%namespace name="common" file="common.mako"/>
#ifndef XRTRANSPORT_SERIALIZER_GENERATED_H
#define XRTRANSPORT_SERIALIZER_GENERATED_H

#include "openxr/openxr.h"

#include <iostream>
#include <cstdint>
#include <vector>
#include <tuple>
#include <cassert>
#include <cstring>

namespace xrtransport {

template <typename T>
static inline std::size_t count_null_terminated(const T* ptr) {
    std::size_t count = 0;
    while (*ptr != T{}) {
        ++ptr;
        ++count;
    }
    return count + 1;
}

<%include file="serializer_lookup_table.mako"/>

<%namespace name="struct_serializer" file="struct_serializer.mako"/>

// Forward declarations
<%common:for_grouped_structs args="struct">
${struct_serializer.forward_serializer(struct)}
</%common:for_grouped_structs>

// Generic serializer
${struct_serializer.generic_serializer()}

// Serializers
<%common:for_grouped_structs args="struct">
% if not struct.name in spec.custom_structs:
${struct_serializer.serializer(struct)}
% endif
</%common:for_grouped_structs>

// Custom implementations
<%include file="serializer_custom.mako"/>

} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_GENERATED_H
