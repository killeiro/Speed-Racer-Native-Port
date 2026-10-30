// SPDX-License-Identifier: MIT
#pragma once
#include <algorithm>
#include <atomic>
#include <cerrno>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <stdexcept>
#include <string>
#include <string_view>
#include <system_error>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#else
#include <fcntl.h>
#include <unistd.h>
#endif

namespace ps2::atomic_file {
// Write a new, exclusively owned sibling. The original is never opened for
// writing; it is replaced only after flush and close. Uncommitted data is local.
class Pending final {
public:
    explicit Pending(const std::filesystem::path& target) : target_(std::filesystem::absolute(target)) {
        if (!target_.has_filename()) throw std::invalid_argument("Missing output filename");
        static std::atomic<std::uint64_t> sequence{0};
#ifdef _WIN32
        const auto pid = GetCurrentProcessId();
#else
        const auto pid = getpid();
#endif
        for (unsigned attempt = 0; attempt < 128; ++attempt) {
            temporary_ = target_;
            temporary_ += ".pending." + std::to_string(pid) + "." +
                std::to_string(sequence.fetch_add(1, std::memory_order_relaxed) + 1);
#ifdef _WIN32
            handle_ = CreateFileW(temporary_.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_NEW,
                                  FILE_ATTRIBUTE_NORMAL, nullptr);
            if (handle_ != INVALID_HANDLE_VALUE) { owned_ = true; return; }
            const auto code = GetLastError();
            if (code != ERROR_FILE_EXISTS && code != ERROR_ALREADY_EXISTS) fail(code, "Cannot create pending file");
#else
            handle_ = ::open(temporary_.c_str(), O_WRONLY | O_CREAT | O_EXCL, 0600);
            if (handle_ >= 0) { owned_ = true; return; }
            if (errno != EEXIST) fail(errno, "Cannot create pending file");
#endif
        }
        throw std::runtime_error("Cannot allocate a unique pending file");
    }
    Pending(const Pending&) = delete;
    Pending& operator=(const Pending&) = delete;
    ~Pending() {
#ifdef _WIN32
        if (handle_ != INVALID_HANDLE_VALUE) CloseHandle(handle_);
        if (owned_) DeleteFileW(temporary_.c_str());
#else
        if (handle_ >= 0) ::close(handle_);
        if (owned_) ::unlink(temporary_.c_str());
#endif
    }
    const std::filesystem::path& temporary_path() const { return temporary_; }
    void write(std::string_view bytes) {
        if (!owned_) throw std::logic_error("Pending file is already committed");
        while (!bytes.empty()) {
            const auto count = static_cast<unsigned>(std::min<std::size_t>(bytes.size(), 1024 * 1024));
#ifdef _WIN32
            DWORD done = 0;
            if (!WriteFile(handle_, bytes.data(), count, &done, nullptr)) fail(GetLastError(), "Cannot write pending file");
#else
            const auto done = ::write(handle_, bytes.data(), count);
            if (done < 0) {
                if (errno == EINTR) continue;
                fail(errno, "Cannot write pending file");
            }
#endif
            if (!done) throw std::runtime_error("Pending write made no progress");
            bytes.remove_prefix(static_cast<std::size_t>(done));
        }
    }
    void commit() { publish(true); }
    void commit_new() { publish(false); }
private:
    void publish(bool replace_existing) {
        if (!owned_) throw std::logic_error("Pending file is already committed");
#ifdef _WIN32
        if (!FlushFileBuffers(handle_)) fail(GetLastError(), "Cannot flush pending file");
        const auto file = handle_; handle_ = INVALID_HANDLE_VALUE;
        if (!CloseHandle(file)) fail(GetLastError(), "Cannot close pending file");
        if (!MoveFileExW(temporary_.c_str(), target_.c_str(), (replace_existing ? MOVEFILE_REPLACE_EXISTING : 0) | MOVEFILE_WRITE_THROUGH))
            fail(GetLastError(), "Cannot replace output file");
#else
        if (::fsync(handle_) != 0) fail(errno, "Cannot flush pending file");
        const auto file = handle_; handle_ = -1;
        if (::close(file) != 0) fail(errno, "Cannot close pending file");
        if (replace_existing) {
            if (::rename(temporary_.c_str(), target_.c_str()) != 0) fail(errno, "Cannot replace output file");
        } else {
            if (::link(temporary_.c_str(), target_.c_str()) != 0) fail(errno, "Cannot publish new output file");
            if (::unlink(temporary_.c_str()) != 0) fail(errno, "Cannot remove published temporary file");
        }
#endif
        owned_ = false;
    }
private:
    std::filesystem::path target_, temporary_;
    bool owned_ = false;
#ifdef _WIN32
    HANDLE handle_ = INVALID_HANDLE_VALUE;
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
inline void replace(const std::filesystem::path& target, std::string_view contents) {
    Pending output(target);
    output.write(contents);
    output.commit();
}
}
