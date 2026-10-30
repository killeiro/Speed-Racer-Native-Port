#pragma once
#include "ps2/host_path.hpp"
#include <algorithm>
#include <array>
#include <cerrno>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <limits>
#include <string>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace ps2::vu::timing {
// VU-owner only until the ordered shutdown ACK. Wall times include waits inside
// the measured call; they are not exclusive CPU time or GPU time.
class Profile {
public:
    struct Clock {
        using time_point=std::int64_t;
        static time_point now() {
#ifdef _WIN32
            LARGE_INTEGER t{};QueryPerformanceCounter(&t);return t.QuadPart;
#else
            return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
#endif
        }
        static std::int64_t frequency() {
#ifdef _WIN32
            LARGE_INTEGER f{};return QueryPerformanceFrequency(&f)?f.QuadPart:0;
#else
            return 1000000000;
#endif
        }
    };
    enum Scope : std::uint32_t { Local, Native, Fallback };
    struct Ticket {
        bool on=false;
        Clock::time_point lookup{},found{},body{};
        void lookup_done() { if(on) found=Clock::now(); }
        void body_begin() { if(on) body=Clock::now(); }
    };
private:
    struct Row {
        bool used=false;
        Scope scope=Local;
        std::uint32_t pc=0,bytes=0;
        std::uint64_t key=0,samples=0,lookup_ns=0,run_ns=0,max_lookup_ns=0,max_run_ns=0,instructions=0;
    };
    std::array<Row,1024> rows_{};
    std::string path_;
    bool valid_=true;
    std::uint64_t ticks_=0;
    std::uint64_t from_=10611,to_=11999,frame_=1,markers_=0,eligible_=0,samples_=0;
    std::uint64_t total_lookup_=0,total_run_=0,dropped_=0,drop_lookup_=0,drop_run_=0,drop_instructions_=0;
    std::uint32_t random_=0x46947u;
    std::uint64_t setting(const char *name,std::uint64_t fallback) {
        const char *text=std::getenv(name);
        if(!text) return fallback;
        char *end=nullptr;errno=0;
        const auto value=std::strtoull(text,&end,10);
        if(!*text || *text=='-' || *text=='+' || errno || !end || *end) valid_=false;
        return value;
    }
    std::uint64_t ns(Clock::time_point a,Clock::time_point b) const {
        const auto elapsed=static_cast<std::uint64_t>(b-a);
        // Integer only, including QPC conversion; no FP state perturbation.
        return (elapsed/ticks_)*1000000000ull+((elapsed%ticks_)*1000000000ull)/ticks_;
    }
public:
    explicit Profile(const char *path):path_(path) {
        const auto frequency=Clock::frequency();
        valid_=frequency>0 && static_cast<std::uint64_t>(frequency)<=std::numeric_limits<std::uint64_t>::max()/1000000000ull;
        ticks_=valid_?static_cast<std::uint64_t>(frequency):1;
        from_=setting("PS2_VU_TIMING_FROM",10611);to_=setting("PS2_VU_TIMING_TO",11999);
        valid_=valid_ && from_>0 && from_<=to_;
    }
    // A marker follows all VIF/VU work for this EE frame. Do not read the EE
    // global frame counter on the VU worker. Fresh boot only, no state loads.
    void present_marker() {
        ++markers_;
        if(frame_!=std::numeric_limits<std::uint64_t>::max()) ++frame_;
        else valid_=false;
    }
    Ticket begin() {
        if(!valid_ || frame_<from_ || frame_>to_) return {};
        ++eligible_;
        random_^=random_<<13;random_^=random_>>17;random_^=random_<<5;
        if((random_&63u)!=0) return {};
        Ticket t;t.on=true;t.lookup=Clock::now();return t;
    }
    void add(const Ticket &t,Scope scope,std::uint32_t pc,std::uint64_t key,std::uint32_t bytes,std::uint32_t instructions=0) {
        if(!t.on) return;
        const auto ended=Clock::now();
        const auto lookup=ns(t.lookup,t.found),run=ns(t.body,ended);
        ++samples_;total_lookup_+=lookup;total_run_+=run;
        std::uint64_t h=key^(std::uint64_t(pc)<<32)^bytes^(std::uint64_t(scope)<<57);
        h^=h>>30;h*=0xbf58476d1ce4e5b9ull;h^=h>>27;
        for(unsigned probe=0;probe<16;++probe) {
            auto &r=rows_[(h+probe)&1023u];
            if(!r.used) {r.used=true;r.scope=scope;r.pc=pc;r.key=key;r.bytes=bytes;}
            if(r.scope!=scope || r.pc!=pc || r.key!=key || r.bytes!=bytes) continue;
            ++r.samples;r.lookup_ns+=lookup;r.run_ns+=run;r.instructions+=instructions;
            r.max_lookup_ns=std::max(r.max_lookup_ns,lookup);r.max_run_ns=std::max(r.max_run_ns,run);
            return;
        }
        ++dropped_;drop_lookup_+=lookup;drop_run_+=run;drop_instructions_+=instructions;
    }
    void dump() const {
        if(!valid_) {std::fprintf(stderr,"[vu-timing] invalid_phase_config write_ok=0\n");return;}
        auto *file=host_path::open(path_.c_str(),"wb");
        if(!file) {std::fprintf(stderr,"[vu-timing] cannot_open write_ok=0\n");return;}
        std::fputs("scope,pc,key,bytes,sampled_calls,lookup_wall_ns,run_wall_ns,max_lookup_wall_ns,max_run_wall_ns,sampled_fallback_instructions,phase_from,phase_to\n",file);
        const char *names[]={"local_prefix","full_native","fallback"};
        for(const auto &r:rows_) if(r.used) std::fprintf(file,"%s,%04X,%016llX,%u,%llu,%llu,%llu,%llu,%llu,%llu,%llu,%llu\n",
            names[r.scope],r.pc,static_cast<unsigned long long>(r.key),r.bytes,
            static_cast<unsigned long long>(r.samples),static_cast<unsigned long long>(r.lookup_ns),static_cast<unsigned long long>(r.run_ns),
            static_cast<unsigned long long>(r.max_lookup_ns),static_cast<unsigned long long>(r.max_run_ns),static_cast<unsigned long long>(r.instructions),
            static_cast<unsigned long long>(from_),static_cast<unsigned long long>(to_));
        const bool failed=std::ferror(file)!=0;const int closed=std::fclose(file);
        std::fprintf(stderr,"[vu-timing] phase=%llu-%llu present_markers=%llu next_frame=%llu eligible=%llu sampled=%llu rate=1/64 seed=0x46947 dropped=%llu lookup_ns=%llu run_ns=%llu drop_lookup_ns=%llu drop_run_ns=%llu drop_instructions=%llu write_ok=%u\n",
            static_cast<unsigned long long>(from_),static_cast<unsigned long long>(to_),static_cast<unsigned long long>(markers_),static_cast<unsigned long long>(frame_),
            static_cast<unsigned long long>(eligible_),static_cast<unsigned long long>(samples_),static_cast<unsigned long long>(dropped_),
            static_cast<unsigned long long>(total_lookup_),static_cast<unsigned long long>(total_run_),static_cast<unsigned long long>(drop_lookup_),
            static_cast<unsigned long long>(drop_run_),static_cast<unsigned long long>(drop_instructions_),unsigned(!failed && closed==0));
    }
};
}
