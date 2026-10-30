#include "vu_micro.hpp"
#include "vu_code_equal.hpp"
#include "vu_profile.hpp"
#include "vu_timing.hpp"
#if defined(PS2_VU_REPLAY_CAPTURE)
#include "vu_replay.hpp"
#endif
#include "vu_packet.hpp"
#include "ps2/vu_continuation.hpp"
#include "ps2/vu_q_analysis.hpp"

#include "gs/gif.hpp"
#include "gs/queue.hpp"
#include "vu_jit_web.hpp"
#include "hw.hpp"
#include "ps2/fpu.hpp"
#include "ps2/system.hpp"
#include "ps2/vu.hpp"
#include "ps2/vu_ops.hpp"

#include "ps2/state.hpp"
#include "ps2/host_path.hpp"

#include <atomic>
#include <array>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <limits>
#include <memory>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <unordered_set>

namespace ps2::vu {

namespace detail {
constinit ContinuationQCache g_continuation_q{};
const bool g_continuation_q_calls = std::getenv("PS2_VU_Q_CALLS") != nullptr;
}

namespace {

struct Unit {
    Vu0Regs *regs;
    std::uint8_t *code;
    std::uint8_t *data;
    std::uint32_t code_mask;
    std::uint32_t data_qwords;
    vuops::FlagPipe *pipe = nullptr;
};

Vu0Regs g_vu1;
// One authoritative cache, shared with generated inline hit paths.
auto &g_generation = detail::g_continuation_q.generation;
std::uint32_t g_top = 0, g_itop = 0;

using QDelay = detail::ContinuationQValue;
auto &g_q_delay = detail::g_continuation_q.delay;
auto &g_q_kind = detail::g_continuation_q.kind;
QReadIndex::Stats g_q_index_stats[2];
// Frozen at process startup; no per-node counter work when diagnostics are off.
const bool g_q_index_stats_enabled=std::getenv("PS2_VU_Q_INDEX_STATS")!=nullptr;
QReadIndex g_q_index[2]={QReadIndex{g_q_index_stats_enabled?&g_q_index_stats[0]:nullptr},
                       QReadIndex{g_q_index_stats_enabled?&g_q_index_stats[1]:nullptr}};
std::uint32_t g_q_index_generation[2] = {};
std::atomic<std::uint64_t> g_q_index_checks{0};

void read_q(const Unit &u, vuops::FlagPipe &pipe, Vu0Regs &r, std::uint32_t pc, std::uint32_t hi) {
    if (!pipe.q_pending || !reads_q(hi)) return;
    const int n = u.code == g_vu1_code ? 1 : 0;
    QDelay &d = g_q_kind[n][(pc & u.code_mask) >> 3];
    if (d.generation != g_generation[n]) {
        d.generation = g_generation[n];
        static const bool reference = std::getenv("PS2_VU_Q_REFERENCE") != nullptr;
        static const bool check = std::getenv("PS2_VU_Q_CHECK") != nullptr;
        if (reference) d.value = q_read_kind(u.code, u.code_mask, pc);
        else {
            if (g_q_index_generation[n] != g_generation[n]) {
                g_q_index_generation[n] = g_generation[n];
                g_q_index[n].reset(u.code, u.code_mask);
            }
            d.value = g_q_index[n].read(pc);
            if (check) {
                const auto expected = q_read_kind(u.code, u.code_mask, pc);
                if (d.value != expected) {
                    std::fprintf(stderr, "[vu-q] MISMATCH unit=%d pc=%04X generation=%u expected=%u actual=%u\n", n, pc, g_generation[n], expected, d.value);
                    std::abort();
                }
                g_q_index_checks.fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (d.value == kQNew) pipe.flush_q(r);
    else if (d.value == kQDynamic) pipe.sync_q(r);
}

std::uint32_t q_delay_of(const Unit &u, std::uint32_t pc, std::uint32_t latency) {
    // Larger, nonstandard windows use the original analysis without caching.
    if (latency > 13u) return q_delay(u.code, u.code_mask, pc, latency);
    const int n = u.code == g_vu1_code ? 1 : 0;
    auto &d = g_q_delay[n][(pc & u.code_mask) >> 3];
    const auto epoch = detail::g_continuation_q.delay_epoch[n];
    if (d.generation != epoch || d.latency != latency) {
        d.value = q_delay(u.code, u.code_mask, pc, latency);
        d.latency = latency;
        d.generation = epoch;
    }
    return d.value;
}

void change_q_delays(int n, std::uint32_t address, std::uint32_t bytes, bool global_wrap) {
    auto &epoch = detail::g_continuation_q.delay_epoch[n];
    const std::uint32_t mask = n ? 16383u : 4095u;
    const std::uint32_t words = (mask + 1u) / 8u;
    // `bytes` is known smaller than the unit before span arithmetic is used.
    address &= mask;
    static const bool full = std::getenv("PS2_VU_Q_DELAY_FULL") != nullptr;
    const bool unknown = !bytes || bytes >= mask + 1u;
    const std::uint32_t changed_words = unknown ? words : ((address & 7u) + bytes + 7u) / 8u;
    if (global_wrap || full || unknown || changed_words + 16u >= words) {
        if (++epoch == 0) {
            epoch = 1;
            for (auto &entry : g_q_delay[n]) entry = {};
        }
        return;
    }
    // A changed issue j can affect only delay PCs j-13..j+3. The union of
    // c consecutive changed issues is c+16 circular entries, including every
    // partial-byte issue. One aligned MPG issue therefore clears17 entries.
    const auto first = ((address >> 3) - 13u) & (words - 1u);
    for (std::uint32_t i = 0; i < changed_words + 16u; ++i)
        g_q_delay[n][(first + i) & (words - 1u)].generation = 0;
}

std::uint64_t g_reported = 0;
thread_local std::vector<std::uint8_t> *g_continuation_packets = nullptr;
#if defined(PS2_VU_REPLAY_CAPTURE)
thread_local replay::Record *g_replay_packet_tee=nullptr;
thread_local bool g_replay_packet_limit=false;
struct ReplayPacketScope {
    replay::Record *previous;
    explicit ReplayPacketScope(replay::Record *record):previous(g_replay_packet_tee) {if(record)g_replay_packet_tee=record;}
    ~ReplayPacketScope() {g_replay_packet_tee=previous;}
};

#endif


thread_local std::uint32_t g_vu_entry_pc = 0xFFFFFFFFu;

struct VuEntryScope {
    std::uint32_t previous;
    explicit VuEntryScope(std::uint32_t pc) : previous(g_vu_entry_pc) {
        g_vu_entry_pc = pc & 16383u;
    }
    ~VuEntryScope() { g_vu_entry_pc = previous; }
};

Unit unit_of(int n) {
    if (n == 0) return Unit{&g_cpu.vu0, g_vu0_code, g_vu0_mem, 4095u, 256u};
    return Unit{&g_vu1, g_vu1_code, g_vu1_mem, 16383u, 1024u};
}

struct UpperOut {
    int target = -1;
    Reg128 value{};
    unsigned dest = 0;
    bool flags = false;
    bool has_clip = false;
    std::uint32_t clip = 0;
};

constexpr int kAcc = 32;

std::uint32_t mac_flags(const Reg128 &v, unsigned dest) {
    std::uint32_t mac = 0;
    for (int i = 0; i < 4; ++i) {
        if (!(dest & (8u >> i))) continue;
        const std::uint32_t bit = 3u - static_cast<std::uint32_t>(i);
        const std::uint32_t x = v.w[i];
        if (!(x & 0x7F800000u)) mac |= 1u << bit;
        if (x & 0x80000000u) mac |= 1u << (bit + 4);
        if ((x & 0x7FFFFFFFu) == 0x7FFFFFFFu) mac |= 1u << (bit + 12);
    }
    return mac;
}

void set_flags(Vu0Regs &r, const Reg128 &v, unsigned dest) {
    const std::uint32_t mac = mac_flags(v, dest);
    r.mac = mac;
    std::uint32_t status = r.status & 0xFF0u;
    if (mac & 0x000Fu) status |= 0x1u;
    if (mac & 0x00F0u) status |= 0x2u;
    if (mac & 0x0F00u) status |= 0x4u;
    if (mac & 0xF000u) status |= 0x8u;
    status |= (status & 0xFu) << 6;
    r.status = (status & ~0x30u) | (r.status & 0x30u);
}

template <typename F>
UpperOut lanes(int target, unsigned dest, bool flags, F f) {
    UpperOut o;
    o.target = target;
    o.dest = dest;
    o.flags = flags;
    for (int i = 0; i < 4; ++i)
        if (dest & (8u >> i)) o.value.w[i] = f(i);
    return o;
}

UpperOut upper(Vu0Regs &r, std::uint32_t w) {
    const unsigned dest = (w >> 21) & 15u, ft = (w >> 16) & 31u, fs = (w >> 11) & 31u, fd = (w >> 6) & 31u, bc = w & 3u;
    const Reg128 s = r.vf[fs], t = r.vf[ft], acc = r.acc;
    const std::uint32_t b = t.w[bc];
    const unsigned funct = w & 63u;
    if (funct < 0x3C) {
        switch (funct) {
        case 0x00: case 0x01: case 0x02: case 0x03: return lanes(fd, dest, true, [&](int i) { return fp::add(s.w[i], b); });
        case 0x04: case 0x05: case 0x06: case 0x07: return lanes(fd, dest, true, [&](int i) { return fp::sub(s.w[i], b); });
        case 0x08: case 0x09: case 0x0A: case 0x0B: return lanes(fd, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], b)); });
        case 0x0C: case 0x0D: case 0x0E: case 0x0F: return lanes(fd, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], b)); });
        case 0x10: case 0x11: case 0x12: case 0x13: return lanes(fd, dest, false, [&](int i) { return fp::max(s.w[i], b); });
        case 0x14: case 0x15: case 0x16: case 0x17: return lanes(fd, dest, false, [&](int i) { return fp::min(s.w[i], b); });
        case 0x18: case 0x19: case 0x1A: case 0x1B: return lanes(fd, dest, true, [&](int i) { return fp::mul(s.w[i], b); });
        case 0x1C: return lanes(fd, dest, true, [&](int i) { return fp::mul(s.w[i], r.q); });
        case 0x1D: return lanes(fd, dest, false, [&](int i) { return fp::max(s.w[i], r.i); });
        case 0x1E: return lanes(fd, dest, true, [&](int i) { return fp::mul(s.w[i], r.i); });
        case 0x1F: return lanes(fd, dest, false, [&](int i) { return fp::min(s.w[i], r.i); });
        case 0x20: return lanes(fd, dest, true, [&](int i) { return fp::add(s.w[i], r.q); });
        case 0x21: return lanes(fd, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], r.q)); });
        case 0x22: return lanes(fd, dest, true, [&](int i) { return fp::add(s.w[i], r.i); });
        case 0x23: return lanes(fd, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], r.i)); });
        case 0x24: return lanes(fd, dest, true, [&](int i) { return fp::sub(s.w[i], r.q); });
        case 0x25: return lanes(fd, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], r.q)); });
        case 0x26: return lanes(fd, dest, true, [&](int i) { return fp::sub(s.w[i], r.i); });
        case 0x27: return lanes(fd, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], r.i)); });
        case 0x28: return lanes(fd, dest, true, [&](int i) { return fp::add(s.w[i], t.w[i]); });
        case 0x29: return lanes(fd, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], t.w[i])); });
        case 0x2A: return lanes(fd, dest, true, [&](int i) { return fp::mul(s.w[i], t.w[i]); });
        case 0x2B: return lanes(fd, dest, false, [&](int i) { return fp::max(s.w[i], t.w[i]); });
        case 0x2C: return lanes(fd, dest, true, [&](int i) { return fp::sub(s.w[i], t.w[i]); });
        case 0x2D: return lanes(fd, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], t.w[i])); });
        case 0x2E: {
            UpperOut o;
            o.target = static_cast<int>(fd);
            o.dest = 0xEu;
            o.flags = true;
            o.value.w[0] = fp::sub(acc.w[0], fp::mul(s.w[1], t.w[2]));
            o.value.w[1] = fp::sub(acc.w[1], fp::mul(s.w[2], t.w[0]));
            o.value.w[2] = fp::sub(acc.w[2], fp::mul(s.w[0], t.w[1]));
            return o;
        }
        case 0x2F: return lanes(fd, dest, false, [&](int i) { return fp::min(s.w[i], t.w[i]); });
        default: return UpperOut{};
        }
    }
    const unsigned index = ((w >> 6) & 31u) * 4u + (funct & 3u);
    switch (index) {
    case 0x00: case 0x01: case 0x02: case 0x03: return lanes(kAcc, dest, true, [&](int i) { return fp::add(s.w[i], b); });
    case 0x04: case 0x05: case 0x06: case 0x07: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(s.w[i], b); });
    case 0x08: case 0x09: case 0x0A: case 0x0B: return lanes(kAcc, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], b)); });
    case 0x0C: case 0x0D: case 0x0E: case 0x0F: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], b)); });
    case 0x10: case 0x11: case 0x12: case 0x13: {
        static const int kFrac[4] = {0, 4, 12, 15};
        return lanes(ft, dest, false, [&](int i) { return fp::from_fixed(s.sw[i], kFrac[index & 3u]); });
    }
    case 0x14: case 0x15: case 0x16: case 0x17: {
        static const int kFrac[4] = {0, 4, 12, 15};
        return lanes(ft, dest, false, [&](int i) { return fp::to_fixed(s.w[i], kFrac[index & 3u]); });
    }
    case 0x18: case 0x19: case 0x1A: case 0x1B: return lanes(kAcc, dest, true, [&](int i) { return fp::mul(s.w[i], b); });
    case 0x1C: return lanes(kAcc, dest, true, [&](int i) { return fp::mul(s.w[i], r.q); });
    case 0x1D: return lanes(ft, dest, false, [&](int i) { return s.w[i] & fp::kAbs; });
    case 0x1E: return lanes(kAcc, dest, true, [&](int i) { return fp::mul(s.w[i], r.i); });
    case 0x1F: {
        UpperOut o;
        o.has_clip = true;
        o.clip = vuops::clip_value(r, s, t.w[3]);
        return o;
    }
    case 0x20: return lanes(kAcc, dest, true, [&](int i) { return fp::add(s.w[i], r.q); });
    case 0x21: return lanes(kAcc, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], r.q)); });
    case 0x22: return lanes(kAcc, dest, true, [&](int i) { return fp::add(s.w[i], r.i); });
    case 0x23: return lanes(kAcc, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], r.i)); });
    case 0x24: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(s.w[i], r.q); });
    case 0x25: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], r.q)); });
    case 0x26: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(s.w[i], r.i); });
    case 0x27: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], r.i)); });
    case 0x28: return lanes(kAcc, dest, true, [&](int i) { return fp::add(s.w[i], t.w[i]); });
    case 0x29: return lanes(kAcc, dest, true, [&](int i) { return fp::add(acc.w[i], fp::mul(s.w[i], t.w[i])); });
    case 0x2A: return lanes(kAcc, dest, true, [&](int i) { return fp::mul(s.w[i], t.w[i]); });
    case 0x2C: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(s.w[i], t.w[i]); });
    case 0x2D: return lanes(kAcc, dest, true, [&](int i) { return fp::sub(acc.w[i], fp::mul(s.w[i], t.w[i])); });
    case 0x2E: {
        UpperOut o;
        o.target = kAcc;
        o.dest = 0xEu;
        o.flags = true;
        o.value.w[0] = fp::mul(s.w[1], t.w[2]);
        o.value.w[1] = fp::mul(s.w[2], t.w[0]);
        o.value.w[2] = fp::mul(s.w[0], t.w[1]);
        return o;
    }
    default: return UpperOut{};
    }
}

