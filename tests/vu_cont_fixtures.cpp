#include "vu_cont_programs.hpp"
#include <filesystem>
#include <fstream>
#include <format>
int main(int argc,char **argv) {
    if(argc!=2) return 1;
    std::filesystem::create_directories(argv[1]);
    for(unsigned test=0;test<12;++test) {
        auto c=fixture::code(test);
        for(auto pc:fixture::entries(test)) {
            auto key=ps2::vu::program_key(c.data(),ps2::vu::reachable(c.data(),16383,pc),pc);
            std::ofstream(std::filesystem::path(argv[1])/std::format("{:016X}_{:04X}.bin",key,pc),std::ios::binary).write(reinterpret_cast<char*>(c.data()),c.size());
        }
    }
}
