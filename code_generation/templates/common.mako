#ifndef XRTRANSPORT_COMMON_GENERATED_H
#define XRTRANSPORT_COMMON_GENERATED_H

#include <cstddef>

namespace xrtransport {

template <typename T>
static std::size_t count_null_terminated(const T* ptr) {
    std::size_t count = 0;
    while (*ptr != T{}) {
        ++ptr;
        ++count;
    }
    return count;
}

} // namespace xrtransport

#endif // XRTRANSPORT_COMMON_GENERATED_H