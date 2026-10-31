// SPDX-License-Identifier: MIT
#include "ps2/atomic_file.hpp"
#include "speedracer_graphics.hpp"
#include <chrono>
#include <fstream>
#include <iostream>
#include <iterator>

namespace fs = std::filesystem;
int checks = 0;
void check(bool ok, const char* why) { ++checks; if (!ok) throw std::runtime_error(why); }
std::string read(const fs::path& path) {
    std::ifstream f(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(f), {}};
}
void run(const fs::path& root) {
    fs::create_directory(root);
    const auto path = root / "SpeedRacer.ini";
    ps2::atomic_file::replace(path, "old-valid-data");
    check(read(path) == "old-valid-data", "first complete file");
    fs::path pending;
    {
        ps2::atomic_file::Pending interrupted(path); pending = interrupted.temporary_path();
        interrupted.write("incomplete");
        check(read(path) == "old-valid-data", "uncommitted bytes leave target intact");
        check(fs::exists(pending), "pending file exists before rollback");
    }
    check(!fs::exists(pending) && read(path) == "old-valid-data", "rollback removes only owned pending");
    bool raised = false;
    try {
        ps2::atomic_file::Pending interrupted(path); pending = interrupted.temporary_path();
        interrupted.write("partial-write"); throw std::runtime_error("simulated failure after partial write");
    } catch (const std::runtime_error&) { raised = true; }
    check(raised && !fs::exists(pending) && read(path) == "old-valid-data", "exception rollback preserves full target");
    {
        ps2::atomic_file::Pending first(path), second(path);
        check(first.temporary_path() != second.temporary_path(), "exclusive distinct pending files");
        first.write("complete-first"); second.write("complete-second"); first.commit();
        check(read(path) == "complete-first", "first commit never sees other writer prefix");
        second.commit(); check(read(path) == "complete-second", "second commit publishes full data");
        bool double_commit = false;
        try {second.commit();} catch (const std::logic_error&) {double_commit = true;}
        check(double_commit && read(path) == "complete-second", "double commit refused without mutation");
    }
    const auto fresh = root / "new-only.bin";
    {
        ps2::atomic_file::Pending output(fresh); output.write("first-new"); output.commit_new();
        check(read(fresh) == "first-new", "new-only publication succeeds");
    }
    {
        ps2::atomic_file::Pending output(fresh); output.write("must-not-replace");
        bool refused = false;
        try {output.commit_new();} catch (const std::system_error&) {refused = true;}
        check(refused && read(fresh) == "first-new", "new-only collision preserves existing file");
    }
    check(read(fresh) == "first-new", "collision rollback leaves existing file intact");
    fs::remove(fresh);
    const std::string large(2 * 1024 * 1024 + 31, 'X');
    ps2::atomic_file::replace(path, large);check(read(path) == large, "multi-block complete write");
    ps2::atomic_file::replace(path, "");check(fs::file_size(path) == 0, "empty complete replacement");
    speedracer::graphics::save(path, 4, false, false);
    const auto original = read(path);
    check(speedracer::graphics::load(path) == 4 && !speedracer::graphics::load_fxaa(path) &&
          !speedracer::graphics::load_linear(path), "real graphics settings load");
    bool invalid = false;
    try {speedracer::graphics::save(path, 0, true, true);} catch (const std::runtime_error&) {invalid = true;}
    check(invalid && read(path) == original, "invalid choice preserves prior settings");
#ifdef _WIN32
    HANDLE locked = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 0, nullptr);
    check(locked != INVALID_HANDLE_VALUE, "lock target against replacement");
    bool refused = false;
    try {speedracer::graphics::save(path, 2, true, true);} catch (const std::runtime_error&) {refused = true;}
    CloseHandle(locked);
    check(refused && read(path) == original, "failed real replacement preserves settings");
    check(SetFileAttributesW(path.c_str(), FILE_ATTRIBUTE_READONLY) != 0, "set read-only target");
    refused = false;
    try {speedracer::graphics::save(path, 2, true, true);} catch (const std::runtime_error&) {refused = true;}
    SetFileAttributesW(path.c_str(), FILE_ATTRIBUTE_NORMAL);
    check(refused && read(path) == original, "read-only target remains intact");
#endif
    speedracer::graphics::save(path, 3, true, true);
    check(speedracer::graphics::load(path) == 3 && speedracer::graphics::load_fxaa(path) &&
          speedracer::graphics::load_linear(path), "retry completes all high quality settings");
    const auto blocked = root / "directory.ini"; fs::create_directory(blocked);
    bool refused_directory = false;
    try {ps2::atomic_file::replace(blocked, "data");} catch (const std::runtime_error&) {refused_directory = true;}
    check(refused_directory && fs::is_directory(blocked), "directory target preserved");
    fs::remove(blocked);
    const auto foreign = root / "SpeedRacer.ini.pending.99999.99999";
    {std::ofstream out(foreign);out << "foreign-existing-file";}
    speedracer::graphics::save(path, 2, false, true);
    check(read(foreign) == "foreign-existing-file", "unowned leftover preserved");
    fs::remove(foreign);
    unsigned files = 0; for (const auto& item : fs::directory_iterator(root)) {++files;check(item.path() == path,"no orphan after controlled failures");}
    check(files == 1, "only final settings remain");
    fs::remove(path);fs::remove(root);
}
int main() {
    try {
        const auto root = fs::temp_directory_path() / ("sr-atomic-test-" + std::to_string(
            std::chrono::steady_clock::now().time_since_epoch().count()));
        fs::create_directory(root);
        for (const auto* name : {u8"ASCII", u8"João com espaços", u8"雨 🚗"}) run(root/fs::path(name));
        bool refused = false;
        try {ps2::atomic_file::replace(root/"missing-parent/settings.ini", "data");}
        catch (const std::runtime_error&) {refused = true;}
        check(refused && !fs::exists(root/"missing-parent"), "missing parent not created or overwritten");
        fs::remove(root);
        std::cout << "Atomic settings: " << checks << " checks: PASS\n";
        return 0;
    } catch (const std::exception& e) {std::cerr << e.what() << '\n';return 1;}
}
