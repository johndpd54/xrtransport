#ifndef XRTRANSPORT_SERIALIZER_GENERATED_H
#define XRTRANSPORT_SERIALIZER_GENERATED_H

#include "openxr/openxr.h"
#include "xrtransport_protocol.h"

#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>
#include <cstring>

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

// About these: I actually think I'm gonna scrap the struct headers.
// I want the serializers to write their own uint32_t sizes, which is part of the header
// The functions will just write everything but the size piecewise and then call the struct serializers

//static inline void write_direct_arg_header(std::ostream& out) {
//    DirectArgumentHeader header = {1};
//    out.write(reinterpret_cast<char*>(&header), sizeof(DirectArgumentHeader));
//}

//static inline void write_simple_struct_header(bool is_const, std::size_t data_size, std::ostream& out) {
//    SimpleStructHeader header = {2};
//    header.is_const = is_const ? 1 : 0;
//    header.data_size = static_cast<std::uint32_t>(data_size);
//    out.write(reinterpret_cast<char*>(&header), sizeof(SimpleStructHeader));
//}

//static inline void write_openxr_struct_header(bool is_const, std::size_t chain_length, std::size_t first_struct_size, std::ostream& out) {
//    OpenXRStructHeader header = {3};
//    header.is_const = is_const ? 1 : 0;
//    header.chain_length = static_cast<uint8_t>(chain_length);
//    header.first_struct_size = static_cast<uint32_t>(first_struct_size);
//    out.write(reinterpret_cast<char*>(&header), sizeof(OpenXRStructHeader));
//}

//static inline void write_nullptr_header(std::ostream& out) {
//    NullPointerHeader header = {4};
//    out.write(reinterpret_cast<char*>(&header), sizeof(NullPointerHeader));
//}

<%namespace name="struct_serializer" file="struct_serializer.mako"/>
% for struct in spec.structs:
${struct_serializer.serializer(struct)}
% endfor

} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_GENERATED_H
