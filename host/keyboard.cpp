#include "keyboard.hpp"

#include <algorithm>
#include <fstream>
#include <sstream>
#include <utility>
#include <vector>

namespace host {
namespace {
using A = KeyboardAction;
constexpr std::size_t action_count = static_cast<std::size_t>(A::Count);
constexpr std::array<const char *, action_count> names = {
    "accelerate", "brake", "steer_left", "steer_right",
    "trick_forward", "trick_back", "trick_left", "trick_right",
    "shunt_left", "spin", "shunt_right", "boost", "repair", "jump", "camera",
    "confirm", "back", "pause", "menu_up", "menu_down", "menu_left", "menu_right"
};
constexpr std::uint16_t select = 1u << 0, r3 = 1u << 2, start = 1u << 3;
constexpr std::uint16_t up = 1u << 4, right = 1u << 5, down = 1u << 6, left = 1u << 7;
constexpr std::uint16_t l2 = 1u << 8, r2 = 1u << 9, l1 = 1u << 10, r1 = 1u << 11;
constexpr std::uint16_t triangle = 1u << 12, circle = 1u << 13, cross = 1u << 14, square = 1u << 15;

std::size_t index(A a) { return static_cast<std::size_t>(a); }
void bind(KeyboardConfig &c, A a, SDL_Scancode primary, SDL_Scancode secondary = SDL_SCANCODE_UNKNOWN) {
    c.bindings[index(a)] = {primary, secondary};
}
std::string lower(std::string_view s) {
    std::string out(s);
    for (char &c : out) if (c >= 'A' && c <= 'Z') c = char(c - 'A' + 'a');
    return out;
}
std::string_view trim(std::string_view s) {
    const auto space = [](char c) { return c == ' ' || c == '\t' || c == '\r' || c == '\n'; };
    while (!s.empty() && space(s.front())) s.remove_prefix(1);
    while (!s.empty() && space(s.back())) s.remove_suffix(1);
    return s;
}
SDL_Scancode key_code(std::string_view text) {
    const auto name = lower(text);
    const std::pair<const char *, SDL_Scancode> aliases[] = {
        {"comma", SDL_SCANCODE_COMMA}, {"period", SDL_SCANCODE_PERIOD},
        {"slash", SDL_SCANCODE_SLASH}, {"backslash", SDL_SCANCODE_BACKSLASH},
        {"semicolon", SDL_SCANCODE_SEMICOLON}, {"apostrophe", SDL_SCANCODE_APOSTROPHE},
        {"leftbracket", SDL_SCANCODE_LEFTBRACKET}, {"rightbracket", SDL_SCANCODE_RIGHTBRACKET},
        {"equal", SDL_SCANCODE_EQUALS}, {"minus", SDL_SCANCODE_MINUS},
        {"backquote", SDL_SCANCODE_GRAVE}, {"lshift", SDL_SCANCODE_LSHIFT},
        {"rshift", SDL_SCANCODE_RSHIFT}, {"lctrl", SDL_SCANCODE_LCTRL},
        {"rctrl", SDL_SCANCODE_RCTRL}, {"lalt", SDL_SCANCODE_LALT},
        {"ralt", SDL_SCANCODE_RALT}, {"enter", SDL_SCANCODE_RETURN},
        {"esc", SDL_SCANCODE_ESCAPE}
    };
    for (const auto &a : aliases) if (name == a.first) return a.second;
    return SDL_GetScancodeFromName(std::string(text).c_str());
}
const char *key_name(SDL_Scancode code) {
    if (code == SDL_SCANCODE_UNKNOWN) return "None";
    // Comma is the alias separator, so it needs an unambiguous file spelling.
    if (code == SDL_SCANCODE_COMMA) return "Comma";
    return SDL_GetScancodeName(code);
}
bool parse_binding(std::string_view value, KeyboardBinding &out, std::string &error) {
    value = trim(value);
    if (lower(value) == "none") { out = {}; return true; }
    const auto comma = value.find(',');
    if (comma != std::string_view::npos && value.find(',', comma + 1) != std::string_view::npos) {
        error = "a binding accepts at most two keys"; return false;
    }
    auto first = trim(value.substr(0, comma));
    auto second = comma == std::string_view::npos ? std::string_view{} : trim(value.substr(comma + 1));
    if (first.empty() || (comma != std::string_view::npos && second.empty())) {
        error = "empty key name; use None to disable an action"; return false;
    }
    out.primary = key_code(first);
    out.secondary = second.empty() ? SDL_SCANCODE_UNKNOWN : key_code(second);
    if (out.primary == SDL_SCANCODE_UNKNOWN || (!second.empty() && out.secondary == SDL_SCANCODE_UNKNOWN)) {
        error = "unknown SDL key name"; return false;
    }
    if (out.primary == out.secondary) { error = "duplicate keys in one binding"; return false; }
    if (out.primary == SDL_SCANCODE_F11 || out.secondary == SDL_SCANCODE_F11) {
        error = "F11 is reserved for fullscreen"; return false;
    }
    return true;
}
bool same_key_allowed(A a, A b) {
    // These intentional pairs let one arrow control navigation plus racing.
    if (index(a) > index(b)) std::swap(a, b);
    return (a == A::Accelerate && b == A::MenuUp) ||
           (a == A::Brake && b == A::MenuDown) ||
           (a == A::SteerLeft && b == A::MenuLeft) ||
           (a == A::SteerRight && b == A::MenuRight);
}
bool validate(const KeyboardConfig &c, std::string &error) {
    for (std::size_t a = 0; a < action_count; ++a) {
        for (std::size_t b = a + 1; b < action_count; ++b) {
            if (same_key_allowed(static_cast<A>(a), static_cast<A>(b))) continue;
            const auto &x = c.bindings[a]; const auto &y = c.bindings[b];
            for (const auto k : {x.primary, x.secondary}) {
                if (k != SDL_SCANCODE_UNKNOWN && (k == y.primary || k == y.secondary)) {
                    // Confirm and spin are the same PS2 face button, so a shared
                    // key has no additional side effect and is safe to support.
                    if (static_cast<A>(a) == A::Spin && static_cast<A>(b) == A::Confirm) continue;
                    error = std::string("key shared by ") + names[a] + " and " + names[b];
                    return false;
                }
            }
        }
    }
    return true;
}
}

const char *keyboard_preset_name(KeyboardPreset preset) {
    return preset == KeyboardPreset::Classic ? "classic" : "pc";
}
const char *keyboard_action_name(KeyboardAction action) {
    return index(action) < names.size() ? names[index(action)] : "unknown";
}
KeyboardConfig keyboard_defaults(KeyboardPreset preset) {
    KeyboardConfig c; c.preset = preset;
    bind(c, A::SteerLeft, SDL_SCANCODE_LEFT); bind(c, A::SteerRight, SDL_SCANCODE_RIGHT);
    bind(c, A::MenuUp, SDL_SCANCODE_UP); bind(c, A::MenuDown, SDL_SCANCODE_DOWN);
    bind(c, A::MenuLeft, SDL_SCANCODE_LEFT); bind(c, A::MenuRight, SDL_SCANCODE_RIGHT);
    if (preset == KeyboardPreset::Classic) {
        bind(c, A::Accelerate, SDL_SCANCODE_2); bind(c, A::Brake, SDL_SCANCODE_W);
        bind(c, A::ShuntLeft, SDL_SCANCODE_A); bind(c, A::Spin, SDL_SCANCODE_Z);
        bind(c, A::ShuntRight, SDL_SCANCODE_X); bind(c, A::Boost, SDL_SCANCODE_1);
        bind(c, A::Repair, SDL_SCANCODE_Q); bind(c, A::Back, SDL_SCANCODE_S);
        bind(c, A::Pause, SDL_SCANCODE_RETURN); bind(c, A::Camera, SDL_SCANCODE_BACKSPACE);
    } else {
        bind(c, A::Accelerate, SDL_SCANCODE_UP); bind(c, A::Brake, SDL_SCANCODE_DOWN);
        bind(c, A::TrickForward, SDL_SCANCODE_W); bind(c, A::TrickBack, SDL_SCANCODE_S);
        bind(c, A::TrickLeft, SDL_SCANCODE_A); bind(c, A::TrickRight, SDL_SCANCODE_D);
        bind(c, A::ShuntLeft, SDL_SCANCODE_Z); bind(c, A::Spin, SDL_SCANCODE_X);
        bind(c, A::ShuntRight, SDL_SCANCODE_C); bind(c, A::Boost, SDL_SCANCODE_LSHIFT, SDL_SCANCODE_Q);
        bind(c, A::Repair, SDL_SCANCODE_E); bind(c, A::Jump, SDL_SCANCODE_SPACE);
        bind(c, A::Camera, SDL_SCANCODE_TAB); bind(c, A::Confirm, SDL_SCANCODE_RETURN);
        bind(c, A::Back, SDL_SCANCODE_BACKSPACE); bind(c, A::Pause, SDL_SCANCODE_ESCAPE);
    }
    return c;
}

std::string keyboard_config_text(const KeyboardConfig &config) {
    std::ostringstream out;
    out << "# Optional keyboard overrides. Copy to Keyboard.ini beside SpeedRacer.exe.\n"
           "# Names are SDL physical key names; use None to disable a binding.\n"
           "# Up to two aliases are separated by a comma. F11 is reserved.\n"
           "[Keyboard]\npreset=" << keyboard_preset_name(config.preset) << '\n';
    for (std::size_t a = 0; a < names.size(); ++a) {
        const auto &b = config.bindings[a];
        out << names[a] << '=' << key_name(b.primary);
        if (b.secondary != SDL_SCANCODE_UNKNOWN) out << ',' << key_name(b.secondary);
        out << '\n';
    }
    return out.str();
}

bool parse_keyboard_config(std::string_view text, KeyboardConfig &config, std::string &error) {
    error.clear();
    if (text.size() > 65536) { error = "Keyboard.ini exceeds 64 KiB"; return false; }
    if (text.size() >= 3 && text.substr(0, 3) == "\xef\xbb\xbf") text.remove_prefix(3);
    struct Entry { std::string name; std::string value; std::size_t line; };
    std::vector<Entry> entries;
    auto preset = config.preset;
    bool have_preset = false, have_section = false;
    std::size_t number = 0;
    while (!text.empty()) {
        ++number;
        const auto end = text.find('\n'); auto line = trim(text.substr(0, end));
        if (end == std::string_view::npos) text = {}; else text.remove_prefix(end + 1);
        if (line.empty() || line.front() == '#' || line.front() == ';') continue;
        if (line.size() > 2048 || line.find('\0') != std::string_view::npos) {
            error = "invalid line " + std::to_string(number); return false;
        }
        if (line.front() == '[') {
            if (lower(line) != "[keyboard]" || have_section) {
                error = "unknown or duplicate section at line " + std::to_string(number); return false;
            }
            have_section = true; continue;
        }
        const auto equals = line.find('=');
        if (equals == std::string_view::npos) { error = "expected name=value at line " + std::to_string(number); return false; }
        auto name = lower(trim(line.substr(0, equals))); auto value = trim(line.substr(equals + 1));
        if (name == "preset") {
            const auto p = lower(value);
            if (have_preset || (p != "pc" && p != "classic")) {
                error = "invalid or duplicate preset at line " + std::to_string(number); return false;
            }
            have_preset = true; preset = p == "classic" ? KeyboardPreset::Classic : KeyboardPreset::PC;
        } else {
            entries.push_back({std::move(name), std::string(value), number});
        }
    }
    auto candidate = keyboard_defaults(preset);
    std::array<bool, action_count> seen{};
    for (const auto &entry : entries) {
        const auto found = std::find_if(names.begin(), names.end(), [&](const char *s) { return entry.name == s; });
        if (found == names.end()) { error = "unknown action at line " + std::to_string(entry.line) + ": " + entry.name; return false; }
        const auto a = std::size_t(found - names.begin());
        if (seen[a]) { error = "duplicate action at line " + std::to_string(entry.line) + ": " + entry.name; return false; }
        seen[a] = true;
        if (!parse_binding(entry.value, candidate.bindings[a], error)) {
            error = "line " + std::to_string(entry.line) + ": " + error; return false;
        }
    }
    if (!validate(candidate, error)) return false;
    config = candidate;
    return true;
}

bool load_keyboard_config(const std::filesystem::path &path, KeyboardConfig &config, std::string &error) {
    error.clear();
    std::error_code ec;
    const bool present = std::filesystem::exists(path, ec);
    if (ec) { error = "cannot inspect Keyboard.ini"; return false; }
    if (!present) return true;
    if (!std::filesystem::is_regular_file(path, ec) || ec) { error = "Keyboard.ini is not a readable regular file"; return false; }
    const auto size = std::filesystem::file_size(path, ec);
    if (ec || size > 65536) { error = "Keyboard.ini is unreadable or exceeds 64 KiB"; return false; }
    std::ifstream input(path, std::ios::binary);
    if (!input) { error = "cannot open Keyboard.ini"; return false; }
    // Bound the actual read too: an external editor may replace/grow the file
    // after file_size(), and a configuration must never allocate without limit.
    std::string text(65537, '\0');
    input.read(text.data(), static_cast<std::streamsize>(text.size()));
    const auto read = input.gcount();
    if (input.bad()) { error = "cannot read Keyboard.ini"; return false; }
    text.resize(static_cast<std::size_t>(read));
    return parse_keyboard_config(text, config, error);
}

void apply_keyboard(const KeyboardConfig &config, const Uint8 *keys, std::size_t count,
                    PadInput &input, KeyboardContext context, bool suppress_return) {
    (void)context;
    const auto key = [&](SDL_Scancode code) {
        return keys && code > SDL_SCANCODE_UNKNOWN && std::size_t(code) < count &&
            !(suppress_return && code == SDL_SCANCODE_RETURN) && keys[code];
    };
    const auto held = [&](A action) {
        const auto &b = config.bindings[index(action)];
        return key(b.primary) || key(b.secondary);
    };
    const std::pair<A, std::uint16_t> buttons[] = {
        {A::Accelerate, r2}, {A::Brake, r1}, {A::ShuntLeft, square}, {A::Spin, cross},
        {A::ShuntRight, circle}, {A::Boost, l2}, {A::Repair, l1}, {A::Jump, r3},
        {A::Camera, select}, {A::Confirm, cross}, {A::Back, triangle}, {A::Pause, start}
    };
    for (const auto &b : buttons) if (held(b.first)) input.buttons |= b.second;
    if (held(A::Accelerate)) input.r2 = 255;
    if (held(A::Boost)) input.l2 = 255;
    if (held(A::MenuUp)) input.buttons |= up;
    if (held(A::MenuDown)) input.buttons |= down;
    if (held(A::MenuLeft)) input.buttons |= left;
    if (held(A::MenuRight)) input.buttons |= right;
    if (config.preset == KeyboardPreset::Classic) {
        // Preserve the original input order, including simultaneous opposite
        // arrows: Right and Down won in the shipped legacy implementation.
        if (held(A::SteerLeft)) input.lx = 0;
        if (held(A::SteerRight)) input.lx = 255;
        if (held(A::MenuUp)) input.ly = 0;
        if (held(A::MenuDown)) input.ly = 255;
    } else {
        const bool l = held(A::SteerLeft), r = held(A::SteerRight);
        if (l || r) input.lx = l == r ? 128 : l ? 0 : 255;
    }
    const bool f = held(A::TrickForward), b = held(A::TrickBack);
    const bool l = held(A::TrickLeft), r = held(A::TrickRight);
    if (f || b) input.ry = f == b ? 128 : f ? 0 : 255;
    if (l || r) input.rx = l == r ? 128 : l ? 0 : 255;
}
}
