// Game-specific entry point. The command-line runner remains unchanged.
#include "speedracer_clock.hpp"
#define PS2_SPEEDRACER_CLOCK
#define main ps2_cli_main
#include "main.cpp"
#undef main

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include "speedracer_graphics.hpp"
#include "windows_arguments.hpp"
#include "media_import.hpp"
#include "media_setup.hpp"
#include "startup_report.hpp"
#include "save_import.hpp"
#include "save_import_ui.hpp"
#include "ps2/host_path.hpp"
#include <algorithm>
#include <filesystem>
#include <initializer_list>
#include <stdexcept>
#include <system_error>

#ifndef PS2_SPEEDRACER_DEV_ROOT
#define PS2_SPEEDRACER_DEV_ROOT ""
#endif
#ifndef PS2_SPEEDRACER_DISC_HINT
#define PS2_SPEEDRACER_DISC_HINT ""
#endif

namespace speedracer {
namespace fs = std::filesystem;

fs::path executable_directory() {
    std::wstring buffer(32768, L'\0');
    const DWORD length = GetModuleFileNameW(nullptr, buffer.data(), static_cast<DWORD>(buffer.size()));
    if (!length || length >= buffer.size()) throw std::runtime_error("Cannot locate SpeedRacer.exe.");
    buffer.resize(length);
    return fs::path(buffer).parent_path();
}

bool file_exists(const fs::path &path) {
    std::error_code ec;
    return !path.empty() && fs::is_regular_file(path, ec);
}

fs::path first_file(std::initializer_list<fs::path> paths) {
    for (const auto &path : paths)
        if (file_exists(path)) return path;
    return {};
}

bool takes_value(const std::string &option) {
    for (const char *name : {"--arg", "--frames", "--misses", "--disc", "--memcard",
             "--frames-dir", "--press", "--input-handoff", "--frame-every", "--save-state", "--load-state", "--aspect", "--scale", "--renderer", "--prepare-data"})
        if (option == name) return true;
    return false;
}

bool has_option(const std::vector<std::string> &arguments, const char *option) {
    for (std::size_t i = 0; i < arguments.size(); ++i) {
        if (arguments[i] == option) return true;
        if (takes_value(arguments[i]) && i + 1 < arguments.size()) ++i;
    }
    return false;
}

int start(int argc, char **argv, bool redirected) {
    const fs::path beside = executable_directory();
    // Import is a separate maintenance mode: no game/GPU/data initialization.
    bool import_requested = false;
    for (int i = 1; i < argc; ++i)
        if (!std::strcmp(argv[i], "--import-save") || !std::strcmp(argv[i], "--replace-save")) import_requested = true;
    if (import_requested) {
        if (argc == 2 && !std::strcmp(argv[1], "--import-save")) {
            const bool imported = import_save_interactively(beside);
            std::fprintf(stderr, "[save-import] %s\n", imported ? "completed" : "cancelled");
            return 0;
        }
        if ((argc != 3 && argc != 4) || std::strcmp(argv[1], "--import-save") ||
            argv[2][0] == '-' || (argc == 4 && std::strcmp(argv[3], "--replace-save")))
            throw std::runtime_error("Use --import-save para abrir o seletor, ou --import-save caminho.ps2 [--replace-save], sem opções de jogo.");
        const auto folder = beside / "saves"; fs::create_directories(folder);
        saves::PreparedImport prepared(ps2::host_path::from_utf8(argv[2]), folder / "speedracer.ps2");
        const auto result = prepared.commit(argc == 4);
        std::fprintf(stderr, "[save-import] completed; source preserved; backup=%s\n",
            result.backup.empty() ? "(not needed)" : ps2::host_path::to_utf8(result.backup).c_str());
        return 0;
    }
    const fs::path development = PS2_SPEEDRACER_DEV_ROOT;
    std::vector<std::string> options;
    bool headless = false, graphics_dialog = false;
    int first_option = 1;
    fs::path elf;
    if (argc > 1 && argv[1][0] != '-') {
        elf = ps2::host_path::from_utf8(argv[1]);
        first_option = 2;
    }
    for (int i = first_option; i < argc; ++i) {
        if (std::strcmp(argv[i], "--headless") == 0) headless = true;
        else if (std::strcmp(argv[i], "--graphics") == 0) graphics_dialog = true;
        else {
            options.emplace_back(argv[i]);
            if (takes_value(options.back()) && i + 1 < argc) options.emplace_back(argv[++i]);
        }
    }
    if (has_option(options, "--help") || has_option(options, "-h")) {
        std::printf("Speed Racer for Windows\n"
                    "Usage: SpeedRacer.exe [elf] [runner options]\n"
                    "Starts fullscreen at 3x internal resolution, using data/ beside the executable.\n"
                    "--graphics opens the resolution selector; --scale 1|2|3|4 overrides the saved choice.\n"
                    "--headless disables the window for automated runs.\n"
                    "--setup prepares your own USA ISO using native dialogs; --prepare-data ISO does the same without a window.\n"
                    "--diagnostics writes a local startup report without requiring game data.\n"
                    "--verify-install checks bundled graphics dependencies and system prerequisites.\n"
                    "--import-save [card.ps2] imports progress; --replace-save explicitly authorizes a backed-up replacement.\n"
                    "--disc, --memcard, --frames, --press, --frames-dir, --save-state and --load-state are supported.\n");
        return 0;
    }
    if (has_option(options, "--diagnostics")) {
        if (!elf.empty() || options.size() != 1 || graphics_dialog)
            throw std::runtime_error("Use --diagnostics sem outras opções de jogo.");
        const auto report = write_startup_report(beside, native_vu_cpu_supported());
        std::fprintf(stderr, "[diagnostics] %s\n", ps2::host_path::to_utf8(report).c_str());
        if (!redirected && !headless)
            MessageBoxW(nullptr, (L"Relatório local criado em:\n\n" + report.wstring()).c_str(), L"Speed Racer — diagnóstico", MB_OK | MB_ICONINFORMATION);
        return 0;
    }
    if (has_option(options, "--prepare-data")) {
        if (!elf.empty() || options.size() != 2 || options[0] != "--prepare-data" || graphics_dialog)
            throw std::runtime_error("Use --prepare-data seguido somente do caminho da sua ISO.");
        const auto result = media::prepare(ps2::host_path::from_utf8(options[1]), beside / "data");
        std::fprintf(stderr, "[setup] prepared %llu bytes; SHA256=%s\n",
            static_cast<unsigned long long>(result.iso_bytes), result.iso_sha256.c_str());
        return 0;
    }
    if (has_option(options, "--verify-install")) {
        if (!elf.empty() || options.size() != 1 || graphics_dialog)
            throw std::runtime_error("Use --verify-install sem outras opções de jogo.");
        if (!native_vu_cpu_supported()) throw std::runtime_error(native_vu_cpu_error);
        verify_graphics_runtime(beside);
        std::fprintf(stderr, "[preflight] bundled DLLs, shader compiler/MSVC and system Vulkan loader: OK; GPU capability not certified\n");
        return 0;
    }
    if (!headless) {
        try { write_startup_report(beside, native_vu_cpu_supported()); }
        catch (const std::exception& error) { std::fprintf(stderr, "[diagnostics] %s\n", error.what()); }
    }
    if (!native_vu_cpu_supported()) throw std::runtime_error(native_vu_cpu_error);
#ifdef PS2_SPEEDRACER_DEFAULT_HW
    if (!headless) verify_graphics_runtime(beside);
#endif
    if (has_option(options, "--setup")) {
        if (!elf.empty() || options.size() != 1 || headless || graphics_dialog)
            throw std::runtime_error("Use --setup sem outras opções de jogo.");
        const bool prepared = prepare_interactively(beside);
        std::fprintf(stderr, "[setup] %s\n", prepared ? "completed" : "cancelled");
        return 0;
    }
    if (argc == 1 && development.empty() &&
        (!file_exists(beside / "data" / "SLUS_218.12") || (!file_exists(beside / "data" / "game.srpak") && !file_exists(beside / "data" / "disc.iso")))) {
        if (!prepare_interactively(beside)) return 0;
    }
    if (headless && (has_option(options, "--window") || has_option(options, "--fullscreen")))
        throw std::runtime_error("Use --headless or --window/--fullscreen, not both.");

    if (argc == 1 && (GetAsyncKeyState(VK_SHIFT) & 0x8000)) graphics_dialog = true;
    if (graphics_dialog && (headless || has_option(options, "--scale")))
        throw std::runtime_error("Use --graphics without --headless or --scale.");
    bool fxaa = graphics::load_fxaa(beside / "SpeedRacer.ini");
    bool linear = graphics::load_linear(beside / "SpeedRacer.ini");
    if (!headless && !has_option(options, "--scale")) {
        unsigned scale = graphics::load(beside / "SpeedRacer.ini");
        if (const char *environment = std::getenv("PS2_SCALE"))
            if (!ps2::parse_render_scale(environment, scale))
                throw std::runtime_error("PS2_SCALE must be 1, 2, 3 or 4.");
        if (graphics_dialog) {
            SDL_MessageBoxButtonData buttons[] = {
                {0, 1, "Original (1x)"}, {0, 2, "2x"}, {0, 3, "3x"}, {0, 4, "4x"},
                {SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT, 0, "Cancelar"}
            };
            buttons[scale - 1].flags |= SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT;
            SDL_MessageBoxData dialog{};
            dialog.flags = SDL_MESSAGEBOX_INFORMATION;
            dialog.title = "Speed Racer - Resolucao interna";
            dialog.message = "Escolha a qualidade da imagem.\n2x: mais equilibrado. 3x e 4x: mais nitidez, maior custo de GPU.\nA escolha sera salva para as proximas partidas.";
            dialog.numbuttons = 5;
            dialog.buttons = buttons;
            int selected = 0;
            if (SDL_ShowMessageBox(&dialog, &selected) < 0)
                throw std::runtime_error(std::string("Cannot open graphics settings: ") + SDL_GetError());
            if (selected < 1 || selected > 4) return 0;
            scale = static_cast<unsigned>(selected);
            SDL_MessageBoxButtonData aa_buttons[] = {
                {0, 3, "Alta qualidade (HUD + FXAA)"},
                {0, 1, "Suavizacao leve (FXAA)"}, {0, 2, "Original"},
                {SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT, 0, "Cancelar"}
            };
            aa_buttons[linear ? 0 : fxaa ? 1 : 2].flags |= SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT;
            dialog.title = "Speed Racer - Qualidade";
            dialog.message = "Alta qualidade: suaviza tambem as texturas do HUD, sem aumentar a resolucao.\nLeve: somente FXAA. Original: filtragem do jogo, sem FXAA.\nA suavizacao pode reduzir a nitidez de textos. A escolha sera salva.";
            dialog.numbuttons = 4;
            dialog.buttons = aa_buttons;
            selected = 0;
            if (SDL_ShowMessageBox(&dialog, &selected) < 0)
                throw std::runtime_error(std::string("Cannot open antialiasing settings: ") + SDL_GetError());
            if (selected < 1 || selected > 3) return 0;
            fxaa = selected != 2;
            linear = selected == 3;
            graphics::save(beside / "SpeedRacer.ini", scale, fxaa, linear);
        }
        options.insert(options.end(), {"--scale", std::to_string(scale)});
    }

    if (!headless && !std::getenv("PS2_GS_FXAA"))
        if (!SetEnvironmentVariableA("PS2_GS_FXAA", fxaa ? "1" : "0"))
            throw std::runtime_error("Cannot apply antialiasing settings.");

    if (!headless && !GetEnvironmentVariableA("PS2_GS_LINEAR", nullptr, 0))
        if (!SetEnvironmentVariableA("PS2_GS_LINEAR", linear ? "1" : "0"))
            throw std::runtime_error("Cannot apply HUD texture filtering.");

    const fs::path portable_elf = beside / "data" / "SLUS_218.12";
    const fs::path portable_disc = first_file({beside / "data" / "game.srpak", beside / "data" / "disc.iso"});
    const fs::path development_elf = development.empty() ? fs::path{} : development / "games" / "speedracer" / "disc" / "SLUS_218.12";
    const fs::path development_disc = development.empty() ? fs::path{} : development / "games" / "speedracer" / "disc.iso";
    if (elf.empty())
        elf = first_file({portable_elf, development_elf});
    if (!file_exists(elf))
        throw std::runtime_error("Speed Racer executable not found. Put SLUS_218.12 in data/ beside SpeedRacer.exe, or pass its path as the first argument.");

    fs::path disc;
    if (!has_option(options, "--disc")) {
        disc = first_file({portable_disc, development_disc, fs::path(PS2_SPEEDRACER_DISC_HINT)});
        if (disc.empty())
            throw std::runtime_error("Speed Racer game data not found. Keep data/game.srpak or your disc.iso beside SpeedRacer.exe, or pass --disc followed by its path.");
        options.insert(options.end(), {"--disc", ps2::host_path::to_utf8(disc)});
    }
    if (!has_option(options, "--memcard")) {
        // A portable package has its own saves. Development keeps the existing card.
        const bool portable = file_exists(portable_elf) && file_exists(portable_disc);
        fs::path card = portable || development.empty()
            ? beside / "saves" / "speedracer.ps2"
            : development / "speedracer.ps2";
        std::error_code ec;
        fs::create_directories(card.parent_path(), ec);
        if (ec) throw std::runtime_error("Cannot create the memory-card directory: " + ec.message());
        options.insert(options.end(), {"--memcard", ps2::host_path::to_utf8(card)});
    }
    if (!headless && !has_option(options, "--window") && !has_option(options, "--fullscreen"))
        options.emplace_back("--fullscreen");

    if (!headless && !has_option(options, "--aspect"))
        options.insert(options.end(), {"--aspect", "auto"});

#ifdef PS2_SPEEDRACER_DEFAULT_HW
    if (!has_option(options, "--renderer"))
        options.insert(options.end(), {"--renderer", "hardware"});
#endif
    std::vector<std::string> arguments{argv[0], ps2::host_path::to_utf8(elf)};
    arguments.insert(arguments.end(), options.begin(), options.end());
    std::vector<char *> pointers;
    for (auto &argument : arguments) pointers.push_back(argument.data());
    pointers.push_back(nullptr);
    return ps2_cli_main(static_cast<int>(arguments.size()), pointers.data());
}
}

