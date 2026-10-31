#pragma once
#include <cstdint>
#include <string_view>

namespace ps2 {
inline bool parse_render_scale(std::string_view text, unsigned &scale) {
    if (text.size() != 1 || text[0] < '1' || text[0] > '4') return false;
    scale = static_cast<unsigned>(text[0] - '0');
    return true;
}
inline unsigned supported_render_scale(unsigned requested, std::uint64_t storage_limit, std::uint64_t buffer_limit) {
    unsigned scale = requested >= 1 && requested <= 4 ? requested : 1;
    // Scratch holds one 4MiB copy region and two 2MiB display fields per sample.
    // VRAM/readback are smaller. Each whole scratch buffer is bound to the GS.
    const auto limit = storage_limit < buffer_limit ? storage_limit : buffer_limit;
    while (scale > 1 && (8ull << 20) * scale * scale > limit) --scale;
    return scale;
}
}
