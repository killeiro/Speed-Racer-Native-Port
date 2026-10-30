#define SDL_MAIN_HANDLED
#include "controllers.hpp"
#include <cstdio>
#include <cstdlib>
#include <vector>

#define CHECK(x) do { if (!(x)) { std::fprintf(stderr, "FAIL line %d: %s (%s)\n", __LINE__, #x, SDL_GetError()); std::exit(1); } } while (0)
struct VirtualPad {
    SDL_Joystick *joystick = nullptr;
    SDL_JoystickID id = -1;
    Uint16 low = 0, high = 0;
};
static int SDLCALL vibration(void *data, Uint16 low, Uint16 high) {
    auto &pad = *static_cast<VirtualPad *>(data);
    pad.low = low; pad.high = high;
    return 0;
}
void attach(VirtualPad &pad, const char *name, Uint16 vendor, Uint16 product) {
    SDL_VirtualJoystickDesc desc{};
    desc.version = SDL_VIRTUAL_JOYSTICK_DESC_VERSION;
    desc.type = SDL_JOYSTICK_TYPE_GAMECONTROLLER;
    desc.naxes = SDL_CONTROLLER_AXIS_MAX;
    desc.nbuttons = SDL_CONTROLLER_BUTTON_MAX;
    desc.axis_mask = (1u << SDL_CONTROLLER_AXIS_MAX) - 1;
    desc.button_mask = (1u << SDL_CONTROLLER_BUTTON_MAX) - 1;
    desc.vendor_id = vendor; desc.product_id = product; desc.name = name;
    desc.userdata = &pad; desc.Rumble = vibration;
    const int index = SDL_JoystickAttachVirtualEx(&desc);
    CHECK(index >= 0);
    pad.joystick = SDL_JoystickOpen(index);
    CHECK(pad.joystick);
    pad.id = SDL_JoystickInstanceID(pad.joystick);
    CHECK(SDL_JoystickSetVirtualAxis(pad.joystick, SDL_CONTROLLER_AXIS_TRIGGERLEFT, -32768) == 0);
    CHECK(SDL_JoystickSetVirtualAxis(pad.joystick, SDL_CONTROLLER_AXIS_TRIGGERRIGHT, -32768) == 0);
}
void detach(VirtualPad &pad) {
    int index = -1;
    for (int i = 0; i < SDL_NumJoysticks(); ++i) if (SDL_JoystickGetDeviceInstanceID(i) == pad.id) index = i;
    CHECK(index >= 0);
    CHECK(SDL_JoystickDetachVirtual(index) == 0);
    SDL_JoystickClose(pad.joystick);
    pad.joystick = nullptr;
}
void events(host::Controllers &pads) {
    SDL_JoystickUpdate();
    SDL_Event e;
    while (SDL_PollEvent(&e)) pads.event(e);
}
int main() {
    SDL_SetMainReady();
    host::Controllers::configure_drivers();
#ifdef _WIN32
    // Keep this test independent of real devices connected during a run.
    for (const char *hint : {SDL_HINT_JOYSTICK_HIDAPI, SDL_HINT_XINPUT_ENABLED,
            SDL_HINT_DIRECTINPUT_ENABLED, SDL_HINT_JOYSTICK_WGI, SDL_HINT_JOYSTICK_RAWINPUT})
        SDL_SetHintWithPriority(hint, "0", SDL_HINT_OVERRIDE);
#endif
    CHECK(SDL_Init(SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) == 0);
    VirtualPad xbox, ps5, ps4;
    attach(xbox, "Test Xbox Series", 0x045e, 0x0b13);
    attach(ps5, "Test DualSense", 0x054c, 0x0ce6);
    host::Controllers pads;
    pads.initialize(false);
    events(pads);
    CHECK(pads.connected(0) && pads.connected(1));
    for (int port = 0; port < 2; ++port) {
        VirtualPad &pad = port == 0 ? xbox : ps5;
        const SDL_GameControllerButton buttons[] = {SDL_CONTROLLER_BUTTON_A, SDL_CONTROLLER_BUTTON_B, SDL_CONTROLLER_BUTTON_X,
            SDL_CONTROLLER_BUTTON_Y, SDL_CONTROLLER_BUTTON_BACK, SDL_CONTROLLER_BUTTON_START, SDL_CONTROLLER_BUTTON_LEFTSHOULDER,
            SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, SDL_CONTROLLER_BUTTON_DPAD_UP, SDL_CONTROLLER_BUTTON_DPAD_DOWN,
            SDL_CONTROLLER_BUTTON_DPAD_LEFT, SDL_CONTROLLER_BUTTON_DPAD_RIGHT, SDL_CONTROLLER_BUTTON_LEFTSTICK, SDL_CONTROLLER_BUTTON_RIGHTSTICK};
        const unsigned bits[] = {14,13,15,12,0,3,10,11,4,6,7,5,1,2};
        for (unsigned i = 0; i < sizeof(bits)/sizeof(bits[0]); ++i) {
            CHECK(SDL_JoystickSetVirtualButton(pad.joystick, buttons[i], 1) == 0);
            events(pads);
            CHECK(pads.read(port, true).buttons == (1u << bits[i]));
            CHECK(SDL_JoystickSetVirtualButton(pad.joystick, buttons[i], 0) == 0);
            events(pads);
        }
        CHECK(SDL_JoystickSetVirtualAxis(pad.joystick, SDL_CONTROLLER_AXIS_LEFTX, 3000) == 0);
        events(pads); CHECK(pads.read(port, true).lx == 128);
        SDL_JoystickSetVirtualAxis(pad.joystick, SDL_CONTROLLER_AXIS_LEFTX, -32768);
        SDL_JoystickSetVirtualAxis(pad.joystick, SDL_CONTROLLER_AXIS_RIGHTY, 32767);
        SDL_JoystickSetVirtualAxis(pad.joystick, SDL_CONTROLLER_AXIS_TRIGGERLEFT, 32767);
        SDL_JoystickSetVirtualAxis(pad.joystick, SDL_CONTROLLER_AXIS_TRIGGERRIGHT, 0);
        events(pads);
        auto input = pads.read(port, true);
        CHECK(input.lx == 0 && input.ry == 255 && input.l2 == 255);
        CHECK(input.r2 >= 126 && input.r2 <= 128 && (input.buttons & 0x300u) == 0x300u);
        input = pads.read(port, false);
        CHECK(input.buttons == 0 && input.lx == 128 && input.ry == 128 && input.l2 == 0);
        pads.rumble(port, 0xff01, true); CHECK(pad.low == 65535 && pad.high == 65535);
        pads.rumble(port, 0xff01, false); CHECK(pad.low == 0 && pad.high == 0);
    }
    detach(xbox); events(pads);
    CHECK(!pads.connected(0) && pads.connected(1));
    CHECK(pads.read(0,true).buttons == 0 && pads.read(0,true).lx == 128);
    attach(xbox, "Test Xbox USB reconnect", 0x045e, 0x0b12); events(pads);
    CHECK(pads.connected(0) && pads.read(0,true).buttons == 0);
    attach(ps4, "Test DualShock 4", 0x054c, 0x05c4); events(pads);
    detach(xbox); events(pads);
    CHECK(pads.connected(0)); // The waiting controller occupies the freed port.
    SDL_JoystickSetVirtualButton(ps4.joystick, SDL_CONTROLLER_BUTTON_A, 1); events(pads);
    CHECK(pads.read(0,true).buttons == (1u << 14));
    pads.rumble(0,0xff01,true); CHECK(ps4.low == 65535);
    pads.close(); CHECK(ps4.low == 0 && ps4.high == 0);
    detach(ps4); detach(ps5);
    for (int v = -32768, previous = -1; v <= 32767; ++v) {
        const int a = host::Controllers::axis(v,4096); CHECK(a >= previous); previous = a;
    }
    SDL_Quit();
    std::puts("PASS: mappings, two players, triggers, deadzone, rumble, focus loss, disconnect, reconnect, waiting controller");
}
