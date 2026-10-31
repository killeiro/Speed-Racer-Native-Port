#pragma once
#include <SDL.h>
#include <array>
#include <cstdint>

namespace host {
struct PadInput {
    std::uint16_t buttons = 0;
    std::uint8_t rx = 128, ry = 128, lx = 128, ly = 128, l2 = 0, r2 = 0;
};

class Controllers {
public:
    static void configure_drivers(); // Before SDL_Init.
    void initialize(bool settings = true);
    void event(const SDL_Event &event);
    void scan();
    void close(); // Before SDL_Quit.
    PadInput read(int port, bool focused) const;
    void rumble(int port, std::uint16_t motors, bool focused);
    bool connected(int port) const;
    const char *name(int port) const;
    static std::uint8_t axis(int value, int deadzone);
private:
    struct Slot {
        SDL_GameController *pad = nullptr;
        SDL_JoystickID id = -1;
        Uint16 low = 0, high = 0;
        Uint32 sent = 0;
    };
    std::array<Slot, 2> slots_{};
    int deadzone_ = 4096;
    bool vibration_ = true;
    void open(int device);
    static void disconnect(Slot &slot);
};
}