enum UpperKind : std::uint8_t { kNop, kAdd, kSub, kMadd, kMsub, kMax, kMin, kMul, kAbs, kFtoi, kItof, kClip, kOpmula, kOpmsub };
enum UpperSource : std::uint8_t { kVec, kBc, kQ, kI };

struct Decoded {
    std::uint32_t lo = 0, hi = 0;
    bool valid = false;
    UpperKind kind = kNop;
    UpperSource source = kVec;
    std::uint8_t target = 0, dest = 0, fs = 0, ft = 0, bc = 0, frac = 0;
    bool flags = false;
};

Decoded g_decoded[2][2048];
bool g_flags_used[2] = {true, true};
bool g_scan[2] = {true, true};

Decoded decode_upper(std::uint32_t lo, std::uint32_t hi) {
    Decoded d;
    d.lo = lo;
    d.hi = hi;
    d.valid = true;
    d.dest = static_cast<std::uint8_t>((hi >> 21) & 15u);
    d.ft = static_cast<std::uint8_t>((hi >> 16) & 31u);
    d.fs = static_cast<std::uint8_t>((hi >> 11) & 31u);
    d.bc = static_cast<std::uint8_t>(hi & 3u);
    const std::uint8_t fd = static_cast<std::uint8_t>((hi >> 6) & 31u);
    const unsigned funct = hi & 63u;
    const auto set = [&](UpperKind k, UpperSource src, int target, bool flags) {
        d.kind = k;
        d.source = src;
        d.target = static_cast<std::uint8_t>(target);
        d.flags = flags;
    };
    if (funct < 0x3C) {
        switch (funct) {
        case 0x00: case 0x01: case 0x02: case 0x03: set(kAdd, kBc, fd, true); break;
        case 0x04: case 0x05: case 0x06: case 0x07: set(kSub, kBc, fd, true); break;
        case 0x08: case 0x09: case 0x0A: case 0x0B: set(kMadd, kBc, fd, true); break;
        case 0x0C: case 0x0D: case 0x0E: case 0x0F: set(kMsub, kBc, fd, true); break;
        case 0x10: case 0x11: case 0x12: case 0x13: set(kMax, kBc, fd, false); break;
        case 0x14: case 0x15: case 0x16: case 0x17: set(kMin, kBc, fd, false); break;
        case 0x18: case 0x19: case 0x1A: case 0x1B: set(kMul, kBc, fd, true); break;
        case 0x1C: set(kMul, kQ, fd, true); break;
        case 0x1D: set(kMax, kI, fd, false); break;
        case 0x1E: set(kMul, kI, fd, true); break;
        case 0x1F: set(kMin, kI, fd, false); break;
        case 0x20: set(kAdd, kQ, fd, true); break;
        case 0x21: set(kMadd, kQ, fd, true); break;
        case 0x22: set(kAdd, kI, fd, true); break;
        case 0x23: set(kMadd, kI, fd, true); break;
        case 0x24: set(kSub, kQ, fd, true); break;
        case 0x25: set(kMsub, kQ, fd, true); break;
        case 0x26: set(kSub, kI, fd, true); break;
        case 0x27: set(kMsub, kI, fd, true); break;
        case 0x28: set(kAdd, kVec, fd, true); break;
        case 0x29: set(kMadd, kVec, fd, true); break;
        case 0x2A: set(kMul, kVec, fd, true); break;
        case 0x2B: set(kMax, kVec, fd, false); break;
        case 0x2C: set(kSub, kVec, fd, true); break;
        case 0x2D: set(kMsub, kVec, fd, true); break;
        case 0x2E: set(kOpmsub, kVec, fd, true); d.dest = 0xE; break;
        case 0x2F: set(kMin, kVec, fd, false); break;
        default: break;
        }
        return d;
    }
    static const std::uint8_t kFrac[4] = {0, 4, 12, 15};
    const unsigned index = ((hi >> 6) & 31u) * 4u + (funct & 3u);
    switch (index) {
    case 0x00: case 0x01: case 0x02: case 0x03: set(kAdd, kBc, kAcc, true); break;
    case 0x04: case 0x05: case 0x06: case 0x07: set(kSub, kBc, kAcc, true); break;
    case 0x08: case 0x09: case 0x0A: case 0x0B: set(kMadd, kBc, kAcc, true); break;
    case 0x0C: case 0x0D: case 0x0E: case 0x0F: set(kMsub, kBc, kAcc, true); break;
    case 0x10: case 0x11: case 0x12: case 0x13: set(kItof, kVec, d.ft, false); d.frac = kFrac[index & 3u]; break;
    case 0x14: case 0x15: case 0x16: case 0x17: set(kFtoi, kVec, d.ft, false); d.frac = kFrac[index & 3u]; break;
    case 0x18: case 0x19: case 0x1A: case 0x1B: set(kMul, kBc, kAcc, true); break;
    case 0x1C: set(kMul, kQ, kAcc, true); break;
    case 0x1D: set(kAbs, kVec, d.ft, false); break;
    case 0x1E: set(kMul, kI, kAcc, true); break;
    case 0x1F: set(kClip, kVec, 0, false); break;
    case 0x20: set(kAdd, kQ, kAcc, true); break;
    case 0x21: set(kMadd, kQ, kAcc, true); break;
    case 0x22: set(kAdd, kI, kAcc, true); break;
    case 0x23: set(kMadd, kI, kAcc, true); break;
    case 0x24: set(kSub, kQ, kAcc, true); break;
    case 0x25: set(kMsub, kQ, kAcc, true); break;
    case 0x26: set(kSub, kI, kAcc, true); break;
    case 0x27: set(kMsub, kI, kAcc, true); break;
    case 0x28: set(kAdd, kVec, kAcc, true); break;
    case 0x29: set(kMadd, kVec, kAcc, true); break;
    case 0x2A: set(kMul, kVec, kAcc, true); break;
    case 0x2C: set(kSub, kVec, kAcc, true); break;
    case 0x2D: set(kMsub, kVec, kAcc, true); break;
    case 0x2E: set(kOpmula, kVec, kAcc, true); d.dest = 0xE; break;
    default: break;
    }
    return d;
}

float fin(std::uint32_t x) {
    const std::uint32_t e = x & 0x7F800000u;
    if (!e) x &= 0x80000000u;
    else if (e == 0x7F800000u) x = (x & 0x80000000u) | 0x7F7FFFFFu;
    float f;
    std::memcpy(&f, &x, 4);
    return f;
}

std::uint32_t fout(float f) {
    std::uint32_t x;
    std::memcpy(&x, &f, 4);
    const std::uint32_t e = x & 0x7F800000u;
    if (!e) return x & 0x80000000u;
    if (e == 0x7F800000u) return (x & 0x80000000u) | 0x7F7FFFFFu;
    return x;
}

float norm(float f) { return fin(fout(f)); }

void fast_upper(Vu0Regs &r, const Decoded &d, UpperOut &o) {
    o.target = -1;
    o.has_clip = false;
    if (d.kind == kNop) return;
    const Reg128 &s = r.vf[d.fs], &t = r.vf[d.ft];
    if (d.kind == kClip) {
        o.has_clip = true;
        o.clip = vuops::clip_value(r, s, t.w[3]);
        return;
    }
    o.target = d.target;
    o.dest = d.dest;
    o.flags = d.flags;
    switch (d.kind) {
    case kAbs:
        for (int i = 0; i < 4; ++i) o.value.w[i] = s.w[i] & fp::kAbs;
        return;
    case kFtoi:
        for (int i = 0; i < 4; ++i) if (d.dest & (8u >> i)) o.value.w[i] = fp::to_fixed(s.w[i], d.frac);
        return;
    case kItof:
        for (int i = 0; i < 4; ++i) if (d.dest & (8u >> i)) o.value.w[i] = fp::from_fixed(s.sw[i], d.frac);
        return;
    case kOpmula:
        o.value.w[0] = fout(norm(fin(s.w[1]) * fin(t.w[2])));
        o.value.w[1] = fout(norm(fin(s.w[2]) * fin(t.w[0])));
        o.value.w[2] = fout(norm(fin(s.w[0]) * fin(t.w[1])));
        return;
    case kOpmsub:
        o.value.w[0] = fout(fin(r.acc.w[0]) - norm(fin(s.w[1]) * fin(t.w[2])));
        o.value.w[1] = fout(fin(r.acc.w[1]) - norm(fin(s.w[2]) * fin(t.w[0])));
        o.value.w[2] = fout(fin(r.acc.w[2]) - norm(fin(s.w[0]) * fin(t.w[1])));
        return;
    default: break;
    }
    std::uint32_t b[4];
    switch (d.source) {
    case kVec: for (int i = 0; i < 4; ++i) b[i] = t.w[i]; break;
    case kBc: for (int i = 0; i < 4; ++i) b[i] = t.w[d.bc]; break;
    case kQ: for (int i = 0; i < 4; ++i) b[i] = r.q; break;
    case kI: for (int i = 0; i < 4; ++i) b[i] = r.i; break;
    }
    switch (d.kind) {
    case kAdd: for (int i = 0; i < 4; ++i) o.value.w[i] = fout(fin(s.w[i]) + fin(b[i])); break;
    case kSub: for (int i = 0; i < 4; ++i) o.value.w[i] = fout(fin(s.w[i]) - fin(b[i])); break;
    case kMul: for (int i = 0; i < 4; ++i) o.value.w[i] = fout(fin(s.w[i]) * fin(b[i])); break;
    case kMadd: for (int i = 0; i < 4; ++i) o.value.w[i] = fout(fin(r.acc.w[i]) + norm(fin(s.w[i]) * fin(b[i]))); break;
    case kMsub: for (int i = 0; i < 4; ++i) o.value.w[i] = fout(fin(r.acc.w[i]) - norm(fin(s.w[i]) * fin(b[i]))); break;
    case kMax: for (int i = 0; i < 4; ++i) o.value.w[i] = fp::max(s.w[i], b[i]); break;
    case kMin: for (int i = 0; i < 4; ++i) o.value.w[i] = fp::min(s.w[i], b[i]); break;
    default: break;
    }
}

