#pragma once
#include <algorithm>
#include <cstdint>
#include <cstring>

namespace ps2::vu::packet {
// VU data is a power-of-two ring (256 or 1024 qwords). Inspect only GIF tags;
// the payload length still stops at EOP or at one full local-memory traversal.
inline std::uint32_t extent(const std::uint8_t *data, std::uint32_t qwords,
                            std::uint32_t address) {
    const auto mask=qwords-1u;
    std::uint32_t q=address & mask,count=0;
    while(count<qwords) {
        std::uint64_t tag;
        std::memcpy(&tag,data+(q & mask)*16u,sizeof tag);
        ++q;++count;
        const auto nloop=std::uint32_t(tag) & 0x7fffu;
        const auto flg=std::uint32_t(tag>>58) & 3u;
        auto nreg=std::uint32_t(tag>>60) & 15u;
        if(!nreg)nreg=16;
        const auto body=flg==0 ? nloop*nreg : flg==1 ? (nloop*nreg+1u)/2u : nloop;
        const auto take=std::min(body,qwords-count);
        q+=take;count+=take;
        if(tag & 0x8000u)break;
    }
    return count;
}
// Copy the already bounded extent using at most two contiguous fragments.
inline void copy(const std::uint8_t *data,std::uint32_t qwords,std::uint32_t address,
                 std::uint32_t count,std::uint8_t *out) {
    const auto start=address & (qwords-1u);
    const auto first=std::min(count,qwords-start);
    std::memcpy(out,data+start*16u,first*16u);
    if(first<count)std::memcpy(out+first*16u,data,(count-first)*16u);
}
}
