#pragma once
#include <chrono>

namespace host {
// Host audio startup/recovery only. Does not discard or synthesize samples.
class AudioReserve {
public:
    bool ready(unsigned queued_ms) {
        // Refill after a producer stall; hysteresis keeps a device-sized dequeue
        // from switching the wall clock on and off every frame.
        if (queued_ms < 20) refilling_ = true;
        if (queued_ms >= 60) refilling_ = false;
        return !refilling_;
    }
private:
    bool refilling_ = true;
};

// Wall-clock pacing only: never changes emulated clocks, cycles or frame count.
// Called exclusively by the emulation thread, including in single-thread mode.
class FramePacer {
public:
    using Clock = std::chrono::steady_clock;
    using Time = Clock::time_point;

    void reset() { initialized_ = false; }

    Time target(Time now, unsigned hz) {
        const auto period = std::chrono::duration_cast<Clock::duration>(
            std::chrono::duration<double>(1.0 / hz));
        if (!initialized_ || hz != hz_) {
            initialized_ = true;
            hz_ = hz;
            deadline_ = now;
            return now;
        }
        deadline_ += period;
        // A long stall must not be followed by an unbounded catch-up burst.
        // Small scheduling overshoots retain phase rather than accumulate drift.
        if (now - deadline_ > period) deadline_ = now;
        return deadline_;
    }

private:
    bool initialized_ = false;
    unsigned hz_ = 0;
    Time deadline_{};
};
}