void scan_flags(int unit, const std::uint8_t *code, std::uint32_t size) {
    bool used = false;
    for (std::uint32_t pc = 0; pc < size && !used; pc += 8) {
        std::uint32_t lo, hi;
        std::memcpy(&lo, code + pc, 4);
        std::memcpy(&hi, code + pc + 4, 4);
        if (hi & 0x80000000u) continue;
        switch (lo >> 25) {
        case 0x14: case 0x15: case 0x16: case 0x17: case 0x18: case 0x1A: case 0x1B: used = true; break;
        default: break;
        }
    }
    g_flags_used[unit] = used;
    g_scan[unit] = false;
}

void commit(Vu0Regs &r, const UpperOut &o) {
    if (o.target < 0) return;
    if (o.target > 0) {
        Reg128 &dst = o.target == kAcc ? r.acc : r.vf[o.target];
        for (int i = 0; i < 4; ++i)
            if (o.dest & (8u >> i)) dst.w[i] = o.value.w[i];
    }
    if (o.flags) set_flags(r, o.value, o.dest);
}

std::uint8_t *qword(Unit &u, std::uint32_t index) {
    return u.data + (index & (u.data_qwords - 1)) * 16;
}

void store_vi(Vu0Regs &r, unsigned index, std::uint32_t value) {
    if (index) r.vi[index] = static_cast<std::uint16_t>(value);
}

std::uint32_t f2u(float f) {
    std::uint32_t v;
    std::memcpy(&v, &f, 4);
    return v;
}

float u2f(std::uint32_t v) {
    if (!(v & 0x7F800000u)) v &= 0x80000000u;
    if ((v & 0x7F800000u) == 0x7F800000u) v = (v & 0x80000000u) | 0x7F7FFFFFu;
    float f;
    std::memcpy(&f, &v, 4);
    return f;
}

void send_xgkick(Unit &u, std::uint32_t address, std::uint32_t call_pc, const std::uint8_t *buffer, std::uint32_t count) {
    static const bool trace = std::getenv("PS2_XGKICK_TRACE") != nullptr;
    static std::uint64_t calls = 0;
    if (trace) {
        const std::uint64_t n = ++calls;
        if (n <= 32 || (n % 512 == 0 && n <= 262144)) {
            std::fprintf(stderr, "[xgkick] n=%llu pc=%04X entry=%04X addr=%04X qwc=%u",
                static_cast<unsigned long long>(n),
                static_cast<unsigned>(call_pc),
                static_cast<unsigned>(g_vu_entry_pc),
                static_cast<unsigned>(address),
                static_cast<unsigned>(count));
            for (std::uint32_t i = 0; i < count && i < 4; ++i) {
                std::uint64_t lo, hi;
                std::memcpy(&lo, buffer + i * 16, 8);
                std::memcpy(&hi, buffer + i * 16 + 8, 8);
                std::fprintf(stderr, " q%u=%016llX:%016llX",
                    static_cast<unsigned>(i),
                    static_cast<unsigned long long>(lo),
                    static_cast<unsigned long long>(hi));
            }
            std::fprintf(stderr, "\n");
        }
    }

    if (trace && (call_pc == 0x1760u || call_pc == 0x2AC0u)) {
        static std::uint32_t seen_1760 = 0, seen_2ac0 = 0;
        std::uint32_t &seen = call_pc == 0x1760u ? seen_1760 : seen_2ac0;
        if (seen++ < 8) {
            Reg128 tag;
            std::memcpy(&tag, buffer, 16);
            const std::uint32_t nloop = static_cast<std::uint32_t>(tag.d[0]) & 0x7FFFu;
            const std::uint32_t flg = static_cast<std::uint32_t>(tag.d[0] >> 58) & 3u;
            std::uint32_t nreg = static_cast<std::uint32_t>(tag.d[0] >> 60) & 0xFu;
            if (!nreg) nreg = 16;
            const std::uint64_t regs = tag.d[1];
            std::uint32_t min_x = 0xFFFFu, min_y = 0xFFFFu, max_x = 0, max_y = 0, vertices = 0;
            if (flg == 0) {
                for (std::uint32_t loop = 0; loop < nloop; ++loop) {
                    for (std::uint32_t reg = 0; reg < nreg; ++reg) {
                        const std::uint32_t code = static_cast<std::uint32_t>(regs >> (reg * 4)) & 0xFu;
                        if (code != 4u && code != 5u) continue;
                        const std::uint64_t index = 1ull + static_cast<std::uint64_t>(loop) * nreg + reg;
                        if (index >= count) continue;
                        std::uint32_t xyz[4];
                        std::memcpy(xyz, buffer + index * 16, 16);
                        const std::uint32_t x = xyz[0] & 0xFFFFu, y = xyz[1] & 0xFFFFu;
                        min_x = std::min(min_x, x); min_y = std::min(min_y, y);
                        max_x = std::max(max_x, x); max_y = std::max(max_y, y);
                        ++vertices;
                    }
                }
            }
            std::fprintf(stderr,
                "[xgkick-bounds] pc=%04X addr=%04X qwc=%u nloop=%u nreg=%u flg=%u pre=%u prim=%03X regs=%03llX xyz=%u x=%04X..%04X y=%04X..%04X\n",
                static_cast<unsigned>(call_pc), static_cast<unsigned>(address), static_cast<unsigned>(count),
                static_cast<unsigned>(nloop), static_cast<unsigned>(nreg), static_cast<unsigned>(flg),
                static_cast<unsigned>((tag.d[0] >> 46) & 1u),
                static_cast<unsigned>((tag.d[0] >> 47) & 0x7FFu),
                static_cast<unsigned long long>(regs), static_cast<unsigned>(vertices),
                static_cast<unsigned>(min_x), static_cast<unsigned>(max_x),
                static_cast<unsigned>(min_y), static_cast<unsigned>(max_y));
        }
    }


    if (trace && call_pc == 0x2AC0u) {
        static std::uint32_t packet_number = 0;
        const std::uint32_t packet = packet_number++;
        if (packet == 7 && count) {
            Reg128 tag;
            std::memcpy(&tag, buffer, 16);
            const std::uint32_t nloop = static_cast<std::uint32_t>(tag.d[0]) & 0x7FFFu;
            const std::uint32_t flg = static_cast<std::uint32_t>(tag.d[0] >> 58) & 3u;
            std::uint32_t nreg = static_cast<std::uint32_t>(tag.d[0] >> 60) & 0xFu;
            if (!nreg) nreg = 16;
            const std::uint64_t regs = tag.d[1];

            std::fprintf(stderr,
                "[xgkick-packet] call=%u pc=%04X addr=%04X qwc=%u tag=%016llX regs=%016llX\n",
                static_cast<unsigned>(packet), static_cast<unsigned>(call_pc),
                static_cast<unsigned>(address), static_cast<unsigned>(count),
                static_cast<unsigned long long>(tag.d[0]),
                static_cast<unsigned long long>(regs));

            if (flg == 0) {
                for (std::uint32_t loop = 0; loop < nloop; ++loop) {
                    for (std::uint32_t reg = 0; reg < nreg; ++reg) {
                        const std::uint32_t code = static_cast<std::uint32_t>(regs >> (reg * 4)) & 0xFu;
                        if (code != 4u && code != 5u) continue;
                        const std::uint64_t index = 1ull + static_cast<std::uint64_t>(loop) * nreg + reg;
                        if (index >= count) continue;

                        std::uint32_t xyz[4];
                        std::memcpy(xyz, buffer + index * 16, 16);
                        std::fprintf(stderr,
                            "[xgkick-vertex] call=%u i=%02u reg=%X x=%04X y=%04X z=%08X w=%08X\n",
                            static_cast<unsigned>(packet), static_cast<unsigned>(loop),
                            static_cast<unsigned>(code),
                            static_cast<unsigned>(xyz[0] & 0xFFFFu),
                            static_cast<unsigned>(xyz[1] & 0xFFFFu),
                            static_cast<unsigned>(xyz[2]), static_cast<unsigned>(xyz[3]));
                    }
                }
            }
        }
    }

#if defined(PS2_VU_REPLAY_CAPTURE)
    if(g_replay_packet_tee && u.data==g_vu1_mem) replay::tee(*g_replay_packet_tee,buffer,count);
#endif
    if (g_continuation_packets && u.data == g_vu1_mem) {
#if defined(PS2_VU_REPLAY_CAPTURE)
        if(g_replay_packet_limit && count*16u+sizeof(count)>replay::kPacketLimit-g_continuation_packets->size())
            throw std::runtime_error("offline VU replay packet limit");
#endif
        const auto *size_bytes = reinterpret_cast<const std::uint8_t *>(&count);
        g_continuation_packets->insert(g_continuation_packets->end(), size_bytes, size_bytes + sizeof count);
        g_continuation_packets->insert(g_continuation_packets->end(), buffer, buffer + count * 16u);
        return;
    }
    gif::transfer(1, buffer, count);
}

__attribute__((noinline)) void xgkick_reference(Unit &u, std::uint32_t address, std::uint32_t call_pc) {
    std::uint8_t buffer[16 * 1024 + 16];
    std::uint32_t q = address & (u.data_qwords - 1), count = 0;
    bool done = false;
    while (!done && count < u.data_qwords) {
        Reg128 tag;
        std::memcpy(&tag, qword(u, q), 16);
        std::memcpy(buffer + count * 16, &tag, 16);
        ++q;
        ++count;
        const std::uint32_t nloop = static_cast<std::uint32_t>(tag.d[0]) & 0x7FFFu;
        const bool eop = (tag.d[0] >> 15) & 1u;
        const std::uint32_t flg = static_cast<std::uint32_t>(tag.d[0] >> 58) & 3u;
        std::uint32_t nreg = static_cast<std::uint32_t>(tag.d[0] >> 60) & 0xFu;
        if (!nreg) nreg = 16;
        std::uint32_t body = flg == 0 ? nloop * nreg : flg == 1 ? (nloop * nreg + 1) / 2 : nloop;
        for (std::uint32_t i = 0; i < body && count < u.data_qwords; ++i, ++q, ++count)
            std::memcpy(buffer + count * 16, qword(u, q), 16);
        done = eop;
    }
    send_xgkick(u,address,call_pc,buffer,count);
}

// The common contiguous case borrows VU memory only until transfer() returns.
// Ring::post and the native bridge copy synchronously before returning; VU owns
// its local memory throughout this call. Packet boundaries and EOP are intact.
__attribute__((noinline)) void xgkick_wrapped(Unit &u, std::uint32_t address,
                                           std::uint32_t call_pc, std::uint32_t count) {
    std::uint8_t buffer[16 * 1024];
    packet::copy(u.data,u.data_qwords,address,count,buffer);
    send_xgkick(u,address,call_pc,buffer,count);
}

void xgkick(Unit &u, std::uint32_t address, std::uint32_t call_pc = 0xFFFFFFFFu) {
    static const bool reference=std::getenv("PS2_XGKICK_REFERENCE") != nullptr;
    if(reference) { xgkick_reference(u,address,call_pc);return; }
    const auto start=address & (u.data_qwords-1u);
    const auto count=packet::extent(u.data,u.data_qwords,address);
    if(count<=u.data_qwords-start)
        send_xgkick(u,address,call_pc,u.data+start*16u,count);
    else xgkick_wrapped(u,address,call_pc,count);
}

