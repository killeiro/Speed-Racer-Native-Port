#pragma once
#include <algorithm>
#include <cstdint>
#include <cstring>

namespace ps2::vif {
// MPG transfers are at most 2048 bytes; both microcode memories are larger.
// Compare/copy contiguous spans, preserving wraparound and the changed flag.
inline bool upload_microcode(std::uint8_t *code, std::uint32_t size,
    std::uint32_t address, const void *source, std::uint32_t bytes) {
    const auto *data = static_cast<const std::uint8_t *>(source);
    const std::uint32_t offset = address & (size - 1);
    const std::uint32_t first = std::min(bytes, size - offset);
    const std::uint32_t rest = bytes - first;
    const bool changed = std::memcmp(code + offset, data, first) != 0 ||
        (rest && std::memcmp(code, data + first, rest) != 0);
    if (changed) {
        std::memcpy(code + offset, data, first);
        if (rest) std::memcpy(code, data + first, rest);
    }
    return changed;
}
}
