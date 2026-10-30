#pragma once
#include <cstddef>
#include <cstdint>
#include <cstring>
#if defined(__SSE2__) || defined(_M_X64)
#include <emmintrin.h>
#endif

namespace ps2::vu {
// Equality only: validate every byte without computing lexicographic order.
// Loads stay entirely inside the supplied spans, including unaligned tails.
inline bool code_equal(const std::uint8_t *a, const std::uint8_t *b, std::size_t bytes) {
    if (!bytes) return true;
#if (defined(__SSE2__) || defined(_M_X64)) && !defined(PS2_VU_CODE_EQUAL_SCALAR)
    const auto eq16 = [](const std::uint8_t *x, const std::uint8_t *y) {
        return _mm_cmpeq_epi8(_mm_loadu_si128(reinterpret_cast<const __m128i *>(x)),
            _mm_loadu_si128(reinterpret_cast<const __m128i *>(y)));
    };
    while (bytes >= 64) {
        const auto first = _mm_and_si128(eq16(a, b), eq16(a + 16, b + 16));
        const auto second = _mm_and_si128(eq16(a + 32, b + 32), eq16(a + 48, b + 48));
        if (_mm_movemask_epi8(_mm_and_si128(first, second)) != 0xffff) return false;
        a += 64; b += 64; bytes -= 64;
    }
    while (bytes >= 16) {
        if (_mm_movemask_epi8(eq16(a, b)) != 0xffff) return false;
        a += 16; b += 16; bytes -= 16;
    }
    if (bytes >= 8) {
        std::uint64_t x, y;
        std::memcpy(&x, a, 8); std::memcpy(&y, b, 8);
        if (x != y) return false;
        a += 8; b += 8; bytes -= 8;
    }
    return !bytes || std::memcmp(a, b, bytes) == 0;
#else
    return std::memcmp(a, b, bytes) == 0;
#endif
}
}