void lower(Unit &u, std::uint32_t w, std::uint32_t pc, std::uint32_t &npc, bool &branch) {
    Vu0Regs &r = *u.regs;
    const unsigned dest = (w >> 21) & 15u, it = (w >> 16) & 15u, is = (w >> 11) & 15u, id = (w >> 6) & 15u;
    const std::uint32_t ft = (w >> 16) & 31u, fs = (w >> 11) & 31u;
    const std::int32_t imm11 = static_cast<std::int32_t>(w << 21) >> 21;
    const auto clip_flags = [&]() { return u.pipe ? u.pipe->clip() : r.clip; };
    const auto status_flags = [&]() { return u.pipe ? u.pipe->status() : r.status; };
    const auto mac_flags_now = [&]() { return u.pipe ? u.pipe->mac() : r.mac; };
    const auto branch_to = [&](std::uint32_t target) {
        npc = target & u.code_mask;
        branch = true;
    };
    if ((w >> 25) == 0x40u) {
        const unsigned funct = w & 63u;
        if (funct < 0x3C) {
            switch (funct) {
            case 0x30: store_vi(r, id, r.vi[is] + r.vi[it]); break;
            case 0x31: store_vi(r, id, r.vi[is] - r.vi[it]); break;
            case 0x32: store_vi(r, it, r.vi[is] + static_cast<std::uint32_t>(static_cast<std::int32_t>(((w >> 6) & 31u) << 27) >> 27)); break;
            case 0x34: store_vi(r, id, r.vi[is] & r.vi[it]); break;
            case 0x35: store_vi(r, id, r.vi[is] | r.vi[it]); break;
            default:
                if (g_reported++ < 32) std::fprintf(stderr, "[vu] lower op 0x%08X at 0x%04X\n", w, pc);
                break;
            }
            return;
        }
        const unsigned index = ((w >> 6) & 31u) * 4u + (funct & 3u);
        const unsigned fsf = (w >> 21) & 3u, ftf = (w >> 23) & 3u;
        switch (index) {
        case 0x30: if (ft) for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) r.vf[ft].w[i] = r.vf[fs].w[i]; break;
        case 0x31: if (ft) { const Reg128 s = r.vf[fs]; for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) r.vf[ft].w[i] = s.w[(i + 1) & 3]; } break;
        case 0x34: {
            const std::uint8_t *q = qword(u, r.vi[is]);
            if (ft) for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(&r.vf[ft].w[i], q + i * 4, 4);
            store_vi(r, is, r.vi[is] + 1u);
            break;
        }
        case 0x35: {
            std::uint8_t *q = qword(u, r.vi[it]);
            for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(q + i * 4, &r.vf[fs].w[i], 4);
            store_vi(r, it, r.vi[it] + 1u);
            break;
        }
        case 0x36: {
            store_vi(r, is, r.vi[is] - 1u);
            const std::uint8_t *q = qword(u, r.vi[is]);
            if (ft) for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(&r.vf[ft].w[i], q + i * 4, 4);
            break;
        }
        case 0x37: {
            store_vi(r, it, r.vi[it] - 1u);
            std::uint8_t *q = qword(u, r.vi[it]);
            for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(q + i * 4, &r.vf[fs].w[i], 4);
            break;
        }
        case 0x38: {
            const std::uint32_t before = u.pipe ? u.pipe->begin_q(r) : r.q;
            vu::div(r, r.vf[fs].w[fsf], r.vf[ft].w[ftf]);
            if (u.pipe) u.pipe->end_q(r, before, q_delay_of(u, pc, 7));
            break;
        }
        case 0x39: {
            const std::uint32_t before = u.pipe ? u.pipe->begin_q(r) : r.q;
            vu::sqrt(r, r.vf[ft].w[ftf]);
            if (u.pipe) u.pipe->end_q(r, before, q_delay_of(u, pc, 7));
            break;
        }
        case 0x3A: {
            const std::uint32_t before = u.pipe ? u.pipe->begin_q(r) : r.q;
            vu::rsqrt(r, r.vf[fs].w[fsf], r.vf[ft].w[ftf]);
            if (u.pipe) u.pipe->end_q(r, before, q_delay_of(u, pc, 13));
            break;
        }
        case 0x3B: if (u.pipe) u.pipe->flush_q(r); break;
        case 0x3C: store_vi(r, it, r.vf[fs].w[fsf]); break;
        case 0x3D: if (ft) { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(r.vi[is]))); for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) r.vf[ft].w[i] = v; } break;
        case 0x3E: {
            const std::uint8_t *q = qword(u, r.vi[is]);
            for (int i = 0; i < 4; ++i)
                if (dest & (8u >> i)) {
                    std::uint16_t v;
                    std::memcpy(&v, q + i * 4, 2);
                    store_vi(r, it, v);
                    break;
                }
            break;
        }
        case 0x3F: {
            std::uint8_t *q = qword(u, r.vi[is]);
            const std::uint32_t v = r.vi[it];
            for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(q + i * 4, &v, 4);
            break;
        }
        case 0x40:
            r.r = vu::rand_next(r.r);
            if (ft) for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) r.vf[ft].w[i] = r.r | fp::kOne;
            break;
        case 0x41: if (ft) for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) r.vf[ft].w[i] = (r.r & 0x7FFFFFu) | fp::kOne; break;
        case 0x42: r.r = r.vf[fs].w[fsf] & 0x7FFFFFu; break;
        case 0x43: r.r = (r.r ^ r.vf[fs].w[fsf]) & 0x7FFFFFu; break;
        case 0x64: if (ft) for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) r.vf[ft].w[i] = r.p; break;
        case 0x68: store_vi(r, it, g_top); break;
        case 0x69: store_vi(r, it, g_itop); break;
        case 0x6C: xgkick(u, r.vi[is], pc); break;
        case 0x70: case 0x71: case 0x72: case 0x73: {
            const float x = u2f(r.vf[fs].w[0]), y = u2f(r.vf[fs].w[1]), z = u2f(r.vf[fs].w[2]);
            const float sum = x * x + y * y + z * z;
            float p = sum;
            if (index == 0x71) p = sum != 0.0f ? 1.0f / sum : 3.4e38f;
            if (index == 0x72) p = std::sqrt(sum);
            if (index == 0x73) p = sum != 0.0f ? 1.0f / std::sqrt(sum) : 3.4e38f;
            r.p = f2u(p);
            break;
        }
        case 0x74: r.p = f2u(std::atan2(u2f(r.vf[fs].w[1]), u2f(r.vf[fs].w[0]))); break;
        case 0x75: r.p = f2u(std::atan2(u2f(r.vf[fs].w[2]), u2f(r.vf[fs].w[0]))); break;
        case 0x76: r.p = f2u(u2f(r.vf[fs].w[0]) + u2f(r.vf[fs].w[1]) + u2f(r.vf[fs].w[2]) + u2f(r.vf[fs].w[3])); break;
        case 0x78: r.p = f2u(std::sqrt(std::fabs(u2f(r.vf[fs].w[fsf])))); break;
        case 0x79: { const float v = std::sqrt(std::fabs(u2f(r.vf[fs].w[fsf]))); r.p = f2u(v != 0.0f ? 1.0f / v : 3.4e38f); break; }
        case 0x7A: { const float v = u2f(r.vf[fs].w[fsf]); r.p = f2u(v != 0.0f ? 1.0f / v : 3.4e38f); break; }
        case 0x7B: break;
        case 0x7C: r.p = f2u(std::sin(u2f(r.vf[fs].w[fsf]))); break;
        case 0x7D: r.p = f2u(std::atan(u2f(r.vf[fs].w[fsf]))); break;
        case 0x7E: r.p = f2u(std::exp(-u2f(r.vf[fs].w[fsf]))); break;
        default:
            if (g_reported++ < 32) std::fprintf(stderr, "[vu] lower special 0x%X (0x%08X) at 0x%04X\n", index, w, pc);
            break;
        }
        return;
    }
    const std::uint32_t target = pc + 8u + static_cast<std::uint32_t>(imm11) * 8u;
    switch (w >> 25) {
    case 0x00: {
        const std::uint8_t *q = qword(u, r.vi[is] + static_cast<std::uint32_t>(imm11));
        if (ft) for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(&r.vf[ft].w[i], q + i * 4, 4);
        break;
    }
    case 0x01: {
        std::uint8_t *q = qword(u, r.vi[it] + static_cast<std::uint32_t>(imm11));
        for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(q + i * 4, &r.vf[fs].w[i], 4);
        break;
    }
    case 0x04: {
        const std::uint8_t *q = qword(u, r.vi[is] + static_cast<std::uint32_t>(imm11));
        for (int i = 0; i < 4; ++i)
            if (dest & (8u >> i)) {
                std::uint16_t v;
                std::memcpy(&v, q + i * 4, 2);
                store_vi(r, it, v);
                break;
            }
        break;
    }
    case 0x05: {
        std::uint8_t *q = qword(u, r.vi[is] + static_cast<std::uint32_t>(imm11));
        const std::uint32_t v = r.vi[it];
        for (int i = 0; i < 4; ++i) if (dest & (8u >> i)) std::memcpy(q + i * 4, &v, 4);
        break;
    }
    case 0x08: store_vi(r, it, r.vi[is] + (((w >> 10) & 0x7800u) | (w & 0x7FFu))); break;
    case 0x09: store_vi(r, it, r.vi[is] - (((w >> 10) & 0x7800u) | (w & 0x7FFu))); break;
    case 0x10: store_vi(r, 1, (clip_flags() & 0xFFFFFFu) == (w & 0xFFFFFFu) ? 1u : 0u); break;
    case 0x11:
        r.clip = w & 0xFFFFFFu;
        if (u.pipe) u.pipe->set_clip(r.clip, u.pipe->t - 4u);
        break;
    case 0x12: store_vi(r, 1, (clip_flags() & w & 0xFFFFFFu) ? 1u : 0u); break;
    case 0x13: store_vi(r, 1, ((clip_flags() | w) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); break;
    case 0x14: store_vi(r, it, (status_flags() & 0xFFFu) == ((((w >> 10) & 0x800u) | (w & 0x7FFu))) ? 1u : 0u); break;
    case 0x15:
        r.status = (status_flags() & 0x3Fu) | ((((w >> 10) & 0x800u) | (w & 0x7FFu)) & 0xFC0u);
        if (u.pipe) u.pipe->force_mac(r.mac, r.status);
        break;
    case 0x16: store_vi(r, it, status_flags() & (((w >> 10) & 0x800u) | (w & 0x7FFu))); break;
    case 0x17: store_vi(r, it, ((status_flags() | (((w >> 10) & 0x800u) | (w & 0x7FFu))) & 0xFFFu) == 0xFFFu ? 1u : 0u); break;
    case 0x18: store_vi(r, it, (mac_flags_now() & 0xFFFFu) == r.vi[is] ? 1u : 0u); break;
    case 0x1A: store_vi(r, it, mac_flags_now() & r.vi[is]); break;
    case 0x1B: store_vi(r, it, ((mac_flags_now() | r.vi[is]) & 0xFFFFu) == 0xFFFFu ? 1u : 0u); break;
    case 0x1C: store_vi(r, it, clip_flags() & 0xFFFu); break;
    case 0x20: branch_to(target); break;
    case 0x21: store_vi(r, it, (pc + 16u) / 8u); branch_to(target); break;
    case 0x24: branch_to(static_cast<std::uint32_t>(r.vi[is]) * 8u); break;
    case 0x25: { const std::uint32_t t = static_cast<std::uint32_t>(r.vi[is]) * 8u; store_vi(r, it, (pc + 16u) / 8u); branch_to(t); break; }
    case 0x28: if (r.vi[is] == r.vi[it]) branch_to(target); break;
    case 0x29: if (r.vi[is] != r.vi[it]) branch_to(target); break;
    case 0x2C: if (static_cast<std::int16_t>(r.vi[is]) < 0) branch_to(target); break;
    case 0x2D: if (static_cast<std::int16_t>(r.vi[is]) > 0) branch_to(target); break;
    case 0x2E: if (static_cast<std::int16_t>(r.vi[is]) <= 0) branch_to(target); break;
    case 0x2F: if (static_cast<std::int16_t>(r.vi[is]) >= 0) branch_to(target); break;
    default:
        if (g_reported++ < 32) std::fprintf(stderr, "[vu] lower 0x%08X at 0x%04X\n", w, pc);
        break;
    }
}

}

void reset_local_continuation_cache();

void reset() {
    if (gs::queue::vu_active() && gs::queue::role() != gs::queue::Role::Vu) {
        gs::queue::vu().post(gs::queue::kVuReset, 0, 0, nullptr, 0);
        return;
    }
    reset_local_continuation_cache();
    std::memset(&g_vu1, 0, sizeof g_vu1);
    g_vu1.vf[0].w[3] = fp::kOne;
    g_top = g_itop = 0;
}

Vu0Regs &regs(int unit) { return unit ? g_vu1 : g_cpu.vu0; }

std::uint32_t tpc(int unit) { return regs(unit).tpc; }

