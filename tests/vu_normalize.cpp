#include "ps2/vu_ops.hpp"
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <xmmintrin.h>

extern "C" void vu_normalize_reference(unsigned,const ps2::Reg128*,const ps2::Reg128*,ps2::Reg128*);

// The driver stays baseline x64 even for the AVX2 test, so the CPU guard can
// execute safely before calling the explicitly targeted production wrappers.
#if defined(PS2_VU_NORMALIZE_AVX2)
#define NORMALIZE_TARGET __attribute__((target("avx2,no-fma"),noinline))
#else
#define NORMALIZE_TARGET __attribute__((noinline))
#endif
namespace {
using ps2::Reg128;
using namespace ps2::vuops;
NORMALIZE_TARGET void production_fix(const Reg128 *a,const Reg128 *,Reg128 *out){
    vstore(*out,vfix(vload(*a)));
}
NORMALIZE_TARGET void production_right_one(const Reg128 *a,const Reg128 *,Reg128 *out){
    vstore(*out,vmuln(vload(*a),vsplat(0x3f800000u)));
}
NORMALIZE_TARGET void production_left_one(const Reg128 *a,const Reg128 *,Reg128 *out){
    vstore(*out,vmuln(vsplat(0x3f800000u),vload(*a)));
}
NORMALIZE_TARGET void production_dynamic(const Reg128 *a,const Reg128 *b,Reg128 *out){
    vstore(*out,vmuln(vload(*a),vload(*b)));
}
using Function=void (*)(const Reg128*,const Reg128*,Reg128*);
constexpr Function production[]={production_fix,production_right_one,production_left_one,production_dynamic};
constexpr const char *names[]={"vfix","vmuln_right_one","vmuln_left_one","vmuln_dynamic"};

struct GuardedOutput { Reg128 prefix,value,suffix; };
struct Frame {
    Reg128 a,b;
    ps2::Vu0Regs preserved_guest;
    GuardedOutput expected,actual;
};
std::uint32_t random_state=0x56464958u;
std::uint32_t random_bits(){random_state^=random_state<<13;random_state^=random_state>>17;random_state^=random_state<<5;return random_state;}
std::uint64_t vectors=0,status_differences[4]={};
std::uint32_t status_xor[4]={};

bool check(Frame &frame,const Reg128 &one,unsigned csr){
    const auto before_a=frame.a,before_b=frame.b;
    Reg128 guard;std::memset(&guard,0xa5,sizeof guard);
    std::array<unsigned char,sizeof(ps2::Vu0Regs)> before_guest;
    std::memcpy(before_guest.data(),&frame.preserved_guest,before_guest.size());
    // vfix accepts raw bits. The n-suffixed arithmetic API accepts only
    // previously normalized operands; arbitrary NaN payload propagation is
    // outside that contract and may differ with compiler operand selection.
    // Derive canonical inputs using the independent historical oracle.
    Reg128 normalized_a,normalized_b;
    _mm_setcsr(csr);vu_normalize_reference(0,&frame.a,&frame.b,&normalized_a);
    _mm_setcsr(csr);vu_normalize_reference(0,&frame.b,&frame.a,&normalized_b);
    const auto before_normalized_a=normalized_a,before_normalized_b=normalized_b;
    ++vectors;
    for(unsigned operation=0;operation<4;++operation){
        std::memset(&frame.expected,0xa5,sizeof frame.expected);
        std::memset(&frame.actual,0xa5,sizeof frame.actual);
        const Reg128 *pa=operation?&normalized_a:&frame.a;
        const Reg128 *pb=operation?&normalized_b:&frame.b;
        const Reg128 *ra=pa,*rb=pb;
        if(operation==1)rb=&one;
        if(operation==2){ra=&one;rb=pa;}
        _mm_setcsr(csr);
        vu_normalize_reference(operation!=0,ra,rb,&frame.expected.value);
        const auto reference_csr=_mm_getcsr();
        _mm_setcsr(csr);
        production[operation](pa,pb,&frame.actual.value);
        const auto production_csr=_mm_getcsr();
        if(std::memcmp(&frame.expected.value,&frame.actual.value,sizeof frame.expected.value)||
           std::memcmp(&frame.expected.prefix,&guard,sizeof guard)||std::memcmp(&frame.expected.suffix,&guard,sizeof guard)||
           std::memcmp(&frame.actual.prefix,&guard,sizeof guard)||std::memcmp(&frame.actual.suffix,&guard,sizeof guard)){
            std::fprintf(stderr,"normalization mismatch vector=%llu operation=%s csr=%04x input=%08x,%08x,%08x,%08x\n",
                static_cast<unsigned long long>(vectors),names[operation],csr,frame.a.w[0],frame.a.w[1],frame.a.w[2],frame.a.w[3]);return false;
        }
        if((reference_csr&~63u)!=(csr&~63u)||(production_csr&~63u)!=(csr&~63u)){
            std::fprintf(stderr,"FP control changed vector=%llu operation=%s csr=%04x reference=%04x production=%04x\n",
                static_cast<unsigned long long>(vectors),names[operation],csr,reference_csr,production_csr);return false;
        }
        if(reference_csr!=production_csr){++status_differences[operation];status_xor[operation]|=reference_csr^production_csr;}
        if(std::memcmp(&frame.a,&before_a,sizeof before_a)||std::memcmp(&frame.b,&before_b,sizeof before_b)||
           std::memcmp(&normalized_a,&before_normalized_a,sizeof normalized_a)||
           std::memcmp(&normalized_b,&before_normalized_b,sizeof normalized_b)||
           std::memcmp(&frame.preserved_guest,before_guest.data(),before_guest.size())){
            std::fprintf(stderr,"input/guest state modified operation=%s\n",names[operation]);return false;
        }
    }
    return true;
}
}

