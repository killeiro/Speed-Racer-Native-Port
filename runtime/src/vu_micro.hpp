#pragma once

#include "ps2/cpu.hpp"

#include <cstdint>

namespace ps2::state {
class Stream;
}

namespace ps2::vu {

void state(ps2::state::Stream &s);

void reset();
void run(int unit, std::uint32_t address);
std::uint32_t tpc(int unit);
void set_tops(std::uint32_t top, std::uint32_t itop);
void code_changed(int unit);
// A known mutation of microcode, in byte offsets; wraps at the unit boundary.
// Unknown writers and state restoration must use the full-invalidation overload.
void code_changed(int unit, std::uint32_t address, std::uint32_t bytes);
// Diagnostics: read on the VU owner thread or after worker shutdown.
std::uint64_t cache_range_reuses();
Vu0Regs &regs(int unit);
std::uint64_t interpreted_calls();
std::uint64_t native_continuations();
// VU-owner ordered marker; optional timing only, fresh boot sequence.
void timing_present_marker();
void stats();

}
