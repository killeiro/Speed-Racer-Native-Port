#include "vif.hpp"
#include "gs/gif.hpp"
#include "gs/queue.hpp"

#include <array>
#include <cstdio>

namespace {
bool expect_stat(const char *stage, std::uint32_t expected) {
    const auto actual = ps2::gif::read(0x20);
    if (actual == expected) return true;
    std::fprintf(stderr, "FAIL: %s: GIF_STAT expected %08X, got %08X\n", stage, expected, actual);
    return false;
}
}

int main() {
    using namespace ps2;
    using gs::queue::Role;
    gs::queue::role() = Role::Emulation;
    gif::reset();
    vif::reset();
    vif::reset_vu_side();
    // Keep the unrelated GIF control bit set, checking that it survives too.
    gif::write(0x10, 1);
    gs::queue::vu().start(4096);
    constexpr std::uint32_t masked_stat = (16u << 24) | 3u;

    alignas(16) const std::array<std::uint32_t, 4> mask{0x06008000u, 0, 0, 0};
    alignas(16) const std::array<std::uint32_t, 4> unmask{0x06000000u, 0, 0, 0};
    vif::transfer(1, reinterpret_cast<const std::uint8_t *>(mask.data()), 1);
    if (!expect_stat("EE masks PATH3", masked_stat)) return 1;
    vif::transfer(1, reinterpret_cast<const std::uint8_t *>(unmask.data()), 1);
    if (!expect_stat("EE unmasks PATH3", 1)) return 2;

    // Replay the delayed VU copy of the older command. The VU worker owns VU
    // state; it must not overwrite the newer GIF status already visible to EE.
    for (unsigned i = 0; i < 2; ++i) {
        gs::queue::Header header{};
        const std::uint8_t *payload = nullptr;
        if (!gs::queue::vu().peek(header, payload) || header.type != gs::queue::kVif1) return 3;
        gs::queue::role() = Role::Vu;
        vif::transfer(1, payload, header.arg0);
        gs::queue::vu().pop(header);
        gs::queue::role() = Role::Emulation;
        if (!expect_stat(i ? "VU replays unmask" : "VU replays stale mask", 1)) return 4;
    }
    std::puts("PASS: delayed VU MSKPATH3 replay preserves the latest EE-visible GIF status");
}
