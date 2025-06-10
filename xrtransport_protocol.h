#ifndef XRTRANSPORT_PROTOCOL_H
#define XRTRANSPORT_PROTOCOL_H

#include <cstdint>

#if defined(_MSC_VER)
    #define XRTRANSPORT_PACKED_STRUCT(name) \
        __pragma(pack(push, 1)) struct name __pragma(pack(pop))
#elif defined(__GNUC__) || defined(__clang__)
    #define XRTRANSPORT_PACKED_STRUCT(name) \
        struct __attribute__((packed)) name
#endif

namespace xrtransport {
    
XRTRANSPORT_PACKED_STRUCT(FunctionRequestHeader) {
    std::uint8_t packet_header;
    std::uint8_t send_response;
    std::uint8_t num_args;
    std::uint8_t _reserved0;
    std::uint32_t function_id;
};
static_assert(sizeof(FunctionRequestHeader) == 8, "FunctionRequestHeader incorrect size");

XRTRANSPORT_PACKED_STRUCT(DirectArgumentHeader) {
    std::uint8_t packet_header;
    std::uint8_t _reserved0;
    std::uint8_t _reserved1;
    std::uint8_t _reserved2;
    std::uint8_t _reserved3;
    std::uint8_t _reserved4;
    std::uint8_t _reserved5;
    std::uint8_t _reserved6;
};
static_assert(sizeof(DirectArgumentHeader) == 8, "DirectArgumentHeader incorrect size");

XRTRANSPORT_PACKED_STRUCT(SimpleStructHeader) {
    std::uint8_t packet_header;
    std::uint8_t is_const;
    std::uint8_t _reserved0;
    std::uint8_t _reserved1;
    std::uint32_t data_size;
};
static_assert(sizeof(SimpleStructHeader) == 8, "SimpleStructHeader incorrect size");

XRTRANSPORT_PACKED_STRUCT(OpenXRStructHeader) {
    std::uint8_t packet_header;
    std::uint8_t is_const;
    std::uint8_t chain_length;
    std::uint8_t _reserved1;
    std::uint32_t first_struct_size;
};
static_assert(sizeof(OpenXRStructHeader) == 8, "OpenXRStructHeader incorrect size");

XRTRANSPORT_PACKED_STRUCT(NullPointerHeader) {
    std::uint8_t packet_header;
    std::uint8_t _reserved0;
    std::uint8_t _reserved1;
    std::uint8_t _reserved2;
    std::uint8_t _reserved3;
    std::uint8_t _reserved4;
    std::uint8_t _reserved5;
    std::uint8_t _reserved6;
};
static_assert(sizeof(NullPointerHeader) == 8, "NullPointerHeader incorrect size");

union PacketHeader {
    FunctionRequestHeader functionRequestHeader;
    DirectArgumentHeader directArgumentHeader;
    SimpleStructHeader simpleStructHeader;
    OpenXRStructHeader openXRStructHeader;
    NullPointerHeader nullPointerHeader;
    std::uint8_t raw[8];
};

} // namespace xrtransport

#endif // XRTRANSPORT_PROTOCOL_H