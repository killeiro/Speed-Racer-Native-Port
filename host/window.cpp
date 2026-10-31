#include "window.hpp"
#include "controllers.hpp"
#include "keyboard.hpp"
#include "frame_metrics.hpp"
#include "frame_pacer.hpp"
#include "audio_output.hpp"
#include "audio_content_trace.hpp"

#include "ps2/system.hpp"
#include "ps2/scripted_input.hpp"
#include "ps2/host_path.hpp"

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <psapi.h>
#include "resource.h"
#endif

#include <SDL.h>
#include <SDL_syswm.h>
#ifndef _WIN32
#include <sys/resource.h>
#endif
#include <unistd.h>

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <thread>
#include <vector>

#ifndef PS2_WINDOW_TITLE
#define PS2_WINDOW_TITLE "ps2-web-recomp"
#endif

namespace {

void name_diagnostic_thread(const char *role,const wchar_t *name) {
#ifdef _WIN32
    static const bool enabled=std::getenv("PS2_THREAD_ROLES") || std::getenv("PS2_VU_TIMING_CSV");
    if(enabled) {
        const auto result=SetThreadDescription(GetCurrentThread(),name);
        std::fprintf(stderr,"[thread-role] %s tid=%lu name_ok=%u\n",role,
            static_cast<unsigned long>(GetCurrentThreadId()),unsigned(SUCCEEDED(result)));
    }
#else
    (void)role;(void)name;
#endif
}

host::KeyboardConfig g_keyboard = host::keyboard_defaults(host::KeyboardPreset::Classic);

SDL_Window *g_window = nullptr;
SDL_Renderer *g_renderer = nullptr;
SDL_Texture *g_texture = nullptr;
SDL_AudioDeviceID g_audio = 0;
host::AudioOutput g_audio_output;
std::vector<std::int16_t> g_filtered_audio;
// the keyboard drives the first controller port along with the first game controller, a second one is player 2
host::Controllers g_controllers;
std::uint32_t g_tex_w = 0, g_tex_h = 0;
std::uint64_t g_last = 0;
std::vector<std::uint32_t> g_pixels;
bool g_gpu_present = false;
bool g_fullscreen_return = false;
std::uint32_t g_surface_w = 0, g_surface_h = 0;

bool is_fullscreen() {
    return (SDL_GetWindowFlags(g_window) & SDL_WINDOW_FULLSCREEN) != 0;
}

void refresh_surface_size() {
    if (!g_gpu_present || (SDL_GetWindowFlags(g_window) & SDL_WINDOW_MINIMIZED)) return;
    int w = 0, h = 0;
    SDL_GetWindowSizeInPixels(g_window, &w, &h);
    if (w <= 0 || h <= 0) return;
    if (g_surface_w == static_cast<std::uint32_t>(w) && g_surface_h == static_cast<std::uint32_t>(h)) return;
    g_surface_w = static_cast<std::uint32_t>(w);
    g_surface_h = static_cast<std::uint32_t>(h);
    ps2::resize_window(g_surface_w, g_surface_h);
    std::fprintf(stderr, "[window] surface %ux%u, %s, aspect %s\n",
                 g_surface_w, g_surface_h, is_fullscreen() ? "fullscreen" : "windowed",
                 ps2::g_options.display_aspect == ps2::DisplayAspect::Original ? "4:3" :
                 ps2::g_options.display_aspect == ps2::DisplayAspect::Wide ? "16:9" : "fill");
}

void toggle_fullscreen() {
    if (SDL_SetWindowFullscreen(g_window, is_fullscreen() ? 0u : SDL_WINDOW_FULLSCREEN_DESKTOP) != 0) {
        std::fprintf(stderr, "[window] fullscreen change failed: %s\n", SDL_GetError());
        return;
    }
    SDL_ShowCursor(is_fullscreen() ? SDL_DISABLE : SDL_ENABLE);
    refresh_surface_size();
}

bool create_renderer() {
    g_renderer = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_ACCELERATED);
    if (!g_renderer) g_renderer = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_SOFTWARE);
    if (!g_renderer) {
        std::fprintf(stderr, "SDL: %s\n", SDL_GetError());
        return false;
    }
    return true;
}

