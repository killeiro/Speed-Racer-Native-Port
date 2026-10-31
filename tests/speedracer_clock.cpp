#include "speedracer_clock.hpp"
#include <filesystem>
#include <fstream>
#include <limits>
#include <string>

namespace ps2 {
alignas(64) std::uint8_t g_ram[kRamSize+64]{};
Options g_options;
std::uint64_t frame_count(){return 100;}
}
int main() {
    using namespace speedracer::clock;
    auto put=[](std::uint32_t at,std::uint32_t value){std::memcpy(ps2::g_ram+at,&value,4);};
    auto time=[](float value){std::memcpy(ps2::g_ram+0x2000+96,&value,4);};
    if(sample(nullptr,0).valid || sample(ps2::g_ram,100).valid)return 1;
    put(kManagerGlobal,0x1000);put(0x1000+48,0x2000);put(0x2000,kRaceVtable);time(13.5f);
    auto s=sample(ps2::g_ram,ps2::kRamSize);
    if(!s.valid || s.scene!=0x2000 || s.seconds!=13.5f)return 2;
    for(auto bad : {0u,1u,0xfffffff0u,std::uint32_t(ps2::kRamSize-4)}) {
        put(kManagerGlobal,bad);if(sample(ps2::g_ram,ps2::kRamSize).valid)return 3;
        put(kManagerGlobal,0x1000);put(0x1000+48,bad);if(sample(ps2::g_ram,ps2::kRamSize).valid)return 4;
        put(0x1000+48,0x2000);
    }
    put(0x2000,0);if(sample(ps2::g_ram,ps2::kRamSize).valid)return 5;put(0x2000,kRaceVtable);
    for(float invalid : {-1.f,std::numeric_limits<float>::infinity(),std::numeric_limits<float>::quiet_NaN()}) {
        time(invalid);if(sample(ps2::g_ram,ps2::kRamSize).valid)return 6;
    }
    time(13.5f);
    // Original race-setup and pause ABI, independent of clock progress.
    put(kRaceConfigGlobal,0x6000);put(0x6000,kSingleRaceVtable);
    put(0x6000+188,6u | ('T'<<8) | ('0'<<16) | ('3'<<24));
    put(0x6000+192,0);put(0x6000+88,2);put(0x6000+92,1);
    put(0x1000+44,0x3000);put(0x3000+56,0x4000);put(0x4000,kGameVtable);
    ps2::g_ram[0x4000+93]=1;
    auto state=sample(ps2::g_ram,ps2::kRamSize);
    if(!state.setup_valid || state.environment!=3 || state.circuit!=2 || state.direction!=1 || !state.pause_valid || !state.paused)return 10;
    for(auto vtable:{kAttractVtable,kChampionshipVtable,kSingleRaceVtable}) {
        put(0x6000,vtable);if(!sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 11;
    }
    put(0x6000,0);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 12;put(0x6000,kSingleRaceVtable);
    for(auto bad:{0u,1u,0xfffffff0u,std::uint32_t(ps2::kRamSize-4)}) {
        put(kRaceConfigGlobal,bad);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 13;
        put(kRaceConfigGlobal,0x6000);put(0x1000+44,bad);
        if(sample(ps2::g_ram,ps2::kRamSize).pause_valid)return 14;
        put(0x1000+44,0x3000);put(0x3000+56,bad);
        if(sample(ps2::g_ram,ps2::kRamSize).pause_valid)return 15;
        put(0x3000+56,0x4000);
    }
    ps2::g_ram[0x4000+93]=2;if(sample(ps2::g_ram,ps2::kRamSize).pause_valid)return 16;
    ps2::g_ram[0x4000+93]=0;if(!sample(ps2::g_ram,ps2::kRamSize).pause_valid || sample(ps2::g_ram,ps2::kRamSize).paused)return 17;
    put(0x4000,0);if(sample(ps2::g_ram,ps2::kRamSize).pause_valid)return 18;put(0x4000,kGameVtable);
    // Tagged heap string representation; reject range/length/termination and
    // enums instead of labeling random RAM or future layouts as a track.
    put(0x6000+188,1);put(0x6000+192,3);put(0x6000+196,0x7001);
    std::memcpy(ps2::g_ram+0x7001,"T01",4);
    if(sample(ps2::g_ram,ps2::kRamSize).environment!=1)return 19;
    for(auto bad:{0u,0xfffffff0u,std::uint32_t(ps2::kRamSize-2)}) {
        put(0x6000+196,bad);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 20;
    }
    put(0x6000+196,0x7001);
    for(auto bad:{0u,4u,0xffffffffu}) {
        put(0x6000+192,bad);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 21;
    }
    put(0x6000+192,3);
    for(const char* bad:{"T00","T07","T11","X03","T0,","T0\n"}) {
        std::memcpy(ps2::g_ram+0x7001,bad,4);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 22;
    }
    std::memcpy(ps2::g_ram+0x7001,"T01X",4);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 23;
    std::memcpy(ps2::g_ram+0x7001,"T01",4);
    put(0x6000+88,3);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 24;put(0x6000+88,0);
    put(0x6000+92,2);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid)return 25;put(0x6000+92,0);
    put(0x2000,0);if(sample(ps2::g_ram,ps2::kRamSize).setup_valid || sample(ps2::g_ram,ps2::kRamSize).pause_valid)return 26;
    put(0x2000,kRaceVtable);
    unsigned called=0;ps2::g_options.on_vblank=[&]{++called;};
    {Trace disabled(nullptr);ps2::g_options.on_vblank();}
    ps2::g_options.on_vblank();if(called!=2)return 7;
    const auto name="speedracer-clock-test-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count())+".csv";
    {
        Trace enabled(name.c_str());ps2::g_options.on_vblank();
        time(13.75f);ps2::g_options.on_vblank();
        put(0x2000,0);ps2::g_options.on_vblank();
    }
    ps2::g_options.on_vblank();if(called!=6)return 8;
    std::ifstream file(name);std::string line;unsigned lines=0,valid=0,invalid=0;
    while(std::getline(file,line)) {
        ++lines;
        if(lines==1 && line!="emulated_frame,wall_s,valid,scene_id,game_seconds,setup_valid,environment,circuit,direction,pause_valid,paused")return 27;
        if(lines==1)continue;
        unsigned long long frame=0;double wall=0,seconds=0;unsigned v=0,scene=0;
        if(std::sscanf(line.c_str(),"%llu,%lf,%u,%u,%lf",&frame,&wall,&v,&scene,&seconds)!=5)return 28;
        if(v==1 && scene==8192)++valid;
        if(v==0 && scene==0)++invalid;
    }
    file.close();std::filesystem::remove(name);
    if(lines!=4 || valid!=2 || invalid!=1)return 9;
    std::puts("Scene clock: guarded layout/pointers, finite values, opt-in callback chaining/restoration and CSV PASS");
}
