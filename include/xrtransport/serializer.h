#ifndef XRT_SERIALIZER_H
#define XRT_SERIALIZER_H

#include "openxr/openxr.h"
#include "generated/reflection_struct.h"

#include <unordered_map>
#include <iostream>
#include <cassert>

// Forward declarations
#define XRT_STRUCT_SERIALIZER_FORWARD_DECLARATION(struct_name, ...) \
    static void serialize(const struct_name* s, std::ostream& out);

XRT_STRUCT_LIST_ALL(XRT_STRUCT_SERIALIZER_FORWARD_DECLARATION)

// Only to be used with OpenXR pNext structs
using StructSerializer = void(*)(const XrBaseInStructure*, std::ostream&);
#define XRT_STRUCT_SERIALIZER_PTR(t) (reinterpret_cast<StructSerializer>(static_cast<void(*)(const t*, std::ostream&)>(&serialize)))

#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_PLAIN(...)
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_XR_HEADER(...)
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_XR(struct_type, XR, xr_type) \
    {xr_type, XRT_STRUCT_SERIALIZER_PTR(struct_type)},
#define XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY(struct_type, type, ...) XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY_##type(struct_type, type, __VA_ARGS__)

static std::unordered_map<XrStructureType, StructSerializer> serializer_lookup_table = {
    XRT_STRUCT_LIST_ALL(XRT_STRUCT_SERIALIZER_LOOKUP_ENTRY)
};

static StructSerializer serializer_lookup(XrStructureType struct_type) {
    assert(serializer_lookup_table.find(struct_type) != serializer_lookup_table.end());
    return serializer_lookup_table[struct_type];
}

#define XRT_STRUCT_SERIALIZER_DECLARATION(struct_name, ...) \
    static void serialize(const struct_name* s, std::ostream& out) {\
        \
    }

XRT_STRUCT_LIST_ALL(XRT_STRUCT_SERIALIZER_DECLARATION)

#endif // XRT_SERIALIZER_H