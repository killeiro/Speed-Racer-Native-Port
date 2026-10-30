#pragma once
#include "ps2/audio_diagnostics.hpp"
#include "ps2/host_path.hpp"
#include "speedracer_clock.hpp"
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

namespace host::audio_content {
// Both the output sink and the vblank probe run on the EE/IOP owner thread.
// No renderer reads this state. Disabled in normal builds/runs by default.
struct Output {
    ps2::audio::PcmStats pcm;
    std::uint64_t queued_frames = 0, discarded_frames = 0, enqueue_errors = 0;
};
inline bool enabled = false;
inline Output output;
inline void observe_output(const std::int16_t *pcm, std::size_t frames, bool discarded, bool failed) {
    if (!enabled) return;
    output.pcm.add(pcm, frames);
    output.discarded_frames += discarded ? frames : 0;
    output.queued_frames += !discarded && !failed ? frames : 0;
    output.enqueue_errors += failed;
}

class Trace {
    using Clock = std::chrono::steady_clock;
    struct Row {
        std::uint64_t first, last, cycles;
        double wall;
        speedracer::clock::Sample scene;
        bool mixed;
        ps2::audio::SpuStats spu;
        Output out;
    };
    static constexpr std::size_t capacity = 4096;
    std::string path_;
    std::vector<Row> rows_;
    std::function<void()> previous_;
    Clock::time_point start_;
    std::uint64_t first_ = 0, last_ = 0;
    speedracer::clock::Sample scene_;
    bool have_scene_ = false, mixed_ = false, truncated_ = false;

