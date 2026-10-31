#include "controllers.hpp"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <string>

namespace host {
void Controllers::configure_drivers() {
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI, "1");
    SDL_SetHint(SDL_HINT_XINPUT_ENABLED, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5, "1");
    // Extended reports provide vibration over Bluetooth as well as USB.
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "0");
}

void Controllers::initialize(bool settings) {
    if (settings) {
        if (char *base = SDL_GetBasePath()) {
            const auto path = std::filesystem::path(reinterpret_cast<const char8_t *>(base)) / "gamecontrollerdb.txt";
            std::error_code ec;
            if (std::filesystem::is_regular_file(path, ec)) {
                const auto utf8 = path.u8string();
                SDL_GameControllerAddMappingsFromFile(reinterpret_cast<const char *>(utf8.c_str()));
            }
            SDL_free(base);
        }
        if (char *prefs = SDL_GetPrefPath("SpeedRacer", "SpeedRacer")) {
            const auto path = std::filesystem::path(reinterpret_cast<const char8_t *>(prefs)) / "controllers.ini";
            SDL_free(prefs);
            std::ifstream file(path);
            if (!file) {
                std::ofstream(path) << "# Restart the game after changing these values.\n"
                    "# Stick deadzone: 0..16000; vibration: 0 or 1.\n"
                    "deadzone=4096\nvibration=1\n";
            } else {
                std::string line;
                while (std::getline(file, line)) {
                    int value;
                    if (std::sscanf(line.c_str(), "deadzone=%d", &value) == 1) deadzone_ = std::clamp(value, 0, 16000);
                    if (std::sscanf(line.c_str(), "vibration=%d", &value) == 1) vibration_ = value != 0;
                }
            }
        }
    }
    scan();
}

void Controllers::open(int device) {
    if (!SDL_IsGameController(device)) return;
    const SDL_JoystickID id = SDL_JoystickGetDeviceInstanceID(device);
    if (id < 0) return;
    for (const auto &slot : slots_) if (slot.pad && slot.id == id) return;
    for (std::size_t port = 0; port < slots_.size(); ++port) {
        auto &slot = slots_[port];
        if (slot.pad) continue;
        SDL_GameController *pad = SDL_GameControllerOpen(device);
        if (!pad) {
            std::fprintf(stderr, "[controller] cannot open device: %s\n", SDL_GetError());
            return;
        }
        slot = {};
        slot.pad = pad;
        slot.id = id;
        SDL_GameControllerSetPlayerIndex(pad, static_cast<int>(port));
        std::fprintf(stderr, "[controller] player %zu: %s (rumble %s)\n", port + 1,
            name(static_cast<int>(port)), SDL_GameControllerHasRumble(pad) ? "yes" : "no");
        return;
    }
}

void Controllers::disconnect(Slot &slot) {
    if (slot.pad) {
        SDL_GameControllerRumble(slot.pad, 0, 0, 0);
        SDL_GameControllerClose(slot.pad);
    }
    slot = {};
}

void Controllers::scan() {
    for (auto &slot : slots_) if (slot.pad && !SDL_GameControllerGetAttached(slot.pad)) disconnect(slot);
    for (int device = 0; device < SDL_NumJoysticks(); ++device) open(device);
}

void Controllers::event(const SDL_Event &e) {
    if (e.type == SDL_CONTROLLERDEVICEADDED) open(e.cdevice.which);
    if (e.type == SDL_CONTROLLERDEVICEREMOVED) {
        for (auto &slot : slots_) if (slot.pad && slot.id == e.cdevice.which) disconnect(slot);
        scan(); // A third controller may already be waiting for a free port.
    }
}

void Controllers::close() { for (auto &slot : slots_) disconnect(slot); }

bool Controllers::connected(int port) const {
    return port >= 0 && port < 2 && slots_[port].pad && SDL_GameControllerGetAttached(slots_[port].pad);
}

const char *Controllers::name(int port) const {
    if (!connected(port)) return port == 0 ? "Keyboard" : "Disconnected";
    const char *label = SDL_GameControllerName(slots_[port].pad);
    return label ? label : "Gamepad";
}

std::uint8_t Controllers::axis(int value, int deadzone) {
    value = std::clamp(value, -32768, 32767);
    deadzone = std::clamp(deadzone, 0, 16000);
    if (std::abs(value) <= deadzone) return 128;
    if (value > 0) return static_cast<std::uint8_t>(128 + (value - deadzone) * 127 / (32767 - deadzone));
    return static_cast<std::uint8_t>(128 - (-value - deadzone) * 128 / (32768 - deadzone));
}

PadInput Controllers::read(int port, bool focused) const {
    PadInput result;
    if (!focused || !connected(port)) return result;
    SDL_GameController *pad = slots_[port].pad;
    // SDL uses physical positions: Xbox A/B/X/Y correspond to Cross/Circle/Square/Triangle.
    constexpr SDL_GameControllerButton buttons[] = {
        SDL_CONTROLLER_BUTTON_BACK, SDL_CONTROLLER_BUTTON_LEFTSTICK, SDL_CONTROLLER_BUTTON_RIGHTSTICK,
        SDL_CONTROLLER_BUTTON_START, SDL_CONTROLLER_BUTTON_DPAD_UP, SDL_CONTROLLER_BUTTON_DPAD_RIGHT,
        SDL_CONTROLLER_BUTTON_DPAD_DOWN, SDL_CONTROLLER_BUTTON_DPAD_LEFT, SDL_CONTROLLER_BUTTON_INVALID,
        SDL_CONTROLLER_BUTTON_INVALID, SDL_CONTROLLER_BUTTON_LEFTSHOULDER, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER,
        SDL_CONTROLLER_BUTTON_Y, SDL_CONTROLLER_BUTTON_B, SDL_CONTROLLER_BUTTON_A, SDL_CONTROLLER_BUTTON_X
    };
    for (unsigned i = 0; i < 16; ++i)
        if (buttons[i] != SDL_CONTROLLER_BUTTON_INVALID && SDL_GameControllerGetButton(pad, buttons[i])) result.buttons |= 1u << i;
    const auto trigger = [&](SDL_GameControllerAxis a, unsigned bit, std::uint8_t &pressure) {
        const int value = SDL_GameControllerGetAxis(pad, a);
        if (value <= 2000) return;
        result.buttons |= 1u << bit;
        pressure = static_cast<std::uint8_t>(std::clamp(value * 255 / 32767, 1, 255));
    };
    trigger(SDL_CONTROLLER_AXIS_TRIGGERLEFT, 8, result.l2);
    trigger(SDL_CONTROLLER_AXIS_TRIGGERRIGHT, 9, result.r2);
    result.lx = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX), deadzone_);
    result.ly = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTY), deadzone_);
    result.rx = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_RIGHTX), deadzone_);
    result.ry = axis(SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_RIGHTY), deadzone_);
    return result;
}

void Controllers::rumble(int port, std::uint16_t motors, bool focused) {
    if (!connected(port)) return;
    auto &slot = slots_[port];
    if (!vibration_ || !focused) motors = 0;
    const unsigned strong = motors >> 8;
    const Uint16 low = strong < 16 ? 0 : static_cast<Uint16>(std::sqrt(strong / 255.0) * 65535.0);
    const Uint16 high = motors & 1 ? 65535 : 0;
    const Uint32 now = SDL_GetTicks();
    if (low == slot.low && high == slot.high && (!(low || high) || now - slot.sent < 100)) return;
    SDL_GameControllerRumble(slot.pad, low, high, low || high ? 250 : 0);
    slot.low = low; slot.high = high; slot.sent = now;
}
}
