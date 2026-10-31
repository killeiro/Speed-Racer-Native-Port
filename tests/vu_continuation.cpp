#include "vu_cont_programs.hpp"
#include "vu_micro.hpp"
#include "hw.hpp"
#include <cstdio>
#include <random>
namespace ps2::vu { void run_fast(int, std::uint32_t); }
void register_generated_vu_continuations();
int main() {
    using namespace ps2;
    register_generated_vu_continuations();
    std::mt19937 rng(0x569313);
    unsigned checks=0,live_native=0,dead_native=0;
    for(unsigned test=0;test<12;++test) for(unsigned iteration=0;iteration<400;++iteration) {
        auto c=fixture::code(test);
        // Mutate a compiled instruction on alternate runs: stale-code fallback.
        if((iteration&1) && test<6) fixture::put(c,test==3?64:test==4?0:test==5?96:32,fixture::nop);
        if (iteration & 2) fixture::put(c,0x300,fixture::nop);
        std::memcpy(g_vu1_code,c.data(),c.size());vu::code_changed(1);
        Vu0Regs before{};
        for(auto &v:before.vf) for(auto &x:v.w) x=(rng()&0x807fffff)|0x3f000000u;
        before.vf[0]={};before.vf[0].w[3]=fp::kOne;
        before.vf[1].w[0]=0x40000000u;before.vf[2].w[0]=0x40800000u;before.vf[2].w[3]=fp::kOne;
        before.vi[1]=4;before.vi[2]=8;before.vi[4]=1023;before.q=fp::kOne;before.clip=rng()&0xffffff;before.mac=rng()&0xffff;before.status=rng()&0xfff;
        std::array<std::uint8_t,16384> mem;
        for(auto &b:mem)b=static_cast<std::uint8_t>(rng());
        vu::regs(1)=before;std::memcpy(g_vu1_mem,mem.data(),mem.size());
        vu::run_fast(1,fixture::start(test));
        const auto expected=vu::regs(1);std::array<std::uint8_t,16384> expected_mem;std::memcpy(expected_mem.data(),g_vu1_mem,mem.size());
        vu::regs(1)=before;std::memcpy(g_vu1_mem,mem.data(),mem.size());
        const bool flags_live=vu::continuation_flags_used();
        const auto native_before=vu::native_continuations();vu::run(1,fixture::start(test));
        if(vu::native_continuations()>native_before) {if(flags_live)++live_native;else ++dead_native;}
        if(test==11 && vu::native_continuations()<=native_before) {
            std::fprintf(stderr,"flag-policy fixture did not execute its native producer\n");return 3;
        }
        auto &got=vu::regs(1);
        if(std::memcmp(&expected,&got,sizeof got)||std::memcmp(expected_mem.data(),g_vu1_mem,mem.size())) {
            std::fprintf(stderr,"continuation mismatch test=%u iteration=%u VI3/4 %x/%x vs %x/%x flags %x/%x vs %x/%x Q %x/%x TPC %x/%x\n",test,iteration,expected.vi[3],expected.vi[4],got.vi[3],got.vi[4],expected.mac,expected.clip,got.mac,got.clip,expected.q,got.q,expected.tpc,got.tpc);
            return 1;
        }
        ++checks;
    }
    if(!live_native || !dead_native) {
        std::fprintf(stderr,"both flag-policy paths must execute: live%u dead%u\n",live_native,dead_native);return 4;
    }
    std::printf("Flag-policy paths: live=%u dead=%u\n",live_native,dead_native);
    if (vu::native_continuations() < 1000) {
        std::fprintf(stderr,"continuations did not execute: %llu native segments\n",static_cast<unsigned long long>(vu::native_continuations()));
        return 2;
    }
    std::printf("VU continuations: %u full-register/memory differential checks passed; %llu native segments\n",checks,static_cast<unsigned long long>(vu::native_continuations()));
    vu::stats();
}
