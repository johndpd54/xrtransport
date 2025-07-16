#ifndef XRT_SERIALIZER_H
#define XRT_SERIALIZER_H

#include "openxr/openxr.h"
#include "generated/reflection_struct.h"

#include <unordered_map>
#include <iostream>
#include <cassert>
#include <cstdint>

namespace xrtransport {

// Hack necessary for MSVC
#define XRT_EXPAND(x) x

// Forward declarations
#define XRT_STRUCT_SERIALIZER_FORWARD_DECLARATION(struct_name, ...) \
    static void serialize(const struct_name* s, std::ostream& out);

XRT_STRUCT_LIST_ALL(XRT_STRUCT_SERIALIZER_FORWARD_DECLARATION)

// Only to be used with OpenXR pNext structs
using StructSerializer = void(*)(const XrBaseInStructure*, std::ostream&);
#define XRT_STRUCT_SERIALIZER_PTR(t) (reinterpret_cast<StructSerializer>(static_cast<void(*)(const t*, std::ostream&)>(&serialize)))

#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_CUSTOM(...) // non-xr custom structs not in lookup table
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_PLAIN(...) // plain structs not in lookup table
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_XR_HEADER(...) // header structs not in lookup table
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_XR_CUSTOM(struct_type, CUSTOM, xr_type) \
    {xr_type, XRT_STRUCT_SERIALIZER_PTR(struct_type)},
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_XR(struct_type, XR, xr_type) \
    {xr_type, XRT_STRUCT_SERIALIZER_PTR(struct_type)},
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY(struct_type, type, ...) \
    XRT_EXPAND(XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_##type(struct_type, type, ##__VA_ARGS__))

static std::unordered_map<XrStructureType, StructSerializer> serializer_lookup_table = {
    XRT_STRUCT_LIST_ALL(XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY)
};

static StructSerializer serializer_lookup(XrStructureType struct_type) {
    assert(serializer_lookup_table.find(struct_type) != serializer_lookup_table.end());
    return serializer_lookup_table[struct_type];
}

// Generic serializers
template <typename T>
static void serialize(const T* x, std::ostream& out) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    out.write(reinterpret_cast<const char*>(x), sizeof(T));
}

template <typename T>
static void serialize_array(const T* x, std::size_t len, std::ostream& out) {
    for (std::size_t i = 0; i < len; i++) {
        serialize(&x[i], out);
    }
}

template <typename T>
static void serialize_ptr(const T* x, std::size_t len, std::ostream& out) {
    std::uint32_t marker = x != nullptr ? len : 0;
    serialize(&marker, out);
    if (marker) {
        serialize_array(x, len, out);
    }
}

static void serialize_xr(const void* untyped, std::ostream& out) {
    const XrBaseInStructure* x = static_cast<const XrBaseInStructure*>(untyped);
    XrStructureType type = x != nullptr ? x->type : XR_TYPE_UNKNOWN;
    serialize(&type, out);
    if (type != XR_TYPE_UNKNOWN) {
        serializer_lookup(type)(x, out);
    }
}

#define XRT_STRUCT_SERIALIZE_MEMBER_XR(member_name, member_type, type, ...) \
    serialize_xr(s->member_name, out);
#define XRT_STRUCT_SERIALIZE_MEMBER_POINTER(member_name, member_type, type, is_const, member_len, ...) \
    serialize_ptr(s->member_name, member_len, out); // somehow member_len is getting collapsed into is_const
#define XRT_STRUCT_SERIALIZE_MEMBER_ARRAY(member_name, member_type, type, array_len, ...) \
    serialize_array(s->member_name, array_len, out);
#define XRT_STRUCT_SERIALIZE_MEMBER_PLAIN(member_name, member_type, type, ...) \
    serialize(&s->member_name, out);
#define XRT_STRUCT_SERIALIZE_MEMBER(member_name, member_type, type, ...) \
    XRT_EXPAND(XRT_STRUCT_SERIALIZE_MEMBER_##type(member_name, member_type, type, ##__VA_ARGS__))

#define XRT_STRUCT_SERIALIZER_CUSTOM(...) // no implementation for custom structs
#define XRT_STRUCT_SERIALIZER_XR_CUSTOM(...)
#define XRT_STRUCT_SERIALIZER_XR_HEADER(struct_name, ...) \
    static void serialize(const struct_name* s, std::ostream& out) {\
        serialize_xr(s, out);\
    }
#define XRT_STRUCT_SERIALIZER_XR(struct_name, ...) \
    static void serialize(const struct_name* s, std::ostream& out) {\
        XRT_ENUMERATE_##struct_name(XRT_STRUCT_SERIALIZE_MEMBER) \
    }
#define XRT_STRUCT_SERIALIZER_PLAIN(struct_name, ...) \
    static void serialize(const struct_name* s, std::ostream& out) {\
        XRT_ENUMERATE_##struct_name(XRT_STRUCT_SERIALIZE_MEMBER) \
    }
#define XRT_STRUCT_SERIALIZER(struct_name, struct_type, ...) \
    XRT_EXPAND(XRT_STRUCT_SERIALIZER_##struct_type(struct_name, struct_type, ##__VA_ARGS__))

XRT_STRUCT_LIST_ALL(XRT_STRUCT_SERIALIZER)

// paste in custom implementations
#include "serializer_custom.h"

} // namespace xrtransport

#endif // XRT_SERIALIZER_H