void set_tops(std::uint32_t top, std::uint32_t itop) {
    g_top = top;
    g_itop = itop;
}

void run_fast(int n, std::uint32_t address);

timing::Profile *timing_profile() {
    static const auto profile=[]() -> std::unique_ptr<timing::Profile> {
        const char *path=std::getenv("PS2_VU_TIMING_CSV");
        return path && *path ? std::make_unique<timing::Profile>(path) : nullptr;
    }();
    return profile.get();
}
#if defined(PS2_VU_REPLAY_CAPTURE)
replay::Capture *replay_capture() {
    static const auto capture=[]() -> std::unique_ptr<replay::Capture> {
        const char *path=std::getenv("PS2_VU_REPLAY_CAPTURE");
        return path && *path ? std::make_unique<replay::Capture>(path) : nullptr;
    }();
    return capture.get();
}
#endif
#if defined(PS2_VU_REPLAY_CAPTURE)
void timing_present_marker() {
    if(auto *p=timing_profile())p->present_marker();
    if(auto *p=replay_capture())p->present_marker();
}
#else
void timing_present_marker() { if(auto *p=timing_profile()) p->present_marker(); }
#endif

std::unordered_map<std::uint64_t, ProgramFn> g_programs;
std::unordered_map<std::uint64_t, ContinuationFn> g_continuations;
bool g_continuation_entries[2048] = {};

void register_continuations(const Continuation *programs, std::uint32_t count) {
    for (std::uint32_t i = 0; i < count; ++i) {
        if (!programs[i].function) continue;
        g_continuations[programs[i].key] = programs[i].function;
        g_continuation_entries[(programs[i].entry & 16383u) >> 3] = true;
    }
}

bool continuation_flags_used() {
    if (g_scan[1]) scan_flags(1, g_vu1_code, 16384);
    return g_flags_used[1];
}

void detail::continuation_q_read_slow(Vu0Regs &r, vuops::FlagPipe &pipe, std::uint32_t pc, std::uint32_t hi) {
    read_q(unit_of(1), pipe, r, pc, hi);
}

std::uint32_t detail::continuation_q_delay_slow(std::uint32_t pc, std::uint32_t latency) {
    return q_delay_of(unit_of(1), pc, latency);
}

std::uint32_t detail::continuation_q_delay_slow(int unit, std::uint32_t pc, std::uint32_t latency) {
    return q_delay_of(unit_of(unit & 1), pc, latency);
}

struct Candidate {
    std::uint64_t key = 0;
    std::vector<std::uint32_t> runs;
    std::vector<std::uint8_t> code;
    ProgramFn function = nullptr;
    ProgramFn jit = nullptr;
    ContinuationFn continuation = nullptr;
};

struct EntryCache {
    std::uint32_t generation = 0;
    std::uint64_t validated_change = 0;
    ProgramFn function = nullptr;
    ProgramFn jit = nullptr;
    ContinuationFn continuation = nullptr;
    std::vector<Candidate> candidates;
    std::uint32_t next = 0;
    std::size_t last = 0;
};

// A generation invalidates Q/flag analysis globally. Native program identity can
// also survive a known write outside every instruction reachable from its entry.
// Retain a bounded journal, never a hash-based proof of code equality.
struct CodeChanges {
    static constexpr std::size_t capacity = 64;
    static constexpr std::uint32_t code_bytes = 16384;
    struct Change { std::uint64_t serial = 0; std::uint32_t address = 0, bytes = 0; };
    std::array<Change, capacity> changes{};
    std::uint64_t serial = 0;
    bool exhausted = false;

    void add(std::uint32_t address, std::uint32_t bytes) {
        if (serial == std::numeric_limits<std::uint64_t>::max()) {
            exhausted = true;
            return;
        }
        ++serial;
        // Empty/oversized descriptions are uncertain, so invalidate all code.
        if (!bytes || bytes >= code_bytes) { address = 0; bytes = code_bytes; }
        changes[serial % capacity] = {serial, address & (code_bytes - 1), bytes};
    }

    bool untouched(std::uint64_t since, const std::vector<std::uint32_t> &runs) const {
        if (exhausted || serial == std::numeric_limits<std::uint64_t>::max() ||
            since > serial || serial - since > capacity) return false;
        for (std::uint64_t at = since + 1; at <= serial; ++at) {
            const Change &change = changes[at % capacity];
            if (change.serial != at || change.bytes == code_bytes) return false;
            const auto first = std::min(change.bytes, code_bytes - change.address);
            const auto rest = change.bytes - first;
            for (std::size_t i = 0; i < runs.size(); i += 2) {
                const auto begin = runs[i], end = begin + runs[i + 1];
                if (begin < change.address + first && change.address < end) return false;
                if (rest && begin < rest) return false;
            }
        }
        return true;
    }
};

CodeChanges g_code_changes;
std::uint64_t g_cache_range_reuses = 0;

std::uint64_t cache_range_reuses() { return g_cache_range_reuses; }

bool candidate_matches(const Candidate &c) {
    const std::uint8_t *code = c.code.data();
    for (std::size_t i = 0; i < c.runs.size(); i += 2) {
        if (!code_equal(g_vu1_code + c.runs[i], code, c.runs[i + 1])) return false;
        code += c.runs[i + 1];
    }
    return true;
}

Candidate make_candidate(std::vector<std::uint32_t> pcs) {
    std::sort(pcs.begin(), pcs.end());
    Candidate c;
    for (std::uint32_t pc : pcs) {
        if (!c.runs.empty() && c.runs[c.runs.size() - 2] + c.runs.back() == pc) c.runs.back() += 8;
        else {
            c.runs.push_back(pc);
            c.runs.push_back(8);
        }
        c.code.insert(c.code.end(), g_vu1_code + pc, g_vu1_code + pc + 8);
    }
    return c;
}
std::unordered_map<std::uint64_t, ProgramFn> g_jit_programs;
std::vector<std::uint32_t> *g_kick_log = nullptr;
std::int64_t *g_capture = nullptr;

ProgramFn jit_program(std::uint64_t key, std::uint32_t address) {
    const auto it = g_jit_programs.find(key);
    if (it != g_jit_programs.end()) return it->second;
    const ProgramFn fn = jit::compile(g_vu1_code, address & 16383u);
    g_jit_programs[key] = fn;
    return fn;
}
EntryCache g_entries[2048];

struct LocalCandidate {
    std::vector<std::uint8_t> code;
    std::vector<std::uint32_t> runs;
    ContinuationFn function = nullptr;
    std::uint64_t diagnostic_key = 0, profile_calls = 0;
};
struct LocalEntryCache {
    std::vector<LocalCandidate> candidates;
    std::size_t last = 0;
    std::uint64_t validated_change = 0;
    bool valid = false, positive = false;
};
std::array<std::unique_ptr<LocalEntryCache>, 2048> g_local_entries;
LocalContinuationStats g_local_stats;

bool local_continuations_enabled() {
    static const bool off = std::getenv("PS2_VU_LOCAL_BLOCKS_OFF") != nullptr ||
        std::getenv("PS2_VU_CONT_OFF") != nullptr || std::getenv("PS2_VU_INTERPRET") != nullptr;
    return !off;
}

bool local_dispatch_pc(std::uint32_t address) {
    switch (address) {
    case 0x3490u: case 0x34E0u: case 0x34F0u:
    case 0x3500u: case 0x3510u: case 0x3520u: return true;
    default: return false;
    }
}

void reset_local_continuation_cache() {
    for (auto &entry : g_local_entries) if (entry) entry->valid = false;
}

void register_local_continuations(const LocalContinuation *programs, std::uint32_t count) {
    if (gs::queue::active() || gs::queue::vu_active())
        throw std::logic_error("Register local VU continuations before worker startup");
    if (count && !programs) throw std::invalid_argument("Null local VU table");
    for (std::uint32_t i = 0; i < count; ++i) {
        const auto &p = programs[i];
        if (!local_dispatch_pc(p.entry) || !p.code || !p.function ||
            p.bytes < 16u || p.bytes > 256u || (p.bytes & 7u) || p.entry > 16384u - p.bytes)
            throw std::invalid_argument("Invalid local VU span");
        auto &owner = g_local_entries[p.entry >> 3];
        if (!owner) owner = std::make_unique<LocalEntryCache>();
        auto &entry = *owner;
        bool duplicate = false;
        for (const auto &old : entry.candidates) {
            if (old.code.size() == p.bytes && std::memcmp(old.code.data(), p.code, p.bytes) == 0) {
                if (old.function != p.function)
                    throw std::invalid_argument("Ambiguous local VU function for identical bytes");
                duplicate = true;
                break;
            }
        }
        if (duplicate) continue;
        // The audited forty-block table has at most ten variants per entry.
        // Bound registry growth and make malformed/generated tables fail closed.
        if (entry.candidates.size() == 16u)
            throw std::invalid_argument("Too many local VU variants");
        LocalCandidate c;
        c.code.assign(p.code, p.code + p.bytes);
        c.runs = {p.entry, p.bytes};
        c.function = p.function;
        // Diagnostic label only. Execution always checks every span byte.
        c.diagnostic_key = 0xCBF29CE484222325ull ^ p.entry ^ (std::uint64_t(p.bytes) << 32);
        for (const auto b : c.code) { c.diagnostic_key ^= b; c.diagnostic_key *= 0x100000001B3ull; }
        entry.candidates.push_back(std::move(c));
        entry.valid = false;
        ++g_local_stats.registered;
    }
    std::fprintf(stderr, "[vu-local] registered=%llu enabled=%u\n",
        static_cast<unsigned long long>(g_local_stats.registered), unsigned(local_continuations_enabled()));
}

LocalCandidate *lookup_local_candidate(std::uint32_t address) {
    if (!g_local_stats.registered || !local_continuations_enabled() || (address & 7u)) return nullptr;
    const std::uint32_t pc = address & 16383u;
    auto &owner = g_local_entries[pc >> 3];
    if (!owner) return nullptr;
    auto &entry = *owner;
    const bool serial_safe = !g_code_changes.exhausted &&
        g_code_changes.serial != std::numeric_limits<std::uint64_t>::max();
    if (serial_safe && entry.valid && entry.validated_change == g_code_changes.serial) {
        ++g_local_stats.cache_hits;
        if (!entry.positive) { ++g_local_stats.misses; return nullptr; }
        return &entry.candidates[entry.last];
    }
    const auto select = [&](std::size_t index) -> LocalCandidate * {
        auto &c = entry.candidates[index];
        ++g_local_stats.byte_validations;
        if (!code_equal(g_vu1_code + pc, c.code.data(), c.code.size())) return nullptr;
        entry.last = index;
        entry.validated_change = g_code_changes.serial;
        entry.valid = entry.positive = true;
        return &c;
    };
    if (entry.valid && entry.positive) {
        auto &c = entry.candidates[entry.last];
        static const bool range_off = std::getenv("PS2_VU_RANGE_REUSE_OFF") != nullptr;
        if (serial_safe && !range_off && g_code_changes.untouched(entry.validated_change, c.runs)) {
            entry.validated_change = g_code_changes.serial;
            ++g_local_stats.range_reuses;
            return &c;
        }
        if (auto *match = select(entry.last)) return match;
    }
    for (std::size_t i = 0; i < entry.candidates.size(); ++i) {
        if (entry.valid && entry.positive && i == entry.last) continue;
        if (auto *match = select(i)) return match;
    }
    entry.validated_change = g_code_changes.serial;
    entry.valid = true;
    entry.positive = false;
    ++g_local_stats.misses;
    return nullptr;
}

ContinuationFn lookup_local_continuation(std::uint32_t address) {
    if (auto *c = lookup_local_candidate(address)) return c->function;
    return nullptr;
}

LocalContinuationStats local_continuation_stats() { return g_local_stats; }


static void change_code(int unit, std::uint32_t address, std::uint32_t bytes) {
    const int n = unit & 1;
    g_scan[n] = true;
    const bool wrapped = ++g_generation[n] == 0;
    if (wrapped) {
        // Do not let a wrapped 32-bit generation alias an ancient analysis.
        g_generation[n] = 1;
        for (auto &value : g_q_delay[n]) value = {};
        for (auto &value : g_q_kind[n]) value = {};
        g_q_index_generation[n] = 0;
        if (n == 1) for (auto &entry : g_entries) entry.generation = 0;
    }
    change_q_delays(n, address, bytes, wrapped);
    // Kind/flags still use the global generation. Reverse edges and finite
    // delay windows survive only writes proven disjoint. The control preserves
    // the old lazy full reset in read_q, not an eager rebuild per MPG.
    static const bool full_index=std::getenv("PS2_VU_Q_INDEX_FULL")!=nullptr;
    if(!full_index) {
        const auto code=n?g_vu1_code:g_vu0_code;
        const auto mask=n?16383u:4095u;
        g_q_index[n].changed(code,mask,address,wrapped?CodeChanges::code_bytes:bytes);
        g_q_index_generation[n]=g_generation[n];
    }
    if (n == 1) g_code_changes.add(address, wrapped ? CodeChanges::code_bytes : bytes);
}