bool attach_gpu() {
    if (std::getenv("PS2_SDL_RENDERER")) return false;
    SDL_SysWMinfo info;
    SDL_VERSION(&info.version);
    if (!SDL_GetWindowWMInfo(g_window, &info)) return false;
    ps2::WindowTarget target;
    int w = 0, h = 0;
    SDL_GetWindowSizeInPixels(g_window, &w, &h);
    target.width = static_cast<std::uint32_t>(w);
    target.height = static_cast<std::uint32_t>(h);
    switch (info.subsystem) {
#if defined(SDL_VIDEO_DRIVER_WINDOWS)
    case SDL_SYSWM_WINDOWS:
        target.kind = ps2::WindowTarget::Win32;
        target.display = info.info.win.hinstance;
        target.surface = info.info.win.window;
        break;
#endif
#if defined(SDL_VIDEO_DRIVER_X11)
    case SDL_SYSWM_X11:
        target.kind = ps2::WindowTarget::X11;
        target.display = info.info.x11.display;
        target.window = static_cast<std::uint64_t>(info.info.x11.window);
        break;
#endif
#if defined(SDL_VIDEO_DRIVER_WAYLAND)
    case SDL_SYSWM_WAYLAND:
        target.kind = ps2::WindowTarget::Wayland;
        target.display = info.info.wl.display;
        target.surface = info.info.wl.surface;
        break;
#endif
    default: return false;
    }
    if (!ps2::attach_window(target)) return false;
    g_surface_w = target.width;
    g_surface_h = target.height;
    std::fprintf(stderr, "[window] surface %ux%u, %s, aspect %s\n",
                 g_surface_w, g_surface_h, is_fullscreen() ? "fullscreen" : "windowed",
                 ps2::g_options.display_aspect == ps2::DisplayAspect::Original ? "4:3" :
                 ps2::g_options.display_aspect == ps2::DisplayAspect::Wide ? "16:9" : "fill");
    return true;
}

void poll_port(int port) {
    static bool plugged[2] = {};
    const bool connected = g_controllers.connected(port);
    if (port > 0 && plugged[port] != connected) {
        plugged[port] = connected;
        ps2::set_pad_connected(port, connected);
    }
    const bool focused = (SDL_GetWindowFlags(g_window) & SDL_WINDOW_INPUT_FOCUS) != 0;
    host::PadInput input = g_controllers.read(port, focused);
    if (port == 0 && focused) {
        int count = 0;
        const Uint8 *keys = SDL_GetKeyboardState(&count);
        host::apply_keyboard(g_keyboard, keys, static_cast<std::size_t>(count), input,
                             host::KeyboardContext::Race, g_fullscreen_return);
    }
    g_controllers.rumble(port, ps2::pad_rumble(port), focused);
    // Publish one coherent packet, including after boot/reset or state loading.
    if (!ps2::script_controls_port(ps2::g_options.presses, port, ps2::script_input_released()))
        ps2::set_pad_input(input.buttons, input.rx, input.ry, input.lx, input.ly, input.l2, input.r2, port);
}

void poll() {
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) ps2::request_stop();
        if (e.type == SDL_KEYDOWN) {
            const bool alt_enter = e.key.keysym.scancode == SDL_SCANCODE_RETURN && (e.key.keysym.mod & KMOD_ALT);
            if (alt_enter) g_fullscreen_return = true;
            if (!e.key.repeat && (e.key.keysym.scancode == SDL_SCANCODE_F11 || alt_enter)) toggle_fullscreen();
        }
        if (e.type == SDL_KEYUP && e.key.keysym.scancode == SDL_SCANCODE_RETURN) g_fullscreen_return = false;
        if (e.type == SDL_WINDOWEVENT) {
            switch (e.window.event) {
            case SDL_WINDOWEVENT_FOCUS_LOST: g_fullscreen_return = false; break;
            case SDL_WINDOWEVENT_SIZE_CHANGED:
            case SDL_WINDOWEVENT_RESTORED:
            case SDL_WINDOWEVENT_MAXIMIZED:
            case SDL_WINDOWEVENT_MOVED:
            case SDL_WINDOWEVENT_DISPLAY_CHANGED: refresh_surface_size(); break;
            default: break;
            }
        }
        g_controllers.event(e);
    }
    poll_port(0);
    poll_port(1);
}

