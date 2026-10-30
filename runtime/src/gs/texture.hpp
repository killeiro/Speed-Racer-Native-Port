#pragma once

#include "gs.hpp"

#include <algorithm>
#include <cstdint>

namespace ps2::gs::texture {

// GS MTBA updates the stored level 1..3 registers on a TEX0 write. This is
// register state, not a choice made each time a texture is sampled: a later
// explicit MIPTBP1 write must remain in effect until the next TEX0 write.
inline bool generate_miptbp1(Context &context) {
    if (!(context.tex1 & (1ull << 9))) return false;

    const std::uint32_t psm = static_cast<std::uint32_t>(context.tex0 >> 20) & 0x3Fu;
    std::uint32_t storage_bits;
    switch (psm) {
    case PSMCT32: case PSMCT24: case PSMT8H: case PSMT4HL: case PSMT4HH:
        storage_bits = 32;
        break;
    case PSMCT16: case PSMCT16S:
        storage_bits = 16;
        break;
    case PSMT8:
        storage_bits = 8;
        break;
    case PSMT4:
        storage_bits = 4;
        break;
    default:
        return false; // Depth formats do not trigger MTBA.
    }

    const std::uint32_t width_log2 = static_cast<std::uint32_t>(context.tex0 >> 26) & 15u;
    if (width_log2 < 5u || width_log2 > (storage_bits == 32u ? 9u : 10u)) return false;

    const std::uint32_t width = 1u << width_log2;
    std::uint32_t base = static_cast<std::uint32_t>(context.tex0) & 0x3FFFu;
    std::uint32_t stride = std::max(1u, width >> 6);
    // Hardware derives the footprint from width squared, ignoring TH and TBW0.
    // TBP is measured in 256-byte blocks, with a minimum one-block mip interval.
    std::uint32_t blocks = (width * width * storage_bits) >> 11;
    std::uint64_t levels = 0;
    for (std::uint32_t level = 0; level != 3u; ++level) {
        base += blocks;
        stride = std::max(1u, stride >> 1);
        const std::uint32_t entry = (base & 0x3FFFu) | (stride << 14);
        levels |= static_cast<std::uint64_t>(entry) << (level * 20u);
        blocks = std::max(1u, blocks >> 2);
    }
    context.miptbp1 = (context.miptbp1 & 0xF000000000000000ull) | levels;
    return true;
}

} // namespace ps2::gs::texture
