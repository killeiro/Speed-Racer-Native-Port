#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>
#include <string_view>

namespace {
std::uint64_t *active_compares = nullptr;
std::uint64_t candidate_compares = 0, reference_compares = 0;
#ifdef PS2_GS_SETUP_COUNT
int counted_compare(const void *a, const void *b, std::size_t bytes) {
    ++*active_compares;
    return std::memcmp(a, b, bytes);
}
#define GS_SETUP_COMPARE ::counted_compare
#else
#define GS_SETUP_COMPARE std::memcmp
#endif
}
#include "gpu_candidate.cpp"
#include "gpu_reference.cpp"
#undef GS_SETUP_COMPARE

namespace candidate = ps2::gs::gpu;
namespace reference = ps2::gs::gpu_reference;
using ps2::gs::State;
using ps2::gs::Vertex;
namespace {
unsigned step = 0;
void require(bool condition, const char *what) {
    if (!condition) { std::fprintf(stderr, "FAIL step %u: %s\n", step, what); std::exit(1); }
}
void equal_payloads() {
    const auto &a = candidate::g_batch; const auto &b = reference::g_batch;
    require(a.prims == b.prims, "primitive records differ");
    require(a.setups == b.setups, "31-word descriptors differ");
    require(a.boxes == b.boxes, "coverage records differ");
    require(a.key == b.key && a.minx == b.minx && a.miny == b.miny && a.maxx == b.maxx && a.maxy == b.maxy, "batch bounds/key differ");
    require(candidate::g_commands.size() == reference::g_commands.size(), "command count differs");
    for (std::size_t i = 0; i < candidate::g_commands.size(); ++i) {
        const auto &x = candidate::g_commands[i]; const auto &y = reference::g_commands[i];
        require(static_cast<unsigned>(x.pipeline) == static_cast<unsigned>(y.pipeline) && x.x == y.x && x.y == y.y && x.param == y.param, "dispatch differs");
    }
    require(candidate::g_param_records == reference::g_param_records, "parameters differ");
    require(candidate::g_arena.size() == reference::g_arena.size(), "arena size differs");
    if (candidate::g_arena.size())
        require(std::memcmp(candidate::g_arena.data(), reference::g_arena.data(), candidate::g_arena.size() * 4) == 0, "GPU payload differs");
}
void draw_pair(const State &s, const Vertex *v, int count = 3) {
    ++step;
    active_compares = &candidate_compares; candidate::draw(s, v, count);
    active_compares = &reference_compares; reference::draw(s, v, count);
    equal_payloads();
}
void flush_pair() {
    candidate::flush_batch(); reference::flush_batch(); equal_payloads();
    candidate::g_arena.clear(); reference::g_arena.clear();
    candidate::g_commands.clear(); reference::g_commands.clear();
    candidate::g_param_records.clear(); reference::g_param_records.clear();
    candidate::g_decoded_used = reference::g_decoded_used = 0;
}
State state() {
    State s{}; s.prim = 3 | 8; s.prmodecont = 1; s.colclamp = 1;
    for (auto &c : s.ctx) {
        c.frame = 2ull << 16;
        c.scissor = (127ull << 16) | (127ull << 48);
        c.tex0 = (1ull << 14) | (5ull << 26) | (5ull << 30);
        c.zbuf = 32ull | (1ull << 32);
    }
    return s;
}
Vertex vertices[3] = {
    {16, 16, 10, 255, 128, 64, 128, 1.0f, 0.0f, 0.0f, 0, 0, 255},
    {160, 16, 20, 128, 255, 64, 128, 1.0f, 1.0f, 0.0f, 256, 0, 128},
    {16, 160, 30, 64, 128, 255, 128, 1.0f, 0.0f, 1.0f, 0, 256, 0}
};
void regression() {
    auto s = state(); auto &gen = ps2::gs::g_setup_generation;
    for (unsigned i = 0; i < 1000; ++i) draw_pair(s, vertices);
    // Rebuild then reject: the next draw sees an unchanged cache but needs a new descriptor.
    s.colclamp = 0; ++gen;
    Vertex outside[3] = {vertices[0], vertices[1], vertices[2]};
    for (auto &v : outside) { v.x += 8192; v.y += 8192; }
    draw_pair(s, outside); draw_pair(s, vertices);
    s.pabe = 1; ++gen;
    Vertex flat[3] = {vertices[0], vertices[0], vertices[0]};
    draw_pair(s, flat); draw_pair(s, vertices);
    // Redundant generation changes preserve descriptor identity without adding records.
    ++gen; draw_pair(s, vertices); flush_pair(); draw_pair(s, vertices);
    // Attribute/context and CLUT are independent cache keys.
    s.prim ^= 8; draw_pair(s, vertices);
    s.prim ^= 512; draw_pair(s, vertices);
    candidate::g_clut_slot = reference::g_clut_slot = 7; draw_pair(s, vertices);
    flush_pair();
    // Decoding rewrites word 24 of buffered descriptors during flush, then clears
    // them. Reuse must still start from the unmodified cache in the next batch.
    s = state(); s.prim |= 16u | 256u;
    for (auto &c : s.ctx) c.tex0 |= 8192u;
    ++gen;
    for (unsigned i = 0; i < 128; ++i) draw_pair(s, vertices);
    flush_pair();
    for (unsigned i = 0; i < 128; ++i) draw_pair(s, vertices);
    flush_pair();
    std::mt19937 rng(0x59ca0e);
    for (unsigned i = 0; i < 60000; ++i) {
        if (i % 17 == 0) {
            s = state();
            s.prim = rng() % 8 | (rng() & 0x778u);
            s.prmodecont = rng() & 1; s.prmode = rng() & 0x778u;
            s.colclamp = rng() & 1; s.pabe = rng() & 1;
            for (auto &c : s.ctx) {
                constexpr unsigned color[] = {0, 1, 2, 10};
                const auto format = color[rng() % 4];
                c.frame |= std::uint64_t(format) << 24;
                c.zbuf = 32ull | (std::uint64_t(color[rng() % 4]) << 24) | ((rng() & 1) ? 1ull << 32 : 0);
                c.xyoffset = (rng() % 48) | (std::uint64_t(rng() % 48) << 32);
                c.alpha = rng() & 255; c.test = (rng() & 0x7ffffu);
                c.tex0 |= rng() % 1024; c.tex1 = (rng() % 3) << 2 | (rng() % 6) << 6;
                c.clamp = rng() & 15; c.miptbp1 = 32ull | (1ull << 14) | (64ull << 20) | (1ull << 34);
            }
            ++gen;
        }
        Vertex v[3] = {vertices[0], vertices[1], vertices[2]};
        for (auto &x : v) { x.x = rng() % 2400; x.y = rng() % 2400; }
        if (i % 23 == 0) for (auto &x : v) x.x = x.y = 8000;
        if (i % 31 == 0) candidate::g_clut_slot = reference::g_clut_slot = (rng() % 32);
        if (i % 41 == 0) { candidate::texflush(); reference::texflush(); }
        const unsigned prim = s.prim & 7;
        draw_pair(s, v, prim == 0 ? 1 : (prim == 1 || prim == 2 || prim == 6 ? 2 : 3));
        if (i % 113 == 0) flush_pair();
    }
    flush_pair();
    std::printf("GS setup differential: %u draws, all CPU/GPU payloads equal; comparisons candidate=%llu reference=%llu\n", step,
        static_cast<unsigned long long>(candidate_compares), static_cast<unsigned long long>(reference_compares));
#ifdef PS2_GS_SETUP_COUNT
    require(candidate_compares < reference_compares, "fast reuse was not exercised");
#endif
}
template <typename Draw, typename Batch>
double bench(Draw draw, Batch &b) {
    const auto s = state(); ++ps2::gs::g_setup_generation;
    const auto start = std::chrono::steady_clock::now();
    std::uint64_t checksum = 0;
    for (unsigned block = 0; block < 600; ++block) {
        b.prims.clear(); b.setups.clear(); b.boxes.clear(); b.setup_current = false;
        b.key = ~0ull; b.minx = b.miny = 1 << 30; b.maxx = b.maxy = -1;
        for (unsigned i = 0; i < 2048; ++i) draw(s, vertices, 3);
        checksum += b.prims.size() + b.setups.size() + b.prims.back();
    }
    const double ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count();
    require(checksum != 0, "benchmark work was lost");
    return ms;
}
}
int main(int argc, char **argv) {
    if (argc > 1 && std::string_view(argv[1]) == "--bench") {
#ifdef PS2_GS_SETUP_COUNT
        std::fputs("Use gs_setup_microbench: counters perturb the cost.\n", stderr); return 2;
#else
        for (unsigned pair = 0; pair < 5; ++pair) {
            double a, b;
            if (pair & 1) { b = bench(candidate::draw, candidate::g_batch); a = bench(reference::draw, reference::g_batch); }
            else { a = bench(reference::draw, reference::g_batch); b = bench(candidate::draw, candidate::g_batch); }
            std::printf("pair=%u reference_ms=%.3f candidate_ms=%.3f draws=1228800\n", pair + 1, a, b);
        }
        return 0;
#endif
    }
    regression();
}
