#include "frame_pacer.hpp"
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <initializer_list>

using Pacer = host::FramePacer;
using namespace std::chrono;
void require(bool ok, const char *message) {
    if (!ok) { std::fprintf(stderr, "%s\n", message); std::exit(1); }
}
int main() {
    for (unsigned hz : {50u, 60u}) {
        Pacer p;
        auto origin = Pacer::Time{} + seconds(1);
        auto now = origin;
        require(p.target(now, hz) == now, "First frame must not sleep");
        for (int n = 1; n <= 36000; ++n) {
            now += milliseconds(n % 2 ? 8 : 12);
            auto deadline = p.target(now, hz);
            require(deadline > now, "Fast work must wait for a deadline");
            auto expected = origin + duration_cast<Pacer::Clock::duration>(duration<double>(double(n) / hz));
            require(std::abs(duration_cast<microseconds>(deadline - expected).count()) < 100,
                    "Alternating CPU work or oversleep must not accumulate clock drift");
            now = deadline + microseconds(n % 3 == 0 ? 500 : 0);
        }
        now += seconds(5);
        require(p.target(now, hz) == now, "Long stall must rebase without catch-up burst");
        now += milliseconds(8);
        require(p.target(now, hz) > now, "Frame following a stall must be paced");
        const unsigned other = hz == 50 ? 60 : 50;
        require(p.target(now, other) == now, "Video-mode change must rebase");
    }
    host::AudioReserve reserve;
    require(!reserve.ready(0) && !reserve.ready(59), "Startup must refill audio before sleeping");
    require(reserve.ready(60) && reserve.ready(40) && reserve.ready(20), "Reserve hysteresis must tolerate device chunks");
    require(!reserve.ready(19) && !reserve.ready(40), "Low reserve must disable deadline waits until refilled");
    require(reserve.ready(60), "Pacing must recover after refill");
    Pacer reset_pacer;
    auto t = Pacer::Time{};
    reset_pacer.target(t, 60);
    reset_pacer.reset();
    require(reset_pacer.target(t + seconds(1), 60) == t + seconds(1), "Reserve reset must discard the old deadline");
    // Slow scenes cannot meet a deadline. Do not add waits or advance simulation.
    Pacer p;
    auto now = Pacer::Time{};
    p.target(now, 60);
    for (int n = 0; n < 1000; ++n) {
        now += milliseconds(40);
        require(p.target(now, 60) <= now, "Slow frames must not wait for obsolete deadlines");
    }
    std::puts("Frame pacer: 50/60 Hz, phase/drift, long stall, mode change and overload passed");
}
