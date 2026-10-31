#include "gs/gs.hpp"
#include "gs/raster.hpp"
#include "gs/gpu/gpu.hpp"
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <string>
#include <vector>

// This harness contains no game data. It samples real GS swizzled memory through
// raster::draw, or through GPU draw + storage-buffer readback, without a window.
// Expected solid colors are analytical, independent of renderer implementation.
using namespace ps2::gs;
static constexpr unsigned colors[] = {
    0x80402010, 0x801080E0, 0x80E03080, 0x8030C050,
    0x80C0A020, 0x802060B0, 0x80A040D0
};
static constexpr unsigned base(unsigned level) { return 0x1000u + level * 0x100u; }
static unsigned blend(unsigned a, unsigned b, float f) {
    unsigned out = 0;
    for (int shift = 0; shift < 32; shift += 8)
        out |= unsigned(std::floor(float((a >> shift) & 255) * (1-f) + float((b >> shift) & 255) * f + .5f)) << shift;
    return out;
}
static bool near_color(unsigned a, unsigned b) {
    for (int shift = 0; shift < 32; shift += 8)
        if (std::abs(int((a >> shift) & 255) - int((b >> shift) & 255)) > 1) return false;
    return true;
}
static std::uint64_t tex1(unsigned mmin, bool lcm, int k16, unsigned mxl = 6, unsigned l = 0, bool mmag = false) {
    return unsigned(lcm) | (std::uint64_t(mxl) << 2) | (std::uint64_t(mmag) << 5) |
           (std::uint64_t(mmin) << 6) | (std::uint64_t(l) << 19) |
           (std::uint64_t(unsigned(k16) & 4095u) << 32);
}
static State state_for(unsigned mmin, bool lcm, int k16, unsigned mxl, unsigned l, bool mmag) {
    State st{};
    st.prim = 0x10; // point, texture enable, STQ coordinates
    st.prmodecont = st.colclamp = 1;
    auto &c = st.ctx[0];
    c.frame = 1ull << 16; // CT32 framebuffer at zero, stride 64
    c.zbuf = 1ull << 32; // masked Z writes
    c.tex0 = base(0) | (1ull << 14) | (6ull << 26) | (6ull << 30) |
             (1ull << 34) | (1ull << 35); // 64x64 CT32, RGBA DECAL
    c.tex1 = tex1(mmin, lcm, k16, mxl, l, mmag);
    for (unsigned level = 1; level <= 3; ++level)
        c.miptbp1 |= (base(level) | (1ull << 14)) << ((level-1) * 20);
    for (unsigned level = 4; level <= 6; ++level)
        c.miptbp2 |= (base(level) | (1ull << 14)) << ((level-4) * 20);
    return st;
}

