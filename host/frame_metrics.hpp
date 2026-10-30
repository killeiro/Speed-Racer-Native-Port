#pragma once
#include "ps2/system.hpp"
#include <chrono>
#include <cstdio>
#include <cstdlib>

namespace host {
// Called only by the emulation thread. Never reads its clock from the renderer.
inline void trace_simulation(double post_wait_ms, double pace_wait_ms) {
    static std::FILE *file = [] {
        const char *path = std::getenv("PS2_SIM_CSV");
        if (!path || !*path) return static_cast<std::FILE *>(nullptr);
        auto *f = std::fopen(path, "w");
        if (f) std::fputs("emulated_frame,ee_cycles,wall_s,interval_ms,post_wait_ms,pace_wait_ms,nominal_hz\n", f);
        return f;
    }();
    if (!file) return;
    using Clock = std::chrono::steady_clock;
    const auto now = Clock::now();
    static const auto start = now;
    static auto previous = now;
    std::fprintf(file, "%llu,%llu,%.9f,%.6f,%.6f,%.6f,%u\n",
        static_cast<unsigned long long>(ps2::frame_count()),
        static_cast<unsigned long long>(ps2::now()),
        std::chrono::duration<double>(now - start).count(),
        std::chrono::duration<double, std::milli>(now - previous).count(),
        post_wait_ms, pace_wait_ms, ps2::g_options.pal ? 50u : 60u);
    previous = now;
}
}
