#include "ps2/scripted_input.hpp"
#include <array>
#include <cstdio>
#include <limits>
#include <thread>

int main() {
    unsigned checks = 0;
    auto check = [&](bool ok) { ++checks; if (!ok) std::fprintf(stderr, "check %u failed\n", checks); return ok; };
    constexpr std::array<ps2::Press, 4> presses{{{10, 3, 1u << 14, 4}, {11, 1, 1u << 9, 1},
        {20, 0, 0xffff, 15}, {std::numeric_limits<std::uint64_t>::max()-1, 5, 1u << 8, 8}}};
    if (!check(ps2::script_controls_port(presses, 0)) || !check(!ps2::script_controls_port(presses, 1)) ||
        !check(!ps2::script_controls_port({}, 0))) return 1;
    auto v = ps2::scripted_input(presses, 9);
    if (!check(v.buttons == 0 && v.lx == 128 && v.ly == 128 && v.rx == 128 && v.ry == 128)) return 1;
    v = ps2::scripted_input(presses, 10);
    if (!check(v.buttons == (1u<<14) && v.lx == 0 && v.ly == 128)) return 1;
    v = ps2::scripted_input(presses, 11);
    if (!check(v.buttons == ((1u<<14)|(1u<<9)) && v.lx == 0 && v.ly == 0 && v.r2 == 255 && v.l2 == 0)) return 1;
    v = ps2::scripted_input(presses, 12);
    if (!check(v.buttons == (1u<<14) && v.r2 == 0 && v.ly == 128)) return 1;
    for (auto frame : {13ull, 20ull}) {
        v = ps2::scripted_input(presses, frame);
        if (!check(v.buttons == 0 && v.lx == 128 && v.ly == 128 && v.l2 == 0 && v.r2 == 0)) return 1;
    }
    v = ps2::scripted_input(presses, std::numeric_limits<std::uint64_t>::max());
    if (!check(v.buttons == (1u<<8) && v.l2 == 255 && v.lx == 255)) return 1;
    ps2::Press turn{};
    if (!check(ps2::parse_press("100:r2+l2+rright+rup:12", turn))) return 1;
    v = ps2::scripted_input(std::span(&turn,1), 100);
    if (!check(v.buttons == ((1u<<8)|(1u<<9)) && v.rx == 255 && v.ry == 0 && v.lx == 128 && v.l2 == 255 && v.r2 == 255)) return 1;
    v = ps2::scripted_input(std::span(&turn,1), 112);
    if (!check(v.buttons == 0 && v.rx == 128 && v.ry == 128 && v.r2 == 0)) return 1;
    if (!check(!ps2::parse_press("100:unknown", turn))) return 1;
    ps2::ScriptInputHandoff gate;
    unsigned published = 0;
    if (!check(!gate.release_if_due(UINT64_MAX, [&] { ++published; })) || !check(!gate.released())) return 1;
    gate.configure(100);
    if (!check(!gate.release_if_due(99, [&] { ++published; }))) return 1;
    bool owned_while_publishing = false;
    if (!check(gate.release_if_due(100, [&] { owned_while_publishing = !gate.released(); ++published; })) ||
        !check(owned_while_publishing && gate.released() && published == 1) ||
        !check(!ps2::script_controls_port(presses, 0, gate.released()))) return 1;
    for (auto frame : {0ull, 99ull, 100ull, UINT64_MAX})
        if (!check(!gate.release_if_due(frame, [&] { ++published; }))) return 1;
    if (!check(published == 1)) return 1;
    gate.reset();
    if (!check(!gate.released()) || !check(gate.release_if_due(101, [&] { ++published; }))) return 1;
    std::uint64_t handoff = 42;
    for (const char *bad : {"", "0", "-1", "+1", " 1", "1x", "18446744073709551616"})
        if (!check(!ps2::parse_input_handoff(bad, handoff) && handoff == 42)) return 1;
    if (!check(ps2::parse_input_handoff("18446744073709551615", handoff) && handoff == UINT64_MAX)) return 1;
    if (!check(ps2::parse_input_handoff("10206", handoff) && handoff == 10206)) return 1;
    // An acquire observer must see the complete final packet published by EE.
    for (unsigned repeat = 0; repeat < 128; ++repeat) {
        gate.configure(10);
        std::array<unsigned, 8> packet{};
        std::thread ee([&] { gate.release_if_due(10, [&] { packet.fill(128); }); });
        while (!gate.released()) std::this_thread::yield();
        bool complete = true;
        for (auto value : packet) complete &= value == 128;
        ee.join();
        if (!check(complete)) return 1;
    }
    std::printf("scripted input: %u checks passed\n", checks);
}
