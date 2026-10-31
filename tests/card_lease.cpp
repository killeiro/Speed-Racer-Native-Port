// SPDX-License-Identifier: MIT
#include "ps2/card_file.hpp"
#include <algorithm>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace fs = std::filesystem;
namespace {
int checks = 0;
void check(bool ok, const char* why) {
    ++checks;
    if (!ok) throw std::runtime_error(why);
}
std::string read(const fs::path& path) {
    std::ifstream in(path, std::ios::binary);
    if (!in) throw std::runtime_error("Cannot read fixture");
    return {std::istreambuf_iterator<char>(in), {}};
}
void write(const fs::path& path, const std::string& data) {
    std::ofstream out(path, std::ios::binary | std::ios::trunc);
    out.write(data.data(), static_cast<std::streamsize>(data.size()));
    out.close();
    if (!out) throw std::runtime_error("Cannot write fixture");
}
fs::path sidecar(fs::path path) { path += ".lock"; return path; }
bool refused(const fs::path& path) {
    try { ps2::card_file::Lease attempt(path); }
    catch (const std::exception&) { return true; }
    return false;
}
bool has_dot_component(const fs::path& path) {
    for (const auto& part : path) if (part == "." || part == "..") return true;
    return false;
}
#ifdef _WIN32
std::wstring without_device_prefix(const fs::path& path) {
    auto value = path.native();
    if (value.rfind(L"\\\\?\\UNC\\", 0) == 0) return L"\\\\" + value.substr(8);
    if (value.rfind(L"\\\\?\\", 0) == 0) return value.substr(4);
    return value;
}
#endif
bool same_target(const fs::path& actual, const fs::path& expected) {
    if (fs::exists(expected)) return fs::equivalent(actual, expected);
#ifdef _WIN32
    // The existing parent may be reached through a junction or a short-name
    // alias. Its identity, rather than a preferred spelling, owns the leaf.
    const fs::path a(without_device_prefix(actual)), b(without_device_prefix(expected));
    std::error_code error;
    if (!fs::equivalent(a.parent_path(), b.parent_path(), error) || error) return false;
    const auto a_name = a.filename().native(), b_name = b.filename().native();
    return CompareStringOrdinal(a_name.c_str(), static_cast<int>(a_name.size()), b_name.c_str(),
                                static_cast<int>(b_name.size()), TRUE) == CSTR_EQUAL;
#else
    return actual == fs::weakly_canonical(expected);
#endif
}

// Clean only the newly created fixture tree. No user card or game package is used.
struct Fixtures final {
    fs::path root;
    Fixtures() {
        const auto token = std::to_string(std::chrono::steady_clock::now().time_since_epoch().count());
        root = fs::absolute(fs::temp_directory_path() / ("sr-card-lease-test-" + token));
        if (!fs::create_directory(root)) throw std::runtime_error("Fixture root already exists");
    }
    ~Fixtures() {
        std::error_code ec;
        std::vector<fs::path> entries;
        for (fs::recursive_directory_iterator it(root, fs::directory_options::skip_permission_denied, ec), end;
             !ec && it != end; it.increment(ec)) entries.push_back(it->path());
        std::sort(entries.begin(), entries.end(), [](const fs::path& a, const fs::path& b) {
            return a.native().size() > b.native().size();
        });
        for (const auto& entry : entries) fs::remove(entry, ec);
        fs::remove(root, ec);
    }
};

void run_local(const fs::path& root) {
    fs::create_directory(root);
    fs::create_directory(root / "sub");
    const auto target = root / "SaveCard.PS2";
    const auto lock = sidecar(target);
    const auto dotted = root / "sub" / ".." / "." / "SaveCard.PS2";
    {
        ps2::card_file::Lease first(dotted);
        if (!first.target().is_absolute() || has_dot_component(first.target()) ||
            !same_target(first.target(), target)) {
            std::cerr << "Absent-card fixture actual=" << first.target()
                      << " expected=" << target << '\n';
        }
        check(first.target().is_absolute(), "absent target is absolute");
        check(!has_dot_component(first.target()), "absent target has no dot components");
        check(same_target(first.target(), target), "absent target retains parent and leaf identity");
        check(!fs::exists(target), "reserving an absent card does not create the card");
        check(refused(target), "same target cannot have a second in-process lease");
        check(refused(dotted), "dot path alias cannot bypass the lease");
#ifdef _WIN32
        check(refused(root / "savecard.ps2"), "Windows case alias cannot bypass the lease");
#endif
        const auto other_target = root / "another.ps2";
        ps2::card_file::Lease other(other_target);
        check(same_target(other.target(), other_target) && !fs::exists(other_target),
              "different target can be reserved without creating a card");
    }
    check(fs::is_regular_file(lock), "lock sidecar persists after normal lease release");
    {
        ps2::card_file::Lease again(target);
        check(!fs::exists(target), "persistent sidecar is not treated as a stale active lock");
    }
    write(target, std::string("original-card-data") + '\0' + "with-suffix");
    const auto original = read(target);
    const auto original_time = fs::last_write_time(target);
    {
        ps2::card_file::Lease existing(dotted);
        check(same_target(existing.target(), target) && !has_dot_component(existing.target()),
              "existing target is canonical and retains file identity");
        check(refused(target) && read(target) == original && fs::last_write_time(target) == original_time,
              "reservation and contention do not truncate or alter the card");
    }
    check(read(target) == original && fs::last_write_time(target) == original_time,
          "normal release preserves existing card bytes and timestamp");
    write(lock, "persistent-sidecar-sentinel");
    {
        ps2::card_file::Lease again(target);
        check(read(target) == original, "preexisting sidecar allows a fresh reservation");
    }
    check(read(lock) == "persistent-sidecar-sentinel", "OPEN_ALWAYS does not truncate an old sidecar");
    const auto blocked = root / "blocked.ps2";
    fs::create_directory(sidecar(blocked));
    check(refused(blocked) && fs::is_directory(sidecar(blocked)) && !fs::exists(blocked),
          "nonregular sidecar refuses reservation without touching the card");
#ifdef _WIN32
    check(refused(root / "trailing."), "ambiguous trailing dot refuses reservation");
    check(refused(root / "trailing "), "ambiguous trailing space refuses reservation");
    check(refused(root / "card.ps2:stream"), "alternate data stream refuses reservation");
#endif
}

#ifdef _WIN32
// Quote each argument for CreateProcessW's CRT command-line grammar, including
// embedded quotes and trailing backslashes. Child parsing uses the same grammar.
std::wstring quote(const std::wstring& value) {
    std::wstring result = L"\"";
    unsigned slashes = 0;
    for (wchar_t c : value) {
        if (c == L'\\') { ++slashes; continue; }
        if (c == L'\"') { result.append(slashes * 2 + 1, L'\\'); result += c; }
        else { result.append(slashes, L'\\'); result += c; }
        slashes = 0;
    }
    result.append(slashes * 2, L'\\'); result += L'\"';
    return result;
}
std::vector<std::wstring> arguments() {
    const wchar_t* cursor = GetCommandLineW();
    std::vector<std::wstring> result;
    while (*cursor) {
        while (*cursor == L' ' || *cursor == L'\t') ++cursor;
        if (!*cursor) break;
        std::wstring argument;
        bool quoted = false;
        while (*cursor && (quoted || (*cursor != L' ' && *cursor != L'\t'))) {
            unsigned slashes = 0;
            while (*cursor == L'\\') { ++slashes; ++cursor; }
            if (*cursor == L'\"') {
                argument.append(slashes / 2, L'\\');
                if (slashes % 2) argument += L'\"'; else quoted = !quoted;
                ++cursor;
            } else {
                argument.append(slashes, L'\\');
                if (!*cursor || (!quoted && (*cursor == L' ' || *cursor == L'\t'))) break;
                argument += *cursor++;
            }
        }
        if (quoted) throw std::runtime_error("Unterminated child command-line quote");
        result.push_back(std::move(argument));
    }
    return result;
}
fs::path executable_path() {
    std::wstring name(32768, L'\0');
    const auto length = GetModuleFileNameW(nullptr, name.data(), static_cast<DWORD>(name.size()));
    if (!length || length >= name.size()) throw std::runtime_error("Cannot locate test executable");
    name.resize(length); return fs::path(name);
}
class Child final {
public:
    Child(const fs::path& target, const fs::path& ready, const fs::path& release) {
        const auto executable = executable_path();
        auto command = quote(executable.native()) + L" " + quote(L"--hold") + L" " +
            quote(target.native()) + L" " + quote(ready.native()) + L" " + quote(release.native());
        STARTUPINFOW startup{}; startup.cb = sizeof(startup);
        PROCESS_INFORMATION process{};
        if (!CreateProcessW(executable.c_str(), command.data(), nullptr, nullptr, FALSE, CREATE_NO_WINDOW,
                            nullptr, nullptr, &startup, &process))
            throw std::runtime_error("Cannot start child lease holder");
        process_ = process.hProcess;
        CloseHandle(process.hThread);
    }
    Child(const Child&) = delete;
    Child& operator=(const Child&) = delete;
    ~Child() {
        if (process_ != INVALID_HANDLE_VALUE) {
            if (WaitForSingleObject(process_, 0) == WAIT_TIMEOUT) {
                TerminateProcess(process_, 93);
                WaitForSingleObject(process_, 1000);
            }
            CloseHandle(process_);
        }
    }
    void wait_ready(const fs::path& ready) {
        const auto limit = std::chrono::steady_clock::now() + std::chrono::seconds(5);
        do {
            if (fs::exists(ready) && read(ready) == "held") return;
            if (WaitForSingleObject(process_, 0) != WAIT_TIMEOUT)
                throw std::runtime_error("Child exited before acquiring its lease");
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        } while (std::chrono::steady_clock::now() < limit);
        throw std::runtime_error("Child lease handshake timed out");
    }
    void expect_exit(DWORD expected) {
        check(WaitForSingleObject(process_, 5000) == WAIT_OBJECT_0, "child exits within five seconds");
        DWORD code = STILL_ACTIVE;
        check(GetExitCodeProcess(process_, &code) && code == expected, "child exit code matches expected outcome");
    }
    void terminate() {
        check(TerminateProcess(process_, 91) != 0, "abrupt child termination succeeds");
        expect_exit(91);
    }
private:
    HANDLE process_ = INVALID_HANDLE_VALUE;
};
int hold(const fs::path& target, const fs::path& ready, const fs::path& release) {
    ps2::card_file::Lease lease(target);
    write(ready, "held");
    const auto limit = std::chrono::steady_clock::now() + std::chrono::seconds(5);
    do {
        if (fs::exists(release)) return 0;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    } while (std::chrono::steady_clock::now() < limit);
    return 92;
}
void run_processes(const fs::path& root) {
    fs::create_directory(root);
    const auto target = root / "SaveCard.PS2";
    const auto ready = root / "ready-normal";
    const auto release = root / "release-normal";
    {
        Child child(target, ready, release);
        child.wait_ready(ready);
        check(!fs::exists(target), "child lease does not create an absent card");
        check(refused(target), "another process owning the same target prevents reservation");
        check(refused(root / "." / "savecard.ps2"), "case and dot aliases cannot bypass another process");
        {
            ps2::card_file::Lease other(root / "other.ps2");
            check(!fs::exists(root / "other.ps2"), "unrelated card remains available while child owns target");
        }
        write(release, "release");
        child.expect_exit(0);
    }
    check(fs::is_regular_file(sidecar(target)), "normal child exit leaves its persistent sidecar");
    {
        ps2::card_file::Lease next(target);
        check(!fs::exists(target), "normal child exit releases lease to a new process owner");
    }
    write(target, "existing-card-before-child-crash");
    const auto original = read(target);
    const auto original_time = fs::last_write_time(target);
    {
        Child child(root / "." / "SaveCard.PS2", root / "ready-crash", root / "release-crash");
        child.wait_ready(root / "ready-crash");
        check(refused(target), "second child really holds its lease before forced termination");
        child.terminate();
    }
    check(fs::is_regular_file(sidecar(target)) && read(target) == original &&
          fs::last_write_time(target) == original_time,
          "abrupt termination retains sidecar and original card bytes and timestamp");
    {
        ps2::card_file::Lease recovered(target);
        check(same_target(recovered.target(), target), "OS releases lease after abrupt process termination");
    }
    check(read(target) == original, "recovery does not truncate card data");
}
#endif
} // namespace

int main() {
    try {
#ifdef _WIN32
        const auto args = arguments();
        if (args.size() > 1 && args[1] == L"--hold") {
            if (args.size() != 5) throw std::runtime_error("Invalid child argument count");
            return hold(fs::path(args[2]), fs::path(args[3]), fs::path(args[4]));
        }
#endif
        Fixtures fixtures;
        for (const auto* name : {u8"ASCII", u8"Equipe João com espaços", u8"雨 🚗"})
            run_local(fixtures.root / fs::path(name));
#ifdef _WIN32
        run_processes(fixtures.root / fs::path(u8"Processos João 雨 com espaços"));
        std::cout << "Card lease: " << checks << " checks, real Windows child processes: PASS\n";
#else
        std::cout << "Card lease: " << checks << " checks, same-process POSIX coverage only: PASS\n";
#endif
        return 0;
    } catch (const std::exception& e) { std::cerr << e.what() << '\n'; return 1; }
}
