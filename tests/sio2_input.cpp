#include "../runtime/src/iop/sio2.cpp"
#include <thread>

int main() {
    using namespace ps2::iop::sio2;
    reset();
    g_pads[0].mode = kPressure;
    std::copy(std::begin(kLibpadMotors), std::end(kLibpadMotors), g_feel[0].motors);
    g_in = {1,0x42,0,1,255};
    g_out.resize(21);
    constexpr std::uint16_t masks[2] = {0x4300,0x8300};
    const auto publish = [&](unsigned n) {
        set_input(0, masks[n], n ? 9 : 1, n ? 8 : 2, n ? 7 : 3, n ? 6 : 4, n ? 55 : 66, n ? 77 : 88);
    };
    publish(0);
    std::atomic<bool> done{false};
    std::thread writer([&] { unsigned n = 0; while (!done.load()) publish((n++) & 1u); });
    bool ok = true;
    for (unsigned i = 0; i < 50000; ++i) {
        controller(0,0,21);
        const std::uint16_t buttons = static_cast<std::uint16_t>(~(g_out[3] | (g_out[4] << 8)));
        const unsigned n = buttons == masks[1];
        if (buttons != masks[n] || g_out[5] != (n ? 9 : 1) || g_out[6] != (n ? 8 : 2) ||
            g_out[7] != (n ? 7 : 3) || g_out[8] != (n ? 6 : 4) || g_out[19] != (n ? 55 : 66) || g_out[20] != (n ? 77 : 88)) { ok = false; break; }
    }
    done = true; writer.join();
    if (!ok || rumble(0) != 0xff01) return 1;
    set_connected(0,false);
    g_stat = 0; controller(0,0,21);
    if ((g_stat & 0xc000) != 0xc000) return 2;
    set_connected(0,true); g_stat = 0; controller(0,0,21);
    if (g_stat & 0xc000) return 3;
    std::puts("PASS: 50000 coherent SIO2 input packets under concurrent writes, pressure, rumble and reconnection");
}
