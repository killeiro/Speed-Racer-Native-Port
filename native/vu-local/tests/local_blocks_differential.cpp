// Prepared test, not yet built or run. Link ps2runtime and include directories
// runtime/src, runtime/include, tests and this directory. Do not separately
// compile the generated .cpp separately: it is deliberately included here.
#include "vu_cont_programs.hpp"
#include "vu_micro.hpp"
#include "hw.hpp"
#include "ps2/system.hpp"
#include "../blocks/vu_local_blocks.cpp"
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>

namespace ps2::vu {
std::uint32_t run_fast_continuation(int, std::uint32_t, vuops::FlagPipe &, bool, std::uint32_t *);
void check_continuations(std::uint32_t, std::uint64_t);
}

namespace {
using namespace ps2;
unsigned checks=0;
void require(bool pass,const char *what,unsigned block) {
    if(!pass) { std::fprintf(stderr,"local block %u: %s\n",block,what);std::abort(); }
    ++checks;
}
std::uint32_t marker(Vu0Regs &, std::uint8_t *, vuops::FlagPipe &) {
    std::abort(); // Marker is only a reference interpreter handoff boundary.
}
std::uint32_t target_of(const vu::LocalContinuation &b) {
    std::uint32_t lo;std::memcpy(&lo,b.code+b.bytes-16,4);
    return vu::branch_target(lo,b.entry+b.bytes-16,16383u);
}
fixture::Code make_code(const vu::LocalContinuation &b) {
    fixture::Code c{};
    for(unsigned pc=0;pc<c.size();pc+=8) fixture::put(c,pc,fixture::nop,fixture::upper_nop|0x40000000u);
    std::memcpy(c.data()+b.entry,b.code,b.bytes);
    return c;
}
void load(const fixture::Code &c) {
    std::memcpy(g_vu1_code,c.data(),c.size());vu::code_changed(1);
}
Vu0Regs random_regs(std::mt19937 &rng) {
    Vu0Regs r{};
    for(auto &v:r.vf) for(auto &x:v.w) x=(rng()&0x807fffff)|0x3f000000u;
    for(auto &x:r.acc.w)x=(rng()&0x807fffff)|0x3f000000u;
    for(auto &v:r.vi)v=static_cast<std::uint16_t>(rng());
    r.vf[0]={};r.vf[0].w[3]=fp::kOne;r.vi[0]=0;
    r.q=fp::kOne;r.p=0x40000000u;r.i=0x3f000000u;r.r=rng();
    r.mac=rng()&0xffff;r.status=rng()&0xfff;r.clip=rng()&0xffffff;r.tpc=rng()&0x3fff;
    return r;
}
void install_callee(fixture::Code &c,std::uint32_t target,unsigned variant) {
    // Encodings already used by tests/vu_cont_programs.hpp, plus XGKICK.
    // XGKICK lower index0x6c: funct=0x3c, index/4=27, is=14.
    fixture::put(c,target+0,0x100e0000u); // IADDIU vi14,vi0,0: valid packet at qword0.
    fixture::put(c,target+8,0x800076fcu); // XGKICK vi14.
    fixture::put(c,target+16,fixture::nop,variant?0x0100095cu:0x0100091cu); // MULq.
    fixture::put(c,target+24,0x38030000u); // FCGET vi3.
    fixture::put(c,target+32,0x2c2407ffu); // FSAND vi4.
    fixture::put(c,target+40,0x800003bfu); // WAITQ.
    fixture::put(c,target+48,fixture::nop,0x0100095cu);
    fixture::put(c,target+56,fixture::nop,fixture::upper_nop|0x40000000u);
    fixture::put(c,target+64,fixture::nop);
}
void packet_and_regs(std::mt19937 &rng) {
    auto r=random_regs(rng);r.vf[1].w[0]=0x40000000u;r.vf[2].w[0]=0x40800000u;r.vf[2].w[3]=fp::kOne;
    vu::regs(1)=r;
    for(unsigned i=0;i<16384;++i)g_vu1_mem[i]=static_cast<std::uint8_t>(rng());
    // One packed A+D write to RGBAQ, EOP set. Nonempty packet comparison.
    const std::uint64_t gif[]={ (1ull<<60)|(1ull<<15)|1ull,0xEull,0x3F800000FF112233ull,1ull };
    std::memcpy(g_vu1_mem,gif,sizeof gif);
}
bool same_pipe(const vuops::FlagPipe &a,const vuops::FlagPipe &b) {
    if(a.t!=b.t || a.mh!=b.mh || a.ch!=b.ch || a.q_value!=b.q_value || a.q_ready!=b.q_ready || a.q_pending!=b.q_pending)return false;
    for(unsigned i=0;i<8;++i)
        if(a.mac_ts[i]!=b.mac_ts[i] || a.mac_v[i]!=b.mac_v[i] || a.status_v[i]!=b.status_v[i] || a.clip_ts[i]!=b.clip_ts[i] || a.clip_v[i]!=b.clip_v[i])return false;
    return true;
}
void full_oracle(fixture::Code c,const vu::LocalContinuation &b,unsigned id,std::mt19937 &rng,bool expect_local=true) {
    // Pending CLIP/MAC/Q enter the dispatcher from the interpreter.
    constexpr unsigned pre=0x3300u;
    fixture::put(c,pre,fixture::nop,0x000209ffu); // CLIP producer.
    fixture::put(c,pre+8,0x80020bbcu); // DIV.
    const auto imm=((b.entry-(pre+16+8))/8)&0x7ffu;
    fixture::put(c,pre+16,0x40000000u|imm); // B to dispatcher.
    fixture::put(c,pre+24,fixture::nop,0x0100092au); // MAC/status producer in delay.
    load(c);packet_and_regs(rng);
    // Existing runtime oracle compares all Vu0Regs, all16KiB local RAM and
    // complete GIF packet bytes, then performs one production submission.
    const auto before=vu::local_continuation_stats();
    vu::check_continuations(pre,1);
    const auto after=vu::local_continuation_stats();
    if(expect_local)
        require(after.checked_segments>before.checked_segments,"full register/memory/GIF oracle did not check a local segment",id);
    else
        require(after.checked_segments==before.checked_segments && after.calls==before.calls,"mutated local bytes executed a stale local segment",id);
}
}