void show_pixels(const std::uint32_t *rgba, std::uint32_t w, std::uint32_t h) {
    if (w != g_tex_w || h != g_tex_h) {
        if (g_texture) SDL_DestroyTexture(g_texture);
        g_texture = SDL_CreateTexture(g_renderer, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STREAMING, static_cast<int>(w), static_cast<int>(h));
        const auto aspect = ps2::g_options.display_aspect;
        if (aspect == ps2::DisplayAspect::Auto || aspect == ps2::DisplayAspect::Stretch)
            SDL_RenderSetLogicalSize(g_renderer, 0, 0);
        else
            SDL_RenderSetLogicalSize(g_renderer, static_cast<int>(w),
                static_cast<int>(w) * (aspect == ps2::DisplayAspect::Wide ? 9 : 3) /
                (aspect == ps2::DisplayAspect::Wide ? 16 : 4));
        g_tex_w = w;
        g_tex_h = h;
    }
    SDL_UpdateTexture(g_texture, nullptr, rgba, static_cast<int>(w * 4));
    SDL_RenderClear(g_renderer);
    SDL_RenderCopy(g_renderer, g_texture, nullptr, nullptr);
    SDL_RenderPresent(g_renderer);
}

void present() {
    if (g_gpu_present) {
        ps2::present_frame();
        return;
    }
    std::uint32_t w = 0, h = 0;
    if (ps2::display_frame(g_pixels, w, h)) show_pixels(g_pixels.data(), w, h);
}

constexpr Uint32 kAudioBytesPerMs = 48 * 4;

bool legacy_pacing() {
    // Experimental until race throughput/pacing and real underruns are accepted.
    static const bool enabled = !std::getenv("PS2_EXPERIMENTAL_PACING") ||
                                std::getenv("PS2_LEGACY_PACING");
    return enabled;
}

void pace_legacy() {
    if (g_audio) {
        // The audio device clock paces emulation: wait while more than ~80 ms of sound is queued.
        while (SDL_GetQueuedAudioSize(g_audio) > 80 * kAudioBytesPerMs) SDL_Delay(1);
        return;
    }
    const std::uint64_t frequency = SDL_GetPerformanceFrequency();
    const std::uint64_t period = frequency / (ps2::g_options.pal ? 50 : 60);
    const std::uint64_t now = SDL_GetPerformanceCounter();
    if (g_last && now - g_last < period) {
        SDL_Delay(static_cast<Uint32>((period - (now - g_last)) * 1000 / frequency));
        g_last += period;
    } else {
        g_last = now;
    }
}

void pace() {
    if (legacy_pacing()) {
        pace_legacy();
        return;
    }
    // The queued byte count advances in device-sized chunks; it is not a
    // precise playback cursor. Use a monotonic deadline for regular frames,
    // retaining the audio high-water guard for clock drift and stalled devices.
    static host::FramePacer pacer;
    static host::AudioReserve reserve;
    if (g_audio && !reserve.ready(SDL_GetQueuedAudioSize(g_audio) / kAudioBytesPerMs)) {
        // Let startup/slow-scene audio refill before adding any deadline wait.
        // A stale deadline must not cause a catch-up burst on recovery.
        pacer.reset();
        return;
    }
    const auto target = pacer.target(host::FramePacer::Clock::now(), ps2::g_options.pal ? 50u : 60u);
    for (auto now = host::FramePacer::Clock::now(); now < target; now = host::FramePacer::Clock::now()) {
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(target - now).count();
        SDL_Delay(static_cast<Uint32>(std::max<std::int64_t>(1, ms)));
    }
    if (g_audio) {
        while (SDL_GetQueuedAudioSize(g_audio) > 80 * kAudioBytesPerMs) SDL_Delay(1);
    }
}

