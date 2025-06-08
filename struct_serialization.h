#ifndef XRTRANSPORT_STRUCT_SERIALIZATION_H
#define XRTRANSPORT_STRUCT_SERIALIZATION_H

#include "openxr/openxr.h"
#include "openxr/openxr_reflection.h"

#include <iostream>
#include <array>
#include <tuple>
#include <cstdint>
#include <cassert>
#include <algorithm>

namespace xrtransport {

// function pointer type that all serializers implement
using StructSerializer = void(*)(const XrBaseInStructure*, std::ostream&);

// hack that effectively does 1 + 1 + 1 + ... + 0 for all the structs defined by XR_LIST_STRUCTURE_TYPES
#define XRTRANSPORT_STRUCT_COUNTER(struct_name, struct_type_name) 1 + 
#define XRTRANSPORT_STRUCT_COUNT XR_LIST_STRUCTURE_TYPES(XRTRANSPORT_STRUCT_COUNTER) 0
constexpr std::size_t struct_count = XRTRANSPORT_STRUCT_COUNT;

// table of serializers from XrStructureType to function pointer
// note: these are sorted by XrStructureType increasing, because that is the order they are specified in
//       this allows the table to be binary searched with a max of ~9 comparisons
//       this is probably(?) faster than using an actual hash table
#define XRTRANSPORT_SERIALIZERS_LIST_ITEM(struct_name, struct_type_name) {struct_type_name, reinterpret_cast<StructSerializer>(&serialize_##struct_name)},
static std::array<std::tuple<XrStructureType, StructSerializer>, struct_count> serializers = {{
    XR_LIST_STRUCTURE_TYPES(XRTRANSPORT_SERIALIZERS_LIST_ITEM)
}};

#define XRTRANSPORT_SERIALIZE_STRUCT(struct_name, struct_type_name) \
    static inline void serialize(const struct_name* s, std::ostream& out) { \
        if (s == nullptr) { \
            XrStructureType type = XR_TYPE_UNKNOWN; \
            out.write(reinterpret_cast<const char*>(&type), sizeof(type)); \
        } \
        \
    }

static StructSerializer serializer_lookup(XrStructureType struct_type) {
    const auto begin = serializers.begin();
    const auto end = serializers.end();

    auto it = std::lower_bound(begin, end, struct_type,
        [](const auto& tuple, XrStructureType value) {
            return std::get<0>(tuple) < value;
        });

    if (it != end && std::get<0>(*it) == struct_type) {
        return std::get<1>(*it);
    }
    
    assert(false && "XrStructureType not found in serializers list");
}

static void serialize(const void* untyped, std::ostream& out) {
    auto s = static_cast<const XrBaseInStructure*>(untyped);
    if (s == nullptr) {
        XrStructureType type = XR_TYPE_UNKNOWN;
        out.write(reinterpret_cast<const char*>(&type), sizeof(type));
    }
    serializer_lookup(s->type)(s, out);
}

template <typename T>
static void serialize_member(const T& member, std::ostream& out) {
    // Need to support:
    // primitives
    // OpenXR structs
    // arrays of OpenXR structs
    // const char* strings
    // arrays of strings
    // special consideration for void* next
    // check for nullptr for any pointer

    // things i've noticed: any const pointer to an OpenXR struct is usually if not always an array of structs with a separately specified count
    // there is no naming standard for these name counts, I'll need to manually configure that

    // Hmm I was really trying to avoid this but I really might need to write a full code generator.
    // Oh well, the openxr_reflection.h will be an easily parsable starting point
}

} // namespace xrtransport

#endif // XRTRANSPORT_STRUCT_SERIALIZATION_H