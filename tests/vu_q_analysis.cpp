#include "ps2/vu_q_analysis.hpp"
#include <cstdio>
#include <random>

namespace {
constexpr std::uint32_t nop = 0x80000030u, upper_nop = 0x2ffu;
using Code = std::array<std::uint8_t, 16384>;
void put(Code &code, unsigned pc, unsigned lo, unsigned hi = upper_nop) {
    std::memcpy(code.data()+pc,&lo,4); std::memcpy(code.data()+pc+4,&hi,4);
}

bool mutation_checks(unsigned &checks) {
    using namespace ps2::vu;
    std::mt19937 random(0x51434847u);
    QReadIndex::Stats stats;
    QReadIndex index(&stats),full;
    Code code,other;
    for(unsigned mask:{4095u,16383u}) {
        const auto size=mask+1u;
        for(unsigned pc=0;pc<code.size();pc+=8)put(code,pc,nop);
        put(code,64,0x80020bbcu);put(code,120,nop,0x01e20828u);
        index.reset(code.data(),mask);
        const auto check=[&](unsigned pc) {
            const auto reference=ps2::vu::q_read_kind(code.data(),mask,pc);
            full.reset(code.data(),mask);
            if(index.read(pc)!=reference || full.read(pc)!=reference)return false;
            ++checks;return true;
        };
        if(!check(0))return false; // Materialize initial graph before mutations.
        for(unsigned round=0;round<320;++round) {
            auto address=random();unsigned bytes=1u+random()%24u;
            switch(round%10) {
            case 0:address=size-3u;bytes=21;break; // byte-level wrap, two instructions.
            case 1:bytes=2048;break; // dense union uses bounded full fallback.
            case 2:bytes=0;break; // unknown extent must reset even at fixed pointer.
            case 3:bytes=size;break;
            default:break;
            }
            const auto actual=bytes?bytes:1u;
            for(unsigned i=0;i<actual;++i)code[(address+i)&mask]^=std::uint8_t(random());
            index.changed(code.data(),mask,address,bytes);
            if(round%10==4) { // More mutations before any query: union, not snapshot.
                for(unsigned batch=0;batch<4;++batch) {
                    const auto at=(address+batch*8u)&mask;
                    const auto lo=batch&1 ? 0x50000000u|(random()&0x7ffu) : nop;
                    put(code,at&~7u,lo,upper_nop|(batch==3?0x80000000u:0u));
                    index.changed(code.data(),mask,at&~7u,8);
                }
            }
            for(unsigned query=0;query<12;++query) {
                const auto pc=query<4 ? ((address+query*8u)&mask)&~7u : (random()&mask)&~7u;
                if(!check(pc)) {std::fprintf(stderr,"Q changed mismatch mask=%x round=%u pc=%x\n",mask,round,pc);return false;}
            }
        }
        // Pointer changes are full invalidations even if bytes happen to match.
        other=code;index.changed(other.data(),mask,0,8);
        if(index.read(0)!=q_read_kind(other.data(),mask,0))return false;
        index.changed(code.data(),mask,0,8);
        if(!check(0))return false;
        // Ordered fan-in mutation: insertion/removal order must match full scan,
        // including budget-sensitive backward traversal in a very dense graph.
        for(unsigned pc=0;pc<size;pc+=8)put(code,pc,0x50000000u|((0u-(pc+8u)/8u)&0x7ffu));
        index.reset(code.data(),mask);if(!check(0))return false;
        for(unsigned round=0;round<32;++round) {
            const auto pc=(random()&mask)&~7u;
            put(code,pc,round&1?nop:0x40000000u|(random()&0x7ffu));
            index.changed(code.data(),mask,pc,8);
            if(!check(0) || !check(pc))return false;
        }
    }
    if(!stats.full_builds || !stats.incremental_updates || !stats.incremental_nodes || !stats.incremental_fallbacks)return false;
    std::printf("Q changed: full_builds=%llu full_nodes=%llu updates=%llu nodes=%llu fallbacks=%llu\n",
        static_cast<unsigned long long>(stats.full_builds),static_cast<unsigned long long>(stats.full_nodes),
        static_cast<unsigned long long>(stats.incremental_updates),static_cast<unsigned long long>(stats.incremental_nodes),
        static_cast<unsigned long long>(stats.incremental_fallbacks));
    return true;
}
}
int main() {
    using namespace ps2::vu;
    std::mt19937 random(0x51494e44);
    QReadIndex index;
    unsigned checks = 0, kinds[3] = {};
    const auto compare = [&](const Code &code, unsigned mask, unsigned pc) {
        const auto expected = q_read_kind(code.data(),mask,pc);
        for (unsigned repeat=0;repeat<2;++repeat) {
            const auto actual = index.read(pc);
            if (actual != expected) {
                std::fprintf(stderr,"Q index mismatch mask=%x pc=%x expected=%u actual=%u check=%u\n",mask,pc,expected,actual,checks);
                return false;
            }
            ++checks; ++kinds[actual];
        }
        return true;
    };
    for (unsigned mask : {4095u,16383u}) {
        Code code;
        for (unsigned pc=0;pc<code.size();pc+=8) put(code,pc,nop);
        // DIV/RSQRT, WAITQ, wrapped predecessors, and direct same-instruction Q.
        for (unsigned op : {0x80020bbcu,0x80020bbeu,0x800003bfu}) {
            put(code,mask&~7u,op);
            index.reset(code.data(),mask);
            for (unsigned pc : {0u,8u,48u,mask&~7u}) if(!compare(code,mask,pc))return 1;
        }
        // Dense loops/fan-in exercise the exact reference traversal budget/order.
        for (unsigned pc=0;pc<=mask;pc+=8)
            put(code,pc,0x50000000u|((0u-(pc+8u)/8u)&0x7ffu));
        index.reset(code.data(),mask);
        if(!compare(code,mask,0))return 1;
        for (unsigned trial=0;trial<160;++trial) {
            for (unsigned pc=0;pc<code.size();pc+=8) put(code,pc,nop);
            for (unsigned i=0;i<128;++i) {
                const auto pc=(random()&mask)&~7u;
                auto lo=nop, hi=upper_nop;
                switch(random()%9) {
                case 0: lo=0x80020bbcu;break;
                case 1: lo=0x80020bbeu;break;
                case 2: lo=0x800003bfu;break;
                case 3: lo=0x50000000u|(random()&0x7ffu);break;
                case 4: lo=0x40000000u|(random()&0x7ffu);break;
                case 5: lo=0x48000800u;break;
                case 6: lo=0x420f0000u|(random()&0x7ffu);break;
                case 7: hi=0x01e20828u|(random()&0x7c0u);break;
                default: lo=0x01e30800u|(random()&0x7ffu);break;
                }
                if(random()%7==0)hi|=0x40000000u;
                if(random()%11==0)hi|=0x80000000u;
                put(code,pc,lo,hi);
            }
            for (unsigned phase=0;phase<3;++phase) {
                // The pointer stays fixed while graph, upper/E/I bits and dataflow change.
                const auto at=(random()&mask)&~7u;
                put(code,at,phase==1?0x50000000u|(random()&0x7ffu):0x80020bbeu,
                    upper_nop|(phase==2?0x80000000u:0u));
                index.reset(code.data(),mask);
                for(unsigned i=0;i<16;++i) {
                    const auto pc=i<4?((at+i*8u)&mask):((random()&mask)&~7u);
                    if(!compare(code,mask,pc))return 1;
                }
            }
        }
    }
    if(!mutation_checks(checks))return 3;
    if(!kinds[0]||!kinds[1]||!kinds[2])return 2;
    std::printf("Q index: %u differential checks passed (dynamic/new/old %u/%u/%u)\n",checks,kinds[0],kinds[1],kinds[2]);
}