// Keep publication ahead of the host wait: gpu::present submits accumulated GS
// work. Delaying the present message can unnecessarily delay that submission.
template <typename Present>
void paced_present(Present present_frame) {
    using Clock = std::chrono::steady_clock;
    const auto start = Clock::now();
    present_frame();
    const auto posted = Clock::now();
    pace();
    const auto paced = Clock::now();
    host::trace_simulation(std::chrono::duration<double, std::milli>(posted - start).count(),
                           std::chrono::duration<double, std::milli>(paced - posted).count());
}

double process_cpu_seconds() {
#ifdef _WIN32
    FILETIME creation_time{}, exit_time{}, kernel_time{}, user_time{};
    if (!GetProcessTimes(GetCurrentProcess(), &creation_time, &exit_time, &kernel_time, &user_time))
        return 0.0;

    ULARGE_INTEGER kernel_ticks{};
    kernel_ticks.LowPart = kernel_time.dwLowDateTime;
    kernel_ticks.HighPart = kernel_time.dwHighDateTime;

    ULARGE_INTEGER user_ticks{};
    user_ticks.LowPart = user_time.dwLowDateTime;
    user_ticks.HighPart = user_time.dwHighDateTime;

    return static_cast<double>(kernel_ticks.QuadPart + user_ticks.QuadPart) / 10000000.0;
#else
    rusage usage{};
    getrusage(RUSAGE_SELF, &usage);
    return static_cast<double>(usage.ru_utime.tv_sec + usage.ru_stime.tv_sec) + static_cast<double>(usage.ru_utime.tv_usec + usage.ru_stime.tv_usec) / 1e6;
#endif
}

double resident_mb() {
#ifdef _WIN32
    PROCESS_MEMORY_COUNTERS counters{};
    counters.cb = sizeof(counters);
    if (!GetProcessMemoryInfo(GetCurrentProcess(), &counters, sizeof(counters)))
        return 0.0;
    return static_cast<double>(counters.WorkingSetSize) / (1024.0 * 1024.0);
#else
    long pages = 0, resident = 0;
    if (std::FILE *f = std::fopen("/proc/self/statm", "r")) {
        if (std::fscanf(f, "%ld %ld", &pages, &resident) != 2) resident = 0;
        std::fclose(f);
    }
    return static_cast<double>(resident) * static_cast<double>(sysconf(_SC_PAGESIZE)) / (1024.0 * 1024.0);
#endif
}

// Optional per-render-frame timing. Buffered writes keep profiling overhead low.
void trace_frame(std::uint64_t now) {
    static std::FILE *file = []() -> std::FILE * {
        const char *path = std::getenv("PS2_FRAME_CSV");
        if (!path || !*path) return nullptr;
        std::FILE *f = std::fopen(path, "w");
        if (f) std::fputs("present,interval_ms,audio_ms,vu_interpreted_calls\n", f);
        return f;
    }();
    if (!file) return;
    static std::uint64_t previous = 0, number = 0;
    if (previous) std::fprintf(file, "%llu,%.6f,%.3f,%llu\n", static_cast<unsigned long long>(++number),
        static_cast<double>(now - previous) * 1000.0 / SDL_GetPerformanceFrequency(),
        g_audio ? SDL_GetQueuedAudioSize(g_audio) / static_cast<double>(kAudioBytesPerMs) : 0.0,
        static_cast<unsigned long long>(ps2::vu1_interpreted_calls()));
    previous = now;
}

