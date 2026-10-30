#pragma once
#include <algorithm>
#include <string_view>

namespace ps2 {
enum class DisplayAspect { Original, Wide, Auto, Stretch };

inline bool parse_display_aspect(std::string_view value, DisplayAspect &aspect) {
    if (value == "4:3") aspect = DisplayAspect::Original;
    else if (value == "16:9") aspect = DisplayAspect::Wide;
    else if (value == "auto") aspect = DisplayAspect::Auto;
    else if (value == "stretch") aspect = DisplayAspect::Stretch;
    else return false;
    return true;
}

struct DisplayViewport { float x, y, width, height; };
inline DisplayViewport display_viewport(float width, float height, DisplayAspect aspect) {
    if (width <= 0 || height <= 0) return {};
    if (aspect == DisplayAspect::Auto || aspect == DisplayAspect::Stretch)
        return {0, 0, width, height};
    const float ratio = aspect == DisplayAspect::Wide ? 16.0f / 9.0f : 4.0f / 3.0f;
    const float w = std::min(width, height * ratio), h = w / ratio;
    return {(width - w) * 0.5f, (height - h) * 0.5f, w, h};
}

// The PS2 system configuration supports 4:3 (0), fullscreen (1), 16:9 (2).
// Auto selects the game's 16:9 path on a wide screen. Arbitrary camera aspect
// ratios (e.g. 21:9) need a separate engine change; presentation still fills it.
inline unsigned display_screen_type(float width, float height, DisplayAspect aspect) {
    return aspect == DisplayAspect::Wide ||
           (aspect == DisplayAspect::Auto && width > height * 1.5f) ? 2u : 0u;
}
}