struct Harness {
    bool gpu;
    int cases = 0, failures = 0;
    explicit Harness(bool use_gpu) : gpu(use_gpu) {}
    unsigned draw(State &st, float q, float u=8.25f, float v=8.25f) {
        write_pixel(PSMCT32, 0, 1, 0, 0, 0);
        Vertex p{};
        p.r = p.g = p.b = p.a = 128;
        p.q = q;
        p.s = u / 64.0f * q;
        p.t = v / 64.0f * q;
        p.u = unsigned(std::max(0.0f, u * 16.0f));
        p.v = unsigned(std::max(0.0f, v * 16.0f));
        ++g_setup_generation; // direct State edits deliberately bypass gs::write
        if (gpu) {
            std::vector<std::uint32_t> vram(kMemorySize/4), clut(std::begin(st.clut), std::end(st.clut));
            std::memcpy(vram.data(), memory(), kMemorySize);
            gpu::write_state(vram, 1, clut);
            gpu::draw(st, &p, 1);
            gpu::download(memory());
        } else raster::draw(st, &p, 1);
        return read_pixel(PSMCT32, 0, 1, 0, 0);
    }
    void check(const char *name, State st, float q, unsigned expected, float u=8.25f, float v=8.25f) {
        const auto actual = draw(st, q, u, v);
        const bool ok = near_color(expected, actual);
        ++cases; failures += !ok;
        std::printf("%s %s backend=%s expected=%08X actual=%08X\n", ok?"PASS":"FAIL", name, gpu?"GPU":"CPU", expected, actual);
    }
    void feedback() {
        // Keep the same FRAME key, while mip level 1 aliases the framebuffer
        // and TEX0 level 0 does not. Different destination tiles make relying
        // on workgroup execution order incorrect. No readback/upload occurs
        // between any of the write/sample pairs.
        std::memset(memory(), 0, kMemorySize);
        for (unsigned y=0; y!=64; ++y)
            for (unsigned x=0; x!=64; ++x)
                write_pixel(PSMCT32, base(0), 1, x, y, colors[0]);
        if (gpu) {
            std::vector<std::uint32_t> vram(kMemorySize/4), clut(512);
            std::memcpy(vram.data(), memory(), kMemorySize);
            gpu::write_state(vram, 1, clut);
        }
        State write{};
        write.prmodecont = write.colclamp = 1;
        write.ctx[0].frame = 2ull << 16;
        write.ctx[0].zbuf = 1ull << 32;
        write.ctx[0].scissor = 127ull << 16;
        auto read = state_for(2, true, 16, 6, 0, false);
        read.ctx[0].frame = write.ctx[0].frame;
        read.ctx[0].scissor = write.ctx[0].scissor;
        read.ctx[0].miptbp1 &= ~((1ull << 20)-1);
        read.ctx[0].miptbp1 |= 1ull << 14; // mip1 = FB address zero, TBW=1
        constexpr unsigned trials=16;
        unsigned expected[trials]{};
        for (unsigned i=0; i!=trials; ++i) {
            Vertex source{};
            source.r=std::uint8_t(17+i*11); source.g=std::uint8_t(220-i*9);
            source.b=std::uint8_t(31+i*7); source.a=128; source.q=1;
            expected[i] = source.r | (unsigned(source.g)<<8) | (unsigned(source.b)<<16) | 0x80000000;
            ++g_setup_generation;
            if (gpu) gpu::draw(write, &source, 1);
            else raster::draw(write, &source, 1);
            Vertex sample{};
            sample.x=(64+i)*16; sample.q=1;
            sample.r=sample.g=sample.b=sample.a=128;
            ++g_setup_generation;
            if (gpu) gpu::draw(read, &sample, 1);
            else raster::draw(read, &sample, 1);
        }
        if (gpu) gpu::download(memory());
        for (unsigned i=0; i!=trials; ++i) {
            const unsigned actual=read_pixel(PSMCT32, 0, 2, 64+i, 0);
            const bool ok=near_color(actual, expected[i]);
            ++cases; failures += !ok;
            std::printf("%s mip1_framebuffer_feedback_%u backend=%s expected=%08X actual=%08X\n",
                        ok?"PASS":"FAIL", i, gpu?"GPU":"CPU", expected[i], actual);
        }
    }
    void linear_feedback() {
        if (!gpu) return; // CPU immediate framebuffer writes do not emulate the GPU texture snapshot.
        for (unsigned mmin : {1u, 4u}) {
            std::memset(memory(), 0, kMemorySize);
            for (unsigned y=0; y!=32; ++y)
                for (unsigned x=0; x!=32; ++x)
                    write_pixel(PSMCT32, 0, 1, x, y, (x*6) | ((y*6)<<8) | 0x803C0000u);
            std::vector<std::uint32_t> vram(kMemorySize/4), clut(512);
            std::memcpy(vram.data(), memory(), kMemorySize);
            gpu::write_state(vram, 1, clut);
            State st{};
            st.prim=6u | 0x10u | 0x100u; // FST sprite, 1:1 own-frame texture coordinates
            st.prmodecont=st.colclamp=1;
            st.ctx[0].frame=1ull<<16;
            st.ctx[0].zbuf=1ull<<32;
            st.ctx[0].scissor=(31ull<<16) | (31ull<<48);
            st.ctx[0].tex0=(1ull<<14) | (5ull<<26) | (5ull<<30) | (1ull<<34) | (1ull<<35);
            // Positive LOD selects linear minification even though MXL=0 and MMAG is nearest.
            st.ctx[0].tex1=tex1(mmin, true, 16, 0, 0, false);
            Vertex vertices[2]{};
            for (unsigned i=0; i!=2; ++i) {
                const unsigned p=i?31:2;
                vertices[i].x=vertices[i].y=vertices[i].u=vertices[i].v=p*16;
                vertices[i].r=vertices[i].g=vertices[i].b=vertices[i].a=128;
                vertices[i].q=1;
            }
            ++g_setup_generation;
            gpu::draw(st, vertices, 2);
            gpu::download(memory());
            // Analytical expected values come from the original unmodified
            // texture snapshot: bilinear samples average coordinates x-1/x,
            // y-1/y. Check both sides of GPU workgroup boundaries.
            for (unsigned y : {8u,16u}) for (unsigned x : {8u,16u}) {
                const unsigned expected=(x*6-3) | ((y*6-3)<<8) | 0x803C0000u;
                const unsigned actual=read_pixel(PSMCT32,0,1,x,y);
                const bool ok=near_color(actual,expected);
                ++cases; failures+=!ok;
                std::printf("%s linear_framebuffer_snapshot_MMIN%u_x%u_y%u backend=GPU expected=%08X actual=%08X\n",
                            ok?"PASS":"FAIL",mmin,x,y,expected,actual);
            }
        }
    }
};