int main(int argc, char **argv) {
    // GUI subsystem: Explorer launches only the game window. Keep inherited
    // output handles for automated tests; otherwise retain diagnostics in a log.
    std::filesystem::path log_file;
    const HANDLE error_handle = GetStdHandle(STD_ERROR_HANDLE);
    const bool redirected = error_handle && error_handle != INVALID_HANDLE_VALUE && GetFileType(error_handle) != FILE_TYPE_UNKNOWN;
    if (!redirected) {
        wchar_t local[32768];
        const DWORD length = GetEnvironmentVariableW(L"LOCALAPPDATA", local, 32768);
        if (length && length < 32768) {
            const auto folder = std::filesystem::path(local) / "SpeedRacer" / "logs";
            std::error_code ec;
            std::filesystem::create_directories(folder, ec);
            const auto log = folder / ("SpeedRacer-" + std::to_string(GetCurrentProcessId()) + ".log");
            if (!ec && _wfreopen(log.c_str(), L"w", stderr)) log_file = log;
        }
    }
    try {
        speedracer::WindowsArguments arguments;
        const int result = speedracer::start(arguments.count(), arguments.data(), redirected);
        if (result != 0 && !redirected) {
            std::string text = "Não foi possível iniciar o jogo.";
            if (!log_file.empty()) text += "\n\nDetalhes para análise:\n" + ps2::host_path::to_utf8(log_file);
            speedracer::show_startup_error(text);
        }
        return result;
    } catch (const std::exception &error) {
        std::fprintf(stderr, "[Speed Racer] %s\n", error.what());
        if (!redirected) speedracer::show_startup_error(error.what());
        return 1;
    }
}
