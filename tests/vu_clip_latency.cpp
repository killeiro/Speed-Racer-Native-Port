#include "ps2/vu_ops.hpp"
#include <cstdio>

int main() {
    ps2::Vu0Regs r{};
    ps2::vuops::FlagPipe pipe;
    pipe.start(r);
    pipe.t = 20;
    pipe.set_clip(0x01, pipe.t);
    pipe.t = 21;
    pipe.set_clip(0x42, pipe.t);
    pipe.t = 22;
    pipe.set_clip(0x1083, pipe.t);
    int failures = 0;
    const auto check = [&](unsigned time, unsigned expected) {
        pipe.t = time;
        const unsigned actual = pipe.clip();
        std::printf("CLIP at cycle %u: expected %06X, got %06X\n", time, expected, actual);
        failures += actual != expected;
    };
    check(23, 0); // No CLIP result has completed yet.
    check(24, 0x01); // FCGET must select the first vertex, not the second.
    check(25, 0x42);
    check(26, 0x1083);
    pipe.set_clip(0x55AA, pipe.t - 4); // FCSET is immediately visible.
    check(26, 0x55AA);
    std::printf("%d failed\n", failures);
    return failures ? 1 : 0;
}
