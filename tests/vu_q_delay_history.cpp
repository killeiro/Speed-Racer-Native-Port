#include "ps2/vu_continuation.hpp"
#include "ps2/state.hpp"
#include "vu_micro.hpp"
#include "hw.hpp"
#include <array>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <random>

namespace {
using namespace ps2;
using namespace ps2::vu;
using Delay=detail::ContinuationQDelayValue;
constexpr std::uint32_t nop=0x80000030u,upper_nop=0x2ffu;
unsigned checks=0,reused=0,changed_outputs=0;
const bool full_control=std::getenv("PS2_VU_Q_DELAY_FULL")!=nullptr;
void need(bool ok,const char *what) {
    ++checks;if(!ok){std::fprintf(stderr,"Q delay history check%u: %s\n",checks,what);std::exit(1);}
}
std::uint8_t *code(unsigned unit){return unit?g_vu1_code:g_vu0_code;}
unsigned mask(unsigned unit){return unit?16383u:4095u;}
void put(unsigned unit,unsigned pc,std::uint32_t lo,std::uint32_t hi=upper_nop) {
    pc&=mask(unit);std::memcpy(code(unit)+pc,&lo,4);std::memcpy(code(unit)+pc+4,&hi,4);
}
void blank(unsigned unit) {
    for(unsigned pc=0;pc<=mask(unit);pc+=8)put(unit,pc,nop);
    code_changed(unit);
}
bool same(Delay a,Delay b){return a.generation==b.generation && a.value==b.value && a.latency==b.latency;}
std::uint32_t check(unsigned unit,std::uint32_t pc,std::uint32_t latency) {
    auto &q=detail::g_continuation_q;
    const auto before=q.delay[unit][(pc&mask(unit))>>3];
    const auto expected=q_delay(code(unit),mask(unit),pc,latency);
    const auto actual=detail::continuation_q_delay_slow(int(unit),pc,latency);
    need(actual==expected,"slow cached result differs from fresh analysis");
    if(unit)need(continuation_q_delay(pc,latency)==expected,"inline result differs from fresh analysis");
    const auto after=q.delay[unit][(pc&mask(unit))>>3];
    if(latency>13u)need(same(before,after),"unsupported window polluted bounded cache");
    else {
        need(after.generation==q.delay_epoch[unit] && after.latency==latency && after.value==expected,"cache key/value not published");
        if(before.generation==q.delay_epoch[unit] && before.latency==latency){need(same(before,after),"warm hit modified entry");++reused;}
    }
    return actual;
}
void exact_invalidation(unsigned unit) {
    auto &q=detail::g_continuation_q;const auto size=mask(unit)+1u,words=size/8u;
    struct Span {unsigned address,bytes;};
    const Span spans[]={{0,8},{0,1},{7,2},{4,4},{size-1,2},{size-3,21},{0xfffffffdu,5},
        {0x11003804u,1},{96,17},{0,0},{71,size},{57,size+1},{0,0xffffffffu},{0,size-32u}};
    for(auto span:spans) {
        blank(unit);const auto epoch=q.delay_epoch[unit],other_epoch=q.delay_epoch[unit^1u];
        for(unsigned i=0;i<2048;++i)q.delay[unit][i]={epoch,i*31u+5u,7};
        std::array<Delay,2048> before;std::copy_n(q.delay[unit],2048,before.begin());
        std::array<bool,16384> dirty{};
        if(!span.bytes || span.bytes>=size)std::fill_n(dirty.begin(),size,true);
        else for(unsigned b=0;b<span.bytes;++b)dirty[(span.address+b)&mask(unit)]=true;
        // Independent oracle enumerates each analysis's full byte read window.
        std::array<bool,2048> affected{};unsigned count=0;
        for(unsigned i=0;i<words;++i) {
            for(int k=-3;k<=13;++k)for(unsigned b=0;b<8;++b)
                affected[i]=affected[i] || dirty[(i*8u+std::uint32_t(k)*8u+b)&mask(unit)];
            count+=affected[i]?1u:0u;
        }
        const auto old_kind_generation=q.generation[unit];
        code_changed(unit,span.address,span.bytes);
        need(q.generation[unit]!=old_kind_generation,"kind did not retain global invalidation");
        need(q.delay_epoch[unit^1u]==other_epoch,"write changed other unit delay epoch");
        if(full_control || count==words)need(q.delay_epoch[unit]!=epoch,"full invalidation failed to advance epoch");
        else need(q.delay_epoch[unit]==epoch,"small known write changed delay epoch");
        for(unsigned i=0;i<words;++i) {
            const auto now=q.delay[unit][i];
            if(full_control || affected[i])need(now.generation!=q.delay_epoch[unit],"affected delay still valid");
            else {need(same(before[i],now),"disjoint delay entry changed");++reused;}
        }
    }
    blank(unit);
}
void changing_hazard(unsigned unit) {
    blank(unit);const unsigned pc=mask(unit)-7u;
    put(unit,pc,0x80020bbcu);code_changed(unit,pc,8);
    const auto initial=check(unit,pc,7);need(initial==7,"NOP fixture should have delay7");
    // ILW VI1 followed by IBEQ reading VI1 introduces a three-cycle VI hazard.
    put(unit,(pc+8u)&mask(unit),0x08010000u);
    put(unit,(pc+16u)&mask(unit),0x50020800u);
    code_changed(unit,pc+8u,16);
    const auto stalled=check(unit,pc,7);
    need(stalled!=initial,"test did not change analyzed scheduling delay");++changed_outputs;
    for(unsigned latency:{0u,7u,13u,7u,14u,17u,13u})check(unit,pc,latency);
    // Aliased high PC bits must select the same code and cache entry.
    check(unit,pc+mask(unit)+1u,13);check(unit,pc|0xffffc000u,7);
}
void histories(unsigned unit) {
    std::mt19937 rng(0x5144454cu+unit);auto &q=detail::g_continuation_q;
    const auto size=mask(unit)+1u;blank(unit);
    constexpr std::uint32_t lows[]={nop,0x08010000u,0x50020800u,0x00010000u,0x80020bbcu,0x80020bbeu};
    constexpr std::uint32_t highs[]={upper_nop,0x01e20828u,0x01e11028u,0x01e2082cu};
    for(unsigned pc=0;pc<size;pc+=8)put(unit,pc,lows[rng()%6],highs[rng()%4]);
    code_changed(unit);
    for(unsigned round=0;round<192;++round) {
        unsigned at=rng(),bytes=1u+rng()%25u;
        switch(round%12u) {
        case 0:at=size-3;bytes=11;break;
        case 1:bytes=0;break;
        case 2:bytes=size;break;
        case 3:bytes=size+1;break;
        case 4:bytes=0xffffffffu;break;
        case 5:at=7;bytes=2;break;
        default:break;
        }
        const auto actual=bytes && bytes<size?bytes:1u;
        for(unsigned b=0;b<actual;++b)code(unit)[(at+b)&mask(unit)]^=std::uint8_t(rng());
        code_changed(unit,at,bytes);
        if(round%12u==6)for(unsigned batch=0;batch<4;++batch) {
            const auto spot=(at+batch*40u)&mask(unit);
            code(unit)[spot]^=std::uint8_t(rng());code_changed(unit,spot,1);
        }
        for(unsigned query=0;query<24;++query) {
            const auto pc=(query<8?at+8u*query:rng())&mask(unit)&~7u;
            const auto latency=query%5u==0?14u:query%3u==0?0u:query&1u?7u:13u;
            check(unit,pc,latency);check(unit,pc,latency);
        }
        // A distant tiny write must preserve a primed real value, not merely
        // return an equal value after silently redoing the analysis.
        const auto pc=64u;check(unit,pc,7);const auto cached=q.delay[unit][pc>>3];const auto epoch=q.delay_epoch[unit];
        code(unit)[size/2u]^=1u;code_changed(unit,size/2u,1);
        if(!full_control)need(epoch==q.delay_epoch[unit] && same(cached,q.delay[unit][pc>>3]),"real disjoint cached value did not survive");
        check(unit,pc,7);
    }
}
void wrap_and_state() {
    auto &q=detail::g_continuation_q;
    for(unsigned unit:{0u,1u}) {
        blank(unit);check(unit,64,7);
        q.delay_epoch[unit]=std::numeric_limits<std::uint32_t>::max();
        for(auto &entry:q.delay[unit])entry={1,0xdeadbeefu,7};
        code_changed(unit);
        need(q.delay_epoch[unit]==1,"delay epoch did not restart at1");
        for(const auto &entry:q.delay[unit])need(entry.generation==0 && entry.value==0 && entry.latency==0,"delay epoch wrap retained old alias");
        check(unit,64,7);
        q.generation[unit]=std::numeric_limits<std::uint32_t>::max();
        for(auto &entry:q.delay[unit])entry={1,0xdeadbeefu,7};
        code_changed(unit,0x300,1);
        need(q.generation[unit]==1,"global generation did not restart at1");
        for(const auto &entry:q.delay[unit])need(entry.generation==0 && entry.value==0 && entry.latency==0,"global wrap retained delay entry");
        check(unit,64,7);
    }
    state::Writer saved;vu::state(saved);
    std::array<unsigned,2> before{};
    for(unsigned unit:{0u,1u}){check(unit,64,7);before[unit]=q.delay_epoch[unit];code(unit)[64]^=0xffu;}
    state::Reader restored(saved.out.data(),saved.out.size());vu::state(restored);
    for(unsigned unit:{0u,1u}){need(q.delay_epoch[unit]!=before[unit],"actual state load did not invalidate delay epoch");check(unit,64,7);}
}
}
int main() {
    for(unsigned unit:{0u,1u}){exact_invalidation(unit);changing_hazard(unit);histories(unit);}
    wrap_and_state();need(reused>0 && changed_outputs==2,"no real cache reuse or changing-output coverage");
    std::printf("Q delay history: %u checks, %u retained/warm hits, %u changed-output fixtures; both units, latency keys/fallback, partial/wrapped/batched writes, epoch/global wrap and actual state load; full_control=%u\n",checks,reused,changed_outputs,unsigned(full_control));
}
