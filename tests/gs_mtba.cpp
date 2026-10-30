#include "gs/gs.hpp"

#include <cstdio>
#include <cstdlib>

namespace {
using namespace ps2::gs;
int failures = 0, checks = 0;
constexpr std::uint64_t sentinel = 0xA000000000000000ull;

std::uint64_t tex0(unsigned psm, unsigned width_log2, unsigned height_log2,
                   unsigned stride = 1, unsigned base = 0) {
    return base | (static_cast<std::uint64_t>(stride) << 14) |
        (static_cast<std::uint64_t>(psm) << 20) |
        (static_cast<std::uint64_t>(width_log2) << 26) |
        (static_cast<std::uint64_t>(height_log2) << 30);
}

std::uint64_t expected(unsigned bp1, unsigned bw1, unsigned bp2, unsigned bw2,
                       unsigned bp3, unsigned bw3) {
    return sentinel | bp1 | (static_cast<std::uint64_t>(bw1) << 14) |
        (static_cast<std::uint64_t>(bp2) << 20) | (static_cast<std::uint64_t>(bw2) << 34) |
        (static_cast<std::uint64_t>(bp3) << 40) | (static_cast<std::uint64_t>(bw3) << 54);
}

void expect(const char *name, std::uint64_t actual, std::uint64_t want) {
    ++checks;
    if (actual == want) return;
    ++failures;
    std::printf("FAIL %s expected=%016llX actual=%016llX\n", name,
        static_cast<unsigned long long>(want), static_cast<unsigned long long>(actual));
}

void generated(const char *name, std::uint64_t tex, std::uint64_t want, unsigned context = 0) {
    g_state.ctx[context].miptbp1 = sentinel;
    write(0x14u + context, 1ull << 9); // MTBA; MXL and MMIN intentionally zero.
    write(0x06u + context, tex);
    expect(name, g_state.ctx[context].miptbp1, want);
}
}

int main() {
#ifdef _WIN32
    _putenv_s("PS2_GS", "cpu");
#else
    setenv("PS2_GS", "cpu", 1);
#endif
    using namespace ps2::gs;
    init();
    reset();

    const auto ct128 = expected(256, 1, 320, 1, 336, 1);
    generated("CT32 128 square", tex0(PSMCT32, 7, 7, 2), ct128);
    generated("MTBA ignores height", tex0(PSMCT32, 7, 6, 2), ct128);
    generated("MTBA ignores TBW0", tex0(PSMCT32, 7, 7, 4), ct128);
    generated("CT32 64x128", tex0(PSMCT32, 6, 7), expected(64, 1, 80, 1, 84, 1));
    generated("CT32 minimum width", tex0(PSMCT32, 5, 5), expected(16, 1, 20, 1, 21, 1));
    generated("CT16 manual example", tex0(PSMCT16, 9, 9, 8, 7200), expected(9248, 4, 9760, 2, 9888, 1));
    generated("T4 minimum one-block interval", tex0(PSMT4, 5, 5), expected(2, 1, 3, 1, 4, 1));
    generated("T8 packed storage", tex0(PSMT8, 5, 5), expected(4, 1, 5, 1, 6, 1));
    for (const auto psm : {PSMCT24, PSMT8H, PSMT4HL, PSMT4HH})
        generated("32-bit address-space format", tex0(psm, 5, 5), expected(16, 1, 20, 1, 21, 1));
    generated("CT16S storage", tex0(PSMCT16S, 5, 5), expected(8, 1, 10, 1, 11, 1));
    generated("14-bit pointer wrapping", tex0(PSMCT32, 7, 7, 2, 16380), expected(252, 1, 316, 1, 332, 1));
    generated("32-bit maximum width", tex0(PSMCT32, 9, 9, 8), expected(4096, 4, 5120, 2, 5376, 1));
    generated("16-bit maximum width", tex0(PSMCT16, 10, 10, 16), expected(8192, 8, 10240, 4, 10752, 2));

    constexpr std::uint64_t explicit_mips = 0xB123456789ABCDEFull;
    for (const auto tex : {tex0(PSMCT32, 4, 4), tex0(PSMCT32, 10, 10),
                          tex0(PSMCT16, 11, 11), tex0(PSMZ32, 7, 7),
                          tex0(PSMZ24, 7, 7), tex0(PSMZ16, 7, 7), tex0(PSMZ16S, 7, 7)}) {
        write(0x34, explicit_mips);
        write(0x06, tex);
        expect("invalid MTBA format or width preserves state", g_state.ctx[0].miptbp1, explicit_mips);
    }

    write(0x14, 0);
    write(0x34, explicit_mips);
    write(0x06, tex0(PSMCT32, 7, 7, 2));
    expect("MTBA disabled", g_state.ctx[0].miptbp1, explicit_mips);
    write(0x14, 1ull << 9);
    expect("TEX1 write is not a trigger", g_state.ctx[0].miptbp1, explicit_mips);
    write(0x06, tex0(PSMCT32, 7, 7, 2));
    expect("TEX0 triggers after MTBA enable", g_state.ctx[0].miptbp1,
           (explicit_mips & 0xF000000000000000ull) | (ct128 & 0x0FFFFFFFFFFFFFFFull));
    write(0x34, explicit_mips);
    write(0x16, 0); // TEX2 changes texture fields but must not re-run MTBA.
    expect("TEX2 is not a trigger", g_state.ctx[0].miptbp1, explicit_mips);
    write(0x14, (1ull << 9) | (6ull << 2) | (5ull << 6));
    expect("filter write preserves explicit mip addresses", g_state.ctx[0].miptbp1, explicit_mips);
    write(0x36, 0xFEDCBA9876543210ull);
    write(0x06, tex0(PSMCT32, 5, 5));
    expect("MTBA does not change MIPTBP2", g_state.ctx[0].miptbp2, 0xFEDCBA9876543210ull);

    const auto context0_before = g_state.ctx[0].miptbp1;
    generated("context one independent", tex0(PSMT4, 5, 5), expected(2, 1, 3, 1, 4, 1), 1);
    expect("context zero preserved", g_state.ctx[0].miptbp1, context0_before);
    std::printf("MTBA: %d register-path checks, %d failures\n", checks, failures);
    return failures ? 1 : 0;
}
