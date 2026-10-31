// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once
#include <cstdint>
#include <cstring>
namespace srgs {
// PCSX2 Transfer<0> discards an incomplete PATH1 at each call. Validate before
// forwarding; buffering it past another path could change GS command ordering.
inline bool complete_path1(const std::uint8_t* bytes,std::uint32_t size) {
    if(!bytes||!size||(size&15u)||size>(1u<<20))return false;
    std::uint32_t at=0;
    while(at<size) {
        std::uint64_t tag;std::memcpy(&tag,bytes+at,8);at+=16;
        const std::uint32_t loops=std::uint32_t(tag)&0x7FFFu;
        const std::uint32_t encoded_regs=std::uint32_t(tag>>60);
        const std::uint32_t regs=encoded_regs?encoded_regs:16;
        const std::uint32_t format=std::uint32_t(tag>>58)&3u;
        const std::uint32_t words=format==0?loops*regs:format==1?(loops*regs+1)/2:loops;
        if(words>(size-at)/16)return false;
        at+=words*16;
        if(tag&(1ull<<15))return at==size;
    }
    return false;
}
}
