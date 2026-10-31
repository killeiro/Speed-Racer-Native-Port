#include "../runtime/src/gs/gpu/gpu.cpp"

namespace {
using namespace ps2::gs;
using namespace ps2::gs::gpu;
int failures = 0;

void check(bool actual, const char *name) {
    std::printf("%s %s\n", actual ? "PASS" : "FAIL", name);
    failures += !actual;
}

using Encoded = std::array<std::uint32_t, kSetupWords>;

void set_mip(Encoded &setup, std::uint32_t level, std::uint32_t bp, std::uint32_t bw) {
    const auto group = (level - 1u) / 3u, shift = ((level - 1u) % 3u) * 20u;
    auto packed = static_cast<std::uint64_t>(setup[27u + group * 2u]) |
        (static_cast<std::uint64_t>(setup[28u + group * 2u]) << 32u);
    packed = (packed & ~(0xFFFFFull << shift)) | ((static_cast<std::uint64_t>(bp) | (static_cast<std::uint64_t>(bw) << 14u)) << shift);
    setup[27u + group * 2u] = static_cast<std::uint32_t>(packed);
    setup[28u + group * 2u] = static_cast<std::uint32_t>(packed >> 32u);
}

Encoded make_texture(std::uint32_t psm = PSMCT32, std::uint32_t levels = 1) {
    State state{};
    auto &c = state.ctx[0];
    c.tex0 = 0x2000ull | (1ull << 14u) | (static_cast<std::uint64_t>(psm) << 20u) | (6ull << 26u) | (5ull << 30u);
    c.tex1 = (2ull << 6u) | (static_cast<std::uint64_t>(levels) << 2u);
    Encoded setup{};
    make_setup(state, 0x10u, setup.data());
    for (std::uint32_t level = 1; level <= 6; ++level) set_mip(setup, level, 0x2400u + level * 32u, 1);
    return setup;
}

void prepare_batch(const Encoded &setup, std::uint32_t fpsm, std::uint32_t zpsm, bool zwrite) {
    g_batch = Batch{};
    g_batch_reads.clear();
    g_commands.clear();
    g_param_records.clear();
    g_scale = 1;
    auto &b = g_batch;
    b.fbp = 0;
    b.fbw = 1;
    b.fpsm = fpsm;
    b.zbp = zwrite ? 0 : 0x3000;
    b.zpsm = zpsm;
    b.zte = b.zwrite = zwrite;
    b.minx = b.miny = 0;
    b.maxx = 63;
    b.maxy = 31;
    b.prims.resize(kPrimWords);
    b.setups.assign(setup.begin(), setup.end());
    for (std::uint32_t level = 0; level <= active_mips(setup.data()); ++level)
        g_batch_reads.push_back(texture_range(setup.data(), level));
}

void snapshot_case(const char *name, std::uint32_t fpsm, std::uint32_t tpsm, std::uint32_t zpsm,
                   bool zwrite, std::uint32_t level, bool expected, std::uint32_t bp = 0) {
    auto setup = make_texture(tpsm, level);
    set_mip(setup, level, bp, 1);
    prepare_batch(setup, fpsm, zpsm, zwrite);
    std::uint32_t lo = 99, hi = 99;
    const auto words = snapshot_batch(1, lo, hi);
    check((words != 0) == expected && (expected ? hi > lo && g_commands.size() == 1 : lo == 0 && hi == 0 && g_commands.empty()), name);
}
}

