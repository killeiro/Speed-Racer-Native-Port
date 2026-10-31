#include "vu_packet.hpp"
#include <array>
#include <cstdio>
#include <cstring>
#include <random>
#include <vector>

// Independent per-qword reference retains the former XGKICK assembly rules.
static std::vector<std::uint8_t> reference(const std::uint8_t *data,unsigned size,unsigned address) {
    std::vector<std::uint8_t> out;
    unsigned q=address & (size-1),count=0;bool done=false;
    auto append=[&] {const auto *p=data+(q & (size-1))*16;out.insert(out.end(),p,p+16);++q;++count;};
    while(!done && count<size) {
        std::uint64_t tag;std::memcpy(&tag,data+(q & (size-1))*16,8);append();
        const unsigned nloop=unsigned(tag)&0x7fff,flg=unsigned(tag>>58)&3;
        unsigned nreg=unsigned(tag>>60)&15;if(!nreg)nreg=16;
        const unsigned body=flg==0 ? nloop*nreg : flg==1 ? (nloop*nreg+1)/2 : nloop;
        for(unsigned i=0;i<body && count<size;++i)append();
        done=(tag>>15)&1;
    }
    return out;
}
int main() {
    std::mt19937 random(0x474946u);unsigned checks=0,wrapped=0,contiguous=0;
    std::array<std::uint8_t,16384> memory{},output{};
    for(auto &x:memory)x=std::uint8_t(random());
    auto check=[&](unsigned size,unsigned address) {
        const auto expected=reference(memory.data(),size,address);
        const auto count=ps2::vu::packet::extent(memory.data(),size,address);
        if(count<1 || count>size || count*16!=expected.size())return false;
        const auto start=address & (size-1);
        ps2::vu::packet::copy(memory.data(),size,address,count,output.data());
        if(std::memcmp(output.data(),expected.data(),expected.size()))return false;
        if(count<=size-start) {
            ++contiguous;
            if(std::memcmp(memory.data()+start*16,expected.data(),expected.size()))return false;
        } else ++wrapped;
        ++checks;return true;
    };
    for(unsigned size:{256u,1024u}) {
        for(unsigned address:{0u,1u,size/2,size-2,size-1,0xffffffffu})
        for(unsigned flg=0;flg<4;++flg)for(unsigned nreg=0;nreg<16;++nreg)
        for(unsigned nloop:{0u,1u,2u,1000u,32767u})for(unsigned eop=0;eop<2;++eop) {
            const std::uint64_t tag=std::uint64_t(nloop)|(std::uint64_t(eop)<<15)|(std::uint64_t(flg)<<58)|(std::uint64_t(nreg)<<60);
            std::memcpy(memory.data()+(address & (size-1))*16,&tag,8);
            if(!check(size,address))return 1;
        }
        for(unsigned trial=0;trial<30000;++trial) {
            if(!(trial&63))for(auto &x:memory)x=std::uint8_t(random());
            if(!check(size,random()))return 2;
        }
        // A zero-body tag at the final qword followed by a terminating tag at0.
        std::uint64_t tag=0;std::memcpy(memory.data()+(size-1)*16,&tag,8);
        tag=0x8001u|(std::uint64_t(2)<<58);std::memcpy(memory.data(),&tag,8);
        if(!check(size,size-1))return 3;
    }
    if(!wrapped || !contiguous)return 4;
    std::printf("XGKICK: %u exact packet comparisons, contiguous=%u wrapped=%u\n",checks,contiguous,wrapped);
}
