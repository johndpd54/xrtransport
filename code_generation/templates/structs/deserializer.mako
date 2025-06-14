<%namespace name="common" file="common.mako"/>
#ifndef XRTRANSPORT_DESERIALIZER_GENERATED_H
#define XRTRANSPORT_DESERIALIZER_GENERATED_H

#include "openxr/openxr.h"

#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>
#include <cstring>

namespace xrtransport {

<%namespace name="struct_deserializer" file="struct_deserializer.mako"/>
<%namespace name="struct_allocator" file="struct_allocator.mako"/>
<%namespace name="struct_cleaner" file="struct_cleaner.mako"/>

// Forward declarations (deserializers)
<%common:for_grouped_structs args="struct">
${struct_deserializer.forward_deserializer(struct)}
</%common:for_grouped_structs>

// Forward declarations (allocators)
<%common:for_grouped_structs args="struct">
${struct_allocator.forward_allocator(struct)}
</%common:for_grouped_structs>

// Forward declarations (cleaners)
<%common:for_grouped_structs args="struct">
${struct_cleaner.forward_cleaner(struct)}
</%common:for_grouped_structs>

<%include file="deserializer_lookup_table.mako"/>
<%include file="allocator_lookup_table.mako"/>
<%include file="cleaner_lookup_table.mako"/>

// Generic deserializer
${struct_deserializer.generic_deserializer()}

// Generic allocator
${struct_allocator.generic_allocator()}

// Generic cleaner
${struct_cleaner.generic_cleaner()}

// Deserializers
<%common:for_grouped_structs args="struct">
% if not struct.name in spec.custom_structs:
${struct_deserializer.deserializer(struct)}
% endif
</%common:for_grouped_structs>

// Allocators
<%common:for_grouped_structs args="struct">
${struct_allocator.allocator(struct)}
</%common:for_grouped_structs>

// Cleaners
<%common:for_grouped_structs args="struct">
% if not struct.name in spec.custom_structs:
${struct_cleaner.cleaner(struct)}
% endif
</%common:for_grouped_structs>

// Custom implementations
<%include file="deserializer_custom.mako"/>

} // namespace xrtransport

#endif // XRTRANSPORT_DESERIALIZER_GENERATED_H