void code_changed(int unit) { change_code(unit, 0, CodeChanges::code_bytes); }
void code_changed(int unit, std::uint32_t address, std::uint32_t bytes) { change_code(unit, address, bytes); }

void register_programs(const Program *programs, std::uint32_t count) {
    for (std::uint32_t i = 0; i < count; ++i)
        if (programs[i].function) g_programs[programs[i].key] = programs[i].function;
}

void kick(int unit, std::uint32_t address) {
    if (g_kick_log && unit == 1) g_kick_log->push_back(address);
    Unit u = unit_of(unit);
    xgkick(u, address);
}

std::uint32_t top() { return g_top; }
std::uint32_t itop() { return g_itop; }

ProgramFn lookup(std::uint32_t address);

std::atomic<std::uint64_t> g_interpreted_calls{0};
std::atomic<std::uint64_t> g_native_continuations{0}, g_interpreted_instructions{0}, g_continuation_checks{0};

std::uint64_t native_continuations() { return g_native_continuations.load(std::memory_order_relaxed); }

ContinuationProfile<> *continuation_profile() {
    static const auto profile = [] {
        const char *path = std::getenv("PS2_VU_CONT_PROFILE");
        return path && *path ? std::make_unique<ContinuationProfile<>>() : nullptr;
    }();
    return profile.get();
}

void write_continuation_profile() {
    const auto *profile = continuation_profile();
    if (!profile) return;
    auto *file = ps2::host_path::open(std::getenv("PS2_VU_CONT_PROFILE"), "w");
    if (!file) { std::fprintf(stderr,"[vu-cont-profile] cannot write CSV\n"); return; }
    std::fputs("pc,program_key,program_available,native_segments,fallback_calls,fallback_instructions,dropped_segments,dropped_instructions\n",file);
    for (const auto &r : profile->rows) {
        if (!r.native && !r.fallback) continue;
        std::fprintf(file,"%04X,%016llX,%u,%llu,%llu,%llu,%llu,%llu\n",r.pc,static_cast<unsigned long long>(r.key),unsigned(r.program_available),
            static_cast<unsigned long long>(r.native),static_cast<unsigned long long>(r.fallback),static_cast<unsigned long long>(r.instructions),
            static_cast<unsigned long long>(profile->dropped_segments),static_cast<unsigned long long>(profile->dropped_instructions));
    }
    const bool failed=std::ferror(file)!=0;
    const int closed=std::fclose(file);
    std::fprintf(stderr,"[vu-cont-profile] capacity=%zu dropped_segments=%llu dropped_instructions=%llu write_ok=%u\n",profile->rows.size(),
        static_cast<unsigned long long>(profile->dropped_segments),static_cast<unsigned long long>(profile->dropped_instructions),unsigned(!failed && closed==0));
}

void write_local_continuation_profile() {
    // The shutdown ACK publishes all prior VU writes; no worker mutates rows.
    if (!g_local_stats.registered) return;
    const char *profile_path = std::getenv("PS2_VU_CONT_PROFILE");
    if (!profile_path || !*profile_path) return;
    const std::string path = std::string(profile_path) + ".local.csv";
    std::FILE *file = host_path::open(path.c_str(), "wb");
    if (!file) {
        std::fprintf(stderr, "[vu-local-profile] scope=local_prefix write_ok=0\n");
        return;
    }
    std::fprintf(file, "identity_scope,pc,bytes,diagnostic_key,variant,native_segments,expected_bytes\n");
    std::uint64_t segments = 0;
    for (std::size_t i = 0; i < g_local_entries.size(); ++i) {
        const auto &owner = g_local_entries[i];
        if (!owner) continue;
        for (std::size_t variant = 0; variant < owner->candidates.size(); ++variant) {
            const auto &c = owner->candidates[variant];
            if (!c.profile_calls) continue;
            segments += c.profile_calls;
            std::fprintf(file, "local_prefix,%04X,%zu,%016llX,%zu,%llu,", unsigned(i * 8u), c.code.size(),
                static_cast<unsigned long long>(c.diagnostic_key), variant, static_cast<unsigned long long>(c.profile_calls));
            for (const auto b : c.code) std::fprintf(file, "%02X", unsigned(b));
            std::fputc('\n', file);
        }
    }
    const bool failed = std::ferror(file) != 0;
    const int closed = std::fclose(file);
    std::fprintf(stderr, "[vu-local-profile] scope=local_prefix native_segments=%llu write_ok=%u\n",
        static_cast<unsigned long long>(segments), unsigned(!failed && closed == 0));
}

void stats() {
#if defined(PS2_VU_REPLAY_CAPTURE)
    if(auto *capture=replay_capture())capture->dump();
#endif
    if(g_q_index_stats_enabled)for(unsigned n=0;n<2;++n) {
        const auto &q=g_q_index_stats[n];
        std::fprintf(stderr,"[vu-q-index] unit=%u full_builds=%llu full_nodes=%llu incremental_updates=%llu incremental_nodes=%llu incremental_fallbacks=%llu\n",
            n,static_cast<unsigned long long>(q.full_builds),static_cast<unsigned long long>(q.full_nodes),
            static_cast<unsigned long long>(q.incremental_updates),static_cast<unsigned long long>(q.incremental_nodes),
            static_cast<unsigned long long>(q.incremental_fallbacks));
    }
    if(auto *timing=timing_profile()) timing->dump();
    write_local_continuation_profile();
    if (g_local_stats.registered) std::fprintf(stderr,
        "[vu-local] calls=%llu byte_validations=%llu range_reuses=%llu cache_hits=%llu misses=%llu checked_segments=%llu\n",
        static_cast<unsigned long long>(g_local_stats.calls), static_cast<unsigned long long>(g_local_stats.byte_validations),
        static_cast<unsigned long long>(g_local_stats.range_reuses), static_cast<unsigned long long>(g_local_stats.cache_hits),
        static_cast<unsigned long long>(g_local_stats.misses), static_cast<unsigned long long>(g_local_stats.checked_segments));
    // run() drained the VU queue before stats(); no live worker mutates rows.
    write_continuation_profile();
    if (g_cache_range_reuses) std::fprintf(stderr, "[vu-cache] disjoint_range_reuses=%llu\n",
        static_cast<unsigned long long>(g_cache_range_reuses));
    const auto q_checks = g_q_index_checks.load(std::memory_order_relaxed);
    if (q_checks) std::fprintf(stderr, "[vu-q] indexed_checks=%llu passed\n", static_cast<unsigned long long>(q_checks));
    if (g_continuations.empty()) return;
    std::fprintf(stderr, "[vu-cont] native_segments=%llu interpreted_instructions=%llu checked_calls=%llu\n",
        static_cast<unsigned long long>(g_native_continuations.load(std::memory_order_relaxed)),
        static_cast<unsigned long long>(g_interpreted_instructions.load(std::memory_order_relaxed)),
        static_cast<unsigned long long>(g_continuation_checks.load(std::memory_order_relaxed)));
}

std::uint64_t interpreted_calls() { return g_interpreted_calls.load(std::memory_order_relaxed); }

void check_jit(ProgramFn compiled, ProgramFn jit) {
    static std::uint64_t calls = 0, escapes = 0, mismatches = 0;
    static std::uint8_t before_mem[16384], jit_mem[16384];
    const Vu0Regs before = g_vu1;
    std::memcpy(before_mem, g_vu1_mem, sizeof before_mem);
    std::vector<std::uint32_t> jit_kicks, kicks;
    jit::g_dry = true;
    jit::g_escape = -1;
    jit::g_kicks = &jit_kicks;
    jit(g_vu1, g_vu1_mem);
    jit::g_dry = false;
    const std::int64_t jit_escape = jit::g_escape;
    const Vu0Regs after = g_vu1;
    std::memcpy(jit_mem, g_vu1_mem, sizeof jit_mem);
    g_vu1 = before;
    std::memcpy(g_vu1_mem, before_mem, sizeof before_mem);
    std::int64_t escape = -1;
    g_kick_log = &kicks;
    g_capture = &escape;
    compiled(g_vu1, g_vu1_mem);
    g_capture = nullptr;
    g_kick_log = nullptr;
    ++calls;
    if (escape >= 0) ++escapes;
    if (escape != jit_escape || std::memcmp(&after, &g_vu1, sizeof after) != 0 || std::memcmp(jit_mem, g_vu1_mem, sizeof jit_mem) != 0 || kicks != jit_kicks) {
        if (++mismatches <= 10) {
            int vf = -1;
            for (int i = 0; i < 32 && vf < 0; ++i)
                if (std::memcmp(&after.vf[i], &g_vu1.vf[i], 16) != 0) vf = i;
            std::fprintf(stderr, "[jit] mismatch at tpc 0x%X escape %lld/%lld: vf%d acc %d vi %d q/p/i/r %d flags %d mem %d kicks %zu/%zu\n", before.tpc, static_cast<long long>(jit_escape), static_cast<long long>(escape), vf,
                         std::memcmp(&after.acc, &g_vu1.acc, 16) != 0, std::memcmp(after.vi, g_vu1.vi, sizeof after.vi) != 0,
                         after.q != g_vu1.q || after.p != g_vu1.p || after.i != g_vu1.i || after.r != g_vu1.r,
                         after.mac != g_vu1.mac || after.status != g_vu1.status || after.clip != g_vu1.clip,
                         std::memcmp(jit_mem, g_vu1_mem, sizeof jit_mem) != 0, jit_kicks.size(), kicks.size());
        }
    }
    if (calls % 2000 == 0)
        std::fprintf(stderr, "[jit] checked %llu calls, %llu mismatches, %llu through the interpreter\n", static_cast<unsigned long long>(calls),
                     static_cast<unsigned long long>(mismatches), static_cast<unsigned long long>(escapes));
    if (escape >= 0) interpret(1, static_cast<std::uint32_t>(escape));
}

void run_entry(int unit, std::uint32_t pc);
std::uint32_t run_fast_continuation(int n, std::uint32_t address, vuops::FlagPipe &pipe, bool handoff, std::uint32_t *instructions = nullptr);

void run_continuations(std::uint32_t pc) {
    vuops::FlagPipe pipe;
    pipe.start(g_vu1);
    auto *profile = continuation_profile();
    auto *timing = timing_profile();
#if defined(PS2_VU_REPLAY_CAPTURE)
    auto *capture = replay_capture();
#endif
    // Same live FlagPipe and exactly one execution of each selected function.
    while (pc != kContinuationEnd) {
        auto ticket = timing ? timing->begin() : timing::Profile::Ticket{};
        if (auto *local = lookup_local_candidate(pc)) {
            ticket.lookup_done();
            ++g_local_stats.calls;
            if (profile) ++local->profile_calls;
            g_native_continuations.fetch_add(1, std::memory_order_relaxed);
            const auto start = pc;
            ticket.body_begin();
            pc = local->function(g_vu1, g_vu1_mem, pipe);
            if (timing) timing->add(ticket,timing::Profile::Local,start,local->diagnostic_key,static_cast<std::uint32_t>(local->code.size()));
            continue;
        }
        lookup(pc);
        ticket.lookup_done();
        const auto &entry = g_entries[(pc & 16383u) >> 3];
#if defined(PS2_VU_REPLAY_CAPTURE)
        const auto key = (profile || ticket.on || capture) ? entry.candidates[entry.last].key : 0;
#else
        const auto key = (profile || ticket.on) ? entry.candidates[entry.last].key : 0;
#endif
        if (const auto fn = entry.continuation) {
            if (profile) profile->add(pc, key, true, entry.function != nullptr, 0);
            g_native_continuations.fetch_add(1, std::memory_order_relaxed);
            const auto start = pc;
#if defined(PS2_VU_REPLAY_CAPTURE)
            // Observe the actual execution once; a tee still forwards every packet.
            auto *fixture=(capture && !g_continuation_packets && !g_replay_packet_tee) ?
                capture->begin(start,key,g_vu1,pipe,g_vu1_code,g_vu1_mem,g_top,g_itop,g_vu_entry_pc) : nullptr;
            ticket.body_begin();
            if(fixture) {
                ReplayPacketScope tee(fixture);
                pc = fn(g_vu1,g_vu1_mem,pipe);
                capture->finish(*fixture,pc,g_vu1,pipe,g_vu1_mem);
            } else pc=fn(g_vu1,g_vu1_mem,pipe);
#else
            ticket.body_begin();
            pc = fn(g_vu1, g_vu1_mem, pipe);
#endif
            if (timing) timing->add(ticket,timing::Profile::Native,start,key,0);
        } else {
            g_interpreted_calls.fetch_add(1, std::memory_order_relaxed);
            std::uint32_t instructions = 0;
            const auto start = pc;
            const bool available = entry.function != nullptr;
            ticket.body_begin();
            pc = run_fast_continuation(1, pc, pipe, true, (profile || ticket.on) ? &instructions : nullptr);
            if (timing) timing->add(ticket,timing::Profile::Fallback,start,key,0,instructions);
            if (profile) profile->add(start, key, false, available, instructions);
        }
    }
}

