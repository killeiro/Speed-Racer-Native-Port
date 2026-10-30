// SPDX-License-Identifier: MIT
#include "ps2/data_pack.hpp"
#include "ps2/disc.hpp"
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>

namespace fs = std::filesystem;
using Bytes = std::vector<unsigned char>;
using Pack = ps2::disc::DataPack;
int checks = 0;
void check(bool value, const char* reason) {
    ++checks;
    if (!value) throw std::runtime_error(reason);
}
void put32(Bytes& b, std::size_t at, std::uint32_t v) {
    for (int i=0;i<4;++i) b.at(at+i)=static_cast<unsigned char>(v>>(i*8));
}
void put64(Bytes& b, std::size_t at, std::uint64_t v) {
    for (int i=0;i<8;++i) b.at(at+i)=static_cast<unsigned char>(v>>(i*8));
}
void write(const fs::path& p, const Bytes& bytes) {
    std::ofstream f(p,std::ios::binary); f.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());
    check(bool(f),"fixture write failed");
}
Bytes encode(const Bytes& source) {
    const auto count=(source.size()+Pack::block_bytes-1)/Pack::block_bytes;
    Bytes out(64+count*8);
    std::copy(Pack::magic.begin(),Pack::magic.end(),out.begin());
    put32(out,8,1);put32(out,12,Pack::block_bytes);put64(out,16,source.size());put32(out,24,count);
    for(std::size_t i=0;i<count;++i) {
        const auto first=source.begin()+i*Pack::block_bytes;
        const auto last=source.begin()+std::min(source.size(),(i+1)*Pack::block_bytes);
        if(std::any_of(first,last,[](unsigned char b){return b!=0;})) {
            put64(out,64+i*8,out.size());out.insert(out.end(),first,last);
        }
    }
    return out;
}
void compare(const std::string& pack_path,const std::string& iso_path) {
    const auto pack=Pack::open(pack_path);
    const auto iso=std::unique_ptr<std::FILE,decltype(&std::fclose)>(ps2::host_path::open(iso_path.c_str(),"rb"),&std::fclose);
    check(bool(iso),"cannot open source for comparison");
    Bytes expected(1024*1024+2048),actual(expected.size());
    std::uint64_t offset=0;
    for(;;) {
        const auto n=std::fread(expected.data(),1,expected.size(),iso.get());
        const auto got=pack->read(offset,actual.data(),actual.size());
        check(got==n && std::equal(expected.begin(),expected.begin()+n,actual.begin()),"real source/pack mismatch");
        offset+=n;if(!n)break;
    }
    check(offset==pack->size(),"virtual size mismatch");
    std::cout<<"Full native reader comparison: "<<offset<<" bytes, "<<checks<<" checks: PASS\n";
}
int main(int argc,char** argv) {
    try {
        if(argc==4 && std::string(argv[1])=="--compare") {compare(argv[2],argv[3]);return 0;}
        const auto folder=fs::temp_directory_path()/fs::path("srpak-test-"+std::to_string(
            std::chrono::steady_clock::now().time_since_epoch().count()))/fs::path(u8"João 雨");
        fs::create_directories(folder);
        const auto path=folder/"game.srpak";
        Bytes source(3*Pack::block_bytes+6*2048);
        std::memcpy(source.data()+16*2048,"\x01" "CD001\x01",7);
        put32(source,16*2048+80,source.size()/2048);
        put32(source,16*2048+158,18);put32(source,16*2048+166,2048);
        const auto root=18*2048;
        source[root]=44;source[root+32]=10;std::memcpy(source.data()+root+33,"MARK.BIN;1",10);
        put32(source,root+2,19);put32(source,root+10,32);
        std::memcpy(source.data()+19*2048,"MARKER-READ",12);
        for(std::size_t i=2*Pack::block_bytes;i<source.size();++i)source[i]=static_cast<unsigned char>((i*7+3)%251);
        const auto encoded=encode(source);write(path,encoded);
        {
            auto pack=Pack::open(ps2::host_path::to_utf8(path));
            check(pack->size()==source.size(),"logical size");
            Bytes all(source.size());check(pack->read(0,all.data(),all.size())==all.size()&&all==source,"full reconstruction");
            std::mt19937 random(0x21812);
            for(int i=0;i<700;++i) {
                const std::size_t at=random()%(source.size()+2048),want=random()%(2*Pack::block_bytes);
                Bytes got(want+16,0xcd);const auto n=at<source.size()?std::min(want,source.size()-at):0;
                check(pack->read(at,got.data(),want)==n,"random read count");
                check(std::equal(got.begin(),got.begin()+n,source.begin()+std::min(at,source.size())),"random read bytes");
                check(std::all_of(got.begin()+n,got.end(),[](auto b){return b==0xcd;}),"output guard");
            }
            Bytes tail(2048,0xcd);
            check(pack->read(UINT64_MAX,tail.data(),tail.size())==0,"overflow offset");
            check(pack->read(source.size()-1,tail.data(),tail.size())==1&&tail[0]==source.back()&&tail[1]==0xcd,"EOF clipping");
            check(pack->read(0,nullptr,0)==0,"empty read");
        }
        check(ps2::disc::open(ps2::host_path::to_utf8(path)),"disc integration");
        const auto marker=ps2::disc::find("cdrom0:\\mark.bin;1");
        check(marker&&marker->sector==19&&marker->size==32,"filesystem index");
        Bytes read(2048);check(ps2::disc::read(19,1,read.data())&&std::memcmp(read.data(),"MARKER-READ",12)==0,"sector read");
        check(ps2::disc::sector_count()==source.size()/2048&&ps2::disc::ready(19,1),"logical disc properties");
        ps2::disc::close();
        auto reject=[&](Bytes bad,const char* reason) {
            write(path,bad);bool refused=false;
            try {Pack::open(ps2::host_path::to_utf8(path));}catch(const std::runtime_error&){refused=true;}
            check(refused,reason);
        };
        for(auto n:{0u,7u,63u,65u,94u}) {auto b=encoded;b.resize(n);reject(b,"truncation refused");}
        for(auto at:{0u,8u,12u,24u,28u}) {auto b=encoded;b[at]^=0xff;reject(b,"header corruption refused");}
        for(auto size:{std::uint64_t(0),std::uint64_t(2048),std::uint64_t(18*2048+1),UINT64_MAX}) {
            auto b=encoded;put64(b,16,size);reject(b,"invalid logical size refused");
        }
        for(auto offset:{std::uint64_t(1),std::uint64_t(64),std::uint64_t(encoded.size()),UINT64_MAX}) {
            auto b=encoded;put64(b,64,offset);reject(b,"invalid offset refused");
        }
        {auto b=encoded;b.pop_back();reject(b,"payload truncation refused");}
        {auto b=encoded;b.push_back(0);reject(b,"trailing payload refused");}
        {auto b=encoded;put64(b,64+2*8,64+4*8);reject(b,"overlapping blocks refused");}
        {Bytes zero(source.size());const auto b=encode(zero);write(path,b);auto p=Pack::open(ps2::host_path::to_utf8(path));
            Bytes out(zero.size(),0xcc);check(p->read(0,out.data(),out.size())==out.size()&&out==zero,"all-zero pack");}
        bool refused=false;try{ps2::disc::open(ps2::host_path::to_utf8(path));}catch(const std::runtime_error&){refused=true;}
        check(refused&&!ps2::disc::is_open(),"invalid packed filesystem rejects without stale reader");
        write(path,encoded);check(ps2::disc::open(ps2::host_path::to_utf8(path)),"reopen pack");
        ps2::disc::close();
        const auto raw=folder/"raw.iso";write(raw,source);
        check(ps2::disc::open(ps2::host_path::to_utf8(raw)),"raw ISO compatibility");
        check(ps2::disc::find("MARK.BIN").has_value()&&ps2::disc::layer1_start()==0,"raw index after pack");
        check(!ps2::disc::open(ps2::host_path::to_utf8(folder/"absent.iso"))&&!ps2::disc::is_open(),"failed reopen clears reader");
        fs::remove(raw);fs::remove(path);fs::remove(folder);fs::remove(folder.parent_path());
        std::cout<<"Data pack: "<<checks<<" checks: PASS\n";
        return 0;
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
