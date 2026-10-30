#include "vu_micro.hpp"
#include "hw.hpp"
#include <cstdio>
#include <cstring>

int main() {
    ps2::vu::reset();
    auto &r = ps2::vu::regs(1);
    r.vf[1].w[0] = 0x40000000u; // +2.0: x > +abs(w), CLIP bit 0.
    r.vf[2].w[3] = 0x3F800000u; // w = +1.0.
    r.vf[3].w[0] = 0xC0000000u; // -2.0: x < -abs(w), CLIP bit 1.
    constexpr std::uint32_t nop_lo = 0x80000330u; // IADD vi0, vi0, vi0.
    constexpr std::uint32_t nop_hi = 0x000002FFu;
    const std::uint32_t program[][2] = {
        {nop_lo, 0x000209FFu}, // CLIP vf1.xyz, vf2.w at issue 0.
        {nop_lo, 0x000219FFu}, // CLIP vf3.xyz, vf2.w at issue 1.
        {nop_lo, nop_hi},
        {0x38010000u, nop_hi}, // FCGET vi1 after 3 issues from first CLIP.
        {0x38020000u, nop_hi}, // FCGET vi2 after 4 issues from first CLIP.
        {0x38030000u, nop_hi}, // FCGET vi3 after 4 issues from second CLIP.
        {nop_lo, nop_hi | 0x40000000u},
        {nop_lo, nop_hi},
    };
    std::memset(ps2::g_vu1_code, 0, sizeof ps2::g_vu1_code);
    std::memcpy(ps2::g_vu1_code, program, sizeof program);
    ps2::vu::code_changed(1);
    ps2::vu::run(1, 0);
    const bool ok = r.vi[1] == 0 && r.vi[2] == 1 && r.vi[3] == 0x42;
    std::printf("CLIP/FCGET delay test: vi1=%04X vi2=%04X vi3=%04X; expected 0000,0001,0042: %s\n", r.vi[1],r.vi[2],r.vi[3],ok?"PASS":"FAIL");
    return ok ? 0 : 1;
}