void check_continuations(std::uint32_t pc, std::uint64_t stride) {
    static std::uint64_t samples = 0;
    if (++samples % stride != 0) { run_continuations(pc); return; }
    const Vu0Regs before = g_vu1;
    std::uint8_t mem_before[16384], mem_expected[16384];
    std::memcpy(mem_before, g_vu1_mem, sizeof mem_before);
    std::vector<std::uint8_t> expected_packets, actual_packets;
    g_continuation_packets = &expected_packets;
    run_fast(1, pc);
    const Vu0Regs expected = g_vu1;
    std::memcpy(mem_expected, g_vu1_mem, sizeof mem_expected);
    g_vu1 = before;
    std::memcpy(g_vu1_mem, mem_before, sizeof mem_before);
    g_continuation_packets = &actual_packets;
    const auto local_before = g_local_stats.calls;
    run_continuations(pc);
    const auto local_checked = g_local_stats.calls - local_before;
    g_continuation_packets = nullptr;
    if (std::memcmp(&expected, &g_vu1, sizeof expected) ||
        std::memcmp(mem_expected, g_vu1_mem, sizeof mem_expected) || expected_packets != actual_packets) {
        int offset = -1;
        for (unsigned i = 0; i < sizeof expected; ++i)
            if (reinterpret_cast<const std::uint8_t *>(&expected)[i] != reinterpret_cast<const std::uint8_t *>(&g_vu1)[i]) { offset = i; break; }
        std::fprintf(stderr, "[vu-cont-check] MISMATCH pc=%04X sample=%llu register_byte=%d memory=%d packets=%zu/%zu Q=%08X/%08X MAC=%X/%X status=%X/%X CLIP=%X/%X TPC=%X/%X\n",
            pc, static_cast<unsigned long long>(samples), offset, std::memcmp(mem_expected,g_vu1_mem,sizeof mem_expected)!=0,
            expected_packets.size(), actual_packets.size(), expected.q,g_vu1.q,expected.mac,g_vu1.mac,expected.status,g_vu1.status,expected.clip,g_vu1.clip,expected.tpc,g_vu1.tpc);
        std::fflush(stderr);
        std::abort();
    }
    g_local_stats.checked_segments += local_checked;
    const auto checked = g_continuation_checks.fetch_add(1, std::memory_order_relaxed) + 1;
    if (checked == 1 || checked % 100 == 0)
        std::fprintf(stderr,"[vu-cont-check] %llu complete register/memory/GIF-packet comparisons passed\n",static_cast<unsigned long long>(checked));
    // Only this third execution sends packets to GS. Diagnostics cannot submit twice.
    g_vu1 = before;
    std::memcpy(g_vu1_mem,mem_before,sizeof mem_before);
    run_continuations(pc);
}

bool g_chaining = false;
std::int64_t g_chained = -1;

void interpret(int unit, std::uint32_t pc) {
    if (unit == 1 && g_capture) {
        *g_capture = pc;
        return;
    }
    if (unit != 1) {
        run_entry(unit, pc);
        return;
    }
    if (g_chaining) {
        g_chained = pc;
        return;
    }
    g_chaining = true;
    for (;;) {
        run_entry(1, pc);
        if (g_chained < 0) break;
        pc = static_cast<std::uint32_t>(g_chained);
        g_chained = -1;
    }
    g_chaining = false;
}

void run_entry(int unit, std::uint32_t pc) {
    VuEntryScope entry_scope(pc);
    static const bool interpret_only = std::getenv("PS2_VU_INTERPRET") != nullptr;
    static const bool count = std::getenv("PS2_VU_COUNT") != nullptr;
    static std::uint64_t compiled = 0, interpreted = 0;
    static std::unordered_map<std::uint32_t, std::uint64_t> misses;
    if (unit == 1 && !interpret_only) {
        static const bool continuation_off = std::getenv("PS2_VU_CONT_OFF") != nullptr;
        // Local spans are proven independently of changed callees. Preserve the
        // same continuation oracle and FlagPipe ABI; a miss keeps legacy lookup.
        if (!continuation_off && lookup_local_continuation(pc)) {
            static const char *check = std::getenv("PS2_VU_CONT_CHECK");
            static const std::uint64_t stride = check ? std::max<std::uint64_t>(1, std::strtoull(check, nullptr, 10)) : 0;
            if (stride) check_continuations(pc, stride);
            else run_continuations(pc);
            return;
        }
        const ProgramFn selected = lookup(pc);
        if (!continuation_off && !g_continuations.empty() &&
            (g_entries[(pc & 16383u) >> 3].continuation || !selected)) {
            static const char *check = std::getenv("PS2_VU_CONT_CHECK");
            static const std::uint64_t stride = check ? std::max<std::uint64_t>(1, std::strtoull(check, nullptr, 10)) : 0;
            if (stride) check_continuations(pc, stride);
            else run_continuations(pc);
            return;
        }
        if (const ProgramFn fn = selected) {
            ++compiled;
            const ProgramFn jit = g_entries[(pc & 16383u) >> 3].jit;
            static std::uint64_t sampled = 0;
            if (jit && jit != fn && ++sampled % 32 == 0) check_jit(fn, jit);
            else fn(g_vu1, g_vu1_mem);
            return;
        }
    }
    if (unit == 1) g_interpreted_calls.fetch_add(1, std::memory_order_relaxed);
    if (count && unit == 1) {
        ++misses[pc];
        if (++interpreted % 5000 == 0) {
            std::fprintf(stderr, "[vu1] compiled %llu interpreted %llu:", static_cast<unsigned long long>(compiled), static_cast<unsigned long long>(interpreted));
            for (const auto &[a, n] : misses) std::fprintf(stderr, " %04X:%llu", a, static_cast<unsigned long long>(n));
            std::fprintf(stderr, "\n");
        }
    }
    run_fast(unit, pc);
}

ProgramFn lookup(std::uint32_t address) {
    EntryCache &e = g_entries[(address & 16383u) >> 3];
    // The independent serial also prevents generation wrap from aliasing an old
    // result. A saturated serial conservatively disables both cache shortcuts.
    if (!g_code_changes.exhausted && g_code_changes.serial != std::numeric_limits<std::uint64_t>::max() &&
        e.generation == g_generation[1] &&
        e.validated_change == g_code_changes.serial) return e.function;
    e.generation = g_generation[1];
    static const bool range_reuse_off = std::getenv("PS2_VU_RANGE_REUSE_OFF") != nullptr;
    if (!range_reuse_off && !e.candidates.empty()) {
        const Candidate &last = e.candidates[e.last];
        // A cached miss is not a positive program identity. In particular, a
        // null candidate must still discover newly uploaded/reachable programs.
        if ((e.function || e.continuation) && (last.function || last.continuation) &&
            g_code_changes.untouched(e.validated_change, last.runs)) {
            e.validated_change = g_code_changes.serial;
            ++g_cache_range_reuses;
            return e.function;
        }
    }
    // MPG can change unrelated code. Validate the last selected variant first;
    // byte comparisons still cover every instruction reachable from this entry.
    const auto select = [&](std::size_t index) {
        const Candidate &c = e.candidates[index];
        if (!candidate_matches(c)) return false;
        e.last = index;
        e.function = c.function;
        e.jit = c.jit;
        e.continuation = c.continuation;
        e.validated_change = g_code_changes.serial;
        return true;
    };
    if (!e.candidates.empty() && select(e.last)) return e.function;
    for (std::size_t i = 0; i < e.candidates.size(); ++i)
        if (i != e.last && select(i)) return e.function;
    const std::vector<std::uint32_t> pcs = reachable(g_vu1_code, 16383u, address);
    const std::uint64_t key = program_key(g_vu1_code, pcs, address & 16383u);
    const auto it = g_programs.find(key);
    e.function = it == g_programs.end() ? nullptr : it->second;
    e.jit = nullptr;
    const auto continuation = g_continuations.find(key);
    e.continuation = continuation == g_continuations.end() ? nullptr : continuation->second;
    const int jit_mode = jit::mode();
    if (jit_mode == 2 || (jit_mode >= 1 && !e.function)) e.function = jit_program(key, address);
    else if (jit_mode == 3) e.jit = jit_program(key, address);
    Candidate c = make_candidate(pcs);
    c.key = key;
    c.function = e.function;
    c.jit = e.jit;
    c.continuation = e.continuation;
    e.validated_change = g_code_changes.serial;
    // Speed Racer cycles through more than eight microcode variants per entry.
    // Retain a bounded working set to avoid repeating reachability, sorting and
    // hashing on every MPG upload. Every reuse still compares the code bytes.
    constexpr std::size_t kCandidateLimit = 64;
    if (e.candidates.size() < kCandidateLimit) {
        e.last = e.candidates.size();
        e.candidates.push_back(std::move(c));
    } else {
        e.last = e.next++ % kCandidateLimit;
        e.candidates[e.last] = std::move(c);
    }
    static const char *record = std::getenv("PS2_VU_RECORD");
    if (!e.function && (record || g_options.on_vu_program)) {
        char name[64];
        std::snprintf(name, sizeof name, "%016llX_%04X.bin", static_cast<unsigned long long>(key), address & 16383u);
        if (g_options.on_vu_program) {
            static std::unordered_set<std::string> reported;
            if (reported.insert(name).second) g_options.on_vu_program(name, g_vu1_code, 16384);
            return e.function;
        }
        const std::filesystem::path path = std::filesystem::path(record) / name;
        if (!std::filesystem::exists(path)) {
            std::filesystem::create_directories(record);
            std::ofstream(path, std::ios::binary).write(reinterpret_cast<const char *>(g_vu1_code), 16384);
        }
    }
    return e.function;
}

void run_fast(int n, std::uint32_t address) {
    vuops::FlagPipe pipe;
    pipe.start(*unit_of(n).regs);
    run_fast_continuation(n, address, pipe, false);
}

