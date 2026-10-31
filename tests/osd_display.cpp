#include "kernel.hpp"
#include "ps2/system.hpp"
#include "ps2/memory.hpp"
#include <cstdio>
int main() {
    using namespace ps2;
    Cpu cpu{};
    const auto syscall=[&](unsigned number){cpu.r[3].w[0]=number;cpu.r[4].w[0]=0x2000;kernel::handle_syscall(cpu,0x1000);};
    // Preserve every other bit, and retain Set/Get semantics after fresh boot.
    for(unsigned mode:{0u,1u,2u}) {
        g_options.osd_screen_type=mode;
        st32(0x2000,0x1234ABCDu);syscall(0x4A);
        kernel::reset();syscall(0x4B);
        if(ld32(0x2000)!=((0x1234ABCDu&~6u)|(mode<<1)))return 1;
        st32(0x2000,0x65432101u);syscall(0x4A);st32(0x2000,0);syscall(0x4B);
        if(ld32(0x2000)!=0x65432101u)return 2;
    }
    std::puts("OSD: fresh-boot screen selection and full guest Set/Get roundtrip PASS");
}
