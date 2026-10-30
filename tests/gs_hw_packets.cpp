// SPDX-License-Identifier: GPL-3.0-or-later
#include "gif_packet.hpp"
#include <array>
#include <cstdio>
#include <cstring>
int main() {
    std::array<std::uint8_t,16*20> packet{};
    unsigned checks=0;
    auto expect=[&](std::uint32_t size,bool valid){++checks;return srgs::complete_path1(packet.data(),size)==valid;};
    auto tag=[&](unsigned loops,unsigned regs,unsigned format,bool eop){
        std::uint64_t raw=loops|(std::uint64_t(regs)<<60)|(std::uint64_t(format)<<58)|(eop?(1ull<<15):0);
        packet.fill(0);std::memcpy(packet.data(),&raw,8);
    };
    if(srgs::complete_path1(nullptr,16))return 1;
    tag(2,3,0,true);if(!expect(16*7,true)||!expect(16*6,false)||!expect(16*8,false)||!expect(15,false))return 2;
    tag(1,0,0,true);if(!expect(16*17,true)||!expect(16*16,false))return 3;
    tag(3,1,1,true);if(!expect(16*3,true)||!expect(16*2,false))return 4;
    tag(2,1,2,true);if(!expect(16*3,true)||!expect(16*2,false))return 5;
    tag(0,0,0,true);if(!expect(16,true)||!expect(32,false))return 6;
    tag(1,1,0,false);if(!expect(32,false))return 7;
    // A path may contain several tags, but must stop at the first EOP.
    const std::uint64_t end=1ull<<15;std::memcpy(packet.data()+32,&end,8);
    if(!expect(48,true)||!expect(64,false))return 8;
    tag(32767,0,0,true);if(!expect(unsigned(packet.size()),false))return 9;
    if(srgs::complete_path1(packet.data(),(1u<<20)+16))return 10;
    std::printf("PATH1 packet boundaries: %u checked lengths, packed/reglist/image, NREG16, EOP and malformed inputs PASS\n",checks);
}
