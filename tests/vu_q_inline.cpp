#include "ps2/vu_continuation.hpp"
#include "vu_micro.hpp"
#include "hw.hpp"
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>

namespace {
using namespace ps2;
using namespace ps2::vu;
using Pipe = vuops::FlagPipe;
using Value = detail::ContinuationQValue;
using DelayValue = detail::ContinuationQDelayValue;
constexpr std::uint32_t nop=0x80000030u,upper_nop=0x2ffu;
constexpr std::uint32_t read_hi=0x01e2081cu,read_pc=0x108u;
constexpr std::uint32_t old_q=0x3f800000u,new_q=0x40000000u;
unsigned checks=0;

void require(bool ok,const char *what) {
    ++checks;
    if(!ok) {std::fprintf(stderr,"VU Q inline: %s (check%u)\n",what,checks);std::exit(1);}
}
void put(std::uint8_t *code,std::uint32_t pc,std::uint32_t lo,std::uint32_t hi=upper_nop) {
    std::memcpy(code+pc,&lo,4);std::memcpy(code+pc+4,&hi,4);
}
void blank_code() {
    for(unsigned pc=0;pc<sizeof(g_vu1_code);pc+=8)put(g_vu1_code,pc,nop);
    for(unsigned pc=0;pc<sizeof(g_vu0_code);pc+=8)put(g_vu0_code,pc,nop);
}
Vu0Regs seed_regs() {
    Vu0Regs r{};
    for(unsigned i=0;i<32;++i)for(unsigned lane=0;lane<4;++lane)
        r.vf[i].w[lane]=0x3f000000u+i*0x100u+lane;
    for(unsigned i=0;i<4;++i)r.acc.w[i]=0x40000000u+i;
    for(unsigned i=0;i<16;++i)r.vi[i]=std::uint16_t(7u*i+1u);
    r.q=old_q;r.p=0x40600000u;r.i=0x40800000u;r.r=0x3f123456u;
    r.mac=0x789au;r.status=0xabcu;r.clip=0x123456u;r.cmsar0=0x54321u;r.tpc=0x321u;
    return r;
}
Pipe seed_pipe(std::uint32_t t,std::uint32_t ready,bool pending) {
    Pipe p{};p.t=t;p.mh=23;p.ch=29;p.q_value=new_q;p.q_ready=ready;p.q_pending=pending;
    for(unsigned i=0;i<8;++i) {
        p.mac_ts[i]=11u*i;p.mac_v[i]=0x100u+i;p.status_v[i]=0x200u+i;
        p.clip_ts[i]=13u*i;p.clip_v[i]=0x300u+i;
    }
    return p;
}
bool same_regs(const Vu0Regs &a,const Vu0Regs &b) {
    // Compare every architectural field, excluding tail/alignment padding.
    return !std::memcmp(a.vf,b.vf,sizeof a.vf) && !std::memcmp(&a.acc,&b.acc,sizeof a.acc) &&
        !std::memcmp(a.vi,b.vi,sizeof a.vi) && a.q==b.q && a.p==b.p && a.i==b.i && a.r==b.r &&
        a.mac==b.mac && a.status==b.status && a.clip==b.clip && a.cmsar0==b.cmsar0 && a.tpc==b.tpc;
}
bool same_pipe(const Pipe &a,const Pipe &b) {
    // In particular do not memcmp the padding around q_pending.
    return a.t==b.t && a.mh==b.mh && a.ch==b.ch && a.q_value==b.q_value &&
        a.q_ready==b.q_ready && a.q_pending==b.q_pending &&
        !std::memcmp(a.mac_ts,b.mac_ts,sizeof a.mac_ts) && !std::memcmp(a.mac_v,b.mac_v,sizeof a.mac_v) &&
        !std::memcmp(a.status_v,b.status_v,sizeof a.status_v) &&
        !std::memcmp(a.clip_ts,b.clip_ts,sizeof a.clip_ts) && !std::memcmp(a.clip_v,b.clip_v,sizeof a.clip_v);
}
bool same_value(const Value &a,const Value &b) {return a.generation==b.generation && a.value==b.value;}
bool same_value(const DelayValue &a,const DelayValue &b) {return a.generation==b.generation && a.value==b.value && a.latency==b.latency;}
struct UnitSnapshot {
    std::uint32_t generation,delay_epoch;
    std::array<Value,2048> kind;
    std::array<DelayValue,2048> delay;
    explicit UnitSnapshot(unsigned unit):generation(detail::g_continuation_q.generation[unit]),
        delay_epoch(detail::g_continuation_q.delay_epoch[unit]) {
        std::copy_n(detail::g_continuation_q.delay[unit],2048,delay.begin());
        std::copy_n(detail::g_continuation_q.kind[unit],2048,kind.begin());
    }
    bool equals(unsigned unit) const {
        const auto &q=detail::g_continuation_q;
        if(generation!=q.generation[unit] || delay_epoch!=q.delay_epoch[unit])return false;
        for(unsigned i=0;i<2048;++i)
            if(!same_value(delay[i],q.delay[unit][i]) || !same_value(kind[i],q.kind[unit][i]))return false;
        return true;
    }
};

void paired_read(std::uint32_t pc,std::uint32_t hi,const Pipe &before,bool flush_expected) {
    auto &cache=detail::g_continuation_q.kind[1][(pc&16383u)>>3];
    const auto cache_before=cache;
    auto actual=seed_regs(),expected=actual;
    auto ap=before,ep=before;
    continuation_q_read(actual,ap,pc,hi);
    const auto cache_after=cache;
    cache=cache_before;
    detail::continuation_q_read_slow(expected,ep,pc,hi);
    require(same_regs(actual,expected),"inline/slow full architectural registers differ");
    require(same_pipe(ap,ep),"inline/slow live FlagPipe differs");
    require(same_value(cache_after,cache),"inline/slow authoritative cache entry differs");
    require(actual.q==(flush_expected?new_q:old_q),"numeric Q visibility differs");
    require(ap.q_pending==(before.q_pending && !flush_expected),"numeric Q pending state differs");
}

void hits_and_visibility() {
    struct Time {std::uint32_t t,ready;bool dynamic_flush;};
    // Explicit unsigned-time expectations of the existing runtime, including
    // both sides of wrap. This test preserves its policy rather than changing it.
    constexpr Time times[]={{9,10,false},{10,10,true},{11,10,true},{0,0,true},
        {0,1,false},{0xffffffffu,3,true},{2,0xffffffffu,false},{0xffffffffu,0xffffffffu,true}};
    auto &q=detail::g_continuation_q;
    for(auto kind:{kQNew,kQOld,kQDynamic})for(bool pending:{false,true})
    for(bool reader:{false,true})for(const auto &time:times)
    for(auto pc:{read_pc,read_pc+0x4000u,read_pc|0xffffc000u}) {
        q.kind[1][read_pc>>3]={q.generation[1],std::uint32_t(kind)};
        const bool flush=pending && reader && (kind==kQNew || (kind==kQDynamic && time.dynamic_flush));
        paired_read(pc,reader?read_hi:upper_nop,seed_pipe(time.t,time.ready,pending),flush);
    }
}

void set_read_fixture(QRead kind) {
    blank_code();
    if(kind==kQNew)put(g_vu1_code,read_pc,0x800003bfu,read_hi); // WAITQ forces new visibility.
    else {
        // The dynamic fixture has three incoming paths. One branch path has no
        // recent DIV (new), another DIV in its delay slot (old), and a remaining
        // linear NOP before its DIV. The reference checks a mixed result after
        // nonterminal expansion, so that NOP must remain pending after both
        // terminal discoveries. This preserves the original traversal policy.
        put(g_vu1_code,read_pc-(kind==kQDynamic?16u:8u),0x80020bbcu);
        put(g_vu1_code,read_pc,nop,read_hi);
        if(kind==kQDynamic) {
            for(auto branch_pc:{0x400u,0x500u}) {
                const auto imm=((read_pc-branch_pc-8u)/8u)&0x7ffu;
                put(g_vu1_code,branch_pc,0x40000000u|imm);
            }
            put(g_vu1_code,0x408u,0x80020bbcu); // the lower-PC branch's DIV delay slot
        }
    }
    code_changed(1);
    const auto actual_kind=q_read_kind(g_vu1_code,16383u,read_pc);
    if(actual_kind!=kind)
        std::fprintf(stderr,"Q fixture expected=%u actual=%u pc=%04X (dynamic/new/old=0/1/2)\n",
                     unsigned(kind),unsigned(actual_kind),unsigned(read_pc));
    require(actual_kind==kind,"real code fixture has unexpected Q classification");
}
void misses_and_masks() {
    auto &q=detail::g_continuation_q;
    for(auto kind:{kQNew,kQOld,kQDynamic}) {
        set_read_fixture(kind);
        for(auto pc:{read_pc,read_pc+0x4000u,read_pc|0xffffc000u})for(bool ready:{false,true}) {
            q.kind[1][read_pc>>3]={0,0x12345678u};
            paired_read(pc,read_hi,seed_pipe(50,ready?49u:51u,true),kind==kQNew || (kind==kQDynamic && ready));
            require(q.kind[1][read_pc>>3].generation==q.generation[1] && q.kind[1][read_pc>>3].value==std::uint32_t(kind),
                    "miss did not publish the reference classification");
        }
    }
}

void delays() {
    struct Op {std::uint32_t lo,latency;};
    constexpr Op ops[]={{0x80020bbcu,7},{0x80020bbdu,7},{0x80020bbeu,13}};
    auto &q=detail::g_continuation_q;
    for(const auto &op:ops)for(auto canonical_pc:{0u,64u,16376u}) {
        blank_code();put(g_vu1_code,canonical_pc,op.lo);code_changed(1);
        const auto expected=q_delay(g_vu1_code,16383u,canonical_pc,op.latency);
        require(expected==op.latency,"isolated DIV/SQRT/RSQRT fixture has a scheduling hazard");
        for(auto pc:{canonical_pc,canonical_pc+0x4000u,canonical_pc|0xffffc000u}) {
            auto &entry=q.delay[1][canonical_pc>>3];entry={0,0xdeadbeefu};
            const auto actual=continuation_q_delay(pc,op.latency);const auto after=entry;
            entry={0,0xdeadbeefu};
            const auto slow=detail::continuation_q_delay_slow(pc,op.latency);
            require(actual==slow && actual==expected,"delay miss differs from original/reference analysis");
            require(same_value(after,entry) && entry.generation==q.delay_epoch[1] && entry.latency==op.latency,"delay miss cache metadata differs");
            require(continuation_q_delay(pc,op.latency)==expected && detail::continuation_q_delay_slow(pc,op.latency)==expected,
                    "delay warm hit differs");
        }
    }
}

void invalidations_and_units() {
    auto &q=detail::g_continuation_q;
    q.generation[0]=0x10203040u;
    for(unsigned i=0;i<2048;++i) {
        q.kind[0][i]={q.generation[0],i*7u+2u};q.delay[0][i]={q.delay_epoch[0],i*11u+3u,7};
    }
    const UnitSnapshot unit0(0);
    set_read_fixture(kQNew);put(g_vu1_code,64,0x80020bbcu);code_changed(1,64,8);
    q.kind[1][read_pc>>3]={q.generation[1],std::uint32_t(kQOld)};
    require(continuation_q_delay(64,7)==q_delay(g_vu1_code,16383u,64,7),"delay prime differs");
    const auto retained_delay=q.delay[1][64>>3];
    // Kind still invalidates globally; this known upload cannot affect PC64's
    // finite scheduling window, so the exact delay cache entry must survive.
    const auto previous=q.generation[1],delay_epoch=q.delay_epoch[1];
    put(g_vu1_code,0x300,nop,upper_nop|0x80000000u);code_changed(1,0x300,8);
    require(q.generation[1]!=previous,"known disjoint upload failed to advance kind generation");
    require(q.delay_epoch[1]==delay_epoch && same_value(retained_delay,q.delay[1][64>>3]),"disjoint upload invalidated an untouched delay");
    paired_read(read_pc,read_hi,seed_pipe(0,100,true),true);
    require(continuation_q_delay(64,7)==q_delay(g_vu1_code,16383u,64,7),"disjoint upload reused stale delay");
    require(unit0.equals(0),"VU1 invalidation modified VU0 caches");

    // Force the old generation1 collision: wrap must clear every entry, not let
    // the inline path accept a long-dead generation1 value as a current hit.
    q.generation[1]=std::numeric_limits<std::uint32_t>::max();
    for(unsigned i=0;i<2048;++i) {q.kind[1][i]={1,std::uint32_t(kQOld)};q.delay[1][i]={1,1,7};}
    code_changed(1,0x300,8);
    require(q.generation[1]==1,"generation wrap did not restart at1");
    for(unsigned i=0;i<2048;++i)
        require(q.kind[1][i].generation==0 && q.kind[1][i].value==0 && q.delay[1][i].generation==0 && q.delay[1][i].value==0 && q.delay[1][i].latency==0,
                "generation wrap retained a stale Q cache entry");
    paired_read(read_pc|0xffffc000u,read_hi,seed_pipe(0,100,true),true);
    require(continuation_q_delay(64,7)==q_delay(g_vu1_code,16383u,64,7),"generation wrap accepted a stale delay hit");
    require(unit0.equals(0),"VU1 generation wrap modified VU0 caches");

    const UnitSnapshot unit1(1);
    code_changed(0,64,8);require(unit1.equals(1),"VU0 upload modified VU1 caches");
    q.generation[0]=std::numeric_limits<std::uint32_t>::max();code_changed(0,0,8);
    require(q.generation[0]==1 && unit1.equals(1),"VU0 generation wrap modified VU1 caches");
    for(unsigned i=0;i<2048;++i)
        require(q.kind[0][i].generation==0 && q.kind[0][i].value==0 && q.delay[0][i].generation==0 && q.delay[0][i].value==0 && q.delay[0][i].latency==0,
                "VU0 generation wrap retained a stale cache entry");
}
}

int main(int argc,char **argv) {
    using namespace ps2::vu;
    if(argc!=2 || (std::strcmp(argv[1],"inline") && std::strcmp(argv[1],"calls")))return 2;
    const bool expect_calls=!std::strcmp(argv[1],"calls");
    require(detail::g_continuation_q_calls==expect_calls,"process startup helper mode is not the requested mode");
    require(reads_q(read_hi) && !reads_q(upper_nop),"test reader/non-reader encodings are invalid");
    blank_code();hits_and_visibility();misses_and_masks();delays();invalidations_and_units();
    std::printf("VU Q inline: %u semantic checks passed; mode=%s; full registers/live pipeline, cache misses/hits/masks, global invalidation and wrap\n",checks,argv[1]);
}
