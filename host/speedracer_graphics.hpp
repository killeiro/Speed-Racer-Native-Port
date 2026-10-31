#pragma once
#include "ps2/render_scale.hpp"
#include "ps2/atomic_file.hpp"
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string>

namespace speedracer::graphics {
inline constexpr unsigned kDefaultScale = 3;
inline unsigned load(const std::filesystem::path &path) {
    std::ifstream file(path);
    std::string line;
    unsigned scale = kDefaultScale;
    if (file && std::getline(file, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        constexpr std::string_view key = "resolution=";
        if (!line.starts_with(key) || !ps2::parse_render_scale(std::string_view(line).substr(key.size()), scale))
            return kDefaultScale;
    }
    return scale;
}
inline bool load_fxaa(const std::filesystem::path &path) {
    std::ifstream file(path);
    std::string line;
    while (std::getline(file, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line == "antialiasing=off") return false;
        if (line == "antialiasing=fxaa") return true;
    }
    return true;
}
inline bool load_linear(const std::filesystem::path &path) {
    std::ifstream file(path);
    std::string line;
    while (std::getline(file, line)) {
        if (!line.empty() && line.back() == '\r') line.pop_back();
        if (line == "texture_filter=ps2") return false;
        if (line == "texture_filter=linear") return true;
    }
    return true;
}
inline void save(const std::filesystem::path &path, unsigned scale, bool fxaa, bool linear) {
    if (scale < 1 || scale > 4) throw std::runtime_error("Invalid internal resolution.");
    const std::string data = "resolution=" + std::to_string(scale) + "\n" +
        "antialiasing=" + (fxaa ? "fxaa" : "off") + "\n" +
        "texture_filter=" + (linear ? "linear" : "ps2") + "\n";
    try { ps2::atomic_file::replace(path, data); }
    catch (const std::exception& error) {
        throw std::runtime_error(std::string("Não foi possível concluir a gravação das opções gráficas. Detalhes: ") + error.what());
    }
}
inline void save(const std::filesystem::path &path, unsigned scale, bool fxaa) {
    save(path, scale, fxaa, load_linear(path));
}
inline void save(const std::filesystem::path &path, unsigned scale) {
    save(path, scale, load_fxaa(path));
}
}