static void format_tests(Harness &h) {
    constexpr unsigned raw16[]={0x8421,0x8C63,0x94A5,0x9CE7,0xA529,0xAD6B,0xB5AD};
    // Analytical 5-bit expansion, RGB=8,24,...,104 and TEXA TA1=160.
    constexpr unsigned expanded16[]={0xA0080808,0xA0181818,0xA0282828,0xA0383838,0xA0484848,0xA0585858,0xA0686868};
    char name[120];
    for (unsigned format : {PSMCT16,PSMCT16S,PSMT8,PSMT4}) {
        const bool indexed=format==PSMT8 || format==PSMT4;
        for (unsigned cpsm : {PSMCT32,PSMCT16}) {
            if (!indexed && cpsm!=PSMCT32) continue;
            auto st=state_for(2,true,0,6,0,false);
            st.texa=0x20ull | (0xA0ull<<32);
            st.ctx[0].tex0=(st.ctx[0].tex0 & ~(0x3Full<<20)) | (std::uint64_t(format)<<20);
            if (indexed) st.ctx[0].tex0|=std::uint64_t(cpsm)<<51;
            const unsigned csa=format==PSMT4?3:0;
            st.ctx[0].tex0|=std::uint64_t(csa)<<56;
            std::memset(memory(),0,kMemorySize);
            for (auto &entry:st.clut) entry=cpsm==PSMCT16?0xFC1F:0x80E000E0;
            for (unsigned level=0;level<=6;++level) {
                const unsigned index=format==PSMT4?level+1:33+level*17;
                const unsigned sample=indexed?index:raw16[level];
                if (indexed) st.clut[csa*16+index]=cpsm==PSMCT16?raw16[level]:colors[level];
                for (unsigned y=0;y!=(64u>>level);++y)
                    for (unsigned x=0;x!=(64u>>level);++x)
                        write_pixel(format,base(level),1,x,y,sample);
            }
            for (unsigned level=0;level<=6;++level) {
                st.ctx[0].tex1=tex1(2,true,int(level*16));
                std::snprintf(name,sizeof(name),"format_%02X_CPSM%02X_level%u",format,cpsm,level);
                h.check(name,st,1,(!indexed || cpsm==PSMCT16)?expanded16[level]:colors[level]);
            }
            if (indexed) {
                st.ctx[0].tex1=tex1(3,true,20);
                const unsigned expected=cpsm==PSMCT16?blend(expanded16[1],expanded16[2],.25f):blend(colors[1],colors[2],.25f);
                std::snprintf(name,sizeof(name),"indexed_trilinear_%02X_CPSM%02X_K1.25",format,cpsm);
                h.check(name,st,1,expected);
            }
        }
    }
}

