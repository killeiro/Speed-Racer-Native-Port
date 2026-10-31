#include "gs/gpu/bounds.hpp"
#include <cmath>
#include <cstdio>

int main() {
    using namespace ps2::gs::gpu::bounds;
    for (int raw = -65535; raw <= 65535; ++raw) {
        const float f = raw / 16.0f;
        if (ceil_pixel(raw) != static_cast<int>(std::ceil(f)) || floor_pixel(raw) != static_cast<int>(std::floor(f))) return 1;
        for (int scale = 1; scale <= 4; ++scale) {
            const int reference = static_cast<int>(std::floor(std::ceil(f * scale) / scale));
            if (first_pixel(raw,scale) != reference) return 2;
        }
    }
    std::puts("PASS: every GS coordinate/offset difference and all four supported scales match float bounds");
}
