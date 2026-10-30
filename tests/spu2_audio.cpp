// Actual SPU2 source linked separately; deterministic clock replaces the IOP CPU.
#include "iop/hw.hpp"
#include "iop/kernel.hpp"
#include "iop/spu2.hpp"
#include "ps2/state.hpp"
#include "ps2/audio_diagnostics.hpp"
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <vector>

namespace {
struct Event {
    std::uint64_t at;
    ps2::iop::kernel::Job job;
    bool operator<(const Event &v) const { return at > v.at; }
};
std::priority_queue<Event> events;
ps2::iop::kernel::JobHandler handlers[ps2::iop::kernel::kJobCount]{};
std::uint64_t clock_now;
std::vector<std::int16_t> pcm;
unsigned failures;
void check(bool value, const char *label) {
    std::printf("%s %s\n", value ? "PASS" : "FAIL", label);
    failures += !value;
}
void advance(unsigned samples) {
    const auto target = clock_now + std::uint64_t(samples) * 768;
    while (!events.empty() && events.top().at <= target) {
        auto e = events.top();
        events.pop();
        clock_now = e.at;
        handlers[e.job.kind](e.job);
    }
    clock_now = target;
}
void reset() {
    while (!events.empty())
        events.pop();
    clock_now = 0;
    pcm.clear();
    ps2::iop::spu2::reset();
    ps2::iop::spu2::set_sink([](const std::int16_t *p, std::size_t n) { pcm.insert(pcm.end(), p, p + n * 2); });
}
void reg(unsigned off, unsigned value) { ps2::iop::spu2::write(0x1f900000 + off, value, 2); }
unsigned read(unsigned off) { return ps2::iop::spu2::read(0x1f900000 + off, 2); }
void block(unsigned address, unsigned flags, unsigned nibble = 1) {
    auto *p = ps2::iop::spu2::ram() + address;
    p[0] = flags << 8;
    std::fill(p + 1, p + 8, std::uint16_t(nibble * 0x1111));
}
void voice(unsigned v, unsigned address, unsigned pitch = 0x1000) {
    reg(v * 16, 0x3fff);
    reg(v * 16 + 2, 0x3fff);
    reg(v * 16 + 4, pitch);
    reg(v * 16 + 6, 0);
    reg(v * 16 + 8, 0);
    reg(0x1c0 + v * 12, address >> 16);
    reg(0x1c2 + v * 12, address & 0xffff);
}
} // namespace
namespace ps2::iop {
std::uint8_t g_ram[kRamSize];
}
namespace ps2::iop::hw {
void raise_interrupt(unsigned) {}
} // namespace ps2::iop::hw
namespace ps2::iop::kernel {
std::uint64_t now() { return clock_now; }
void register_job(std::uint32_t k, JobHandler h) { handlers[k] = h; }
void schedule(std::uint64_t at, const Job &job) { events.push({at, job}); }
} // namespace ps2::iop::kernel
int main() {
    // Two-block non-looping sound: prefetching its terminal block must not mute
    // the first block. Use slow pitch so ENDX can be observed between batches.
    reset();
    block(0x4000, 0);
    block(0x4008, 1);
    voice(0, 0x4000, 0x800);
    reg(0x1a0, 1);
    advance(32);
    check(std::any_of(pcm.begin(), pcm.end(), [](int x) { return x > 0; }), "one-shot plays before terminal block");
    check(!(read(0x340) & 1), "ENDX remains clear before consumed endpoint");
    advance(96);
    check(read(0x340) & 1, "ENDX becomes set after consumed endpoint");
    check(std::all_of(pcm.end() - 32, pcm.end(), [](int x) { return x == 0; }), "non-looping voice stops after endpoint");
    // Change loop address while the old end block is playing. It must be read
    // at the jump, rather than frozen by decoding the next block in advance.
    reset();
    block(0x4000, 4, 1);
    block(0x4008, 3, 1);
    block(0x5000, 3, 2);
    voice(0, 0x4000, 0x800);
    reg(0x1a0, 1);
    advance(64);
    reg(0x1c4, 0);
    reg(0x1c6, 0x5000);
    advance(64);
    check((read(0x1ca) & 0xfff8) == 0x5000, "stream loop uses updated LSAX at boundary");
    check(pcm.back() > 6000, "stream switched to new audio buffer");
    // A busy core must saturate, never wrap the signed master-volume multiply.
    for (unsigned nibble : {1u, 15u}) {
        reset();
        block(0x4000, 7, nibble);
        for (unsigned v = 0; v < 24; ++v)
            voice(v, 0x4000);
        reg(0x1a0, 0xffff);
        reg(0x1a2, 0xff);
        advance(96);
        check(nibble == 1 ? pcm.back() > 30000 : pcm.back() < -30000,
              nibble == 1 ? "positive mix saturates without sign inversion" : "negative mix saturates without sign inversion");
    }
    // A streamed block may be replaced by DMA while the preceding block plays.
    reset();
    block(0x4000, 4, 1);
    block(0x4008, 3, 1);
    voice(0, 0x4000, 0x800);
    reg(0x1a0, 1);
    advance(32);
    block(0x4008, 3, 2);
    advance(64);
    check(pcm.back() > 6000, "stream reads block contents at consumption");
    // KOFF must release an ordinary looping voice instead of leaving stale audio.
    reg(0x1a4, 1);
    advance(128);
    check(pcm.back() == 0, "key off releases looping voice");
    // Exponential release must round its negative step down to reach silence.
    // Truncating toward zero strands a quiet looping voice indefinitely.
    for (unsigned release : {0x20u, 0x2bu}) {
        reset();
        block(0x4000, 7, 1);
        voice(0, 0x4000);
        reg(8, release);
        reg(0x1a0, 1);
        advance(96);
        reg(0x1a4, 1);
        advance(80000);
        check(read(0xa) == 0, release == 0x20 ? "fast exponential release reaches zero envelope" : "slow exponential release reaches zero envelope");
        check(std::all_of(pcm.end() - 64, pcm.end(), [](int x) { return x == 0; }), "exponential release leaves no residual looping PCM");
    }
    // New checkpoints keep the existing serialized layout and resume exactly.
    struct MemoryState : ps2::state::Stream {
        std::vector<unsigned char> data;
        std::size_t at = 0;
        explicit MemoryState(bool saving) : Stream(saving) {}
        void bytes(void *p, std::size_t n) override {
            if (saving()) {
                auto *b = static_cast<unsigned char *>(p);
                data.insert(data.end(), b, b + n);
            } else {
                if (at + n > data.size())
                    std::abort();
                std::memcpy(p, data.data() + at, n);
                at += n;
            }
        }
    } saved(true), loaded(false);
    reset();
    block(0x4000, 4, 1);
    block(0x4008, 3, 2);
    voice(0, 0x4000, 0xb00);
    reg(0x1a0, 1);
    advance(64);
    ps2::iop::spu2::state(saved);
    auto saved_events = events;
    auto saved_clock = clock_now;
    pcm.clear();
    advance(256);
    const auto expected = pcm;
    loaded.data = saved.data;
    ps2::iop::spu2::state(loaded);
    events = saved_events;
    clock_now = saved_clock;
    pcm.clear();
    advance(256);
    check(pcm == expected, "checkpoint resumes identical generated PCM");
    ps2::audio::PcmStats extremes;
    const std::int16_t edge_pcm[] = {-32768,0,32767,-1,0,1};
    extremes.add(edge_pcm,3);
    check(extremes.frames==3 && extremes.sum[0]==-1 && extremes.sum[1]==0 &&
          extremes.energy[0]==2147418113ull && extremes.energy[1]==2 &&
          extremes.peak[0]==32768 && extremes.nonzero[0]==2 && extremes.nonzero[1]==2 &&
          extremes.clipped[0]==2 && extremes.clipped[1]==0, "diagnostics preserve signed extremes, energy and channel counts");
    std::vector<std::int16_t> clean_pcm;
    std::vector<unsigned char> clean_state;
    std::uint64_t clean_clock=0; std::size_t clean_events=0;
    for(bool diagnostic : {false,true}) {
        reset();
        ps2::audio::enable_spu_diagnostics(diagnostic);
        block(0x4000,7,1);
        voice(0,0x4000,0xb00); voice(1,0x4000,0);
        reg(16,0); reg(18,0);
        reg(0x1a0,3);
        std::memset(ps2::iop::g_ram+0x100,0x11,1024);
        reg(0x1b0,1);
        ps2::iop::spu2::dma(0,0x100,256,true,-1);
        advance(256);
        reg(0x1a4,1);
        advance(128);
        MemoryState image(true);
        ps2::iop::spu2::state(image);
        const auto counters=ps2::audio::take_spu_diagnostics();
        if(!diagnostic) {
            clean_pcm=pcm; clean_state=image.data; clean_clock=clock_now; clean_events=events.size();
            check(counters.batches==0 && counters.pcm.frames==0,"audio diagnostics default off collects no samples");
        } else {
            check(pcm==clean_pcm && image.data==clean_state && clock_now==clean_clock && events.size()==clean_events,
                  "audio diagnostic on/off preserves exact PCM, serialized state and schedule");
            check(counters.batches==12 && counters.pcm.frames==384 && counters.pcm.peak[0]>0 &&
                  counters.key_on[0]==2 && counters.key_off[0]==1 && counters.zero_pitch[0]==12 &&
                  counters.zero_volume[0]==12 && counters.adma_batches[0]==12 && counters.adma_bytes[0]==1024 &&
                  counters.dma_bytes[0]==1024,"audio diagnostics expose silent voices, ADMA and key lifecycle");
            const auto cleared=ps2::audio::take_spu_diagnostics();
            check(cleared.batches==0 && cleared.pcm.frames==0 && cleared.key_on[0]==0,"audio diagnostic intervals do not double count");
        }
    }
    ps2::audio::enable_spu_diagnostics(false);
    return failures ? 1 : 0;
}
