#include "ps2/cpu.hpp"
#include <cstdio>
#include <cstring>
#include <random>
#include <xmmintrin.h>
extern "C" void vu_isa_reference(const ps2::Reg128*,const ps2::Reg128*,const ps2::Reg128*,unsigned,unsigned,ps2::Reg128*);
extern "C" void vu_isa_avx2(const ps2::Reg128*,const ps2::Reg128*,const ps2::Reg128*,unsigned,unsigned,ps2::Reg128*);
int main() {
    __builtin_cpu_init();if(!__builtin_cpu_supports("avx2"))return 77;
    constexpr unsigned edges[]={0,0x80000000u,1,0x807fffffu,0x00800000u,0x80800000u,0x3f800000u,0xbf800000u,0x7f7fffffu,0xff7fffffu,0x7f800000u,0xff800000u,0x7fc00000u,0xffc00000u,0x7fffffffu,0xffffffffu};
    constexpr unsigned fractions[]={0,4,12,15};std::mt19937 rng(0x35a7f2);unsigned count=0;const auto saved=_mm_getcsr();
    for(unsigned rounding=0;rounding<4;++rounding)for(unsigned mode=0;mode<4;++mode)for(unsigned i=0;i<65536;++i) {
        ps2::Reg128 a{},b{},c{},expected[12]{},actual[12]{};
        for(unsigned lane=0;lane<4;++lane) {
            a.w[lane]=rng();b.w[lane]=rng();c.w[lane]=rng();
            if((i&3)==0) {a.w[lane]=edges[(i>>(lane*4))&15];b.w[lane]=edges[((i>>4)+lane)&15];c.w[lane]=edges[((i>>8)+lane*3)&15];}
        }
        const auto mxcsr=0x1f80|(rounding<<13)|((mode&1)?0x8000:0)|((mode&2)?0x40:0);
        const auto fraction=fractions[i&3],mask=rng();
        _mm_setcsr(mxcsr);vu_isa_reference(&a,&b,&c,fraction,mask,expected);const auto old_state=_mm_getcsr();
        _mm_setcsr(mxcsr);vu_isa_avx2(&a,&b,&c,fraction,mask,actual);const auto new_state=_mm_getcsr();
        if(std::memcmp(expected,actual,sizeof actual)||old_state!=new_state) {
            _mm_setcsr(saved);std::fprintf(stderr,"ISA differential failed mode%u rounding%u case%u CSR%x/%x\n",mode,rounding,i,old_state,new_state);return 1;
        }
        ++count;
    }
    _mm_setcsr(saved);std::printf("VU SSE2/AVX2: %u raw-bit vector arithmetic/conversion/flag cases;16 FP modes and MXCSR identical\n",count);
}
