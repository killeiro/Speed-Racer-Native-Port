#pragma once
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <memory>
#include <utility>

namespace speedracer::clock {
// Audited SLUS_218.12 scene ABI. This is the active scene clock, not the
// per-player result/lap time. Reject menus/other layouts rather than guessing.
inline constexpr std::uint32_t kManagerGlobal = 0x005ed460u;
inline constexpr std::uint32_t kRaceVtable = 0x005ea650u;
inline constexpr std::uint32_t kRaceConfigGlobal = 0x005ed7a4u;
inline constexpr std::uint32_t kGameVtable = 0x005e5f20u;
// Original constructors: attract 0x40e1a0, championship 0x411ce0,
// single-race 0x4154a0. Unknown modes are deliberately left unidentified.
inline constexpr std::uint32_t kAttractVtable=0x005e6070u;
inline constexpr std::uint32_t kChampionshipVtable=0x005e6110u;
inline constexpr std::uint32_t kSingleRaceVtable=0x005e6210u;
struct Sample {
    bool valid = false; std::uint32_t scene = 0; float seconds = 0;
    bool setup_valid=false; std::uint32_t environment=0, circuit=0, direction=0;
    bool pause_valid=false, paused=false;
};
inline Sample sample(const std::uint8_t *ram, std::size_t size) {
    const auto fits = [size](std::uint32_t at, std::uint32_t bytes) {
        return at && !(at & 3u) && std::uint64_t(at) + bytes <= size;
    };
    if (!ram || !fits(kManagerGlobal,4)) return {};
    const auto load = [ram](std::uint32_t at) {
        std::uint32_t value;std::memcpy(&value,ram+at,4);return value;
    };
    const auto manager=load(kManagerGlobal);
    if (!fits(manager,52)) return {};
    const auto scene=load(manager+48);
    if (!fits(scene,100) || load(scene)!=kRaceVtable) return {};
    float seconds;std::memcpy(&seconds,ram+scene+96,4);
    if (!std::isfinite(seconds) || seconds<0) return {};
    Sample result{true,scene,seconds};
    // GASetTrackEnvironment (0x4075f0 -> 0x40ac40) writes the tagged
    // string at +188. Circuit/direction setters write +88/+92. This is the
    // selected race setup, not a localization string or inferred screenshot.
    if(fits(kRaceConfigGlobal,4)) {
        const auto config=load(kRaceConfigGlobal);
        if(fits(config,200)) {
            const auto vtable=load(config);
            if(vtable==kAttractVtable || vtable==kChampionshipVtable || vtable==kSingleRaceVtable) {
                const auto at=config+188;
                const bool heap=(ram[at]&1u)!=0;
                const auto length=heap?load(at+4):std::uint32_t(ram[at]>>1);
                const auto chars=heap?load(at+8):at+1;
                const auto circuit=load(config+88),direction=load(config+92);
                if(length==3 && chars && std::uint64_t(chars)+4<=size &&
                   ram[chars]=='T' && ram[chars+1]=='0' && ram[chars+2]>='1' &&
                   ram[chars+2]<='6' && !ram[chars+3] && circuit<=2 && direction<=1) {
                    result.setup_valid=true;result.environment=ram[chars+2]-'0';
                    result.circuit=circuit;result.direction=direction;
                }
            }
        }
    }
    // GAResumeGame follows manager+44 -> context+56, then 0x404600 changes
    // this object's byte +93. A stationary scene clock alone is NOT pause.
    const auto context=load(manager+44);
    if(fits(context,60)) {
        const auto game=load(context+56);
        if(fits(game,104) && load(game)==kGameVtable && ram[game+93]<=1) {
            result.pause_valid=true;result.paused=ram[game+93]!=0;
        }
    }
    return result;
}

// Install after boot/state load on the EE thread, after run_window installed
// its callback. Disabled by default; never reads EE RAM from the renderer.
class Trace {
    std::unique_ptr<std::FILE,decltype(&std::fclose)> file_{nullptr,&std::fclose};
    std::function<void()> previous_;
    std::chrono::steady_clock::time_point start_;
    bool installed_=false;
public:
    explicit Trace(const char *path) {
        if (!path || !*path) return;
        file_.reset(std::fopen(path,"wb"));
        if (!file_) {std::fprintf(stderr,"[race-clock] cannot open diagnostic CSV\n");return;}
        std::fputs("emulated_frame,wall_s,valid,scene_id,game_seconds,setup_valid,environment,circuit,direction,pause_valid,paused\n",file_.get());
        previous_=ps2::g_options.on_vblank;
        start_=std::chrono::steady_clock::now();
        ps2::g_options.on_vblank=[this] {
            const auto value=sample(ps2::g_ram,ps2::kRamSize);
            const double wall=std::chrono::duration<double>(std::chrono::steady_clock::now()-start_).count();
            std::fprintf(file_.get(),"%llu,%.9f,%u,%u,%.9f,%u,%u,%u,%u,%u,%u\n",
                static_cast<unsigned long long>(ps2::frame_count()),wall,
                unsigned(value.valid),value.scene,double(value.seconds),unsigned(value.setup_valid),
                value.environment,value.circuit,value.direction,unsigned(value.pause_valid),unsigned(value.paused));
            if(previous_)previous_();
        };
        installed_=true;
    }
    Trace(const Trace &)=delete;
    Trace &operator=(const Trace &)=delete;
    ~Trace() {
        if(installed_)ps2::g_options.on_vblank=std::move(previous_);
    }
};
}
