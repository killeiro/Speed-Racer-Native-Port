#include "vu_profile.hpp"
#include <cstdio>
int main() {
    ps2::vu::ContinuationProfile<4> profile;
    profile.add(0x80,10,true,false,0);
    profile.add(0x80,10,false,false,7);
    profile.add(0x80,11,false,false,9);
    profile.add(0x88,11,false,true,12);
    profile.add(0x90,12,true,true,0);
    profile.add(0x98,13,false,false,19);
    unsigned rows=0; std::uint64_t native=0,fallback=0,instructions=0;
    for(const auto &r:profile.rows) {
        if(!r.native && !r.fallback) continue;
        ++rows; native+=r.native; fallback+=r.fallback; instructions+=r.instructions;
        if(r.pc==0x80 && r.key==10 && (r.native!=1 || r.fallback!=1 || r.instructions!=7)) return 1;
    }
    if(rows!=4 || native!=2 || fallback!=3 || instructions!=28 || profile.dropped_segments!=1 || profile.dropped_instructions!=19) return 2;
    // Existing identities continue accumulating after full capacity. A changed
    // ProgramFn availability must not silently merge into an earlier row.
    profile.add(0x80,10,false,false,5);
    profile.add(0x80,10,false,true,23);
    if(profile.dropped_segments!=2 || profile.dropped_instructions!=42) return 3;
    std::puts("VU profile: identity separation, continuation fallback and bounded overflow passed");
}
