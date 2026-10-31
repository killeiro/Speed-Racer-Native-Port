#pragma once
#include <algorithm>
#include <cstdint>
#include <cstring>

namespace ps2::vif {
// CL=0 consumes no source vectors. Every data selector therefore becomes ROW,
// irrespective of format, signedness or STMOD; ROW itself is never updated.
// NUM <= 256 and both VU memories contain at least 256 qwords, so destinations
// are distinct even across wrap. Grouping writes by mask row preserves results.
inline void unpack_fill(std::uint8_t *mem, std::uint32_t wrap_mask,
    std::uint32_t addr, std::uint32_t wl, std::uint32_t num,
    std::uint32_t mask, const std::uint32_t (&row)[4], const std::uint32_t (&col)[4]) {
    const unsigned rows = std::min({wl, num, 4u});
    for (unsigned r = 0; r < rows; ++r) {
        const unsigned selectors = (mask >> (r * 8u)) & 255u;
        if (selectors == 255u) continue; // all four lanes are write-protected
        std::uint32_t value[4];
        unsigned lanes = 0;
        for (unsigned j = 0; j < 4; ++j) {
            const unsigned m = (selectors >> (j * 2u)) & 3u;
            value[j] = m == 2 ? col[r] : row[j];
            if (m != 3) lanes |= 1u << j;
        }
        // Mask row 3 also applies to every later cycle in a write group.
        const unsigned width = r == 3 ? wl - 3u : 1u;
        for (unsigned first = r; first < num; first += wl) {
            const unsigned end = std::min(num, first + width);
            if (lanes == 15u) {
                for (unsigned at = first; at < end; ++at)
                    std::memcpy(mem + ((addr + at) & wrap_mask) * 16u, value, 16);
            } else {
                for (unsigned at = first; at < end; ++at) {
                    auto *q = mem + ((addr + at) & wrap_mask) * 16u;
                    for (unsigned j = 0; j < 4; ++j)
                        if (lanes & (1u << j)) std::memcpy(q + j * 4u, value + j, 4);
                }
            }
        }
    }
}
}