int main(int argc, char **argv) {
    const bool use_gpu = argc > 1 && (std::string(argv[1]) == "gpu" || std::string(argv[1]) == "--gpu");
#ifdef _WIN32
    _putenv_s("PS2_GS", "cpu");
    _putenv_s("PS2_SCALE", "1");
#else
    setenv("PS2_GS", "cpu", 1);
    setenv("PS2_SCALE", "1", 1);
#endif
    init();
    if (use_gpu && !gpu::init(gpu::Mode::primary)) {
        std::fprintf(stderr, "SKIP: GPU initialization failed; no GPU results produced.\n");
        return 77;
    }
    std::memset(memory(), 0, kMemorySize);
    for (unsigned level = 0; level <= 6; ++level)
        for (unsigned y = 0; y < (64u >> level); ++y)
            for (unsigned x = 0; x < (64u >> level); ++x)
                write_pixel(PSMCT32, base(level), 1, x, y, colors[level]);
    Harness h(use_gpu);
    char name[120];
    for (unsigned mmin = 0; mmin < 6; ++mmin) {
        for (unsigned level = 0; level <= 6; ++level) {
            std::snprintf(name, sizeof(name), "LCM1_K%d_MMIN%u", level, mmin);
            h.check(name, state_for(mmin, true, int(level*16), 6, 0, false), 1, colors[mmin < 2 ? 0 : level]);
        }
    }
    for (unsigned mmin = 2; mmin < 6; ++mmin) {
        const bool mip_linear = mmin == 3 || mmin == 5;
        h.check(("fraction_1.25_MMIN" + std::to_string(mmin)).c_str(), state_for(mmin, true, 20, 6, 0, false), 1,
                mip_linear ? blend(colors[1], colors[2], .25f) : colors[1]);
        h.check(("fraction_1.75_MMIN" + std::to_string(mmin)).c_str(), state_for(mmin, true, 28, 6, 0, false), 1,
                mip_linear ? blend(colors[1], colors[2], .75f) : colors[2]);
        h.check(("MXL2_clamps_K6_MMIN" + std::to_string(mmin)).c_str(), state_for(mmin, true, 96, 2, 0, false), 1, colors[2]);
        h.check(("negativeK_magnifies_MMIN" + std::to_string(mmin)).c_str(), state_for(mmin, true, -16, 6, 0, false), 1, colors[0]);
    }
    for (unsigned level = 1; level <= 6; ++level) {
        std::snprintf(name, sizeof(name), "LCM0_Q_2neg%u", level);
        h.check(name, state_for(2, false, 0, 6, 0, false), std::ldexp(1.f, -int(level)), colors[level]);
    }
    h.check("LCM0_NegativeQQuarter", state_for(2, false, 0, 6, 0, false), -.25f, colors[2]);
    h.check("LCM0_QQuarter_L1", state_for(2, false, 0, 6, 1, false), .25f, colors[4]);
    h.check("LCM0_QQuarter_KMinus1", state_for(2, false, -16, 6, 0, false), .25f, colors[1]);
    h.check("LCM1_ignores_Q", state_for(2, true, 32, 6, 0, false), .03125f, colors[2]);
    auto fst = state_for(2, false, 0, 6, 0, false);
    fst.prim |= 0x100u;
    // GS manual v6 section 3.4.12: FST does not force LCM=1. Q remains
    // relevant to LOD even when coordinates themselves come from fixed UV.
    h.check("FST_LCM0_QQuarter", fst, .25f, colors[2]);
    h.check("FST_LCM0_NegativeQQuarter", fst, -.25f, colors[2]);
    h.check("FST_LCM0_QOneSixteenth", fst, .0625f, colors[4]);
    fst.ctx[0].tex1 = tex1(2, true, 48);
    h.check("FST_LCM1_K3_ignoresQ", fst, .25f, colors[3]);
    // Explicit renderer robustness policy, not a hardware-fidelity assertion:
    // GS documentation does not fully define nonfinite or zero Q. Fixed UV
    // keeps texture coordinates finite so these cases isolate the LOD path.
    fst.ctx[0].tex1 = tex1(2, false, 32);
    h.check("robustness_FST_NaN_Q_uses1", fst, std::numeric_limits<float>::quiet_NaN(), colors[2]);
    h.check("robustness_FST_InfiniteQ_usesLevel0", fst, std::numeric_limits<float>::infinity(), colors[0]);
    h.check("robustness_FST_ZeroQ_usesMXL", fst, 0, colors[6]);

    // Isolate within-level filtering from level choice. Only level two contains
    // this checkerboard; level-zero-only implementations cannot accidentally pass.
    constexpr unsigned left = 0x80202020, right = 0x80C0C0C0;
    for (unsigned y = 0; y != 16; ++y)
        for (unsigned x = 0; x != 16; ++x)
            write_pixel(PSMCT32, base(2), 1, x, y, x & 1 ? right : left);
    h.check("MMIN2_nearest_within_level2", state_for(2, true, 32, 6, 0, false), 1, left, 8.f, 8.f);
    h.check("MMIN4_linear_within_level2", state_for(4, true, 32, 6, 0, false), 1, blend(left,right,.5f), 8.f, 8.f);
    h.check("MMIN3_nearest_within_level2", state_for(3, true, 32, 6, 0, true), 1, left, 8.f, 8.f);
    h.check("MMIN5_linear_within_level2", state_for(5, true, 32, 6, 0, false), 1, blend(left,right,.5f), 8.f, 8.f);

    auto repeat = state_for(2, true, 32, 6, 0, false);
    h.check("repeat_negative_coordinate_level2", repeat, 1, right, -4.f, 8.f);
    auto clamp = repeat; clamp.ctx[0].clamp = 1u | (1u << 2);
    h.check("clamp_negative_coordinate_level2", clamp, 1, left, -4.f, 8.f);
    h.check("clamp_large_coordinate_level2", clamp, 1, right, 100.f, 8.f);

    // PCSX2 GSRendererSW: GS MIN/MAX bounds and REGION_REPEAT masks are
    // shifted down by the selected mip level before wrapping the coordinate.
    // The values deliberately produce opposite checker parity if left unshifted.
    auto region_clamp = repeat;
    region_clamp.ctx[0].clamp = 2ull | (1ull << 2) | (8ull << 4) | (12ull << 14);
    h.check("region_clamp_scaled_MINU_level2", region_clamp, 1, left, 0.f, 8.f);
    h.check("region_clamp_scaled_MAXU_level2", region_clamp, 1, right, 40.f, 8.f);
    auto region_repeat = repeat;
    region_repeat.ctx[0].clamp = 3ull | (1ull << 2) | (12ull << 4) | (16ull << 14);
    h.check("region_repeat_scaled_MINU_MAXU_level2", region_repeat, 1, right, 20.f, 8.f);

    // MMAG controls all LOD <= 0, including the boundary exactly zero.
    // Positive LOD with nonmipmapped MMIN 0/1 still samples level zero and
    // chooses its nearest/linear filter from MMIN, rather than from MMAG.
    for (unsigned y = 0; y != 64; ++y)
        for (unsigned x = 0; x != 64; ++x)
            write_pixel(PSMCT32, base(0), 1, x, y, x & 1 ? right : left);
    for (int k16 : {-1, 0, 1}) {
        std::snprintf(name, sizeof(name), "MMAG1_MMIN0_K%d", k16);
        h.check(name, state_for(0, true, k16, 6, 0, true), 1,
                k16 <= 0 ? blend(left,right,.5f) : left, 2.f, 2.f);
        std::snprintf(name, sizeof(name), "MMAG0_MMIN1_K%d", k16);
        h.check(name, state_for(1, true, k16, 6, 0, false), 1,
                k16 <= 0 ? left : blend(left,right,.5f), 2.f, 2.f);
    }
    // Exercise T's independent clamp fields with a transposed checkerboard.
    for (unsigned y = 0; y != 16; ++y)
        for (unsigned x = 0; x != 16; ++x)
            write_pixel(PSMCT32, base(2), 1, x, y, y & 1 ? right : left);
    auto region_v_clamp = repeat;
    region_v_clamp.ctx[0].clamp = 1ull | (2ull << 2) | (8ull << 24) | (12ull << 34);
    h.check("region_clamp_scaled_MINV_level2", region_v_clamp, 1, left, 8.f, 0.f);
    h.check("region_clamp_scaled_MAXV_level2", region_v_clamp, 1, right, 8.f, 40.f);
    auto region_v_repeat = repeat;
    region_v_repeat.ctx[0].clamp = 1ull | (3ull << 2) | (12ull << 24) | (16ull << 34);
    h.check("region_repeat_scaled_MINV_MAXV_level2", region_v_repeat, 1, right, 8.f, 20.f);
    format_tests(h);
    h.feedback();
    h.linear_feedback();
    std::printf("MIP: %d cases, %d failures, backend=%s\n", h.cases, h.failures, use_gpu?"GPU":"CPU");
    return h.failures ? 1 : 0;
}