std::uint32_t run_fast_continuation(int n, std::uint32_t address, vuops::FlagPipe &pipe, bool handoff, std::uint32_t *instructions) {
    Unit u = unit_of(n);
    Vu0Regs &r = *u.regs;
    if (g_scan[n]) scan_flags(n, u.code, u.code_mask + 1);
    const bool flags = g_flags_used[n];
    Decoded *cache = g_decoded[n];
    u.pipe = &pipe;
    std::uint32_t pc = address & u.code_mask, npc = (pc + 8u) & u.code_mask;
    bool ending = false, branch_delay = false;
    UpperOut out;
    static std::uint64_t total = 0, calls = 0;
    static const bool count = std::getenv("PS2_VU_COUNT") != nullptr;
    static const bool record_jumps = std::getenv("PS2_VU_RECORD") != nullptr || static_cast<bool>(g_options.on_vu_program);
    if (count && ++calls % 20000 == 0) std::fprintf(stderr, "[vu1] %llu calls, %llu instructions\n", (unsigned long long)calls, (unsigned long long)total);
    for (std::uint32_t steps = 0; steps < 1'000'000; ++steps, ++total) {
        std::uint32_t lo, hi;
        std::memcpy(&lo, u.code + pc, 4);
        std::memcpy(&hi, u.code + pc + 4, 4);
        Decoded &d = cache[pc >> 3];
        if (!d.valid || d.lo != lo || d.hi != hi) {
            d = decode_upper(lo, hi);
            if (g_scan[n]) scan_flags(n, u.code, u.code_mask + 1);
        }
        const std::uint32_t current = pc;
        pc = npc;
        npc = (npc + 8u) & u.code_mask;
        ++pipe.t;
        read_q(u, pipe, r, current, hi);
        fast_upper(r, d, out);
        bool took_branch = false;
        if (hi & 0x80000000u) {
            r.i = lo;
        } else {
            bool branch = false;
            std::uint32_t target = npc;
            lower(u, lo, current, target, branch);
            if (branch) npc = target;
            took_branch = branch;
            if (branch && record_jumps && n == 1 && ((lo >> 25) == 0x24u || (lo >> 25) == 0x25u)) lookup(target);
        }
        if (out.target > 0) {
            Reg128 &dst = out.target == kAcc ? r.acc : r.vf[out.target];
            for (int i = 0; i < 4; ++i)
                if (out.dest & (8u >> i)) dst.w[i] = out.value.w[i];
        }
        if (out.target >= 0 && out.flags && flags) {
            set_flags(r, out.value, out.dest);
            pipe.set_mac(r.mac, r.status);
        }
        if (out.has_clip) {
            r.clip = out.clip;
            pipe.set_clip(out.clip, pipe.t);
        }
        r.vf[0].d[0] = 0;
        r.vf[0].w[2] = 0;
        r.vf[0].w[3] = fp::kOne;
        r.vi[0] = 0;
        if (ending) {
            pipe.flush_q(r);
            r.tpc = pc;
            g_interpreted_instructions.fetch_add(steps + 1u, std::memory_order_relaxed);
            if (instructions) *instructions = steps + 1u;
            return kContinuationEnd;
        }
        if (hi & 0x40000000u) ending = true;
        // Transfer only after the taken branch's delay instruction commits.
        // Preserve outstanding CLIP/MAC/status/Q history and issue time.
        if (handoff && branch_delay && !took_branch && !ending &&
            (g_continuation_entries[pc >> 3] || (g_local_stats.registered && local_continuations_enabled() && g_local_entries[pc >> 3]))) {
            const auto local = lookup_local_continuation(pc);
            if (!local && g_continuation_entries[pc >> 3]) lookup(pc);
            if (local || (g_continuation_entries[pc >> 3] && g_entries[pc >> 3].continuation)) {
                g_interpreted_instructions.fetch_add(steps + 1u, std::memory_order_relaxed);
                if (instructions) *instructions = steps + 1u;
                return pc;
            }
        }
        branch_delay = took_branch;
    }
    std::fprintf(stderr, "[vu%d] program at 0x%04X did not end\n", n, address);
    g_interpreted_instructions.fetch_add(1'000'000u, std::memory_order_relaxed);
    if (instructions) *instructions = 1'000'000u;
    return kContinuationEnd;
}

#if defined(PS2_VU_REPLAY_CAPTURE)
// Compile-time split keeps the replay budget out of production issue loops.
template<bool ReplayBudget>
std::uint32_t run_fast_continuation_impl(int n,std::uint32_t address,vuops::FlagPipe &pipe,bool handoff,
                                        std::uint32_t *instructions,std::uint32_t issue_budget,bool *clean_boundary) {
    Unit u = unit_of(n);
    Vu0Regs &r = *u.regs;
    if (g_scan[n]) scan_flags(n, u.code, u.code_mask + 1);
    const bool flags = g_flags_used[n];
    Decoded *cache = g_decoded[n];
    u.pipe = &pipe;
    std::uint32_t pc = address & u.code_mask, npc = (pc + 8u) & u.code_mask;
    bool ending = false, branch_delay = false;
    UpperOut out;
    static std::uint64_t total = 0, calls = 0;
    static const bool count = std::getenv("PS2_VU_COUNT") != nullptr;
    static const bool record_jumps = std::getenv("PS2_VU_RECORD") != nullptr || static_cast<bool>(g_options.on_vu_program);
    if (count && ++calls % 20000 == 0) std::fprintf(stderr, "[vu1] %llu calls, %llu instructions\n", (unsigned long long)calls, (unsigned long long)total);
    for (std::uint32_t steps = 0; steps < 1'000'000; ++steps, ++total) {
        std::uint32_t lo, hi;
        std::memcpy(&lo, u.code + pc, 4);
        std::memcpy(&hi, u.code + pc + 4, 4);
        Decoded &d = cache[pc >> 3];
        if (!d.valid || d.lo != lo || d.hi != hi) {
            d = decode_upper(lo, hi);
            if (g_scan[n]) scan_flags(n, u.code, u.code_mask + 1);
        }
        const std::uint32_t current = pc;
        pc = npc;
        npc = (npc + 8u) & u.code_mask;
        ++pipe.t;
        read_q(u, pipe, r, current, hi);
        fast_upper(r, d, out);
        bool took_branch = false;
        if (hi & 0x80000000u) {
            r.i = lo;
        } else {
            bool branch = false;
            std::uint32_t target = npc;
            lower(u, lo, current, target, branch);
            if (branch) npc = target;
            took_branch = branch;
            if (branch && record_jumps && n == 1 && ((lo >> 25) == 0x24u || (lo >> 25) == 0x25u)) lookup(target);
        }
        if (out.target > 0) {
            Reg128 &dst = out.target == kAcc ? r.acc : r.vf[out.target];
            for (int i = 0; i < 4; ++i)
                if (out.dest & (8u >> i)) dst.w[i] = out.value.w[i];
        }
        if (out.target >= 0 && out.flags && flags) {
            set_flags(r, out.value, out.dest);
            pipe.set_mac(r.mac, r.status);
        }
        if (out.has_clip) {
            r.clip = out.clip;
            pipe.set_clip(out.clip, pipe.t);
        }
        r.vf[0].d[0] = 0;
        r.vf[0].w[2] = 0;
        r.vf[0].w[3] = fp::kOne;
        r.vi[0] = 0;
        if (ending) {
            pipe.flush_q(r);
            r.tpc = pc;
            g_interpreted_instructions.fetch_add(steps + 1u, std::memory_order_relaxed);
            if (instructions) *instructions = steps + 1u;
            if constexpr(ReplayBudget) if(clean_boundary)*clean_boundary=true;
            return kContinuationEnd;
        }
        if (hi & 0x40000000u) ending = true;
        if constexpr(ReplayBudget) {
            if(steps+1u==issue_budget) {
                if(instructions)*instructions=steps+1u;
                if(clean_boundary)*clean_boundary=!took_branch && !ending;
                return pc;
            }
        }
        // Transfer only after the taken branch's delay instruction commits.
        // Preserve outstanding CLIP/MAC/status/Q history and issue time.
        if (handoff && branch_delay && !took_branch && !ending &&
            (g_continuation_entries[pc >> 3] || (g_local_stats.registered && local_continuations_enabled() && g_local_entries[pc >> 3]))) {
            const auto local = lookup_local_continuation(pc);
            if (!local && g_continuation_entries[pc >> 3]) lookup(pc);
            if (local || (g_continuation_entries[pc >> 3] && g_entries[pc >> 3].continuation)) {
                g_interpreted_instructions.fetch_add(steps + 1u, std::memory_order_relaxed);
                if (instructions) *instructions = steps + 1u;
                return pc;
            }
        }
        branch_delay = took_branch;
    }
    std::fprintf(stderr, "[vu%d] program at 0x%04X did not end\n", n, address);
    g_interpreted_instructions.fetch_add(1'000'000u, std::memory_order_relaxed);
    if (instructions) *instructions = 1'000'000u;
    return kContinuationEnd;
}


bool replay::run_record(const Record &record,bool native,bool cold,Result &result,std::string &error) {
    if(gs::queue::active() || gs::queue::vu_active() || g_continuation_packets || g_replay_packet_tee) {
        error="offline replay requires a fresh, inactive-queue QA process";return false;
    }
    if(target(record.pc,record.key)<0 || !record.issues || record.issues>1000000u) {error="unsupported record";return false;}
    if(cold || std::memcmp(g_vu1_code,record.code.data(),record.code.size())) {
        std::memcpy(g_vu1_code,record.code.data(),record.code.size());code_changed(1);
    }
    lookup(record.pc);
    const auto &entry=g_entries[record.pc>>3];
    if(!entry.continuation || entry.candidates.empty() || entry.candidates[entry.last].key!=record.key) {
        error="captured microcode does not match a registered native identity";return false;
    }
    vuops::FlagPipe pipe;restore(record.before,g_vu1,pipe,g_vu1_mem);
    g_top=record.top;g_itop=record.itop;g_vu_entry_pc=record.entry_pc;
    if(!fp_control(record.rounding,record.mxcsr_value)){error="invalid host FP control";return false;}
    result.packets.clear();result.packets.reserve(kPacketLimit);result.clean_boundary=false;
    struct DryScope {
        explicit DryScope(std::vector<std::uint8_t> &packets){g_continuation_packets=&packets;g_replay_packet_limit=true;}
        ~DryScope(){g_continuation_packets=nullptr;g_replay_packet_limit=false;}
    } dry(result.packets);
    const auto tick=timing::Profile::Clock::frequency();
    if(tick<=0 || std::uint64_t(tick)>std::numeric_limits<std::uint64_t>::max()/1000000000ull) {error="unsupported QPC frequency";return false;}
    std::uint32_t interpreted=0;
    try {
        const auto begin=timing::Profile::Clock::now();
        if(native) {result.next_pc=entry.continuation(g_vu1,g_vu1_mem,pipe);result.clean_boundary=true;}
        else result.next_pc=run_fast_continuation_impl<true>(1,record.pc,pipe,false,&interpreted,record.issues,&result.clean_boundary);
        const auto end=timing::Profile::Clock::now();
        const auto elapsed=static_cast<std::uint64_t>(end-begin),frequency=static_cast<std::uint64_t>(tick);
        result.function_ns=(elapsed/frequency)*1000000000ull+((elapsed%frequency)*1000000000ull)/frequency;
    } catch(const std::exception &e) {error=e.what();return false;}
    result.issues=pipe.t-record.before.pipe[0];
    take(result.after,g_vu1,pipe,g_vu1_mem);
    if(g_top!=record.top || g_itop!=record.itop) {error="TOP/ITOP mutated";return false;}
    if(!native && interpreted!=record.issues) {error="reference ended before captured issue count";return false;}
    return true;
}

#endif

void run(int n, std::uint32_t address) {
    static const bool exact = std::getenv("PS2_VU_EXACT") != nullptr;
    if (n == 1 && !exact) {
        interpret(n, address);
        return;
    }
    Unit u = unit_of(n);
    Vu0Regs &r = *u.regs;
    vuops::FlagPipe pipe;
    pipe.start(r);
    u.pipe = &pipe;
    std::uint32_t pc = address & u.code_mask, npc = (pc + 8u) & u.code_mask;
    bool ending = false;
    for (std::uint32_t steps = 0; steps < 1'000'000; ++steps) {
        std::uint32_t lo, hi;
        std::memcpy(&lo, u.code + pc, 4);
        std::memcpy(&hi, u.code + pc + 4, 4);
        const std::uint32_t current = pc;
        pc = npc;
        npc = (npc + 8u) & u.code_mask;
        ++pipe.t;
        read_q(u, pipe, r, current, hi);
        UpperOut out = upper(r, hi);
        bool branch = false;
        if (hi & 0x80000000u) {
            r.i = lo;
        } else {
            std::uint32_t target = npc;
            lower(u, lo, current, target, branch);
            if (branch) npc = target;
        }
        commit(r, out);
        if (out.target >= 0 && out.flags) pipe.set_mac(r.mac, r.status);
        if (out.has_clip) {
            r.clip = out.clip;
            pipe.set_clip(out.clip, pipe.t);
        }
        r.vf[0].d[0] = 0;
        r.vf[0].w[2] = 0;
        r.vf[0].w[3] = fp::kOne;
        r.vi[0] = 0;
        if (ending) {
            pipe.flush_q(r);
            r.tpc = pc;
            return;
        }
        if (hi & 0x40000000u) ending = true;
    }
    std::fprintf(stderr, "[vu%d] program at 0x%04X did not end\n", n, address);
}

}

namespace ps2 {

void vcallms(Cpu &, std::uint32_t address) { vu::run(0, address); }

}

__attribute__((weak)) void register_generated_vu() {}

namespace ps2::vu {

void state(ps2::state::Stream &s) {
    s.tag("vu");
    s.pod(g_vu1);
    s.pod(g_top);
    s.pod(g_itop);
    s.bytes(g_vu0_code, sizeof g_vu0_code);
    s.bytes(g_vu0_mem, sizeof g_vu0_mem);
    s.bytes(g_vu1_code, sizeof g_vu1_code);
    s.bytes(g_vu1_mem, sizeof g_vu1_mem);
    if (s.loading()) {
        code_changed(0);
        code_changed(1);
    }
}

}