void show_speed() {
    static std::uint64_t start = 0, frames = 0;
    static double cpu_start = 0.0, gpu_start = 0.0;
    const std::uint64_t now = SDL_GetPerformanceCounter();
    trace_frame(now);
    if (!start) {
        start = now;
        cpu_start = process_cpu_seconds();
        gpu_start = ps2::gpu_busy_ms();
    }
    ++frames;
    const double seconds = static_cast<double>(now - start) / static_cast<double>(SDL_GetPerformanceFrequency());
    if (seconds < 1.0) return;
    const double cpu = process_cpu_seconds(), gpu = ps2::gpu_busy_ms();
    char title[320], gpu_text[40];
    if (ps2::native_graphics()) std::snprintf(gpu_text,sizeof gpu_text,"Vulkan HW");
    else std::snprintf(gpu_text,sizeof gpu_text,"%.0f%%",(gpu-gpu_start)/(seconds*10.0));
    const double queued = g_audio ? SDL_GetQueuedAudioSize(g_audio) / static_cast<double>(kAudioBytesPerMs) : 0.0;
    std::snprintf(title, sizeof title, PS2_WINDOW_TITLE "  %.1f fps  CPU %.0f%%  GPU %s  RAM %.0f MB  audio %.0f ms  | %ux | %s", static_cast<double>(frames) / seconds,
                  (cpu - cpu_start) / seconds * 100.0, gpu_text, resident_mb(), queued, ps2::g_options.render_scale ? ps2::g_options.render_scale : 1u, g_controllers.name(0));
    SDL_SetWindowTitle(g_window, title);
    start = now;
    frames = 0;
    cpu_start = cpu;
    gpu_start = gpu;
}

void on_vblank() {
    show_speed();
    poll();
    paced_present(present);
}

void queue_audio(const std::int16_t *samples, std::size_t frames) {
    g_filtered_audio.resize(frames * 2);
    g_audio_output.process(samples, g_filtered_audio.data(), frames);
    const bool discarded = SDL_GetQueuedAudioSize(g_audio) > 500 * kAudioBytesPerMs;
    const bool failed = !discarded && SDL_QueueAudio(g_audio, g_filtered_audio.data(), static_cast<Uint32>(frames * 4)) != 0;
    host::audio_content::observe_output(g_filtered_audio.data(), frames, discarded, failed);
    if (failed) {
        static bool reported = false;
        if (!reported) {
            reported = true;
            std::fprintf(stderr, "[audio] enqueue failed: %s\n", SDL_GetError());
        }
    }
}

}

bool open_window(bool fullscreen) {
    host::Controllers::configure_drivers();
#ifdef _WIN32
    // Must precede video initialization; retain SDL/environment overrides.
    SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
#endif
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER) != 0) {
        std::fprintf(stderr, "SDL: %s\n", SDL_GetError());
        return false;
    }
#ifdef PS2_SPEEDRACER_KEYBOARD
    g_keyboard = host::keyboard_defaults(host::KeyboardPreset::PC);
    if (char *base = SDL_GetBasePath()) {
        const auto config = ps2::host_path::from_utf8(base) / "Keyboard.ini";
        SDL_free(base);
        std::string error;
        if (!host::load_keyboard_config(config, g_keyboard, error))
            std::fprintf(stderr, "[keyboard] %s; using default PC preset\n", error.c_str());
    } else {
        std::fprintf(stderr, "[keyboard] cannot locate optional Keyboard.ini; using default PC preset\n");
    }
#endif
    std::fprintf(stderr, "[keyboard] preset=%s\n", host::keyboard_preset_name(g_keyboard.preset));
    const Uint32 flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI | (fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0u);
    g_window = SDL_CreateWindow(PS2_WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 960, 720, flags);
    if (!g_window) {
        std::fprintf(stderr, "SDL: %s\n", SDL_GetError());
        return false;
    }
#ifdef _WIN32
    // Shared resource handles live for the process lifetime. Embed the icons so
    // moving the executable never loses its title-bar or taskbar branding.
    SDL_SysWMinfo info{};
    SDL_VERSION(&info.version);
    if (SDL_GetWindowWMInfo(g_window, &info) && info.subsystem == SDL_SYSWM_WINDOWS) {
        const HINSTANCE module = GetModuleHandleW(nullptr);
        const auto set_icon = [&](WPARAM kind, int width_metric, int height_metric) {
            const HICON icon = static_cast<HICON>(LoadImageW(module,
                MAKEINTRESOURCEW(IDI_SPEEDRACER), IMAGE_ICON,
                GetSystemMetrics(width_metric), GetSystemMetrics(height_metric), LR_SHARED));
            if (icon) SendMessageW(info.info.win.window, WM_SETICON, kind,
                                  reinterpret_cast<LPARAM>(icon));
        };
        set_icon(ICON_BIG, SM_CXICON, SM_CYICON);
        set_icon(ICON_SMALL, SM_CXSMICON, SM_CYSMICON);
    }
