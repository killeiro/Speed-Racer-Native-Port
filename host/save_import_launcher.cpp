// SPDX-License-Identifier: MIT
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <shellapi.h>
#include <cwchar>
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    wchar_t executable[32768]{};
    const auto count = GetModuleFileNameW(nullptr, executable, 32768);
    if (!count || count >= 32768) {
        MessageBoxW(nullptr, L"Não foi possível localizar esta pasta.", L"Speed Racer", MB_OK | MB_ICONERROR);
        return 1;
    }
    wchar_t* slash = std::wcsrchr(executable, L'\\');
    if (!slash || (slash - executable) + 1 + 14 >= 32768) return 1;
    slash[1] = L'\0';
    wchar_t folder[32768]{};
    std::wmemcpy(folder, executable, static_cast<std::size_t>(slash - executable) + 2);
    std::wcscat(executable, L"SpeedRacer.exe");
    const auto attributes = GetFileAttributesW(executable);
    if (attributes == INVALID_FILE_ATTRIBUTES || (attributes & FILE_ATTRIBUTE_DIRECTORY)) {
        MessageBoxW(nullptr, L"Mantenha Importar progresso.exe ao lado de SpeedRacer.exe na pasta extraída.",
                    L"Speed Racer", MB_OK | MB_ICONERROR);
        return 1;
    }
    SHELLEXECUTEINFOW action{};
    action.cbSize = sizeof(action); action.fMask = SEE_MASK_NOASYNC;
    action.lpFile = executable; action.lpParameters = L"--import-save";
    action.lpDirectory = folder; action.nShow = SW_SHOWNORMAL;
    if (!ShellExecuteExW(&action)) {
        MessageBoxW(nullptr, L"Não foi possível abrir o importador de progresso.", L"Speed Racer", MB_OK | MB_ICONERROR);
        return 1;
    }
    return 0;
}