int main() {
    auto setup = make_texture(PSMCT32, 7);
    check(active_mips(setup.data()) == 6, "MXL is limited to six additional levels");
    for (std::uint32_t level = 1; level <= 6; ++level) {
        const std::uint32_t bp = 0x123u + level * 0x321u, bw = 3u + level * 7u;
        set_mip(setup, level, bp, bw);
        const auto address = mip_address(setup.data(), level);
        check(address.bp == bp && address.bw == bw, "MIPTBP descriptors, including fields crossing word boundaries");
    }
    setup[25] |= 1u;
    setup[26] = 0xFF0u;
    check(active_mips(setup.data()) == 0, "negative fixed K uses only base level");
    setup[26] = 0;
    check(active_mips(setup.data()) == 0, "zero fixed K uses only base level");
    setup[26] = 16;
    check(active_mips(setup.data()) == 6, "positive fixed K keeps conservative level dependencies");
    setup[25] &= ~1u;
    setup[0] |= 16u;
    setup[26] = 0xFF0u;
    check(active_mips(setup.data()) == 6, "UV coordinates do not force constant LOD");
    for (std::uint32_t mmin : {0u, 1u, 6u, 7u}) {
        setup[25] = (setup[25] & ~(7u << 6u)) | (mmin << 6u);
        check(active_mips(setup.data()) == 0, "non-mipmap MMIN does not add dependencies");
    }

    snapshot_case("level one framebuffer overlap", PSMCT32, PSMCT32, PSMZ24, false, 1, true);
    snapshot_case("level six depth overlap", PSMCT24, PSMT4HL, PSMZ32, true, 6, true);
    snapshot_case("CT24 and T4HL keep disjoint high lane", PSMCT24, PSMT4HL, PSMZ24, true, 1, false);
    snapshot_case("CT24 and T4HH keep disjoint high lane", PSMCT24, PSMT4HH, PSMZ24, true, 1, false);
    snapshot_case("CT24 and T8H keep disjoint high lane", PSMCT24, PSMT8H, PSMZ24, true, 1, false);
    snapshot_case("T4HH overlaps written Z16", PSMCT24, PSMT4HH, PSMZ16, true, 1, true);
    snapshot_case("masked Z32 has no high-lane dependency", PSMCT24, PSMT4HL, PSMZ32, false, 1, false);
    snapshot_case("level one wraps past end of VRAM", PSMCT32, PSMCT32, PSMZ24, false, 1, true, 0x3FFFu);

    setup = make_texture();
    set_mip(setup, 1, 0x1000, 1);
    prepare_batch(setup, PSMCT32, PSMZ24, false);
    g_batch_reads.assign(1, texture_range(setup.data(), 1));
    check(batch_conflict(pages(0x1000, 1, PSMCT32, 0, 0, 31, 15), false), "upload of only a mip conflicts with pending reads");
    set_mip(setup, 1, 0x3FFF, 1);
    g_batch_reads.assign(1, texture_range(setup.data(), 1));
    g_batch.fbp = 0x2000;
    g_batch.rx1 = -2;
    check(batch_conflict(pages(0, 1, PSMCT32, 0, 0, 31, 15), false), "wrapped mip upload dependency reaches start of VRAM");

    setup = make_texture();
    setup[7] = 3u << 24u;
    setup[18] = 0x200u | (1u << 16u);
    set_mip(setup, 1, 0, 1);
    check(texture_range(setup.data(), 1).hi > pages(0, 1, PSMCT32, 0, 0, 31, 15).hi,
          "REGION_REPEAT includes MIN mask bits outside nominal width");

    setup = make_texture();
    g_batch.setups.assign(setup.begin(), setup.end());
    g_decode = true;
    g_decoded_used = 0;
    plan_decodes(kDecodePrims + 1u);
    check(g_decodes.empty() && g_batch.setups[24] == 0xFFFFFFFFu, "mip draw bypasses base-only decoded buffer");
    g_batch.setups[25] = 0;
    plan_decodes(kDecodePrims + 1u);
    check(g_decodes.size() == 1 && g_batch.setups[24] == 0 && g_decoded_used == 2048,
          "base-only draw retains decoded-buffer optimization");

    std::uint32_t rec[kPrimWords]{};
    Vertex vertex{};
    vertex.q = 2.5f;
    attrs(rec, 0, vertex, true, nullptr);
    check(u2f(rec[17]) == 2.5f, "UV attributes preserve Q for dynamic LOD");

    // With MMAG=nearest, a minification filter can still read neighboring words.
    // This path intentionally uses MXL=0, so the mip-level guard alone cannot help.
    setup = make_texture(PSMCT32, 0);
    setup[0] |= 16u; // UV, nearest magnification.
    setup[1] = setup[12] = 0;
    setup[2] = setup[13] = 1;
    setup[3] = PSMCT32;
    std::fill(std::begin(rec), std::end(rec), 0u);
    rec[1] = 1;
    rec[3] = 63u | (31u << 16u);
    rec[6] = f2u(64.0f);
    rec[7] = f2u(32.0f);
    rec[18] = f2u(64.0f * 16.0f);
    rec[19] = f2u(32.0f * 16.0f);
    for (std::uint32_t mmin : {1u, 4u, 5u}) {
        setup[25] = (mmin << 6u) | 1u;
        setup[26] = 16;
        check(!reads_own_word(rec, setup.data()), "linear minification cannot bypass feedback snapshot at level zero");
        setup[26] = 0;
        check(reads_own_word(rec, setup.data()), "fixed zero LOD retains nearest own-word fast path");
        setup[26] = 0xFF0u;
        check(reads_own_word(rec, setup.data()), "fixed negative LOD retains nearest own-word fast path");
        setup[25] &= ~1u;
        check(!reads_own_word(rec, setup.data()), "dynamic LOD with linear minification cannot prove own-word read");
    }
    for (std::uint32_t mmin : {0u, 2u, 3u}) {
        setup[25] = (mmin << 6u) | 1u;
        setup[26] = 16;
        check(reads_own_word(rec, setup.data()), "nearest minification with MXL zero retains own-word fast path");
    }

    const auto empty = physical_ranges(Range{});
    Range full;
    full.add(kMemorySize - 128, 2ull * kMemorySize);
    const auto wrapped = physical_ranges(full);
    check(empty.count == 0 && wrapped.count == 1 && wrapped.ranges[0].lo == 0 && wrapped.ranges[0].hi == kMemorySize,
          "empty and full-VRAM spans normalize safely");
    std::printf("%d failed\n", failures);
    return failures ? 1 : 0;
}
