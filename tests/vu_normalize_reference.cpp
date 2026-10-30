// Historical float-threshold normalization oracle. Kept in a separate TU
// with no link-time optimization; it must not call production vfix/vmuln.
#include "ps2/cpu.hpp"
#include <cstdint>
#include <cstring>

namespace {
using U4=std::uint32_t __attribute__((vector_size(16)));
using I4=std::int32_t __attribute__((vector_size(16)));
using F4=float __attribute__((vector_size(16)));
inline U4 load(const ps2::Reg128 &r){U4 v;std::memcpy(&v,&r,16);return v;}
inline U4 normalize(U4 x){
    const I4 clamped=__builtin_elementwise_min((I4)(x&0x7fffffffu),
        (I4){0x7f7fffff,0x7f7fffff,0x7f7fffff,0x7f7fffff});
    const I4 normal=(F4)clamped>=(F4)(I4){0x00800000,0x00800000,0x00800000,0x00800000};
    return (x&0x80000000u)|(U4)(clamped&normal);
}
}

extern "C" __attribute__((noinline)) void vu_normalize_reference(
    unsigned multiply,const ps2::Reg128 *a,const ps2::Reg128 *b,ps2::Reg128 *out){
    const U4 av=load(*a);
    const U4 result=multiply?normalize((U4)((F4)av*(F4)load(*b))):normalize(av);
    std::memcpy(out,&result,16);
}
