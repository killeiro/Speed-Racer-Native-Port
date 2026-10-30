// SPDX-License-Identifier: GPL-3.0-or-later
#include "hardware.hpp"
#include "ps2/system.hpp"
#include <array>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <stdexcept>
#include <string>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include "../../../native/gs_hw/bridge.h"
#endif

namespace ps2::gs::hardware {
namespace {
std::atomic<bool> broken{false};
#ifdef _WIN32
HMODULE module = nullptr;
HMODULE shader_compiler = nullptr;
const SrgsApi* api = nullptr;
bool opened = false;
void* attached_window = nullptr;
std::uint64_t chunks = 0, bytes_sent = 0, presents = 0, downloads = 0;

std::filesystem::path executable_dir() {
    std::wstring name(32768, L'\0');
    const DWORD count = GetModuleFileNameW(nullptr, name.data(), DWORD(name.size()));
    if (!count || count >= name.size()) throw std::runtime_error("Cannot locate native GS DLL directory");
    name.resize(count);
    return std::filesystem::path(name).parent_path();
}
std::string utf8(const std::filesystem::path& path) {
    const auto text = path.u8string();
    return std::string(reinterpret_cast<const char*>(text.data()), text.size());
}
std::string detail() {
    std::array<char, 1024> text{};
    if (api) api->last_error(text.data(), unsigned(text.size()));
    return text.data();
}
bool check(int status, const char* operation) {
    if (status == SRGS_OK) return true;
    if (!broken.exchange(true))
        std::fprintf(stderr, "[hardware-gs] FAILED %s (status %d): %s\n", operation, status, detail().c_str());
    // Continue consuming/acknowledging the host queue while EE stops. Throwing
    // from the render consumer would strand producers in a full ring or FIFO.
    ps2::request_stop();
    return false;
}
bool ensure_open() {
    if (broken.load()) return false;
    if (opened) return true;
    try {
        const char* override_path = std::getenv("PS2_GS_HW_DLL");
        auto path = override_path ? std::filesystem::u8path(override_path) : executable_dir() / "SpeedRacerGS.dll";
        if (!path.is_absolute()) throw std::runtime_error("PS2_GS_HW_DLL must be an absolute path");
        path.make_preferred();
        module = LoadLibraryExW(path.c_str(), nullptr, LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS);
        if (!module) throw std::runtime_error("Cannot load SpeedRacerGS.dll (Windows error " + std::to_string(GetLastError()) + ")");
        // PCSX2 loads shaderc by basename on the GS worker, after this DLL load
        // has returned. LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR is scoped to one call;
        // it cannot resolve that later load from a different host EXE folder.
        auto compiler_path = path.parent_path() / "shaderc_shared.dll";
        compiler_path.make_preferred();
        shader_compiler = LoadLibraryExW(compiler_path.c_str(), nullptr,
            LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS);
        if (!shader_compiler) throw std::runtime_error("Cannot load adjacent shaderc_shared.dll (Windows error " + std::to_string(GetLastError()) + ")");
        const auto get = reinterpret_cast<SrgsGetApi>(GetProcAddress(module, "srgs_get_api"));
        api = get ? get(SRGS_ABI_VERSION, sizeof(SrgsApi)) : nullptr;
        if (!api || api->version != SRGS_ABI_VERSION || api->size != sizeof(SrgsApi))
            throw std::runtime_error("Incompatible native GS C ABI");
        unsigned scale = ps2::g_options.render_scale;
        if (!scale) {
            scale = 1;
            if (const char* env = std::getenv("PS2_SCALE"))
                if (!parse_render_scale(env, scale)) throw std::runtime_error("PS2_SCALE must be 1..4");
        }
        if (scale > 4) throw std::runtime_error("Native GS scale must be 1..4");
        const auto aspect = ps2::g_options.display_aspect;
        const unsigned ratio = aspect == DisplayAspect::Original ? SRGS_4_3 :
            aspect == DisplayAspect::Wide ? SRGS_16_9 : SRGS_FILL;
        const char* resources = std::getenv("PS2_GS_HW_RESOURCES");
        const char* cache = std::getenv("PS2_GS_HW_CACHE");
        const auto resources_path = resources ? std::filesystem::u8path(resources) : path.parent_path() / "resources";
        const auto cache_path = cache ? std::filesystem::u8path(cache) : path.parent_path() / "cache";
        const auto resources_text = utf8(resources_path), cache_text = utf8(cache_path);
        const SrgsConfig config{sizeof(config), scale, ratio, 0, resources_text.c_str(), cache_text.c_str()};
        alignas(16) const std::array<std::uint8_t, kPrivBytes> priv{};
        if (!check(api->open(&config, attached_window, priv.data(), unsigned(priv.size())), "open")) return false;
        opened = true;
        std::fprintf(stderr, "[hardware-gs] Vulkan connected to native runtime; scale=%u, surface=%s\n", scale, attached_window ? "Win32" : "surfaceless");
        return true;
    } catch (const std::exception& e) {
        broken.store(true);
        std::fprintf(stderr, "[hardware-gs] FAILED initialization: %s\n", e.what());
        ps2::request_stop();
        return false;
    }
}
#endif
}
bool selected() {
    static const bool value = [] {
        if (!g_options.gs_backend.empty()) return g_options.gs_backend == "hardware";
        const char* env = std::getenv("PS2_GS");
        return env && std::strcmp(env, "hw") == 0;
    }();
    return value;
}
bool failed() { return broken.load(); }
bool attach(int kind, std::uint64_t window) {
#ifdef _WIN32
    if (kind != WindowTarget::Win32 || !window || opened) return false;
    attached_window = reinterpret_cast<void*>(static_cast<std::uintptr_t>(window));
    return ensure_open();
#else
    (void)kind; (void)window;
    return false;
#endif
}
void gif(unsigned path, const std::uint8_t* data, std::uint32_t qwords) {
#ifdef _WIN32
    if (ensure_open() && qwords && qwords <= (16u << 20) / 16 && check(api->gif(path, data, qwords * 16), "GIF")) {
        ++chunks; bytes_sent += std::uint64_t(qwords) * 16;
    } else if (qwords > (16u << 20) / 16) check(SRGS_ARGUMENT, "oversized GIF");
#else
    (void)path; (void)data; (void)qwords;
    broken.store(true); ps2::request_stop();
#endif
}
void present(const std::uint8_t* priv, unsigned field) {
#ifdef _WIN32
    if (ensure_open() && check(api->present(priv, kPrivBytes, field), "present")) ++presents;
#else
    (void)priv; (void)field;
#endif
}
bool image(std::vector<std::uint32_t>& pixels, std::uint32_t& width, std::uint32_t& height) {
#ifdef _WIN32
    if (!ensure_open()) return false;
    SrgsImage info{sizeof(info), 0, 0, 0};
    const auto status = api->read_frame(&info, nullptr, 0);
    // A boot frame may have neither display circuit enabled yet.
    if (status == SRGS_FAILED) return false;
    if (status != SRGS_BUFFER_SMALL || !info.width || !info.height || info.bytes != std::uint64_t(info.width) * info.height * 4 || info.bytes > (256u << 20)) {
        check(SRGS_FAILED, "invalid output image"); return false;
    }
    pixels.resize(info.bytes / 4);
    if (!check(api->read_frame(&info, reinterpret_cast<std::uint8_t*>(pixels.data()), info.bytes), "read frame")) return false;
    width = info.width; height = info.height; return true;
#else
    (void)pixels; (void)width; (void)height; return false;
#endif
}
void read_fifo(std::uint8_t* data, std::uint32_t qwords) {
    if (!data || !qwords) return;
    std::memset(data, 0, std::size_t(qwords) * 16);
#ifdef _WIN32
    if (ensure_open()) {
        if (qwords > (4u << 20) / 16) { check(SRGS_ARGUMENT, "oversized FIFO"); return; }
        if (check(api->read_fifo(data, qwords * 16), "read FIFO")) ++downloads;
    }
#endif
}
void reset() {
#ifdef _WIN32
    if (opened && !broken.load()) check(api->reset(), "reset");
#endif
}
void soft_reset() {
#ifdef _WIN32
    if (opened && !broken.load()) check(api->soft_reset(7), "GIF reset");
#endif
}
void write_csr(std::uint32_t value) {
#ifdef _WIN32
    if (opened && !broken.load()) check(api->write_csr(value), "CSR");
#else
    (void)value;
#endif
}
void resize(std::uint32_t width, std::uint32_t height) {
#ifdef _WIN32
    if (opened && !broken.load() && width && height) check(api->resize(width, height), "resize");
#else
    (void)width; (void)height;
#endif
}
void sync() {
#ifdef _WIN32
    if (opened && !broken.load()) check(api->sync(), "sync");
#endif
}
void close() {
#ifdef _WIN32
    if (api) check(api->close(), "close");
    opened = false; api = nullptr;
    if (module) FreeLibrary(module);
    module = nullptr;
    if (shader_compiler) FreeLibrary(shader_compiler);
    shader_compiler = nullptr;
#endif
}
void stats() {
#ifdef _WIN32
    if (selected()) std::fprintf(stderr, "[hardware-gs] chunks=%llu bytes=%llu presents=%llu FIFO=%llu failed=%u\n",
        static_cast<unsigned long long>(chunks), static_cast<unsigned long long>(bytes_sent),
        static_cast<unsigned long long>(presents), static_cast<unsigned long long>(downloads), unsigned(failed()));
#endif
}
}