#endif
    int display_w = 0, display_h = 0;
    SDL_GetWindowSizeInPixels(g_window, &display_w, &display_h);
    ps2::g_options.osd_screen_type = ps2::display_screen_type(
        static_cast<float>(display_w), static_cast<float>(display_h), ps2::g_options.display_aspect);
    std::fprintf(stderr, "[window] guest screen type %u (fresh boot)\n", ps2::g_options.osd_screen_type);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    SDL_AudioSpec want{}, have{};
    want.freq = 48000;
    want.format = AUDIO_S16SYS;
    want.channels = 2;
    want.samples = 1024;
    g_audio = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
    if (g_audio) {
        g_audio_output.reset();
        std::fprintf(stderr, "[audio] output DC blocker enabled\n");
        std::fprintf(stderr, "[audio] %s, %d Hz, %u channels, %u frames, format=0x%04X\n",
                     SDL_GetCurrentAudioDriver(), have.freq, have.channels, have.samples, have.format);
        SDL_PauseAudioDevice(g_audio, 0);
        ps2::set_audio_sink(queue_audio);
    } else {
        std::fprintf(stderr, "[audio] device open failed: %s\n", SDL_GetError());
    }
    g_controllers.initialize();
    SDL_ShowCursor(is_fullscreen() ? SDL_DISABLE : SDL_ENABLE);
    return true;
}

int run_window(const std::function<int()> &emulate) {
    name_diagnostic_thread("render/UI",L"SpeedRacer render/UI");
    ps2::init_graphics();
    g_gpu_present = attach_gpu();
    if (ps2::graphics_failed()) { ps2::close_graphics(); SDL_Quit(); return 1; }
    std::fprintf(stderr, "[window] %s\n", g_gpu_present ? "presenting directly through GS" : "presenting through SDL");
    if (!g_gpu_present && !create_renderer()) return 1;
    const bool threads = !std::getenv("PS2_ONE_THREAD") && !std::getenv("PS2_TIME") && ps2::g_options.frames_dir.empty();
    if (!threads) {
        ps2::g_options.on_vblank = on_vblank;
        int result = 0;
        std::exception_ptr failure;
        try { result = emulate(); }
        catch (...) { failure = std::current_exception(); }
        ps2::close_graphics();
        g_controllers.close();
        SDL_Quit();
        if (failure) std::rethrow_exception(failure);
        return result;
    }
    ps2::g_options.on_vblank = [] {
        paced_present(ps2::post_present);
    };
    ps2::start_render_thread();
    std::thread vu_worker;
    if (!std::getenv("PS2_NO_VU_THREAD")) {
        ps2::start_vu_thread();
        vu_worker = std::thread([] { name_diagnostic_thread("VU",L"SpeedRacer VU"); ps2::run_vu_thread(); });
    }
    std::atomic<bool> done{false};
    int result = 0;
    std::exception_ptr failure;
    std::thread emulation([&] {
        name_diagnostic_thread("EE",L"SpeedRacer EE");
        try { result = emulate(); }
        catch (...) { failure = std::current_exception(); result = 1; }
        // Also terminate workers after errors before run(), e.g. a bad ELF or
        // state. The main thread must keep rendering until this barrier ends.
        ps2::finish_workers();
        done.store(true);
        ps2::wake_render_thread();
    });
    const std::function<void(const std::uint32_t *, std::uint32_t, std::uint32_t)> copy = show_pixels, none;
    while (!done.load()) {
        poll();
        if (ps2::render_pending(g_gpu_present, g_gpu_present ? none : copy, show_speed, 8.0) == ps2::Rendered::idle) ps2::wait_render_work(4);
    }
    emulation.join();
    if (vu_worker.joinable()) vu_worker.join();
    std::fprintf(stderr, "[lifecycle] EE/VU worker threads joined\n");
    ps2::close_graphics();
    g_controllers.close();
    SDL_Quit();
    std::fflush(nullptr);
    if (failure) std::rethrow_exception(failure);
    return result;
}
