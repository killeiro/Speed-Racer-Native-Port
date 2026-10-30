// SPDX-License-Identifier: MIT
#include "ps2/memory.hpp"
#include "ps2/system.hpp"
// Exercise the real ISO file reader and close its test handle before cleanup.
#include "../runtime/src/disc.cpp"
#include <array>
#include <chrono>
#include <filesystem>
#include <fstream>

int main() {
    namespace fs=std::filesystem;
    const auto folder=fs::temp_directory_path()/fs::u8path(
        "speedracer-path-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()))/
        fs::path(u8"João 雨 🚗");
    fs::create_directories(folder);
    const auto utf8=[](const fs::path& p){const auto s=p.u8string();return std::string(reinterpret_cast<const char*>(s.data()),s.size());};
    std::vector<std::uint8_t> elf(88);
    const auto put16=[&](std::size_t at,std::uint16_t value){std::memcpy(elf.data()+at,&value,2);};
    const auto put32=[&](std::size_t at,std::uint32_t value){std::memcpy(elf.data()+at,&value,4);};
    std::memcpy(elf.data(),"\x7f" "ELF\x01\x01\x01",7);
    put16(16,2);put16(18,8);put32(20,1);put32(24,0x1000);put32(28,52);
    put16(40,52);put16(42,32);put16(44,1);
    put32(52,1);put32(56,84);put32(60,0x1000);put32(64,0x1000);
    put32(68,4);put32(72,8);put32(76,5);put32(80,16);put32(84,0x1234abcd);
    const auto executable=folder/fs::path(u8"jogo 雨.elf");
    {std::ofstream out(executable,std::ios::binary);out.write(reinterpret_cast<const char*>(elf.data()),elf.size());if(!out)return 1;}
    std::memset(ps2::g_ram+0x1000,0xcc,8);
    std::uint32_t entry=0,value=0;
    if(!ps2::load_elf(utf8(executable),entry)||entry!=0x1000)return 2;
    std::memcpy(&value,ps2::g_ram+0x1000,4);if(value!=0x1234abcd)return 3;
    for(unsigned i=4;i<8;++i)if(ps2::g_ram[0x1000+i])return 4;
    if(ps2::load_elf(utf8(folder/fs::path(u8"inexistente 雨.elf")),entry))return 5;

    constexpr auto sector=ps2::disc::kSector;
    std::vector<std::uint8_t> iso(20*sector);
    auto at32=[&](std::size_t at,std::uint32_t n){std::memcpy(iso.data()+at,&n,4);};
    std::memcpy(iso.data()+16*sector,"\x01" "CD001\x01",7);
    at32(16*sector+80,20);at32(16*sector+158,18);at32(16*sector+166,sector);
    const char marker[]="UNICODE-SECTOR-READ";
    std::memcpy(iso.data()+19*sector,marker,sizeof marker);
    const auto disc=folder/fs::path(u8"mídia 雨.iso");
    {std::ofstream out(disc,std::ios::binary);out.write(reinterpret_cast<const char*>(iso.data()),iso.size());if(!out)return 6;}
    if(!ps2::disc::open(utf8(disc))||ps2::disc::sector_count()!=20)return 7;
    std::array<std::uint8_t,sector> read{};
    if(!ps2::disc::read(19,1,read.data())||std::memcmp(read.data(),marker,sizeof marker))return 8;
    std::fclose(ps2::disc::g_file);ps2::disc::g_file=nullptr;ps2::disc::g_reader={};
    fs::remove(disc);fs::remove(executable);fs::remove(folder);fs::remove(folder.parent_path());
    std::puts("UTF-8 host paths: real ELF segment/BSS load and ISO sector read: PASS");
}
