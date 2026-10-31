// SPDX-License-Identifier: MIT
#include "save_import.hpp"
#include <chrono>
#include <fstream>
#include <iostream>
#include <iterator>
#include <set>
#include <stdexcept>
#include <string>
namespace fs = std::filesystem;
using speedracer::saves::PreparedImport;
using speedracer::saves::kCardBytes;
unsigned checks = 0;
void check(bool value, const char* why) { ++checks; if (!value) throw std::runtime_error(why); }
std::vector<unsigned char> read(const fs::path& p) {
    std::ifstream f(p, std::ios::binary); return {std::istreambuf_iterator<char>(f), {}};
}
void write(const fs::path& p, const std::vector<unsigned char>& data) {
    std::ofstream f(p, std::ios::binary | std::ios::trunc);
    f.write(reinterpret_cast<const char*>(data.data()), data.size()); f.close();
    if (!f) throw std::runtime_error("Fixture write failed");
}
template<class F> bool refused(F action) { try {action();} catch (const std::exception&) {return true;} return false; }
void available(const fs::path& p) { ps2::card_file::Lease lease(p); }
void reserved(const fs::path& p) { check(refused([&]{available(p);}), "prepared source/target must stay reserved"); }
std::set<fs::path> backups(const fs::path& folder) {
    std::set<fs::path> result;
    if (fs::exists(folder)) for (const auto& e : fs::directory_iterator(folder)) result.insert(e.path());
    return result;
}
void run(const fs::path& folder, bool collide) {
    fs::create_directory(folder);
    const auto source = folder/"source.ps2", target = folder/"speedracer.ps2";
    const std::vector<unsigned char> incoming(kCardBytes,0x31), previous(kCardBytes,0x72), changed(kCardBytes,0x55);
    write(source,incoming); const auto source_stamp=fs::last_write_time(source);
    {
        PreparedImport p(source,target);
        check(!p.has_existing(),"fresh import destination reported existing");
        reserved(source); reserved(target);
        auto result=p.commit();
        check(result.imported && result.backup.empty() && read(target)==incoming,"fresh import bytes mismatch");
        check(refused([&]{p.commit();}),"completed operation accepted a second commit");
    }
    available(source);available(target);
    check(read(source)==incoming && fs::last_write_time(source)==source_stamp,"fresh import changed source/mtime");

    write(target,previous);const auto target_stamp=fs::last_write_time(target);
    {
        PreparedImport p(source,target);
        check(p.has_existing(),"existing progress not reported");
        check(refused([&]{p.commit();}),"existing progress overwritten without authorization");
    }
    check(read(target)==previous && fs::last_write_time(target)==target_stamp && !fs::exists(folder/"backups"),
          "unauthorized import changed destination or made a backup");
    { PreparedImport cancelled(source,target); }
    check(read(target)==previous && fs::last_write_time(target)==target_stamp,"cancelled prepared import changed target");
    available(source);available(target);

    fs::path collision;
    if(collide) {
        fs::create_directory(folder/"backups");
        collision=folder/"backups"/("speedracer.ps2.before-import."+std::to_string(GetCurrentProcessId())+".1.ps2");
        write(collision,{1,2,3,4});
    }
    fs::path first_backup;
    {
        PreparedImport p(source,target);
        auto result=p.commit(true);first_backup=result.backup;
        check(result.imported && !result.backup.empty() && read(result.backup)==previous,"authorized replacement lacks full old-card backup");
        check(read(target)==incoming,"authorized replacement did not import source");
        reserved(source);reserved(target);
    }
    if(collide)check(read(collision)==std::vector<unsigned char>({1,2,3,4}) && first_backup!=collision,"colliding backup was overwritten");
    check(read(source)==incoming && fs::last_write_time(source)==source_stamp,"replacement changed source/mtime");
    {
        PreparedImport p(source,target);
        auto result=p.commit(true);
        check(result.backup!=first_backup && read(result.backup)==incoming && read(first_backup)==previous,"later import replaced an old backup");
    }
    write(target,previous);
    auto before=backups(folder/"backups");
    check(SetFileAttributesW(target.c_str(),FILE_ATTRIBUTE_READONLY)!=0,"cannot set readonly fixture");
    bool failed=false;std::string message;
    {
        PreparedImport p(source,target);
        try{p.commit(true);}catch(const std::exception& e){failed=true;message=e.what();}
    }
    check(SetFileAttributesW(target.c_str(),FILE_ATTRIBUTE_NORMAL)!=0,"cannot clear readonly fixture");
    check(failed && read(target)==previous && message.find("Backup")!=std::string::npos,"readonly replacement lost prior target or backup diagnostic");
    auto after=backups(folder/"backups");
    check(after.size()==before.size()+1,"replacement failure lacks durable backup");
    for(const auto& p:after)if(!before.contains(p))check(read(p)==previous,"failure backup differs from prior destination");

    HANDLE block=CreateFileW(target.c_str(),GENERIC_READ,FILE_SHARE_READ|FILE_SHARE_WRITE,nullptr,OPEN_EXISTING,0,nullptr);
    check(block!=INVALID_HANDLE_VALUE,"cannot hold replacement blocker");
    failed=false;
    {PreparedImport p(source,target);failed=refused([&]{p.commit(true);});}
    CloseHandle(block);
    check(failed && read(target)==previous,"locked replacement overwrote destination");
    {
        PreparedImport retry(source,target);
        check(retry.commit(true).imported && read(target)==incoming,"replacement retry failed after blocker release");
    }
    {
        ps2::card_file::Lease held(source);
        check(refused([&]{PreparedImport p(source,target);}),"busy source accepted");
    }
    {
        ps2::card_file::Lease held(target);
        check(refused([&]{PreparedImport p(source,target);}),"busy destination accepted");
    }
    available(source);available(target);
    {
        HANDLE held=CreateFileW(source.c_str(),GENERIC_READ,0,nullptr,OPEN_EXISTING,0,nullptr);
        check(held!=INVALID_HANDLE_VALUE,"cannot hold source read blocker");
        failed=refused([&]{PreparedImport p(source,target);});CloseHandle(held);
        check(failed && read(source)==incoming,"unreadable source accepted or changed");
    }
    check(refused([&]{PreparedImport p(source,source);}),"same source/destination accepted");
    check(refused([&]{PreparedImport p(source,folder/"."/"source.ps2");}),"same-file dot alias accepted");
    check(refused([&]{PreparedImport p(source,folder/"SOURCE.PS2");}),"same-file case alias accepted");

    const auto alias=folder/"alias.ps2";fs::create_hard_link(source,alias);
    check(refused([&]{PreparedImport p(source,target);}),"hardlinked source accepted");
    fs::remove(alias);fs::create_hard_link(target,alias);
    check(refused([&]{PreparedImport p(source,target);}),"hardlinked destination accepted");
    fs::remove(alias);available(source);available(target);
    const auto invalid=folder/"invalid.ps2";
    for(std::size_t size:{std::size_t{0},std::size_t{512},kCardBytes-1,kCardBytes+1}) {
        write(invalid,{1});fs::resize_file(invalid,size);const auto stamp=fs::last_write_time(invalid);
        check(refused([&]{PreparedImport p(invalid,target);}),"invalid source size accepted");
        check(fs::file_size(invalid)==size && fs::last_write_time(invalid)==stamp && read(target)==incoming,"invalid source changed data");
        available(invalid);
    }
    const auto bad_target=folder/"bad-target.ps2";write(bad_target,{7,8,9});
    check(refused([&]{PreparedImport p(source,bad_target);}) && read(bad_target)==std::vector<unsigned char>({7,8,9}),"incomplete destination overwritten");
    const auto directory=folder/"directory.ps2";fs::create_directory(directory);
    check(refused([&]{PreparedImport p(directory,target);}) && fs::is_directory(directory),"directory source accepted");
    check(refused([&]{PreparedImport p(source,directory);}) && fs::is_directory(directory),"directory destination accepted");

    {
        PreparedImport p(source,target);write(source,changed);
        check(refused([&]{p.commit(true);}) && read(target)==incoming,"changed source snapshot silently imported");
    }
    write(source,incoming);
    {
        PreparedImport p(source,target);write(target,changed);
        check(refused([&]{p.commit(true);}) && read(target)==changed,"changed destination silently overwritten");
    }
    const auto fresh=folder/"created-late.ps2";
    {
        PreparedImport p(source,fresh);write(fresh,changed);
        check(refused([&]{p.commit();}) && read(fresh)==changed,"late-created destination overwritten");
    }
    const auto blocked_folder=folder/"blocked-backup";fs::create_directory(blocked_folder);
    const auto blocked_target=blocked_folder/"card.ps2";write(blocked_target,previous);write(blocked_folder/"backups",{4,5});
    check(refused([&]{PreparedImport p(source,blocked_target);p.commit(true);}) && read(blocked_target)==previous &&
          read(blocked_folder/"backups")==std::vector<unsigned char>({4,5}),"backup failure changed prior progress");
    for(const auto& e:fs::recursive_directory_iterator(folder))
        check(e.path().filename().native().find(fs::path(".pending.").native())==fs::path::string_type::npos,"owned pending residue after controlled errors");
}
int main() {
    const auto temp=fs::weakly_canonical(fs::temp_directory_path());
    const auto root=temp/("sr-import-test-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    if(!fs::create_directory(root))return 2;
    try {
        bool first=true;
        for(const auto* name:{u8"ASCII",u8"Equipe com espaços",u8"雨 🚗"}){run(root/fs::path(name),first);first=false;}
        check(fs::weakly_canonical(root).parent_path()==temp && root.filename().string().starts_with("sr-import-test-"),"fixture cleanup root escaped temp");
        fs::remove_all(root);
        std::cout<<"Save import: "<<checks<<" checks, preservation/backup/locks/failures/Unicode: PASS\n";return 0;
    }catch(const std::exception& e){std::cerr<<e.what()<<"\nQA fixtures retained: "<<root<<"\n";return 1;}
}
