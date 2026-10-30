#include "../runtime/src/iop/sio2.cpp"
#include "ps2/card_file.hpp"
#include <chrono>
#include <iterator>
#include <stdexcept>

namespace fs = std::filesystem;
using namespace ps2::iop::sio2;
unsigned checks = 0;
void require(bool ok, const char* why) {
    ++checks;
    if (!ok) throw std::runtime_error(why);
}
std::vector<std::uint8_t> bytes(const fs::path& path) {
    std::ifstream input(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(input), {}};
}
void write_card(std::uint8_t value) {
    g_in = {0x81,0x22,1,0,0,0};g_out.assign(8,0);memory_card(0,8);
    g_in = {0x81,0x42,3,value,std::uint8_t(value+1),std::uint8_t(value+2)};memory_card(0,8);
}
void excluded(const fs::path& path) {
    bool refused = false;
    try { ps2::card_file::Lease second(path); } catch (const std::exception&) { refused = true; }
    require(refused, "Loaded card must keep exclusive ownership");
}
void no_pending(const fs::path& folder) {
    for (const auto& entry : fs::directory_iterator(folder))
        require(entry.path().filename().native().find(fs::path(".pending.").native()) == fs::path::string_type::npos,
                "Operation-owned temporary file leaked");
}
void remove_lock(const fs::path& target) {
    auto lock = target; lock += ".lock"; fs::remove(lock);
}

void run_save_case(const fs::path& folder) {
    require(fs::create_directory(folder), "Cannot create QA directory");
    g_card = Card{};
    const auto target = folder / "card.ps2";
    auto foreign = target; foreign += ".pending";
    ps2::g_options.memcard_path = ps2::host_path::to_utf8(target);
    unsigned callbacks = 0;
    ps2::g_options.on_memcard_saved = [&] { ++callbacks; };
    reset();
    write_card(21);
    for (unsigned i = 0; i < 49; ++i) require(flush_cards(), "Debounce failed");
    require(!fs::exists(target) && g_card.dirty && !callbacks, "Debounce saved too early");
    require(flush_cards() && !g_card.dirty && callbacks == 1 && bytes(target) == g_card.data, "50th tick failed");
    write_card(73);
    require(flush_cards(true) && !g_card.dirty && callbacks == 2 && bytes(target) == g_card.data, "Forced save failed");

    { std::ofstream out(foreign, std::ios::binary); out << "foreign pending"; }
    const auto foreign_before = bytes(foreign);
    write_card(91);
    require(flush_cards(true) && callbacks == 3 && bytes(target) == g_card.data, "Save with foreign pending failed");
    require(bytes(foreign) == foreign_before, "Foreign fixed pending file was overwritten or removed");
    excluded(target);
    no_pending(folder);

#ifdef _WIN32
    const auto prior = bytes(target);
    require(SetFileAttributesW(target.c_str(), FILE_ATTRIBUTE_READONLY), "Cannot set QA readonly attribute");
    write_card(123);
    const bool readonly_saved = flush_cards(true);
    require(SetFileAttributesW(target.c_str(), FILE_ATTRIBUTE_NORMAL), "Cannot clear QA readonly attribute");
    require(!readonly_saved && g_card.dirty && callbacks == 3 && bytes(target) == prior, "Readonly failure lost prior card or dirty state");
    no_pending(folder);
    excluded(target);
    require(flush_cards(true) && !g_card.dirty && callbacks == 4 && bytes(target) == g_card.data, "Readonly retry failed");

    const auto prior_locked = bytes(target);
    const auto locked = CreateFileW(target.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, 0, nullptr);
    require(locked != INVALID_HANDLE_VALUE, "Cannot hold QA replacement blocker");
    write_card(144);
    const bool locked_saved = flush_cards(true);
    CloseHandle(locked);
    require(!locked_saved && g_card.dirty && callbacks == 4 && bytes(target) == prior_locked, "Blocked replacement lost old bytes or callback semantics");
    no_pending(folder);
    excluded(target);
    require(flush_cards(true) && !g_card.dirty && callbacks == 5 && bytes(target) == g_card.data, "Blocked replacement retry failed");
#endif
    const auto callbacks_before = callbacks;
    const auto other = folder / "must-not-redirect.ps2";
    ps2::g_options.memcard_path = ps2::host_path::to_utf8(other);
    write_card(165);
    require(flush_cards(true) && callbacks == callbacks_before+1 && bytes(target) == g_card.data && !fs::exists(other),
            "Changing options redirected an already loaded card");
    const auto snapshot = g_card.data;
    write_card(177);
    const auto dirty_snapshot = g_card.data;
    const auto quiet = g_card.quiet;
    reset();
    require(g_card.data == dirty_snapshot && g_card.dirty && g_card.quiet == quiet, "IOP reset lost dirty snapshot");
    excluded(target);
    ps2::state::Writer writer; state(writer);
    ps2::state::Reader reader(writer.out.data(), writer.out.size()); state(reader);
    require(g_card.data == dirty_snapshot && g_card.dirty && g_card.quiet == quiet, "Checkpoint lost dirty snapshot");
    excluded(target);
    require(flush_cards(true) && bytes(target) == dirty_snapshot && callbacks == callbacks_before+2, "Post-checkpoint flush failed");
    g_card = Card{};
    ps2::g_options.memcard_path = ps2::host_path::to_utf8(target);load_card();
    require(g_card.data == dirty_snapshot && g_card.data != snapshot && !g_card.dirty, "Reload lost saved data");
    excluded(target);
    require(flush_cards(true) && callbacks == callbacks_before+2, "Clean flush called save callback");
    g_card = Card{};
    { ps2::card_file::Lease released(target); }
    require(bytes(foreign) == foreign_before, "Foreign pending changed on release");
    fs::remove(foreign);fs::remove(target);remove_lock(target);fs::remove(folder);
    ps2::g_options.on_memcard_saved = {};
}