int main() {
    using namespace ps2;
    std::mt19937 rng(0x46f00d);
    register_generated_vu_local_blocks();
    require(vu::local_continuation_stats().registered==40,"expected40 registered blocks",0);
    for(unsigned id=0;id<40;++id) {
        const auto &b=gen_local::blocks[id];const auto target=target_of(b);
        auto c=make_code(b);load(c);
        // A full-continuation marker makes run_fast_continuation stop exactly
        // after BAL's delay slot without ending/flushing Q at the callee.
        const vu::Continuation stop{vu::program_key(c.data(),vu::reachable(c.data(),16383,target),target),target,marker};
        vu::register_continuations(&stop,1);
        require(vu::lookup_local_continuation(b.entry)==b.function,"initial exact local lookup",id);
        for(unsigned iteration=0;iteration<64;++iteration) {
            const auto before=random_regs(rng);
            std::array<std::uint8_t,16384> mem{};
            for(auto &x:mem)x=static_cast<std::uint8_t>(rng());
            vu::set_tops(rng()&1023,rng()&1023);
            vuops::FlagPipe initial{};initial.start(before);initial.t=100+(rng()&127);
            initial.set_mac(rng()&0xffff,rng()&0xfff);
            initial.set_clip(rng()&0xffffff,initial.t-(rng()&3));
            initial.q_pending=iteration&1;initial.q_value=0x40000000u;
            initial.q_ready=initial.t+1+(iteration%20);
            vu::regs(1)=before;std::memcpy(g_vu1_mem,mem.data(),mem.size());
            auto expected_pipe=initial;std::uint32_t issued=0;
            const auto expected_target=vu::run_fast_continuation(1,b.entry,expected_pipe,true,&issued);
            const auto expected=vu::regs(1);std::array<std::uint8_t,16384> expected_mem;
            std::memcpy(expected_mem.data(),g_vu1_mem,expected_mem.size());
            auto got=before;auto actual_mem=mem;auto actual_pipe=initial;
            const auto actual_target=b.function(got,actual_mem.data(),actual_pipe);
            require(expected_target==target && actual_target==target,"branch target after delay slot",id);
            require(issued==b.bytes/8 && actual_pipe.t==initial.t+b.bytes/8,"exact10 or2 issues",id);
            require(std::memcmp(&got,&expected,sizeof got)==0,"full registers differ",id);
            require(actual_mem==expected_mem,"full local memory differs",id);
            require(same_pipe(actual_pipe,expected_pipe),"FlagPipe/Q/history differs",id);
        }
        // A changed callee is irrelevant to the identity of the executed block.
        install_callee(c,target,0);load(c);
        require(vu::lookup_local_continuation(b.entry)==b.function,"callee replacement invalidated local bytes",id);
        const auto before=vu::local_continuation_stats();
        fixture::put(c,target+16,fixture::nop,0x0100095cu);
        std::memcpy(g_vu1_code+target+16,c.data()+target+16,8);
        vu::code_changed(1,target+16,8);
        require(vu::lookup_local_continuation(b.entry)==b.function,"disjoint mutation must reuse the local block",id);
        const auto after=vu::local_continuation_stats();
        if(!std::getenv("PS2_VU_RANGE_REUSE_OFF"))
            require(after.range_reuses>before.range_reuses,"known disjoint mutation did not reuse proof",id);
        else
            require(after.byte_validations>before.byte_validations,"reference mode did not revalidate bytes",id);
        full_oracle(c,b,id,rng);
        // A valid but different opcode at the first executed pair must miss.
        std::uint32_t first;std::memcpy(&first,g_vu1_code+b.entry,4);
        const std::uint32_t nop=fixture::nop;std::memcpy(g_vu1_code+b.entry,&nop,4);
        vu::code_changed(1,b.entry,4);
        require(vu::lookup_local_continuation(b.entry)==nullptr,"modified opcode reused stale block",id);
        auto opcode_mutated=c;fixture::put(opcode_mutated,b.entry,nop);
        full_oracle(opcode_mutated,b,id,rng,false);
        std::memcpy(g_vu1_code+b.entry,&first,4);vu::code_changed(1,b.entry,4);
        require(vu::lookup_local_continuation(b.entry)==b.function,"restored opcode not recognized",id);
        // Even an equivalent no-op encoding in the delay slot changes identity.
        const auto delay=b.entry+b.bytes-8;
        std::uint32_t original;std::memcpy(&original,g_vu1_code+delay,4);
        std::memcpy(g_vu1_code+delay,&nop,4);vu::code_changed(1,delay,4);
        require(vu::lookup_local_continuation(b.entry)==nullptr,"modified delay slot reused stale block",id);
        auto delay_mutated=c;fixture::put(delay_mutated,delay,nop);
        full_oracle(delay_mutated,b,id,rng,false);
        std::memcpy(g_vu1_code+delay,&original,4);vu::code_changed(1,delay,4);
        require(vu::lookup_local_continuation(b.entry)==b.function,"restored delay not recognized",id);
        vu::code_changed(1);
        require(vu::lookup_local_continuation(b.entry)==b.function,"unknown invalidation lost exact recognition",id);
    }
    std::printf("Local blocks: %u checks;2560 direct full-state/FlagPipe comparisons and120 complete register/memory/GIF oracle fixtures\n",checks);
}
