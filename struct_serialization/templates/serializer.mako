#ifndef XRTRANSPORT_SERIALIZER_GENERATED_H
#define XRTRANSPORT_SERIALIZER_GENERATED_H

#include "openxr/openxr.h"
#include "xrtransport_protocol.h"

#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>

namespace xrtransport {

// Only to be used with OpenXR pNext structs
using StructSerializer = void(*)(const XrBaseInStructure*, std::ostream&);
#define STRUCT_SERIALIZER_PTR(t) (reinterpret_cast<StructSerializer>(static_cast<void(*)(const t*, std::ostream&)>(&serialize)))

// To be used to know member offsets at compile time
constexpr size_t align(std::size_t x, std::size_t n) {
    return n > 8 ?
        (x + 7) & ~(7) :
        (x + (n - 1)) & ~(n - 1);
}

<%include file="serializer_lookup_table.mako"/>

} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_GENERATED_H
