#include "ps2/vu_ops.hpp"
#ifndef PS2_VU_ISA_NAME
#error PS2_VU_ISA_NAME required
#endif
extern "C" __attribute__((noinline)) void PS2_VU_ISA_NAME(const ps2::Reg128* a,const ps2::Reg128* b,const ps2::Reg128* c,unsigned fraction,unsigned mask,ps2::Reg128* out) {
    using namespace ps2::vuops;
    const auto va=vload(*a),vb=vload(*b),vc=vload(*c);
    vstore(out[0],vfix(va));vstore(out[1],vadd(va,vb));vstore(out[2],vsub(va,vb));
    vstore(out[3],vmul(va,vb));vstore(out[4],vmadd(vc,va,vb));vstore(out[5],vmsub(vc,va,vb));
    vstore(out[6],vmax(va,vb));vstore(out[7],vmin(va,vb));vstore(out[8],vabs(va));
    vstore(out[9],vftoi(va,fraction));vstore(out[10],vitof(va,fraction));
    ps2::Vu0Regs r{};r.status=c->w[0];flags(r,*a,mask);
    out[11].w[0]=r.mac;out[11].w[1]=r.status;out[11].w[2]=out[11].w[3]=0;
}
