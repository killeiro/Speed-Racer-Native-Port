#include "vu_micro.hpp"
#include "hw.hpp"
#include "ps2/vu_ops.hpp"
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
#include "ps2/state.hpp"
#include "ps2/vu_continuation.hpp"
#include "gs/queue.hpp"
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <future>
#include <thread>
#include <cstring>
#include <vector>

namespace ps2::vu { ProgramFn lookup(std::uint32_t address); }
void even(ps2::Vu0Regs &, std::uint8_t *) {}
void odd(ps2::Vu0Regs &, std::uint8_t *) {}
std::uint32_t continuation(ps2::Vu0Regs &, std::uint8_t *, ps2::vuops::FlagPipe &) { return ps2::vu::kContinuationEnd; }
std::promise<void> blocked_entered;
std::atomic<bool> release_blocked{false};
void blocked(ps2::Vu0Regs &, std::uint8_t *) {
    // The VU owner must not wait for a fence that only it could acknowledge.
    ps2::sync_vu_thread();
    blocked_entered.set_value();
    while (!release_blocked.load(std::memory_order_acquire)) std::this_thread::yield();
}

int main() {
    using namespace ps2;
    vu::reset();
    std::vector<vu::Program> programs;
    const auto load = [](std::uint32_t id) {
        const std::uint32_t code[][2] = {{id, 0xC00002FFu}, {0x80000330u, 0x000002FFu}};
        std::memcpy(g_vu1_code, code, sizeof code);
        vu::code_changed(1);
    };
    for (unsigned id = 0; id < 80; ++id) {
        load(id);
        programs.push_back({vu::program_key(g_vu1_code, vu::reachable(g_vu1_code, 16383u, 0), 0), id & 1 ? odd : even});
    }
    vu::register_programs(programs.data(), static_cast<std::uint32_t>(programs.size()));
    for (unsigned pass = 0; pass < 4; ++pass) {
        for (unsigned id = 0; id < 80; ++id) {
            load(id);
            auto expected = id & 1 ? odd : even;
            if (vu::lookup(0) != expected || vu::lookup(0) != expected) return 1;
            // An unreachable change must preserve the matching compiled program.
            g_vu1_code[64] ^= 1;
            vu::code_changed(1);
            if (vu::lookup(0) != expected) return 2;
            // A reachable change must never dispatch stale compiled code.
            load(1000 + id);
            if (vu::lookup(0) != nullptr) return 3;
        }
    }
    // SQ writes must invalidate a warm native entry just like narrower stores.
    // Exercise physical, cached and uncached EE aliases; never call code_changed
    // after the write under test, since that would hide a stale-dispatch bug.
    for (std::uint32_t base : {0x11008000u, 0x91008000u, 0xB1008000u}) {
        for (unsigned bits : {8u, 16u, 32u, 64u, 128u}) {
            load(0);
            if (vu::lookup(0) != even) return 8;
            Reg128 replacement{};
            const std::uint32_t code[][2] = {{1u, 0xC00002FFu}, {0x80000330u, 0x000002FFu}};
            std::memcpy(&replacement, code, 16);
            switch (bits) {
            case 8: st8(base, 1); break;
            case 16: st16(base, 1); break;
            case 32: st32(base, 1); break;
            case 64: st64(base, replacement.d[0]); break;
            case 128: st128(base, replacement); break;
            }
            if (vu::lookup(0) != odd) {
                std::fprintf(stderr, "stale VU dispatch after %u-bit EE store at %08X\n", bits, base);
                return 9;
            }
            if (vu::lookup(0) != odd) return 10;
            // Data-memory stores must preserve program selection and all bytes.
            st128(base + 0x4000u, replacement);
            if (std::memcmp(g_vu1_mem, &replacement, 16) || vu::lookup(0) != odd) return 11;
        }
    }
    // Long and wrapped reachable spans exercise SIMD blocks and 8-byte tails
    // through the real cache, while checking exact function selection.
    const auto pair=[](unsigned pc,std::uint32_t lo,std::uint32_t hi) {
        std::memcpy(g_vu1_code+(pc&16383u),&lo,4);
        std::memcpy(g_vu1_code+(pc&16383u)+4,&hi,4);
    };
    for(unsigned entry : {0u,16376u}) for(unsigned length : {3u,9u,17u,65u,257u,511u}) {
        std::memset(g_vu1_code,0,16384);
        for(unsigned i=0;i<length;++i)pair(entry+i*8,0x80000330u,i==length-2?0x400002ffu:0x000002ffu);
        vu::code_changed(1);
        const auto key=vu::program_key(g_vu1_code,vu::reachable(g_vu1_code,16383u,entry),entry);
        const vu::Program program{key,even};vu::register_programs(&program,1);
        if(vu::lookup(entry)!=even)return 4;
        for(unsigned i : {0u,length/2,length-1}) {
            const auto at=(entry+i*8)&16383u;
            g_vu1_code[at]^=1;vu::code_changed(1);
            if(vu::lookup(entry)!=nullptr)return 5;
            g_vu1_code[at]^=1;vu::code_changed(1);
            if(vu::lookup(entry)!=even)return 6;
        }
        const auto unused=(entry+length*8+32)&16383u;g_vu1_code[unused]^=1;vu::code_changed(1);
        if(vu::lookup(entry)!=even)return 7;
    }
    unsigned range_checks = 0;
    const auto require = [&](bool value, const char *label) {
        ++range_checks;
        if (!value) { std::fprintf(stderr, "VU range cache: %s FAILED\n", label); std::abort(); }
    };
    const bool reuse_enabled = std::getenv("PS2_VU_RANGE_REUSE_OFF") == nullptr;
    const auto reuse_delta = [&](std::uint64_t before, bool eligible, const char *label) {
        require(vu::cache_range_reuses() == before + (eligible && reuse_enabled ? 1u : 0u), label);
    };
    // A known disjoint write preserves a previously validated positive identity.
    load(0); require(vu::lookup(0) == even, "positive seed");
    auto before = vu::cache_range_reuses();
    g_vu1_code[64] ^= 1; vu::code_changed(1, 64, 1);
    require(vu::lookup(0) == even, "disjoint positive identity");
    reuse_delta(before, true, "disjoint path actually used");
    // Multiple writes and full EE aliases are normalized to VU byte offsets.
    before = vu::cache_range_reuses();
    for (unsigned at : {64u, 96u, 160u}) { g_vu1_code[at] ^= 1; vu::code_changed(1, 0x11008000u + at, 1); }
    require(vu::lookup(0) == even, "multiple disjoint writes");
    reuse_delta(before, true, "normalized ranges used");
    // An overlap anywhere in retained history defeats the shortcut, including
    // writes followed by unrelated writes or a change restored to old bytes.
    before = vu::cache_range_reuses();
    g_vu1_code[0] = 1; vu::code_changed(1, 0, 1);
    g_vu1_code[64] ^= 1; vu::code_changed(1, 64, 1);
    require(vu::lookup(0) == odd, "earlier overlapping write");
    reuse_delta(before, false, "overlap forces comparison");
    before = vu::cache_range_reuses();
    g_vu1_code[0] ^= 2; vu::code_changed(1, 0, 1);
    g_vu1_code[0] ^= 2; vu::code_changed(1, 0, 1);
    require(vu::lookup(0) == odd, "restored overlapping bytes");
    reuse_delta(before, false, "restored bytes still checked");
    // Unknown legacy writers, state-load invalidation and unusable ranges must
    // retain the complete comparison even when the actual change is disjoint.
    for (unsigned kind = 0; kind < 4; ++kind) {
        before = vu::cache_range_reuses();
        g_vu1_code[64] ^= 1;
        if (kind == 0) vu::code_changed(1);
        else vu::code_changed(1, 64, kind == 1 ? 0u : kind == 2 ? 16384u : 0xFFFFFFFFu);
        vu::code_changed(1, 96, 1);
        require(vu::lookup(0) == odd, "unknown/range fallback identity");
        reuse_delta(before, false, "unknown/range fallback compared");
    }
    // Forgetting old records is conservative; there is no assumption that the
    // surviving recent writes describe every intervening mutation.
    for (unsigned count : {64u, 65u, 128u}) {
        before = vu::cache_range_reuses();
        for (unsigned i = 0; i < count; ++i) { g_vu1_code[64] ^= 1; vu::code_changed(1, 64, 1); }
        require(vu::lookup(0) == odd, "journal boundary/overrun identity");
        reuse_delta(before, count == 64, "journal boundary/overrun path");
    }
    // Actual state restoration uses full invalidation, not a range guessed from
    // the final bytes. It must restore the correct positive function identity.
    load(0); require(vu::lookup(0) == even, "state snapshot seed");
    state::Writer snapshot; vu::state(snapshot);
    g_vu1_code[0] = 1; vu::code_changed(1, 0, 1); require(vu::lookup(0) == odd, "state changed function");
    before = vu::cache_range_reuses();
    state::Reader restore(snapshot.out.data(), snapshot.out.size()); vu::state(restore);
    require(vu::lookup(0) == even, "state restored function"); reuse_delta(before, false, "state restore compared");
    // Never use the disjoint shortcut for a cached negative dispatch result.
    load(1000); require(vu::lookup(0) == nullptr, "negative seed");
    before = vu::cache_range_reuses();
    g_vu1_code[64] ^= 1; vu::code_changed(1, 64, 1);
    require(vu::lookup(0) == nullptr, "negative remains negative");
    reuse_delta(before, false, "negative never shortcut");
    // A wrapped changed range can be disjoint from a middle entry, but must
    // invalidate entry zero when its second span touches the reachable bytes.
    pair(64, 0, 0xC00002FFu); pair(72, 0x80000330u, 0x000002FFu); vu::code_changed(1);
    const vu::Program middle{vu::program_key(g_vu1_code, vu::reachable(g_vu1_code, 16383u, 64), 64), even};
    vu::register_programs(&middle, 1); require(vu::lookup(64) == even, "middle entry seed");
    before = vu::cache_range_reuses();
    g_vu1_code[16383] ^= 1; g_vu1_code[0] ^= 1; vu::code_changed(1, 16383, 2);
    require(vu::lookup(64) == even, "wrapped disjoint range");
    reuse_delta(before, true, "wrapped disjoint shortcut");
    load(0); require(vu::lookup(0) == even, "wrap overlap seed");
    before = vu::cache_range_reuses();
    g_vu1_code[0] = 1; vu::code_changed(1, 16380, 8);
    require(vu::lookup(0) == odd, "wrapped overlap chooses new function");
    reuse_delta(before, false, "wrapped overlap compared");
    // Compare real dispatch against forced full invalidation after mutations of
    // every byte in long/wrapped programs, including conditional branch bytes.
    for (unsigned entry : {256u, 16360u}) {
        constexpr unsigned length = 73;
        std::vector<std::uint8_t> original(16384, 0);
        std::memset(g_vu1_code, 0, 16384);
        for (unsigned i = 0; i < length; ++i)
            pair(entry + i * 8, i == 4 ? 0x50000004u : 0x80000330u, i == length - 2 ? 0x400002FFu : 0x000002FFu);
        std::memcpy(original.data(), g_vu1_code, original.size()); vu::code_changed(1);
        const vu::Program base{vu::program_key(g_vu1_code, vu::reachable(g_vu1_code, 16383u, entry), entry), even};
        vu::register_programs(&base, 1);
        for (unsigned byte = 0; byte < length * 8; ++byte) {
            std::memcpy(g_vu1_code, original.data(), original.size()); vu::code_changed(1);
            require(vu::lookup(entry) == even, "long program restored");
            const auto at = (entry + byte) & 16383u;
            before = vu::cache_range_reuses(); g_vu1_code[at] ^= 1; vu::code_changed(1, at, 1);
            const auto optimized = vu::lookup(entry);
            reuse_delta(before, false, "reachable-byte mutation compared");
            vu::code_changed(1); require(vu::lookup(entry) == optimized, "every-byte dispatch matches full invalidation");
        }
    }
    // An unconditional branch makes a nonadjacent target part of the identity.
    std::memset(g_vu1_code, 0, 16384);
    pair(128, 0x4000006Fu, 0x000002FFu); pair(136, 0x80000330u, 0x000002FFu);
    pair(1024, 0x80000330u, 0x400002FFu); pair(1032, 0x80000330u, 0x000002FFu); vu::code_changed(1);
    const vu::Program jump{vu::program_key(g_vu1_code, vu::reachable(g_vu1_code, 16383u, 128), 128), even};
    vu::register_programs(&jump, 1); require(vu::lookup(128) == even, "nonadjacent jump target seed");
    before = vu::cache_range_reuses(); g_vu1_code[1024] ^= 1; vu::code_changed(1, 1024, 1);
    const auto jump_result = vu::lookup(128); reuse_delta(before, false, "jump target overlap compared");
    vu::code_changed(1); require(vu::lookup(128) == jump_result, "jump target dispatch matches full invalidation");
    // A known continuation is a positive identity even when ProgramFn is null;
    // this must remain distinct from the negative-cache test above.
    pair(2048, 0x0056EF12u, 0xC00002FFu); pair(2056, 0x80000330u, 0x000002FFu); vu::code_changed(1);
    const vu::Continuation segment{vu::program_key(g_vu1_code, vu::reachable(g_vu1_code, 16383u, 2048), 2048), 2048, continuation};
    vu::register_continuations(&segment, 1); require(vu::lookup(2048) == nullptr, "positive continuation seed");
    before = vu::cache_range_reuses(); g_vu1_code[4096] ^= 1; vu::code_changed(1, 4096, 1);
    require(vu::lookup(2048) == nullptr, "positive continuation ProgramFn remains null");
    reuse_delta(before, true, "positive continuation reuses exact identity");
    // Use the real queue and VU worker: an EE-mapped store cannot change code or
    // its multiword journal while an earlier native invocation is still live.
    load(0x7FED1234u);
    const vu::Program blocking{vu::program_key(g_vu1_code, vu::reachable(g_vu1_code, 16383u, 0), 0), blocked};
    vu::register_programs(&blocking, 1);
    auto entered = blocked_entered.get_future();
    start_render_thread(); start_vu_thread(); std::thread worker(run_vu_thread);
    const std::uint32_t packet[4] = {0x14000000u, 0, 0, 0};
    gs::queue::vu().post(gs::queue::kVif1, 1, 0, packet, sizeof packet);
    require(entered.wait_for(std::chrono::seconds(2)) == std::future_status::ready, "real VU worker entered");
    std::promise<void> writer_entered; auto writing = writer_entered.get_future();
    auto writer = std::async(std::launch::async, [&] { writer_entered.set_value(); st32(0xB1008000u, 1); });
    require(writing.wait_for(std::chrono::seconds(2)) == std::future_status::ready, "real EE writer entered");
    require(writer.wait_for(std::chrono::milliseconds(20)) == std::future_status::timeout, "EE writer waits for VU invocation");
    std::uint32_t word = 0; std::memcpy(&word, g_vu1_code, 4);
    require(word == 0x7FED1234u, "microcode untouched until barrier");
    release_blocked.store(true, std::memory_order_release);
    require(writer.wait_for(std::chrono::seconds(2)) == std::future_status::ready, "EE writer resumes after VU fence"); writer.get();
    sync_vu_thread(); require(vu::lookup(0) == odd, "post-fence store chooses changed native program");
    gs::queue::vu().post(gs::queue::kShutdown, 0, 0, nullptr, 0); worker.join();
    std::printf("VU cache: variants, eviction, stores, ranges, wrap, real worker and %u range checks PASS\n", range_checks);
}
