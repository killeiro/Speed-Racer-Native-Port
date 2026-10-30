#pragma once

#include "controllers.hpp"
#include <array>
#include <cstddef>
#include <filesystem>
#include <string>
#include <string_view>

namespace host {

enum class KeyboardPreset { PC, Classic };
// Input semantics deliberately do not infer a guest menu/race state. The same
// key always produces the same PS2 input, including in pre-race and pause menus.
enum class KeyboardContext { Menu, Race, Paused };
enum class KeyboardAction {
    Accelerate, Brake, SteerLeft, SteerRight,
    TrickForward, TrickBack, TrickLeft, TrickRight,
    ShuntLeft, Spin, ShuntRight, Boost, Repair, Jump, Camera,
    Confirm, Back, Pause, MenuUp, MenuDown, MenuLeft, MenuRight,
    Count
};

struct KeyboardBinding {
    SDL_Scancode primary = SDL_SCANCODE_UNKNOWN;
    SDL_Scancode secondary = SDL_SCANCODE_UNKNOWN;
};

struct KeyboardConfig {
    KeyboardPreset preset = KeyboardPreset::PC;
    std::array<KeyboardBinding, static_cast<std::size_t>(KeyboardAction::Count)> bindings{};
};

KeyboardConfig keyboard_defaults(KeyboardPreset preset = KeyboardPreset::PC);
const char *keyboard_preset_name(KeyboardPreset preset);
const char *keyboard_action_name(KeyboardAction action);
std::string keyboard_config_text(const KeyboardConfig &config);

// Transactional: malformed content leaves config unchanged and reports why.
// A missing optional file is successful and leaves the caller's defaults intact.
// These functions never create or rewrite the player's configuration.
bool parse_keyboard_config(std::string_view text, KeyboardConfig &config, std::string &error);
bool load_keyboard_config(const std::filesystem::path &path, KeyboardConfig &config, std::string &error);

// Merge only active keyboard controls into the physical controller packet.
// The caller handles focus and scripted input ownership before publishing it.
void apply_keyboard(const KeyboardConfig &config, const Uint8 *keys, std::size_t count,
                    PadInput &input, KeyboardContext context = KeyboardContext::Race,
                    bool suppress_return = false);

}
