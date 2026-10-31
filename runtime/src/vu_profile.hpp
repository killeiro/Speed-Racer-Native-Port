#pragma once
#include <array>
#include <cstddef>
#include <cstdint>

namespace ps2::vu {
// Diagnostic only. Single VU owner, fixed storage/probe count, no file writes
// in the hot loop. Dropped observations are explicit, never silently merged.
template<std::size_t Capacity=8192> struct ContinuationProfile {
    static_assert(Capacity && (Capacity & (Capacity-1))==0);
    struct Row {
        std::uint64_t key=0, native=0, fallback=0, instructions=0;
        std::uint32_t pc=0;
        bool program_available=false;
    };
    std::array<Row,Capacity> rows{};
    std::uint64_t dropped_segments=0, dropped_instructions=0;
    void add(std::uint32_t pc, std::uint64_t key, bool native, bool program_available, std::uint32_t instructions) {
        const auto hash=(key ^ (key>>32) ^ std::uint64_t(pc)*0x9e3779b97f4a7c15ull ^ std::uint64_t(program_available));
        for(std::size_t probe=0;probe<32 && probe<Capacity;++probe) {
            auto &r=rows[(hash+probe)&(Capacity-1)];
            if((!r.native && !r.fallback) || (r.pc==pc && r.key==key && r.program_available==program_available)) {
                r.pc=pc; r.key=key; r.program_available=program_available;
                if(native) ++r.native; else ++r.fallback;
                r.instructions+=instructions;
                return;
            }
        }
        ++dropped_segments;
        dropped_instructions+=instructions;
    }
};
}
