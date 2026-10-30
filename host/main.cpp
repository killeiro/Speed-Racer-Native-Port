#include "ps2/system.hpp"
#include "ps2/scripted_input.hpp"
#ifdef PS2_SPEEDRACER_CLOCK
#include "audio_content_trace.hpp"
#endif

#ifdef PS2_WINDOW
#include "window.hpp"
#endif
#ifdef PS2_PROFILE
#include "profile.hpp"
#endif

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

void register_generated_code();
void register_generated_vu();
#ifdef PS2_CONT_VU
void register_generated_vu_continuations();
#endif
#ifdef PS2_CONT_VU_OVERLAY
void register_generated_vu_continuation_overlay();
#endif
#ifdef PS2_LOCAL_VU_BLOCKS
void register_generated_vu_local_blocks();
#endif
#ifdef PS2_EXTRA_VU
void register_generated_vu_extra();
#endif

namespace {

bool native_vu_cpu_supported() {
#ifdef PS2_VU_AVX2
    // GCC/Clang include OSXSAVE/XCR0 checks before reporting AVX support.
    __builtin_cpu_init();
    return __builtin_cpu_supports("avx2");
#else
    return true;
#endif
}
constexpr const char *native_vu_cpu_error = "This build of Speed Racer requires an AVX2-capable CPU and operating system.";

int usage() {
    std::fprintf(stderr,
                 "usage: ps2run <elf> [--arg text]... [--frames n] [--ntsc] [--misses file]\n"
                 "              [--disc image.iso] [--memcard card.ps2] [--pal | --ntsc] [--trace-syscalls] [--trace-io] [--trace-threads]\n"
                 "              [--trace-iop] [--trace-iop-hle] [--frames-dir dir] [--frame-every n]\n"
                 "              [--press frame:button[+button][:frames]]... [--window] [--fullscreen] [--aspect auto|4:3|16:9|stretch] [--scale 1|2|3|4] [--renderer compute|hardware]\n"
                 "              [--input-handoff frame] (release a menu script to physical input; requires --press)\n"
                 "              [--save-state frame:file] [--load-state file]\n");
    return 2;
}

}

