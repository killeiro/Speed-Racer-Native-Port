#include "../runtime/src/gs/gpu/gpu.cpp"

namespace {
int failures = 0;

void expect_snapshot(const char *name, std::uint32_t fpsm, std::uint32_t tpsm,
                     std::uint32_t zpsm, bool zwrite, std::uint32_t zbp,
                     bool expected) {
    using namespace ps2::gs;
    using namespace ps2::gs::gpu;
    g_batch = Batch{};
    g_commands.clear();
    g_param_records.clear();
    g_batch_reads.clear();
    g_scale = 1;
    Batch &b = g_batch;
    b.fbp = 0;
    b.fbw = 1;
    b.fpsm = fpsm;
    b.zbp = zbp;
    b.zpsm = zpsm;
    b.zwrite = zwrite;
    b.minx = b.miny = 0;
    b.maxx = 63;
    b.maxy = 31;
    b.prims.resize(kPrimWords);
    b.setups.resize(kSetupWords);
    b.setups[0] = 2; // F_TME; a triangle cannot trigger reads_own_word().
    b.setups[12] = 0;
    b.setups[13] = 1;
    b.setups[14] = tpsm;
    b.setups[15] = 6u | (5u << 8); // 64 x 32 texture, one GS page.
    g_batch_reads.push_back(pages(0, 1, tpsm, 0, 0, 63, 31));
    std::uint32_t lo = 99, hi = 99;
    const auto words = snapshot_batch(1, lo, hi);
    const bool actual = words != 0;
    const bool payload_ok = expected ? words == 2048 && lo == 0 && hi == 2048 &&
        g_commands.size() == 1 && g_commands[0].pipeline == kSnapshot :
        words == 0 && lo == 0 && hi == 0 && g_commands.empty();
    const bool pass = actual == expected && payload_ok;
    std::printf("%s %s: expected %s, got %u words [%u,%u)\n", pass ? "PASS" : "FAIL",
                name, expected ? "snapshot" : "no snapshot", words, lo, hi);
    failures += !pass;
}
}

int main() {
    // Exercise the actual GPU setup encoder, not just a duplicate DATE rule.
    for (unsigned format : {ps2::gs::PSMCT24, ps2::gs::PSMCT32, ps2::gs::PSMCT16, ps2::gs::PSMCT16S}) {
        ps2::gs::State state{};
        state.ctx[0].frame = static_cast<std::uint64_t>(format) << 24;
        state.ctx[0].test = 1ull << 14;
        std::uint32_t setup[ps2::gs::gpu::kSetupWords]{};
        const auto flags = ps2::gs::gpu::make_setup(state, 0, setup);
        if (static_cast<bool>(flags & 128u) != (format != ps2::gs::PSMCT24)) ++failures;
    }

    using namespace ps2::gs;
    expect_snapshot("CT24 + T4HL + overlapping Z32", PSMCT24, PSMT4HL, PSMZ32, true, 0, true);
    expect_snapshot("CT24 + T4HH + overlapping Z32", PSMCT24, PSMT4HH, PSMZ32, true, 0, true);
    expect_snapshot("CT24 + T4HL + overlapping Z16", PSMCT24, PSMT4HL, PSMZ16, true, 0, true);
    expect_snapshot("CT24 + T4HH + overlapping Z16S", PSMCT24, PSMT4HH, PSMZ16S, true, 0, true);
    expect_snapshot("CT24 + T4HL + Z24 high lane disjoint", PSMCT24, PSMT4HL, PSMZ24, true, 0, false);
    expect_snapshot("CT24 + T4HH + Z24 high lane disjoint", PSMCT24, PSMT4HH, PSMZ24, true, 0, false);
    expect_snapshot("CT24 + T8H + Z24 high lane disjoint", PSMCT24, PSMT8H, PSMZ24, true, 0, false);
    expect_snapshot("CT24 + T4HL + masked Z32", PSMCT24, PSMT4HL, PSMZ32, false, 0, false);
    expect_snapshot("CT24 + T4HL + nonoverlapping Z32", PSMCT24, PSMT4HL, PSMZ32, true, 32, false);
    expect_snapshot("CT32 + T4HL retains framebuffer feedback", PSMCT32, PSMT4HL, PSMZ24, true, 0, true);
    expect_snapshot("CT24 + CT24 retains low lane feedback", PSMCT24, PSMCT24, PSMZ24, true, 0, true);
    std::printf("%d failed\n", failures);
    return failures ? 1 : 0;
}
