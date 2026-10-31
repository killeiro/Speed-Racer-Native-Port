#pragma once
#include "ps2/vu_continuation.hpp"
#include <array>
#include <vector>

namespace fixture {
using Code = std::array<std::uint8_t, 16384>;
inline constexpr std::uint32_t nop = 0x80000030u, upper_nop = 0x2ffu;
inline void put(Code &code, unsigned pc, unsigned lo, unsigned hi = upper_nop) {
    std::memcpy(code.data()+pc, &lo, 4); std::memcpy(code.data()+pc+4, &hi, 4);
}
inline Code code(unsigned test) {
    Code c{};
    for (unsigned pc=0; pc<c.size(); pc+=8) put(c,pc,nop,upper_nop|0x40000000u);
    // Flags are live globally in both interpreter and generated code.
    put(c, 0x300, 0x30010000u);
    if (test == 0) { // CLIP pending during interpreted -> native handoff.
        put(c,0,nop,0x000209ffu);
        put(c,8,0x48000800u); put(c,16,nop);
        put(c,32,0x38030000u); put(c,40,0x38040000u);
        put(c,48,nop,upper_nop|0x40000000u);put(c,56,nop);
    } else if (test == 1 || test == 2) { // DIV/RSQRT outstanding across JR.
        put(c,0,0x800203bcu | (1u<<11) | (test==2 ? 2u : 0u));
        put(c,8,0x48000800u);put(c,16,nop);
        put(c,32,nop,0x0100091cu); // MULq.x vf4, vf1, Q.
        put(c,40,0x800003bfu); // WAITQ.
        put(c,48,nop,0x0100095cu); // MULq.x vf5, vf1, Q.
        put(c,56,nop,upper_nop|0x40000000u);put(c,64,nop);
    } else if (test == 3) { // native -> interpreter -> native, pending CLIP.
        put(c,0,nop,0x000209ffu);put(c,8,0x48000800u);put(c,16,nop);
        put(c,32,0x38030000u);put(c,40,0x48001000u);put(c,48,nop);
        put(c,64,0x38040000u);put(c,72,nop,upper_nop|0x40000000u);put(c,80,nop);
    } else if (test == 4) { // Native MAC/status and interpreter reads after a delay.
        put(c,0,nop,0x0100092au); // MUL.x vf4, vf1, vf0.
        put(c,8,0x48000800u);put(c,16,nop);
        put(c,32,0x34030000u);put(c,40,0x34040000u);
        put(c,48,nop,upper_nop|0x40000000u);put(c,56,nop);
    } else if (test == 5) { // BAL, delay-slot write, JR return, and another compiled callee.
        put(c,0,0x420f0007u);put(c,8,0x10030001u); // BAL vi15 ->64; IADDIU vi3,vi0,1.
        put(c,16,0x420f0009u);put(c,24,nop); // BAL ->96.
        put(c,32,nop,upper_nop|0x40000000u);put(c,40,nop);
        put(c,64,nop,0x000209ffu);put(c,72,0x48007800u);put(c,80,nop);
        put(c,96,0x38040000u);put(c,104,0x48007800u);put(c,112,nop);
    }
    if (test == 6) { // E on JR: end after delay slot, do not execute target.
        put(c,0,0x80020bbcu);put(c,8,0x48000800u,upper_nop|0x40000000u);
        put(c,16,nop,0x000209ffu);put(c,32,0x38030000u);
    } else if (test == 7) { // E's delay instruction wraps the 16 KiB code memory.
        put(c,0x3ff8,nop,upper_nop|0x40000000u);put(c,0,nop);
    } else if (test == 8) { // Non-flag MAX into vf0 must not modify MAC/status.
        put(c,0,nop,0x0102082bu);put(c,8,0x48000800u);put(c,16,nop);
        put(c,32,0x34030000u);put(c,40,nop,upper_nop|0x40000000u);put(c,48,nop);
    }
    if (test == 9) { // JR's delay-slot write executes after code-memory wrap.
        put(c,0x3ff8,0x48000800u);put(c,0,0x1005007bu);
        put(c,32,nop,0x000209ffu);put(c,40,nop,upper_nop|0x40000000u);put(c,48,nop);
    } else if (test == 10) { // LQ/SQ across a handoff, including data-memory wrap.
        put(c,0,0x01e31000u);put(c,8,0x48000800u);put(c,16,0x03e41801u);
        put(c,32,nop,upper_nop|0x40000000u);put(c,40,nop);
    }
    if (test == 11) { // Native flag producers -> interpreted STATUS/FSSET consumers.
        put(c,0,nop,0x0100092au);put(c,8,nop,0x0102086au);
        put(c,16,nop,0x010208aau);put(c,24,0x48001000u);
        put(c,32,nop,0x010208eau); // JR delay-slot producer remains pending.
        put(c,64,0x2c2307ffu); // FSAND vi3, STATUS,0xfff.
        put(c,72,0x2a2002c0u); // FSSET sticky flags while history is tagged.
        put(c,80,0x2c2407ffu); // FSAND vi4 after forced legacy write.
        put(c,88,nop,upper_nop|0x40000000u);put(c,96,nop);
    }
    return c;
}
inline unsigned start(unsigned test) { return (test==7 || test==9)?0x3ff8:0; }
inline std::vector<unsigned> entries(unsigned test) {
    if (test==6 || test==8 || test==10 || test==11) return {0};
    if (test==7 || test==9) return {0x3ff8};
    if (test==3) return {0,64};
    if (test==4) return {0};
    if (test==5) return {64,96};
    return {32};
}
}
