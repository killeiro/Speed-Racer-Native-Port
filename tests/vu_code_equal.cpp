#include "vu_code_equal.hpp"
#include <algorithm>
#include <array>
#include <chrono>
#include <cstdio>
#include <random>
#include <string>
#include <vector>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace {
unsigned checked = 0, failures = 0;
void check(const std::uint8_t *a, const std::uint8_t *b, std::size_t n) {
    const bool expected = !n || std::memcmp(a, b, n) == 0;
    ++checked;
    if (ps2::vu::code_equal(a,b,n) != expected) { ++failures; if(failures<8)std::printf("FAIL size=%zu\n",n); }
}
void correctness() {
    check(nullptr,nullptr,0);
    std::array<std::uint8_t,1024> a{}, b{};
    for(unsigned i=0;i<a.size();++i)a[i]=std::uint8_t(i*73u+(i>>3));
    for(unsigned n=0;n<=160;++n) for(unsigned x=0;x<32;++x) for(unsigned y : {0u,1u,7u,15u,31u}) {
        std::copy_n(a.data()+x,n,b.data()+y); check(a.data()+x,b.data()+y,n);
        for(unsigned at=0;at<n;++at) {
            b[y+at]^=0x81;check(a.data()+x,b.data()+y,n);b[y+at]^=0x81;
        }
    }
    std::mt19937 rng(0xc0dee911u);
    std::vector<std::uint8_t> left(16448),right(left.size());
    for(auto &v:left)v=std::uint8_t(rng());
    for(unsigned trial=0;trial<30000;++trial) {
        const unsigned n=rng()%16385,x=rng()%32,y=rng()%32;
        std::copy_n(left.data()+x,n,right.data()+y);
        if(n && (trial&1))right[y+rng()%n]^=std::uint8_t(1u<<(trial&7));
        check(left.data()+x,right.data()+y,n);
        check(left.data()+x,left.data()+x,n); // exact alias
        check(left.data()+x,left.data()+y,n); // overlapping readable spans
    }
#ifdef _WIN32
    SYSTEM_INFO info{};GetSystemInfo(&info);const auto page=info.dwPageSize;
    auto *p=static_cast<std::uint8_t *>(VirtualAlloc(nullptr,page*6,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE));
    if(!p)std::abort();DWORD prior;
    for(unsigned i : {0u,2u,3u,5u})if(!VirtualProtect(p+i*page,page,PAGE_NOACCESS,&prior))std::abort();
    for(unsigned n=0;n<=512;++n) {
        auto *aend=p+2*page-n,*bend=p+5*page-n;
        for(unsigned i=0;i<n;++i)aend[i]=bend[i]=std::uint8_t(i*37u);
        check(aend,bend,n);
        for(unsigned at=0;at<n;++at) {bend[at]^=1;check(aend,bend,n);bend[at]^=1;}
        check(p+page,p+4*page,n); // front guards prohibit align-down reads
    }
    VirtualFree(p,0,MEM_RELEASE);
#endif
    std::printf("Code equality: %u cases, %u failures; byte mutations, tails, alignments, aliasing and guarded pages\n",checked,failures);
}
using Fn=bool(*)(const std::uint8_t *,const std::uint8_t *,std::size_t);
[[gnu::noinline]] bool original(const std::uint8_t *a,const std::uint8_t *b,std::size_t n){return std::memcmp(a,b,n)==0;}
[[gnu::noinline]] bool candidate(const std::uint8_t *a,const std::uint8_t *b,std::size_t n){return ps2::vu::code_equal(a,b,n);}
[[gnu::noinline]] double bench(Fn fn,const std::uint8_t *a,const std::uint8_t *b,std::size_t n) {
    unsigned total=0;const auto begin=std::chrono::steady_clock::now();
    for(unsigned i=0;i<150000;++i)total+=fn(a,b,n);
    const auto end=std::chrono::steady_clock::now();
    if(total!=0 && total!=150000)std::abort();
    return std::chrono::duration<double,std::nano>(end-begin).count()/150000;
}
void benchmark() {
    std::array<std::uint8_t,16416> a{},b{};for(unsigned i=0;i<a.size();++i)a[i]=b[i]=std::uint8_t(i*37u);
    std::puts("size,mismatch,trial,reference_ns,candidate_ns");
    for(unsigned n : {8u,16u,24u,32u,64u,128u,512u,2048u,8192u,16384u})
        for(unsigned mismatch=0;mismatch<3;++mismatch) {
            const unsigned at=mismatch==1?0:n-1;
            if(mismatch)b[at]^=1;
            for(unsigned trial=0;trial<3;++trial) {
                double x,y;
                if(trial&1){y=bench(candidate,a.data(),b.data(),n);x=bench(original,a.data(),b.data(),n);}
                else{x=bench(original,a.data(),b.data(),n);y=bench(candidate,a.data(),b.data(),n);}
                std::printf("%u,%u,%u,%.3f,%.3f\n",n,mismatch,trial,x,y);
            }
            if(mismatch)b[at]^=1;
        }
}
}
int main(int argc,char **argv) {
    if(argc>1 && std::string(argv[1])=="--bench")benchmark();else correctness();
    return failures?1:0;
}