    void capture() {
        if (!enabled) return;
        const auto frame = ps2::frame_count();
        const auto scene = speedracer::clock::sample(ps2::g_ram, ps2::kRamSize);
        if (!have_scene_) { scene_ = scene; have_scene_ = true; }
        else if (scene.valid != scene_.valid || scene.scene != scene_.scene ||
                 scene.setup_valid != scene_.setup_valid || scene.environment != scene_.environment ||
                 scene.circuit != scene_.circuit || scene.direction != scene_.direction ||
                 scene.pause_valid != scene_.pause_valid || scene.paused != scene_.paused) mixed_ = true;
        scene_ = scene;
        if (frame >= last_ && frame - last_ < 60) return;
        append(frame);
    }
    void append(std::uint64_t frame) {
        const auto spu = ps2::audio::take_spu_diagnostics();
        if (spu.batches || output.pcm.frames)
            rows_.push_back({first_, frame, ps2::now(), std::chrono::duration<double>(Clock::now()-start_).count(), scene_, mixed_, spu, output});
        output = {};
        first_ = frame;
        last_ = frame;
        have_scene_ = mixed_ = false;
        if (rows_.size() == capacity) {
            truncated_ = true;
            enabled = false;
            ps2::audio::enable_spu_diagnostics(false);
        }
    }
    static void pcm_header(std::FILE *f, const char *label) {
        std::fprintf(f, ",%s_frames", label);
        for (const char *field : {"sum", "energy", "peak", "nonzero", "clipped"})
            for (const char *side : {"l", "r"}) std::fprintf(f, ",%s_%s_%s", label, field, side);
    }
    static void pcm_values(std::FILE *f, const ps2::audio::PcmStats &p) {
        std::fprintf(f, ",%llu,%lld,%lld", static_cast<unsigned long long>(p.frames), static_cast<long long>(p.sum[0]), static_cast<long long>(p.sum[1]));
        for (auto x : p.energy) std::fprintf(f, ",%llu", static_cast<unsigned long long>(x));
        for (auto x : p.peak) std::fprintf(f, ",%u", x);
        for (auto x : p.nonzero) std::fprintf(f, ",%llu", static_cast<unsigned long long>(x));
        for (auto x : p.clipped) std::fprintf(f, ",%llu", static_cast<unsigned long long>(x));
    }
    void write() const {
        auto *f = ps2::host_path::open(path_.c_str(), "w");
        if (!f) { std::fprintf(stderr, "[audio-content] cannot write diagnostic CSV\n"); return; }
        // Boundaries, not inclusive frame ranges: a final partial interval can
        // contain IOP samples after the last vblank with equal frame labels.
        std::fputs("start_boundary_frame,end_boundary_frame,ee_cycles,wall_s,end_valid,end_scene,end_race_s,end_setup_valid,end_environment,end_circuit,end_direction,end_pause_valid,end_paused,mixed_identity,trace_truncated,batches", f);
        pcm_header(f,"raw"); pcm_header(f,"filtered");
        std::fputs(",queued_frames,discarded_frames,enqueue_errors", f);
        for (const char *field : {"voice_batches","zero_envelope","zero_pitch","zero_volume","adma_batches","input_frames","input_empty","pending_transfers","max_transfers","key_on","key_off","dma_bytes","adma_bytes"})
            for (unsigned c=0;c<2;++c) std::fprintf(f,",%s_%u",field,c);
        std::fputc('\n',f);
        for (const auto &r : rows_) {
            const auto &s=r.scene;
            std::fprintf(f,"%llu,%llu,%llu,%.9f,%u,%u,%.6f,%u,%u,%u,%u,%u,%u,%u,%u,%llu",
                static_cast<unsigned long long>(r.first),static_cast<unsigned long long>(r.last),static_cast<unsigned long long>(r.cycles),r.wall,
                unsigned(s.valid),s.scene,s.seconds,unsigned(s.setup_valid),s.environment,s.circuit,s.direction,unsigned(s.pause_valid),unsigned(s.paused),unsigned(r.mixed),unsigned(truncated_),static_cast<unsigned long long>(r.spu.batches));
            pcm_values(f,r.spu.pcm); pcm_values(f,r.out.pcm);
            std::fprintf(f,",%llu,%llu,%llu",static_cast<unsigned long long>(r.out.queued_frames),static_cast<unsigned long long>(r.out.discarded_frames),static_cast<unsigned long long>(r.out.enqueue_errors));
            for (const auto *a : {r.spu.voice_batches,r.spu.zero_envelope,r.spu.zero_pitch,r.spu.zero_volume,r.spu.adma_batches,r.spu.input_frames,r.spu.input_empty,r.spu.pending_transfers,r.spu.max_transfers,r.spu.key_on,r.spu.key_off,r.spu.dma_bytes,r.spu.adma_bytes})
                for (unsigned c=0;c<2;++c) std::fprintf(f,",%llu",static_cast<unsigned long long>(a[c]));
            std::fputc('\n',f);
        }
        const bool failed = std::ferror(f) != 0;
        const int closed = std::fclose(f);
        std::fprintf(stderr,"[audio-content] windows=%zu capacity=%zu truncated=%u write_ok=%u\n",rows_.size(),capacity,unsigned(truncated_),unsigned(!failed && closed==0));
    }
public:
    explicit Trace(const char *path) {
        if (!path || !*path) return;
        path_=path;
        rows_.reserve(capacity);
        output={}; enabled=true;
        ps2::audio::enable_spu_diagnostics(true);
        start_=Clock::now(); last_=ps2::frame_count(); first_=last_;
        previous_=ps2::g_options.on_vblank;
        ps2::g_options.on_vblank=[this] { capture(); if(previous_) previous_(); };
    }
    ~Trace() {
        if(path_.empty()) return;
        // run() has drained workers before returning; exceptional unwind is
        // also on the EE owner. No audio/renderer worker writes these stats.
        if(enabled) append(ps2::frame_count());
        enabled=false; ps2::audio::enable_spu_diagnostics(false);
        ps2::g_options.on_vblank=std::move(previous_);
        write();
    }
    Trace(const Trace &)=delete;
    Trace &operator=(const Trace &)=delete;
};
}
