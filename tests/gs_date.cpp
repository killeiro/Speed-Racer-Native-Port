#include "gs/gs.hpp"
#include "gs/raster.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>

// Uses the existing CPU rasterizer and actual swizzled GS memory helpers.
// Build with runtime/src and runtime/include include paths; link ps2runtime.
int main() {
#ifdef _WIN32
    _putenv_s("PS2_GS", "cpu");
#else
    setenv("PS2_GS", "cpu", 1);
#endif
    using namespace ps2::gs;
    init();
    int failures = 0;
    int cases = 0;
    for (const unsigned psm : {PSMCT24, PSMCT32, PSMCT16, PSMCT16S}) {
        for (unsigned date = 0; date != 2; ++date) {
            for (unsigned datm = 0; datm != 2; ++datm) {
                for (unsigned alpha = 0; alpha != 2; ++alpha) {
                    State st{};
                    st.prmodecont = 1;
                    st.colclamp = 1;
                    st.ctx[0].frame = (1ull << 16) | (static_cast<unsigned long long>(psm) << 24);
                    st.ctx[0].test = (static_cast<unsigned long long>(date) << 14) | (static_cast<unsigned long long>(datm) << 15);
                    st.ctx[0].zbuf = 1ull << 32;
                    Vertex v{};
                    v.r = 0xD0;
                    v.g = 0x80;
                    v.b = 0x38;
                    v.a = 0xA0;
                    v.q = 1;
                    std::memset(memory(), 0, kMemorySize);
                    const bool half = psm == PSMCT16 || psm == PSMCT16S;
                    const unsigned initial = half ? (0x0421u | (alpha << 15)) : (0x00102030u | (alpha << 31));
                    // Write as CT32 for CT24 so the otherwise unused upper byte
                    // is controlled and can be checked for preservation.
                    write_pixel(psm == PSMCT24 ? PSMCT32 : psm, 0, 1, 0, 0, initial);
                    raster::draw(st, &v, 1);
                    const bool pass_date = !date || psm == PSMCT24 || alpha == datm;
                    const unsigned color = half ? ((v.r >> 3) | ((v.g >> 3) << 5) | ((v.b >> 3) << 10) | 0x8000u) : 0xA03880D0u;
                    const unsigned expected = !pass_date ? initial : psm == PSMCT24 ? ((initial & 0xFF000000u) | (color & 0x00FFFFFFu)) : color;
                    const unsigned actual = read_pixel(psm == PSMCT24 ? PSMCT32 : psm, 0, 1, 0, 0);
                    const bool ok = expected == actual;
                    ++cases;
                    failures += !ok;
                    std::printf("%s psm=%02X DATE=%u DATM=%u dst_alpha=%u expected=%08X actual=%08X\n", ok ? "PASS" : "FAIL", psm, date, datm, alpha, expected, actual);
                }
            }
        }
    }
    std::printf("DATE: %d cases, %d failures\n", cases, failures);
    return failures ? 1 : 0;
}
