// SPDX-License-Identifier: MIT
#include "save_import_ui.hpp"
#include "save_import.hpp"
#include "ps2/host_path.hpp"
#include <commdlg.h>
#include <stdexcept>
#include <string>
#include <vector>
namespace speedracer {
bool import_save_interactively(const std::filesystem::path& beside) {
    std::vector<wchar_t> name(32768, L'\0');
    OPENFILENAMEW pick{};
    pick.lStructSize = sizeof(pick); pick.lpstrFile = name.data(); pick.nMaxFile = static_cast<DWORD>(name.size());
    pick.lpstrTitle = L"Selecione saves\\speedracer.ps2 da versão anterior";
    pick.lpstrFilter = L"Cartão de progresso PS2 (*.ps2)\0*.ps2\0Todos os arquivos\0*.*\0\0";
    pick.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_NOCHANGEDIR | OFN_DONTADDTORECENT | OFN_EXPLORER;
    if (!GetOpenFileNameW(&pick)) {
        const auto code = CommDlgExtendedError();
        if (code) throw std::runtime_error("Não foi possível abrir o seletor de progresso (" + std::to_string(code) + ").");
        return false;
    }
    const auto folder = beside / "saves";
    std::filesystem::create_directories(folder);
    saves::PreparedImport prepared(std::filesystem::path(name.data()), folder / "speedracer.ps2");
    bool replace = false;
    if (prepared.has_existing()) {
        const auto text = L"Esta versão já contém progresso.\n\nOrigem:\n" + prepared.source().wstring() +
            L"\n\nDestino:\n" + prepared.target().wstring() +
            L"\n\nUm backup do progresso atual será guardado em saves\\backups antes da troca.\n"
            L"O arquivo de origem será preservado.\n\nDeseja importar e substituir o progresso desta versão?";
        replace = MessageBoxW(nullptr, text.c_str(), L"Speed Racer — importar progresso",
                              MB_YESNO | MB_DEFBUTTON2 | MB_ICONQUESTION) == IDYES;
        if (!replace) return false;
    }
    const auto result = prepared.commit(replace);
    std::wstring text = L"Progresso importado. A origem foi preservada.\n\nAbra SpeedRacer.exe para jogar.";
    if (!result.backup.empty()) text += L"\n\nBackup do progresso anterior:\n" + result.backup.wstring();
    MessageBoxW(nullptr, text.c_str(), L"Speed Racer — importação concluída", MB_OK | MB_ICONINFORMATION);
    return result.imported;
}
}