int main(int argc, char **argv) {
    if (!native_vu_cpu_supported()) {
        std::fprintf(stderr, "%s\n", native_vu_cpu_error);
        return 1;
    }
    if (argc < 2) return usage();
    std::vector<std::string> args{argv[1]};
    [[maybe_unused]] bool window = false, fullscreen = false;
    std::string load_path;
    bool input_handoff = false;
    for (int i = 2; i < argc; ++i) {
        const std::string a = argv[i];
        if (a == "--arg" && i + 1 < argc) args.push_back(argv[++i]);
        else if (a == "--frames" && i + 1 < argc) ps2::g_options.max_frames = std::strtoull(argv[++i], nullptr, 10);
        else if (a == "--input-handoff" && i + 1 < argc) {
            std::uint64_t frame = 0;
            if (!ps2::parse_input_handoff(argv[++i], frame)) return usage();
            ps2::configure_script_input_handoff(frame);
            input_handoff = true;
        }
        else if (a == "--ntsc" || a == "--pal") {
            ps2::g_options.pal = a == "--pal";
            ps2::g_options.rate_forced = true;
        }
        else if (a == "--aspect" && i + 1 < argc) {
            if (!ps2::parse_display_aspect(argv[++i], ps2::g_options.display_aspect)) return usage();
        }
        else if (a == "--renderer" && i + 1 < argc) {
            ps2::g_options.gs_backend = argv[++i];
            if (ps2::g_options.gs_backend != "compute" && ps2::g_options.gs_backend != "hardware") return usage();
        }
        else if (a == "--scale" && i + 1 < argc) {
            if (!ps2::parse_render_scale(argv[++i], ps2::g_options.render_scale)) return usage();
        }
        else if (a == "--misses" && i + 1 < argc) ps2::g_options.misses_path = argv[++i];
        else if (a == "--trace-syscalls") ps2::g_options.trace_syscalls = true;
        else if (a == "--trace-io") ps2::g_options.trace_io = true;
        else if (a == "--trace-threads") ps2::g_options.trace_threads = true;
        else if (a == "--disc" && i + 1 < argc) ps2::g_options.disc_path = argv[++i];
        else if (a == "--memcard" && i + 1 < argc) ps2::g_options.memcard_path = argv[++i];
        else if (a == "--trace-iop") ps2::g_options.trace_iop_modules = true;
        else if (a == "--trace-iop-hle") ps2::g_options.trace_iop_hle = true;
        else if (a == "--frames-dir" && i + 1 < argc) ps2::g_options.frames_dir = argv[++i];
        else if (a == "--press" && i + 1 < argc) {
            ps2::Press press;
            if (!ps2::parse_press(argv[++i], press)) return usage();
            ps2::g_options.presses.push_back(press);
        }
#ifdef PS2_WINDOW
        else if (a == "--window") window = true;
        else if (a == "--fullscreen") window = fullscreen = true;
#endif
        else if (a == "--frame-every" && i + 1 < argc) ps2::g_options.frame_every = static_cast<std::uint32_t>(std::strtoul(argv[++i], nullptr, 10));
        else if (a == "--save-state" && i + 1 < argc) {
            const std::string spec = argv[++i];
            const auto colon = spec.find(':');
            if (colon == std::string::npos) return usage();
            ps2::g_options.save_state_frame = std::strtoull(spec.substr(0, colon).c_str(), nullptr, 10);
            ps2::g_options.save_state_path = spec.substr(colon + 1);
        }
        else if (a == "--load-state" && i + 1 < argc) load_path = argv[++i];
        else return usage();
    }

    if (input_handoff && ps2::g_options.presses.empty()) return usage();
#ifdef PS2_WINDOW
    if (window && !open_window(fullscreen)) return 1;
#endif
    register_generated_code();
    register_generated_vu();
#ifdef PS2_LOCAL_VU_BLOCKS
    register_generated_vu_local_blocks();
#endif
#ifdef PS2_CONT_VU
    register_generated_vu_continuations();
#endif
#ifdef PS2_CONT_VU_OVERLAY
    if (!std::getenv("PS2_VU_CONT_OVERLAY_OFF")) {
        register_generated_vu_continuation_overlay();
        std::fprintf(stderr,"[vu-cont-overlay] enabled\n");
    }
#endif
#ifdef PS2_EXTRA_VU
    if (!std::getenv("PS2_VU_EXTRA_OFF")) register_generated_vu_extra();
#endif
    const auto emulate = [&]() -> int {
        std::uint32_t entry = 0;
        if (!ps2::load_elf(argv[1], entry)) {
            std::fprintf(stderr, "cannot load %s\n", argv[1]);
            return 1;
        }
        ps2::boot(entry, args);
        if (!load_path.empty() && !ps2::load_state(load_path)) return 1;
#ifdef PS2_SPEEDRACER_CLOCK
        speedracer::clock::Trace race_clock_trace(std::getenv("PS2_RACE_CLOCK_CSV"));
        host::audio_content::Trace audio_content_trace(std::getenv("PS2_AUDIO_CONTENT_CSV"));
#endif
#ifdef PS2_PROFILE
        const char *profile = std::getenv("PS2_PROFILE");
        const char *profile_from = std::getenv("PS2_PROFILE_FROM");
        if (profile) start_profile(profile_from ? std::strtoull(profile_from, nullptr, 10) : 0);
        const int result = ps2::run();
        if (profile) write_profile(profile);
        return result;
#else
        return ps2::run();
#endif
    };
#ifdef PS2_WINDOW
    if (window) return run_window(emulate);
#endif
    const int result = emulate();
    ps2::close_graphics();
    return result;
}
