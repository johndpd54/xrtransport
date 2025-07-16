#ifndef XRT_DESERIALIZER_H
#define XRT_DESERIALIZER_H

#include "openxr/openxr.h"
#include "generated/reflection_struct.h"

#include <unordered_map>
#include <iostream>
#include <cassert>
#include <cstdint>

namespace xrtransport {

// Hack necessary for MSVC
#define XRT_EXPAND(x) x

// Deserializer forward declarations
#define XRT_STRUCT_DESERIALIZER_FORWARD_DECLARATION(struct_name, ...) \
    static void deserialize(struct_name* s, std::istream& in);

XRT_STRUCT_LIST_ALL(XRT_STRUCT_DESERIALIZER_FORWARD_DECLARATION)

// Cleaner forward declarations
#define XRT_STRUCT_CLEANER_FORWARD_DECLARATION(struct_name, ...) \
    static void cleanup(const struct_name* s);

XRT_STRUCT_LIST_ALL(XRT_STRUCT_CLEANER_FORWARD_DECLARATION)

// Struct deserializer lookup
// Only to be used with OpenXR pNext structs
using StructDeserializer = void(*)(XrBaseOutStructure*, std::istream&);
#define XRT_STRUCT_DESERIALIZER_PTR(t) (reinterpret_cast<StructDeserializer>(static_cast<void(*)(t*, std::istream&)>(&deserialize)))

#define XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY_CUSTOM(...) // non-xr custom structs not in lookup table
#define XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY_PLAIN(...) // plain structs not in lookup table
#define XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY_XR_HEADER(...) // header structs not in lookup table
#define XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY_XR_CUSTOM(struct_type, CUSTOM_XR, xr_type) \
    {xr_type, XRT_STRUCT_DESERIALIZER_PTR(struct_type)},
#define XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY_XR(struct_type, XR, xr_type) \
    {xr_type, XRT_STRUCT_DESERIALIZER_PTR(struct_type)},
#define XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY(struct_type, type, ...) \
    XRT_EXPAND(XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY_##type(struct_type, type, ##__VA_ARGS__))

static std::unordered_map<XrStructureType, StructDeserializer> deserializer_lookup_table = {
    XRT_STRUCT_LIST_ALL(XRT_STRUCT_DESERIALIZER_LOOKUP_ENTRY)
};

static StructDeserializer deserializer_lookup(XrStructureType struct_type) {
    assert(deserializer_lookup_table.find(struct_type) != deserializer_lookup_table.end());
    return deserializer_lookup_table[struct_type];
}

// Struct cleaner lookup
// Only to be used with OpenXR pNext structs
using StructCleaner = void(*)(const XrBaseOutStructure*);
#define XRT_STRUCT_CLEANER_PTR(t) (reinterpret_cast<StructCleaner>(static_cast<void(*)(const t*)>(&cleanup)))

#define XRT_STRUCT_CLEANER_LOOKUP_ENTRY_CUSTOM(...) // non-xr custom structs not in lookup table
#define XRT_STRUCT_CLEANER_LOOKUP_ENTRY_PLAIN(...) // plain structs not in lookup table
#define XRT_STRUCT_CLEANER_LOOKUP_ENTRY_XR_HEADER(...) // header structs not in lookup table
#define XRT_STRUCT_CLEANER_LOOKUP_ENTRY_XR_CUSTOM(struct_type, XR, xr_type) \
    {xr_type, XRT_STRUCT_CLEANER_PTR(struct_type)},
#define XRT_STRUCT_CLEANER_LOOKUP_ENTRY_XR(struct_type, XR, xr_type) \
    {xr_type, XRT_STRUCT_CLEANER_PTR(struct_type)},
#define XRT_STRUCT_CLEANER_LOOKUP_ENTRY(struct_type, type, ...) \
    XRT_EXPAND(XRT_STRUCT_CLEANER_LOOKUP_ENTRY_##type(struct_type, type, ##__VA_ARGS__))

static std::unordered_map<XrStructureType, StructCleaner> cleaner_lookup_table = {
    XRT_STRUCT_LIST_ALL(XRT_STRUCT_CLEANER_LOOKUP_ENTRY)
};

static StructCleaner cleaner_lookup(XrStructureType struct_type) {
    assert(cleaner_lookup_table.find(struct_type) != cleaner_lookup_table.end());
    return cleaner_lookup_table.at(struct_type);
}

// Struct size lookup
// Only to be used with OpenXR pNext structs
#define XRT_STRUCT_SIZE_LOOKUP_ENTRY_CUSTOM(...) // non-xr custom structs not in lookup table
#define XRT_STRUCT_SIZE_LOOKUP_ENTRY_PLAIN(...) // plain structs not in lookup table
#define XRT_STRUCT_SIZE_LOOKUP_ENTRY_XR_HEADER(...) // header structs not in lookup table
#define XRT_STRUCT_SIZE_LOOKUP_ENTRY_XR_CUSTOM(struct_type, XR, xr_type) \
    {xr_type, sizeof(struct_type)},
#define XRT_STRUCT_SIZE_LOOKUP_ENTRY_XR(struct_type, XR, xr_type) \
    {xr_type, sizeof(struct_type)},
#define XRT_STRUCT_SIZE_LOOKUP_ENTRY(struct_type, type, ...) \
    XRT_EXPAND(XRT_STRUCT_SIZE_LOOKUP_ENTRY_##type(struct_type, type, ##__VA_ARGS__))

static std::unordered_map<XrStructureType, std::size_t> size_lookup_table = {
    XRT_STRUCT_LIST_ALL(XRT_STRUCT_SIZE_LOOKUP_ENTRY)
};

static std::size_t size_lookup(XrStructureType struct_type) {
    assert(size_lookup_table.find(struct_type) != size_lookup_table.end());
    return size_lookup_table.at(struct_type);
}

// Generic deserializers
template <typename T>
static void deserialize(T* x, std::istream& in) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    in.read(reinterpret_cast<char*>(x), sizeof(T));
}

template <typename T>
static void deserialize_array(T* x, std::size_t len, std::istream& in) {
    for (std::size_t i = 0; i < len; i++) {
        deserialize(&x[i], in);
    }
}

// For weird const-correctness reasons, we need a const and non-const version
template <typename T>
static void deserialize_ptr(const T** x, std::istream& in) {
    std::uint32_t len{};
    deserialize(&len, in);
    if (len) {
        T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
        deserialize_array(data, len, in);
        *x = data;
    }
    else {
        *x = nullptr;
    }
}

template <typename T>
static void deserialize_ptr(T** x, std::istream& in) {
    std::uint32_t len{};
    deserialize(&len, in);
    if (len) {
        T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
        deserialize_array(data, len, in);
        *x = data;
    }
    else {
        *x = nullptr;
    }
}

static void deserialize_xr(void** p_s, std::istream& in) {
    XrStructureType type{};
    deserialize(&type, in);
    if (type) {
        XrBaseOutStructure* s = reinterpret_cast<XrBaseOutStructure*>(std::malloc(size_lookup(type)));
        deserializer_lookup(type)(s, in);
        *p_s = s;
    }
    else {
        *p_s = nullptr;
    }
}

static void deserialize_xr(const void** p_s, std::istream& in) {
    XrStructureType type{};
    deserialize(&type, in);
    if (type) {
        XrBaseOutStructure* s = reinterpret_cast<XrBaseOutStructure*>(std::malloc(size_lookup(type)));
        deserializer_lookup(type)(s, in);
        *p_s = s;
    }
    else {
        *p_s = nullptr;
    }
}

// Generic cleaners
template <typename T>
static void cleanup(const T* x) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    // no-op for primitive types
    (void)x;
}

template <typename T>
static void cleanup_array(const T* x, std::size_t len) {
    for (std::size_t i = 0; i < len; i++) {
        cleanup(&x[i]);
    }
}

template <typename T>
static void cleanup_ptr(const T* x, std::size_t len) {
    if (!x) {
        return; // do not clean up null pointer
    }
    cleanup_array(x, len);
    std::free(const_cast<T*>(x));
}

static void cleanup_xr(const void* untyped) {
    if (!untyped) {
        return; // do not clean up null pointer
    }
    const XrBaseOutStructure* x = static_cast<const XrBaseOutStructure*>(untyped);
    cleaner_lookup(x->type)(x);
    std::free(const_cast<void*>(untyped));
}

// Deserializers
#define XRT_STRUCT_DESERIALIZE_MEMBER_XR(member_name, member_type, type, ...) \
    deserialize_xr(&s->member_name, in);
#define XRT_STRUCT_DESERIALIZE_MEMBER_POINTER(member_name, member_type, type, is_const, member_len, ...) \
    deserialize_ptr(&s->member_name, in);
#define XRT_STRUCT_DESERIALIZE_MEMBER_ARRAY(member_name, member_type, type, array_len, ...) \
    deserialize_array(s->member_name, array_len, in);
#define XRT_STRUCT_DESERIALIZE_MEMBER_PLAIN(member_name, member_type, type, ...) \
    deserialize(&s->member_name, in);
#define XRT_STRUCT_DESERIALIZE_MEMBER(member_name, member_type, type, ...) \
    XRT_EXPAND(XRT_STRUCT_DESERIALIZE_MEMBER_##type(member_name, member_type, type, ##__VA_ARGS__))

#define XRT_STRUCT_DESERIALIZER_CUSTOM(...) // no implementation for custom structs
#define XRT_STRUCT_DESERIALIZER_XR_CUSTOM(...)
#define XRT_STRUCT_DESERIALIZER_XR_HEADER(struct_name, ...) \
    static void deserialize(struct_name* s, std::istream& in) { \
        assert(false && "should not be using deserialize directly on a header"); \
    }
#define XRT_STRUCT_DESERIALIZER_XR(struct_name, ...) \
    static void deserialize(struct_name* s, std::istream& in) { \
        XRT_ENUMERATE_##struct_name(XRT_STRUCT_DESERIALIZE_MEMBER) \
    }
#define XRT_STRUCT_DESERIALIZER_PLAIN(struct_name, ...) \
    static void deserialize(struct_name* s, std::istream& in) { \
        XRT_ENUMERATE_##struct_name(XRT_STRUCT_DESERIALIZE_MEMBER) \
    }
#define XRT_STRUCT_DESERIALIZER(struct_name, struct_type, ...) \
    XRT_EXPAND(XRT_STRUCT_DESERIALIZER_##struct_type(struct_name, struct_type, ##__VA_ARGS__))

XRT_STRUCT_LIST_ALL(XRT_STRUCT_DESERIALIZER)

// Cleaners
#define XRT_STRUCT_CLEANUP_MEMBER_XR(member_name, member_type, type, ...) \
    cleanup_xr(s->member_name);
#define XRT_STRUCT_CLEANUP_MEMBER_POINTER(member_name, member_type, type, is_const, member_len, ...) \
    cleanup_ptr(s->member_name, member_len);
#define XRT_STRUCT_CLEANUP_MEMBER_ARRAY(member_name, member_type, type, array_len, ...) \
    cleanup_array(s->member_name, array_len);
#define XRT_STRUCT_CLEANUP_MEMBER_PLAIN(member_name, member_type, type, ...) \
    cleanup(&s->member_name);
#define XRT_STRUCT_CLEANUP_MEMBER(member_name, member_type, type, ...) \
    XRT_EXPAND(XRT_STRUCT_CLEANUP_MEMBER_##type(member_name, member_type, type, ##__VA_ARGS__))

#define XRT_STRUCT_CLEANER_CUSTOM(...) // no implementation for custom structs
#define XRT_STRUCT_CLEANER_XR_CUSTOM(...)
#define XRT_STRUCT_CLEANER_XR_HEADER(struct_name, ...) \
    static void cleanup(const struct_name* s) { \
        cleanup_xr(s); \
    }
#define XRT_STRUCT_CLEANER_XR(struct_name, ...) \
    static void cleanup(const struct_name* s) { \
        XRT_ENUMERATE_##struct_name(XRT_STRUCT_CLEANUP_MEMBER) \
    }
#define XRT_STRUCT_CLEANER_PLAIN(struct_name, ...) \
    static void cleanup(const struct_name* s) { \
        XRT_ENUMERATE_##struct_name(XRT_STRUCT_CLEANUP_MEMBER) \
    }
#define XRT_STRUCT_CLEANER(struct_name, struct_type, ...) \
    XRT_EXPAND(XRT_STRUCT_CLEANER_##struct_type(struct_name, struct_type, ##__VA_ARGS__))

XRT_STRUCT_LIST_ALL(XRT_STRUCT_CLEANER)

// paste in custom implementations
#include "deserializer_custom.h"

} // namespace xrtransport

#endif // XRT_DESERIALIZER_H