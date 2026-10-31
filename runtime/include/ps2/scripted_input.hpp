#pragma once
#include "system.hpp"
#include <span>
#include <atomic>
#include <charconv>
#include <string_view>

namespace ps2 {
struct ScriptedInput {
    std::uint16_t buttons = 0;
    std::uint8_t rx = 128, ry = 128, lx = 128, ly = 128, l2 = 0, r2 = 0;
};

// A CLI script owns port 0 for its entire lifetime, including release frames.
// The window must not overwrite it with a physical controller/keyboard packet.
inline bool script_controls_port(std::span<const Press> presses, int port, bool released = false) {
    return port == 0 && !presses.empty() && !released;
}

// Configuration is immutable before workers start. EE publishes one final neutral
// packet before releasing ownership; the host observes that publication via acquire.
class ScriptInputHandoff {
    std::uint64_t frame_ = 0;
    std::atomic<bool> released_{false};
public:
    void configure(std::uint64_t frame) { frame_ = frame; reset(); }
    void reset() { released_.store(false, std::memory_order_release); }
    bool released() const { return released_.load(std::memory_order_acquire); }
    template<class PublishNeutral>
    bool release_if_due(std::uint64_t frame, PublishNeutral publish) {
        if (!frame_ || frame < frame_ || released()) return false;
        publish();
        released_.store(true, std::memory_order_release);
        return true;
    }
};

inline bool parse_input_handoff(std::string_view text, std::uint64_t &frame) {
    std::uint64_t value = 0;
    const auto result = std::from_chars(text.data(), text.data() + text.size(), value);
    if (result.ec != std::errc{} || result.ptr != text.data() + text.size() || !value) return false;
    frame = value;
    return true;
}

// Configure only while parsing startup arguments, before the window/EE workers.
void configure_script_input_handoff(std::uint64_t frame);
bool script_input_released();

inline ScriptedInput scripted_input(std::span<const Press> presses, std::uint64_t frame) {
    ScriptedInput input;
    std::uint8_t stick = 0;
    for (const Press &p : presses) {
        // Subtraction also handles scripts ending near UINT64_MAX without overflow.
        if (frame >= p.frame && frame - p.frame < p.frames) {
            input.buttons |= p.buttons;
            stick |= p.stick;
        }
    }
    input.lx = (stick & 4u) ? 0 : (stick & 8u) ? 255 : 128;
    input.ly = (stick & 1u) ? 0 : (stick & 2u) ? 255 : 128;
    input.rx = (stick & 64u) ? 0 : (stick & 128u) ? 255 : 128;
    input.ry = (stick & 16u) ? 0 : (stick & 32u) ? 255 : 128;
    input.l2 = (input.buttons & (1u << 8)) ? 255 : 0;
    input.r2 = (input.buttons & (1u << 9)) ? 255 : 0;
    return input;
}
}