void run_load_guard_case(const fs::path& folder) {
    require(fs::create_directory(folder), "Cannot create load QA directory");
    const auto target = folder / "existing.ps2";
    unsigned callbacks = 0;
    ps2::g_options.on_memcard_saved = [&] { ++callbacks; };
    ps2::g_options.memcard_path = ps2::host_path::to_utf8(target);
    for (const std::size_t size : {std::size_t{0},std::size_t{1},std::size_t{8*1024*1024},kCardBytes-1,kCardBytes+1}) {
        { std::ofstream out(target,std::ios::binary|std::ios::trunc);out.put('X'); }
        fs::resize_file(target,size);const auto stamp=fs::last_write_time(target);
        g_card = Card{};g_card.data={1,2,3};bool refused=false;
        try { load_card(); } catch(const std::runtime_error&) { refused=true; }
        require(refused && !g_card.present && !g_card.dirty && g_card.data==std::vector<std::uint8_t>({1,2,3}), "Invalid card published state");
        require(flush_cards(true) && !callbacks && fs::file_size(target)==size && fs::last_write_time(target)==stamp, "Invalid card changed source");
        { ps2::card_file::Lease released(target); }
    }
    fs::remove(target);fs::create_directory(target);
    g_card=Card{};bool refused=false;
    try {load_card();} catch(const std::runtime_error&){refused=true;}
    require(refused && !g_card.present && !g_card.dirty && fs::is_directory(target), "Directory card accepted");
    { ps2::card_file::Lease released(target); }
    fs::remove(target);
    const std::vector<std::uint8_t> valid(kCardBytes,0x5b);
    {std::ofstream out(target,std::ios::binary);out.write(reinterpret_cast<const char*>(valid.data()),valid.size());}
#ifdef _WIN32
    const auto locked=CreateFileW(target.c_str(),GENERIC_READ,0,nullptr,OPEN_EXISTING,0,nullptr);
    require(locked!=INVALID_HANDLE_VALUE,"Cannot hold invalid-read blocker");
    g_card=Card{};refused=false;
    try {load_card();} catch(const std::runtime_error&){refused=true;}
    CloseHandle(locked);
    require(refused && !g_card.present && !g_card.dirty,"Unreadable card accepted");
#endif
    g_card=Card{};load_card();
    require(g_card.present && !g_card.dirty && g_card.data==valid,"Valid card failed to load");
    excluded(target);
    g_card=Card{};
    const auto alias=folder/"hardlink.ps2";fs::create_hard_link(target,alias);
    refused=false;
    try {load_card();} catch(const std::runtime_error&){refused=true;}
    require(refused && !g_card.present && bytes(target)==valid && bytes(alias)==valid,"Hardlinked card accepted or changed");
    { ps2::card_file::Lease released(target); }
    fs::remove(alias);fs::remove(target);
    g_card=Card{};load_card();
    require(g_card.present && !g_card.dirty && g_card.data.size()==kCardBytes &&
            std::all_of(g_card.data.begin(),g_card.data.end(),[](auto b){return b==0xff;}),"Absent card not initialized");
    excluded(target);
    require(!fs::exists(target) && flush_cards(true) && !fs::exists(target) && !callbacks,"Clean absent card was written");
    g_card=Card{};remove_lock(target);fs::remove(folder);
    ps2::g_options.on_memcard_saved={};
}

int main() {
    const auto base=fs::temp_directory_path()/("speedracer-card-test-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    fs::create_directory(base);
    try {
        for(const auto* name:{u8"ASCII",u8"João com espaços",u8"雨 🚗"}) {
            run_save_case(base/fs::path(name));
            run_load_guard_case(base/(fs::path(name).native()+fs::path("-load").native()));
        }
        require(fs::remove(base),"QA fixture directory not empty");
        std::printf("Card persistence: %u checks: PASS\n",checks);
        return 0;
    } catch(const std::exception& error) {
        std::fprintf(stderr,"Card test failed after %u checks: %s\nQA fixtures retained: %s\n",checks,error.what(),ps2::host_path::to_utf8(base).c_str());
        return 1;
    }
}