int main(){
#if defined(PS2_VU_NORMALIZE_AVX2)
    __builtin_cpu_init();if(!__builtin_cpu_supports("avx2"))return 77;
#endif
    const auto saved=_mm_getcsr();
    Frame frame{};std::memset(&frame.preserved_guest,0x6d,sizeof frame.preserved_guest);
    Reg128 one;for(auto &x:one.w)x=0x3f800000u;
    constexpr unsigned mantissas[]={0,1,0x3fffff,0x7fffff};
    bool ok=true;
    for(unsigned mode=0;mode<4 && ok;++mode)for(unsigned rounding=0;rounding<4 && ok;++rounding){
        const unsigned csr=0x1f80u|((mode&1u)?0x40u:0u)|((mode&2u)?0x8000u:0u)|(rounding<<13);
        for(unsigned exponent=0;exponent<256 && ok;++exponent)for(unsigned sign=0;sign<2 && ok;++sign)
        for(unsigned rotation=0;rotation<4 && ok;++rotation){
            for(unsigned lane=0;lane<4;++lane){
                frame.a.w[lane]=(exponent<<23)|((sign^(lane&1u))<<31)|mantissas[(lane+rotation)&3u];
                frame.b.w[lane]=random_bits();
            }
            if((exponent&7u)==0)frame.b=one; // Dynamic fallback also sees runtime +1.
            ok=check(frame,one,csr);
        }
        for(unsigned trial=0;trial<100000 && ok;++trial){
            for(unsigned lane=0;lane<4;++lane){frame.a.w[lane]=random_bits();frame.b.w[lane]=random_bits();}
            if(trial%13u==0)frame.b=one;
            ok=check(frame,one,csr);
        }
    }
    _mm_setcsr(saved);
    if(!ok)return 1;
    if(vectors!=1632768u){std::fprintf(stderr,"unexpected vector coverage\n");return 2;}
    std::printf("VU normalization: %llu vectors,4 operations each,16 FP modes; raw vfix and canonical multiply values exact; controls/inputs/guest state preserved\n",
        static_cast<unsigned long long>(vectors));
    for(unsigned i=0;i<4;++i)std::printf("host sticky status differences allowed: operation=%s count=%llu xor_union=%02x\n",
        names[i],static_cast<unsigned long long>(status_differences[i]),status_xor[i]);
}
