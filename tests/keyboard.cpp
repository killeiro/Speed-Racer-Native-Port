#define SDL_MAIN_HANDLED
#include "keyboard.hpp"
#include <array>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>

static unsigned checks = 0;
#define CHECK(x) do { ++checks; if (!(x)) { std::fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #x); std::exit(1); } } while (0)
using A = host::KeyboardAction;
using Keys = std::array<Uint8, SDL_NUM_SCANCODES>;
bool equal(const host::PadInput &a, const host::PadInput &b) {
    return a.buttons == b.buttons && a.rx == b.rx && a.ry == b.ry && a.lx == b.lx &&
        a.ly == b.ly && a.l2 == b.l2 && a.r2 == b.r2;
}
host::PadInput mapped_input(const host::KeyboardConfig &config, const Keys &keys,
                     host::PadInput input = {}, bool suppress_return = false) {
    host::apply_keyboard(config, keys.data(), keys.size(), input, host::KeyboardContext::Race, suppress_return);
    return input;
}
host::PadInput legacy(const Keys &keys, host::PadInput input, bool suppress_return) {
    // Independent reference copied from the published v48 keyboard table/path.
    const std::pair<SDL_Scancode, std::uint16_t> map[] = {
        {SDL_SCANCODE_UP, 0x10}, {SDL_SCANCODE_DOWN, 0x40}, {SDL_SCANCODE_LEFT, 0x80}, {SDL_SCANCODE_RIGHT, 0x20},
        {SDL_SCANCODE_Z, 0x4000}, {SDL_SCANCODE_X, 0x2000}, {SDL_SCANCODE_A, 0x8000}, {SDL_SCANCODE_S, 0x1000},
        {SDL_SCANCODE_Q, 0x400}, {SDL_SCANCODE_W, 0x800}, {SDL_SCANCODE_1, 0x100}, {SDL_SCANCODE_2, 0x200},
        {SDL_SCANCODE_RETURN, 0x8}, {SDL_SCANCODE_BACKSPACE, 0x1}
    };
    for (const auto &b : map) if (keys[b.first] && !(suppress_return && b.first == SDL_SCANCODE_RETURN)) input.buttons |= b.second;
    if (keys[SDL_SCANCODE_LEFT]) input.lx = 0;
    if (keys[SDL_SCANCODE_RIGHT]) input.lx = 255;
    if (keys[SDL_SCANCODE_UP]) input.ly = 0;
    if (keys[SDL_SCANCODE_DOWN]) input.ly = 255;
    if (keys[SDL_SCANCODE_1]) input.l2 = 255;
    if (keys[SDL_SCANCODE_2]) input.r2 = 255;
    return input;
}
int main() {
    SDL_SetMainReady();
    const auto pc = host::keyboard_defaults();
    const auto classic = host::keyboard_defaults(host::KeyboardPreset::Classic);
    Keys keys{};
    host::PadInput physical; physical.buttons = 0x2000; physical.rx = 91; physical.ry = 221;
    physical.lx = 31; physical.ly = 171; physical.l2 = 77; physical.r2 = 88;
    CHECK(equal(mapped_input(pc, keys, physical), physical));
    host::PadInput null_input = physical;
    host::apply_keyboard(pc, nullptr, 0, null_input);
    CHECK(equal(null_input, physical));

    struct TrickCase { SDL_Scancode key; std::uint8_t rx, ry; };
    for (const auto &c : {TrickCase{SDL_SCANCODE_W, 128, 0}, TrickCase{SDL_SCANCODE_S, 128, 255},
                          TrickCase{SDL_SCANCODE_A, 0, 128}, TrickCase{SDL_SCANCODE_D, 255, 128}}) {
        keys = {}; keys[c.key] = 1;
        const auto actual = mapped_input(pc, keys);
        CHECK(actual.rx == c.rx && actual.ry == c.ry && actual.lx == 128 && actual.ly == 128);
        CHECK(actual.buttons == 0 && actual.l2 == 0 && actual.r2 == 0);
    }
    for (const auto &c : {std::pair{SDL_SCANCODE_Z, 0x8000}, std::pair{SDL_SCANCODE_X, 0x4000}, std::pair{SDL_SCANCODE_C, 0x2000}}) {
        keys = {}; keys[c.first] = 1;
        CHECK(mapped_input(pc, keys).buttons == c.second);
    }

    // Acceleration, steering, boost, a directional trick and a shunt coexist.
    keys = {};
    for (auto code : {SDL_SCANCODE_UP, SDL_SCANCODE_LEFT, SDL_SCANCODE_LSHIFT, SDL_SCANCODE_W, SDL_SCANCODE_C}) keys[code] = 1;
    auto input = mapped_input(pc, keys);
    CHECK(input.r2 == 255 && input.l2 == 255 && input.lx == 0 && input.ly == 128 && input.ry == 0);
    CHECK((input.buttons & (0x10 | 0x80 | 0x100 | 0x200 | 0x2000)) == (0x10 | 0x80 | 0x100 | 0x200 | 0x2000));
    keys = {}; keys[SDL_SCANCODE_Q] = 1;
    CHECK(mapped_input(pc, keys).l2 == 255);
    keys = {}; keys[SDL_SCANCODE_LSHIFT] = 1;
    CHECK(mapped_input(pc, keys).l2 == 255);
    keys = {}; keys[SDL_SCANCODE_DOWN] = 1;
    input = mapped_input(pc, keys);
    CHECK((input.buttons & 0x840) == 0x840 && input.r2 == 0 && input.ly == 128);
    keys[SDL_SCANCODE_UP] = 1;
    input = mapped_input(pc, keys);
    CHECK((input.buttons & 0xa00) == 0xa00 && input.r2 == 255); // Both pedals remain independent.
    keys = {}; for (auto c : {SDL_SCANCODE_LEFT, SDL_SCANCODE_RIGHT, SDL_SCANCODE_W, SDL_SCANCODE_S, SDL_SCANCODE_A, SDL_SCANCODE_D}) keys[c] = 1;
    input = mapped_input(pc, keys, physical);
    CHECK(input.lx == 128 && input.rx == 128 && input.ry == 128 && input.ly == physical.ly);
    keys = {}; keys[SDL_SCANCODE_RETURN] = 1;
    CHECK(mapped_input(pc, keys).buttons == 0x4000);
    CHECK(mapped_input(pc, keys, {}, true).buttons == 0);
    keys = {}; keys[SDL_SCANCODE_ESCAPE] = 1;
    CHECK(mapped_input(pc, keys).buttons == 0x8);
    keys = {}; keys[SDL_SCANCODE_BACKSPACE] = 1;
    CHECK(mapped_input(pc, keys).buttons == 0x1000);
    keys = {}; keys[SDL_SCANCODE_TAB] = 1;
    CHECK(mapped_input(pc, keys).buttons == 0x1);
    keys = {}; keys[SDL_SCANCODE_SPACE] = 1;
    CHECK(mapped_input(pc, keys).buttons == 0x4);
    keys = {}; keys[SDL_SCANCODE_E] = 1;
    CHECK(mapped_input(pc, keys).buttons == 0x400);
    keys = {}; keys[SDL_SCANCODE_X] = 1;
    host::PadInput menu, paused;
    host::apply_keyboard(pc, keys.data(), keys.size(), menu, host::KeyboardContext::Menu);
    host::apply_keyboard(pc, keys.data(), keys.size(), paused, host::KeyboardContext::Paused);
    CHECK(equal(menu, paused) && menu.buttons == 0x4000);

    // Every subset of the fourteen published keys, overlaid on real analog data.
    const SDL_Scancode old_keys[] = {SDL_SCANCODE_UP, SDL_SCANCODE_DOWN, SDL_SCANCODE_LEFT, SDL_SCANCODE_RIGHT,
        SDL_SCANCODE_Z, SDL_SCANCODE_X, SDL_SCANCODE_A, SDL_SCANCODE_S, SDL_SCANCODE_Q, SDL_SCANCODE_W,
        SDL_SCANCODE_1, SDL_SCANCODE_2, SDL_SCANCODE_RETURN, SDL_SCANCODE_BACKSPACE};
    for (unsigned mask = 0; mask < (1u << 14); ++mask) {
        keys = {};
        for (unsigned bit = 0; bit < 14; ++bit) keys[old_keys[bit]] = (mask >> bit) & 1;
        CHECK(equal(mapped_input(classic, keys, physical), legacy(keys, physical, false)));
        CHECK(equal(mapped_input(classic, keys, physical, true), legacy(keys, physical, true)));
    }

    std::string error;
    auto config = pc;
    CHECK(host::parse_keyboard_config(host::keyboard_config_text(pc), config, error));
    CHECK(host::keyboard_config_text(config) == host::keyboard_config_text(pc));
    CHECK(host::parse_keyboard_config(host::keyboard_config_text(classic), config, error));
    CHECK(host::keyboard_config_text(config) == host::keyboard_config_text(classic));
    config = pc;
    CHECK(host::parse_keyboard_config("# user overrides\n[Keyboard]\nboost=Left Ctrl,Right Shift\npreset=PC\nrepair=None\n", config, error));
    keys = {}; keys[SDL_SCANCODE_Q] = 1; keys[SDL_SCANCODE_E] = 1;
    CHECK(mapped_input(config, keys).buttons == 0);
    keys = {}; keys[SDL_SCANCODE_LCTRL] = 1;
    CHECK(mapped_input(config, keys).l2 == 255);
    keys = {}; keys[SDL_SCANCODE_RSHIFT] = 1;
    CHECK(mapped_input(config, keys).l2 == 255);
    CHECK(host::parse_keyboard_config("preset=pc\njump=Comma\n", config, error));
    keys = {}; keys[SDL_SCANCODE_COMMA] = 1;
    CHECK((mapped_input(config, keys).buttons & 0x4) != 0);
    const auto saved = host::keyboard_config_text(config);
    for (const auto text : {"preset=wat\n", "preset=pc\npreset=classic\n", "badkey=A\n", "boost=Imaginary\n",
                           "boost=Q,Q\n", "boost=Q,\n", "boost=Q,W,E\n", "repair=Z\n", "jump=F11\n",
                           "boost=Q\nBOOST=E\n", "[Other]\n", "boost\n"}) {
        CHECK(!host::parse_keyboard_config(text, config, error));
        CHECK(!error.empty() && host::keyboard_config_text(config) == saved);
    }
    CHECK(!host::parse_keyboard_config(std::string(65537, 'a'), config, error));
    CHECK(host::keyboard_config_text(config) == saved);
    CHECK(host::parse_keyboard_config("\xef\xbb\xbf[Keyboard]\r\npreset=classic\r\n", config, error));
    CHECK(config.preset == host::KeyboardPreset::Classic);

    const auto dir = std::filesystem::temp_directory_path() / ("speedracer-keyboard-" + std::to_string(SDL_GetPerformanceCounter()));
    CHECK(std::filesystem::create_directory(dir));
    const auto file = dir / "Keyboard.ini";
    config = pc;
    CHECK(host::load_keyboard_config(file, config, error));
    CHECK(!std::filesystem::exists(file));
    { std::ofstream f(file, std::ios::binary); f << "preset=classic\n"; }
    CHECK(host::load_keyboard_config(file, config, error));
    CHECK(config.preset == host::KeyboardPreset::Classic);
    { std::ofstream f(file, std::ios::binary | std::ios::trunc); f << "preset=pc\nrepair=Z\n"; }
    const auto before = host::keyboard_config_text(config);
    CHECK(!host::load_keyboard_config(file, config, error));
    CHECK(host::keyboard_config_text(config) == before);
    CHECK(!host::load_keyboard_config(dir, config, error));
    CHECK(std::filesystem::remove(file)); CHECK(std::filesystem::remove(dir));
    std::printf("keyboard: %u checks passed\n", checks);
}
