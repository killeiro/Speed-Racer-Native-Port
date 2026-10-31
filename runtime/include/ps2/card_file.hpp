// SPDX-License-Identifier: MIT
#pragma once
#include <cerrno>
#include <filesystem>
#include <stdexcept>
#include <string>
#include <system_error>
#include <utility>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#else
#include <fcntl.h>
#include <sys/file.h>
#include <unistd.h>
#endif

namespace ps2::card_file {
// A stable sidecar protects the session across atomic replacement of the card.
// Never unlink the sidecar: ownership is the OS handle, not the file's presence.
class Lease final {
public:
    explicit Lease(const std::filesystem::path& path) {
        if (path.empty() || !path.has_filename()) throw std::invalid_argument("Missing memory-card filename");
        target_ = std::filesystem::weakly_canonical(std::filesystem::absolute(path));
#ifdef _WIN32
        const auto name = target_.filename().native();
        if (name.empty() || name.back() == L'.' || name.back() == L' ' || name.find(L':') != std::wstring::npos)
            throw std::runtime_error("O nome do cartão de memória não é válido.");
        std::filesystem::path resolved;
        if (final_path(target_, resolved)) target_ = std::move(resolved);
        else {
            if (!final_path(target_.parent_path(), resolved))
                throw std::runtime_error("A pasta do cartão de memória não existe.");
            target_ = resolved / target_.filename();
        }
#endif
        auto lock = target_; lock += ".lock";
#ifdef _WIN32
        handle_ = CreateFileW(lock.c_str(), GENERIC_READ | GENERIC_WRITE, 0, nullptr, OPEN_ALWAYS,
                              FILE_ATTRIBUTE_NORMAL, nullptr);
        if (handle_ == INVALID_HANDLE_VALUE) {
            const auto code = GetLastError();
            if (code == ERROR_SHARING_VIOLATION || code == ERROR_LOCK_VIOLATION)
                throw std::runtime_error("O cartão de memória já está em uso por outra instância do jogo.");
            fail(code, "Não foi possível reservar o cartão de memória");
        }
#else
        handle_ = ::open(lock.c_str(), O_RDWR | O_CREAT | O_CLOEXEC, 0600);
        if (handle_ < 0) fail(errno, "Cannot reserve memory card");
        if (::flock(handle_, LOCK_EX | LOCK_NB) != 0) {
            const auto code = errno;
            ::close(handle_); handle_ = -1;
            fail(code, "Memory card is already in use or cannot be locked");
        }
#endif
    }
    Lease(const Lease&) = delete;
    Lease& operator=(const Lease&) = delete;
    ~Lease() {
#ifdef _WIN32
        if (handle_ != INVALID_HANDLE_VALUE) CloseHandle(handle_);
#else
        if (handle_ >= 0) ::close(handle_);
#endif
    }
    const std::filesystem::path& target() const { return target_; }
private:
    std::filesystem::path target_;
#ifdef _WIN32
    HANDLE handle_ = INVALID_HANDLE_VALUE;
    static bool final_path(const std::filesystem::path& path, std::filesystem::path& result) {
        struct File {
            HANDLE value;
            ~File() { if (value != INVALID_HANDLE_VALUE) CloseHandle(value); }
        } file{CreateFileW(path.c_str(), FILE_READ_ATTRIBUTES,
                          FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, nullptr, OPEN_EXISTING,
                          FILE_FLAG_BACKUP_SEMANTICS, nullptr)};
        if (file.value == INVALID_HANDLE_VALUE) {
            const auto code = GetLastError();
            if (code == ERROR_FILE_NOT_FOUND || code == ERROR_PATH_NOT_FOUND) return false;
            fail(code, "Cannot resolve memory-card path");
        }
        wchar_t buffer[32768];
        const auto size = GetFinalPathNameByHandleW(file.value, buffer, 32768, FILE_NAME_NORMALIZED | VOLUME_NAME_DOS);
        if (!size) fail(GetLastError(), "Cannot normalize memory-card path");
        if (size >= 32768) throw std::runtime_error("Memory-card path is too long");
        // The MinGW filesystem implementation used by the Windows build does
        // not treat the DOS device prefix as an absolute path. Keep the fully
        // resolved DOS/UNC name in its normal filesystem representation.
        std::wstring name(buffer, size);
        if (name.rfind(L"\\\\?\\UNC\\", 0) == 0) name = L"\\\\" + name.substr(8);
        else if (name.rfind(L"\\\\?\\", 0) == 0) name.erase(0, 4);
        result = std::filesystem::path(name);
        for (const auto& part : result.relative_path()) {
            const auto component = part.native();
            if (!component.empty() && (component.back() == L'.' || component.back() == L' '))
                throw std::runtime_error("O caminho do cartão usa um nome especial não suportado.");
        }
        return true;
    }
#else
    int handle_ = -1;
#endif
    [[noreturn]] static void fail(unsigned code, const char* operation) {
#ifdef _WIN32
        throw std::system_error(static_cast<int>(code), std::system_category(), operation);
#else
        throw std::system_error(static_cast<int>(code), std::generic_category(), operation);
#endif
    }
};
}
