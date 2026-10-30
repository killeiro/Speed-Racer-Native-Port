// SPDX-License-Identifier: MIT
#include "save_import.hpp"
#include "ps2/atomic_file.hpp"
#include "ps2/host_path.hpp"
#include <atomic>
#include <stdexcept>
#include <string>
#include <string_view>

namespace speedracer::saves {
namespace {
namespace fs = std::filesystem;
[[noreturn]] void failed(const char* text) { throw std::runtime_error(text); }
bool path_exists(const fs::path& path) {
    std::error_code error;
    const bool value = fs::exists(path, error);
    if (error) failed("Não foi possível acessar o arquivo de progresso.");
    return value;
}
std::vector<unsigned char> read_card(const fs::path& path) {
    struct File { HANDLE value; ~File() { if (value != INVALID_HANDLE_VALUE) CloseHandle(value); } };
    File file{CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING,
                          FILE_ATTRIBUTE_NORMAL, nullptr)};
    if (file.value == INVALID_HANDLE_VALUE) failed("Não foi possível ler o cartão. Feche as outras versões do jogo e tente novamente.");
    BY_HANDLE_FILE_INFORMATION info{}; LARGE_INTEGER size{};
    if (!GetFileInformationByHandle(file.value, &info) || !GetFileSizeEx(file.value, &size) ||
        (info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) || info.nNumberOfLinks != 1)
        failed("O progresso precisa ser um arquivo regular, sem aliases de hardlink.");
    if (size.QuadPart != static_cast<LONGLONG>(kCardBytes))
        failed("O cartão está incompleto ou usa um formato incompatível. Selecione o speedracer.ps2 da versão anterior.");
    std::vector<unsigned char> data(kCardBytes);
    std::size_t at = 0;
    while (at < data.size()) {
        const auto count = static_cast<DWORD>(std::min<std::size_t>(data.size() - at, 1024 * 1024));
        DWORD done = 0;
        if (!ReadFile(file.value, data.data() + at, count, &done, nullptr) || !done)
            failed("A leitura do progresso não pôde ser concluída.");
        at += done;
    }
    unsigned char extra{}; DWORD done = 0;
    if (!ReadFile(file.value, &extra, 1, &done, nullptr) || done)
        failed("O cartão mudou durante a leitura. Feche as outras versões e tente novamente.");
    return data;
}
std::string_view view(const std::vector<unsigned char>& data) {
    return {reinterpret_cast<const char*>(data.data()), data.size()};
}
fs::path make_backup(const fs::path& target, const std::vector<unsigned char>& bytes) {
    const auto folder = target.parent_path() / "backups";
    std::error_code error;
    fs::create_directory(folder, error);
    if (error || !fs::is_directory(folder))
        failed("Não foi possível criar a pasta de backup. O progresso atual foi preservado.");
    const auto attributes = GetFileAttributesW(folder.c_str());
    if (attributes == INVALID_FILE_ATTRIBUTES || (attributes & FILE_ATTRIBUTE_REPARSE_POINT))
        failed("A pasta de backup precisa ser uma pasta local regular.");
    static std::atomic<unsigned long long> sequence{0};
    for (unsigned attempt = 0; attempt < 128; ++attempt) {
        const auto backup = folder / (target.filename().native() + L".before-import." +
            std::to_wstring(GetCurrentProcessId()) + L"." +
            std::to_wstring(sequence.fetch_add(1, std::memory_order_relaxed) + 1) + L".ps2");
        try {
            ps2::atomic_file::Pending pending(backup);
            pending.write(view(bytes));
            pending.commit_new();
        } catch (const std::system_error& error) {
            const auto code = error.code().value();
            if (code == ERROR_FILE_EXISTS || code == ERROR_ALREADY_EXISTS) continue;
            throw;
        }
        if (read_card(backup) != bytes) failed("A verificação do backup falhou. O progresso atual foi preservado.");
        return backup;
    }
    failed("Não foi possível reservar um nome de backup. O progresso atual foi preservado.");
}
}
PreparedImport::PreparedImport(const fs::path& source, const fs::path& destination) {
    source_owner_ = std::make_unique<ps2::card_file::Lease>(source);
    incoming_ = read_card(source_owner_->target());
    if (path_exists(destination)) {
        std::error_code error;
        const bool same = fs::equivalent(source_owner_->target(), destination, error);
        if (error) failed("Não foi possível identificar o destino da importação.");
        if (same) failed("Esse progresso já pertence a esta pasta do jogo. Selecione o cartão da versão anterior.");
    }
    target_owner_ = std::make_unique<ps2::card_file::Lease>(destination);
    existing_ = path_exists(target_owner_->target());
    if (existing_) previous_ = read_card(target_owner_->target());
}
ImportResult PreparedImport::commit(bool replace_authorized) {
    if (completed_) failed("Esta importação já foi concluída.");
    if (existing_ && !replace_authorized)
        failed("Já existe progresso nesta versão. A substituição precisa ser confirmada e terá backup.");
    if (read_card(source()) != incoming_)
        failed("O progresso de origem mudou desde a seleção. A importação foi cancelada.");
    if (path_exists(target()) != existing_ || (existing_ && read_card(target()) != previous_))
        failed("O progresso de destino mudou desde a seleção. Nenhum arquivo foi substituído.");
    ImportResult result;
    if (existing_) result.backup = make_backup(target(), previous_);
    try {
        ps2::atomic_file::Pending pending(target());
        pending.write(view(incoming_));
        if (existing_) {
            if (read_card(target()) != previous_)
                failed("O progresso de destino mudou durante a importação.");
            pending.commit();
        } else pending.commit_new();
        if (read_card(target()) != incoming_) failed("A conferência do progresso importado falhou.");
    } catch (const std::exception& error) {
        std::string text = std::string("Não foi possível concluir a importação. Detalhes: ") + error.what();
        if (!result.backup.empty()) text += "\nBackup do progresso anterior: " + ps2::host_path::to_utf8(result.backup);
        throw std::runtime_error(text);
    }
    completed_ = true;
    result.imported = true;
    return result;
}
}
