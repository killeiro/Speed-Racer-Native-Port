#include "vif_upload.hpp"
#include <array>
#include <cstdio>
#include <random>

int main() {
    std::mt19937 random(42);
    std::array<std::uint8_t,16384> expected{}, actual{};
    std::array<std::uint8_t,2048> data{};
    for (unsigned size : {4096u,16384u}) {
        for (unsigned trial = 0; trial < 12000; ++trial) {
            const unsigned count = trial % 256 + 1;
            const unsigned address = (random() & 65535u) * 8;
            for (auto &v : data) v = static_cast<std::uint8_t>(random());
            bool changed = false;
            for (unsigned i = 0; i < count * 8; ++i) {
                auto &v = expected[(address + i) & (size - 1)];
                changed |= v != data[i]; v = data[i];
            }
            if (ps2::vif::upload_microcode(actual.data(), size, address, data.data(), count*8) != changed || actual != expected) return 1;
            if (ps2::vif::upload_microcode(actual.data(), size, address, data.data(), count*8)) return 2;
        }
    }
    std::puts("PASS: 24000 MPG cases, sizes, wraparound, unchanged uploads and invalidation flag");
}
