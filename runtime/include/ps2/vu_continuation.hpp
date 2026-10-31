#pragma once
#include "vu_ops.hpp"

// Generated continuations may assume that registers are accessed only through
// their r argument while active. VU local memory and FlagPipe are separate
// objects. Helpers must not read the global register alias (including TPC).
// Legacy programs can re-enter the interpreter and do not use this contract.
#ifndef PS2_VU_REGS_RESTRICT
#if defined(__GNUC__) || defined(__clang__) || defined(_MSC_VER)
#define PS2_VU_REGS_RESTRICT __restrict
#else
#define PS2_VU_REGS_RESTRICT
#endif
#endif

namespace ps2::vu {
// Continuations return only after a branch delay slot, with no pending branch,
// or after E and its delay slot. One FlagPipe belongs to the entire invocation.
inline constexpr std::uint32_t kContinuationEnd = 0xffffffffu;
using ContinuationFn = std::uint32_t (*)(Vu0Regs &, std::uint8_t *, vuops::FlagPipe &);
struct Continuation {
    std::uint64_t key;
    std::uint32_t entry;
    ContinuationFn function;
};
void register_continuations(const Continuation *programs, std::uint32_t count);

// Private Speed Racer dispatch blocks. Every function executes ONLY these
// contiguous bytes and returns after the final BAL delay slot. Identity is an
// exact byte comparison; no whole-program key or ProgramFn ABI is involved.
// Register before worker startup. Expected code is copied by the registry.
struct LocalContinuation {
    std::uint32_t entry;
    std::uint32_t bytes;
    const std::uint8_t *code;
    ContinuationFn function;
};
void register_local_continuations(const LocalContinuation *programs, std::uint32_t count);
// VU-owner access only, or after worker shutdown. Does not execute the function.
ContinuationFn lookup_local_continuation(std::uint32_t address);
struct LocalContinuationStats {
    std::uint64_t registered = 0, calls = 0, byte_validations = 0;
    std::uint64_t range_reuses = 0, cache_hits = 0, misses = 0, checked_segments = 0;
};
LocalContinuationStats local_continuation_stats();

bool continuation_flags_used();
namespace detail {
// Derived metadata only. Unit1 belongs to its VU owner (or the synchronous
// headless owner); Unit0 retains its EE ownership. These are the original
// caches, not a second copy. State loading and every code-generation change
// keep using the runtime's existing invalidation and wrap handling.
struct ContinuationQValue {
    std::uint32_t generation = 0, value = 0;
};
static_assert(sizeof(ContinuationQValue) == 8);
struct ContinuationQDelayValue {
    std::uint32_t generation = 0, value = 0, latency = 0;
};
static_assert(sizeof(ContinuationQDelayValue) == 12);
struct ContinuationQCache {
    // Kind/flags keep the global generation. Delay has a separate epoch because
    // its entire code dependency is the finite PC-3..PC+latency window.
    std::uint32_t generation[2] = {1, 1}, delay_epoch[2] = {1, 1};
    ContinuationQDelayValue delay[2][2048] = {};
    ContinuationQValue kind[2][2048] = {};
};
extern ContinuationQCache g_continuation_q;
// Startup-only control. Presence forces the original out-of-line paths.
// Never change this environment setting within a running process.
extern const bool g_continuation_q_calls;
void continuation_q_read_slow(Vu0Regs &r, vuops::FlagPipe &pipe, std::uint32_t pc, std::uint32_t hi);
std::uint32_t continuation_q_delay_slow(std::uint32_t pc, std::uint32_t latency);
// Same authoritative slow cache for either VU owner; also used by focused QA.
std::uint32_t continuation_q_delay_slow(int unit, std::uint32_t pc, std::uint32_t latency);
}

// An analysis hit needs no external call. The slow paths retain the original
// Q_REFERENCE/Q_CHECK behavior and update these exact same cache entries.
PS2_VU_INLINE void continuation_q_read(Vu0Regs &r, vuops::FlagPipe &pipe,
                                      std::uint32_t pc, std::uint32_t hi) {
    if (detail::g_continuation_q_calls) {
        detail::continuation_q_read_slow(r, pipe, pc, hi);
        return;
    }
    if (!pipe.q_pending || !reads_q(hi)) return;
    const auto &entry = detail::g_continuation_q.kind[1][(pc & 16383u) >> 3];
    if (entry.generation != detail::g_continuation_q.generation[1]) {
        detail::continuation_q_read_slow(r, pipe, pc, hi);
        return;
    }
    if (entry.value == kQNew) pipe.flush_q(r);
    else if (entry.value == kQDynamic) pipe.sync_q(r);
}
PS2_VU_INLINE std::uint32_t continuation_q_delay(std::uint32_t pc, std::uint32_t latency) {
    if (!detail::g_continuation_q_calls && latency <= 13u) {
        const auto &entry = detail::g_continuation_q.delay[1][(pc & 16383u) >> 3];
        if (entry.generation == detail::g_continuation_q.delay_epoch[1] && entry.latency == latency) return entry.value;
    }
    return detail::continuation_q_delay_slow(pc, latency);
}
}
