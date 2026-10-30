// SPDX-License-Identifier: MIT
// Test the production importer itself. Only this test supplies a synthetic ELF
// version; neither the public API nor the launcher expose a version override.
#include "../host/media_import.cpp"
#include <chrono>
#include <fstream>
#include <iostream>

namespace {
using namespace speedracer::media;
namespace fs=std::filesystem;
using B=std::vector<unsigned char>;
constexpr std::size_t S=2048,root_at=18*S;
unsigned checks=0;
void check(bool ok,const char* label){++checks;if(!ok)throw std::runtime_error(label);}
void put(B& b,std::size_t at,std::uint32_t value,unsigned width=4){for(unsigned i=0;i<width;++i)b.at(at+i)=static_cast<unsigned char>(value>>(8*i));}
void both(B& b,std::size_t at,std::uint32_t value,unsigned width=4){put(b,at,value,width);for(unsigned i=0;i<width;++i)b.at(at+width+i)=static_cast<unsigned char>(value>>(8*(width-1-i)));}
B rec(const std::string& name,unsigned block,unsigned length,unsigned flags=0){
    B b(33+name.size()+(name.size()%2==0));b[0]=static_cast<unsigned char>(b.size());
    both(b,2,block);both(b,10,length);b[25]=static_cast<unsigned char>(flags);both(b,28,1,2);
    b[32]=static_cast<unsigned char>(name.size());std::copy(name.begin(),name.end(),b.begin()+33);return b;
}
void place(B& b,std::size_t at,const B& source){std::copy(source.begin(),source.end(),b.begin()+at);}
const std::string cnf="BOOT2 = cdrom0:\\SLUS_218.12;1\r\nVER = 1.02\r\nVMODE = NTSC\r\n";
struct Fixture {
    B elf,iso;Version version;std::size_t cnf_rec,elf_rec,tail;
    Fixture():elf(4096),iso(64*S){
        std::memcpy(elf.data(),"\x7f" "ELF\x01\x01\x01",7);put(elf,18,8,2);put(elf,24,0x100008);
        for(unsigned i=52;i<elf.size();++i)elf[i]=static_cast<unsigned char>(i*17+3);
        version={elf.size(),hash_bytes(elf),0x100008};
        std::memcpy(iso.data()+16*S,"\x01" "CD001\x01",7);
        both(iso,16*S+80,64);both(iso,16*S+120,1,2);both(iso,16*S+124,1,2);both(iso,16*S+128,S,2);
        std::memcpy(iso.data()+17*S,"\xff" "CD001\x01",7);
        place(iso,16*S+156,rec(std::string(1,'\0'),18,S,2));
        std::size_t at=root_at;
        auto add=[&](const B& item){place(iso,at,item);at+=item.size();};
        add(rec(std::string(1,'\0'),18,S,2));add(rec(std::string(1,'\1'),18,S,2));
        cnf_rec=at;add(rec("SYSTEM.CNF;1",20,cnf.size()));
        elf_rec=at;add(rec("SLUS_218.12;1",22,elf.size()));tail=at;
        std::copy(cnf.begin(),cnf.end(),iso.begin()+20*S);place(iso,22*S,elf);
    }
};
void write(const fs::path& path,const B& bytes){std::ofstream out(path,std::ios::binary);out.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());check(bool(out),"fixture write");}
B read(const fs::path& path){std::ifstream in(path,std::ios::binary);return B(std::istreambuf_iterator<char>(in),{});}
void clear_data(const fs::path& p){
    // Fixed owned test files only; no recursive deletion.
    fs::remove(p/L"disc.iso");fs::remove(p/L"SLUS_218.12");fs::remove(p/L"preparation.json");fs::remove(p/L"marker");fs::remove(p);
}
}
int main(){
    fs::path folder;
    try {
        check(hash_bytes(B{'a','b','c'})=="ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad","SHA256 abc vector");
        check(hash_bytes({})=="e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855","SHA256 empty vector");
        folder=fs::temp_directory_path()/(L"speedracer-import-test-"+std::to_wstring(GetCurrentProcessId())+L"-"+std::to_wstring(GetTickCount64()));
        check(fs::create_directory(folder),"new owned test root");
        const auto source=folder/fs::path(u8"mídia 雨 🚗.iso"),destination=folder/fs::path(u8"dados João 雨");
        Fixture base;write(source,base.iso);const auto stamp=fs::last_write_time(source);
        unsigned last=0;bool locked=false;
        const auto result=prepare_impl(source,destination,base.version,[&](Phase phase,unsigned percent){
            check(percent>=last&&percent<=100,"monotonic import progress");last=percent;
            if(phase==Phase::copy&&!locked){
                HANDLE other=CreateFileW(source.c_str(),GENERIC_WRITE,FILE_SHARE_READ,nullptr,OPEN_EXISTING,0,nullptr);
                const auto error=GetLastError();if(other!=INVALID_HANDLE_VALUE)CloseHandle(other);
                check(other==INVALID_HANDLE_VALUE&&error==ERROR_SHARING_VIOLATION,"source writing denied during import");
                check(!MoveFileExW(source.c_str(),(folder/L"renamed.iso").c_str(),0),"source rename denied during import");locked=true;
            }
        },nullptr);
        check(locked&&last==100&&result.iso_sha256==hash_bytes(base.iso),"successful import and source hash");
        check(read(destination/L"disc.iso")==base.iso,"copied ISO byte equality");
        check(read(destination/L"SLUS_218.12")==base.elf,"extracted ELF byte equality");
        check(fs::last_write_time(source)==stamp&&read(source)==base.iso,"original ISO unchanged");
        check(fs::exists(destination/L"preparation.json"),"manifest exists");
        auto reject=[&](const B& bytes,const char* label){
            write(source,bytes);bool failed=false;try{prepare_impl(source,folder/L"reject",base.version,{},nullptr);}catch(const std::exception&){failed=true;}
            check(failed,label);check(!fs::exists(folder/L"reject"),"invalid import not published");
            for(const auto& entry:fs::directory_iterator(folder))check(entry.path().filename().wstring().find(L".speedracer-import-")!=0,"no owned staging leftovers");
        };
        auto mutation=[&](const char* label,auto change){auto b=base.iso;change(b);reject(b,label);};
        reject({},"empty image");mutation("truncated sector",[](B& b){b.pop_back();});
        mutation("bad ISO magic",[](B& b){b[16*S+1]='X';});
        mutation("bad sector size",[](B& b){both(b,16*S+128,512,2);});
        mutation("dual endian mismatch",[](B& b){b[16*S+84]^=1;});
        mutation("multivolume",[](B& b){both(b,16*S+120,2,2);});
        mutation("oversized volume",[](B& b){both(b,16*S+80,65);});
        mutation("duplicate primary descriptor",[](B& b){b[17*S]=1;});
        mutation("bad descriptor signature",[](B& b){b[17*S+1]='X';});
        mutation("invalid root record",[](B& b){b[16*S+156]=1;});
        mutation("root not directory",[](B& b){b[16*S+156+25]=0;});
        mutation("root bad identifier",[](B& b){b[16*S+156+33]='X';});
        mutation("root overlaps descriptors",[](B& b){both(b,16*S+158,17);});
        mutation("root outside volume",[](B& b){both(b,16*S+158,64);});
        mutation("root too large",[](B& b){both(b,16*S+166,1048577);});
        mutation("empty root",[](B& b){both(b,16*S+166,0);});
        mutation("directory record short",[](B& b){b[root_at]=33;});
        mutation("nonzero directory padding",[](B& b){b[root_at+S-1]=1;});
        mutation("unsafe ISO filename",[&](B& b){b[base.cnf_rec+33]='/';});
        mutation("extended record",[&](B& b){b[base.cnf_rec+1]=1;});
        mutation("interleaved record",[&](B& b){b[base.cnf_rec+26]=1;});
        mutation("multi extent",[&](B& b){b[base.cnf_rec+25]=128;});
        mutation("required file is a directory",[&](B& b){b[base.cnf_rec+25]=2;});
        mutation("required extent outside volume",[&](B& b){both(b,base.elf_rec+2,64);});
        mutation("required size outside volume",[&](B& b){both(b,base.elf_rec+10,0xffffffffu);});
        mutation("file overlaps metadata",[&](B& b){both(b,base.cnf_rec+2,18);});
        mutation("required files overlap",[&](B& b){both(b,base.cnf_rec+2,22);});
        mutation("missing required ELF",[&](B& b){b[base.elf_rec+33]='X';});
        mutation("duplicate required file",[&](B& b){place(b,base.tail,rec("SYSTEM.CNF;1",20,cnf.size()));});
        mutation("wrong file version",[&](B& b){b[base.cnf_rec+33+11]='2';});
        mutation("CNF empty",[&](B& b){both(b,base.cnf_rec+10,0);});
        mutation("CNF oversized",[&](B& b){both(b,base.cnf_rec+10,4097);});
        mutation("CNF non ASCII",[](B& b){b[20*S+1]=255;});
        mutation("wrong boot executable",[](B& b){b[20*S+16]='X';});
        mutation("duplicate BOOT2",[&](B& b){std::copy(cnf.begin(),cnf.end(),b.begin()+20*S+cnf.size());both(b,base.cnf_rec+10,cnf.size()*2);});
        mutation("ELF wrong size",[&](B& b){both(b,base.elf_rec+10,base.elf.size()-1);});
        mutation("ELF wrong magic",[](B& b){b[22*S]=0;});
        mutation("ELF wrong machine",[](B& b){put(b,22*S+18,3,2);});
        mutation("ELF wrong entry",[](B& b){put(b,22*S+24,0x100004);});
        mutation("ELF wrong hash",[](B& b){b[22*S+100]^=1;});
        write(source,base.iso);
        bool refused=false;try{prepare_impl(source,destination,base.version,{},nullptr);}catch(...){refused=true;}
        check(refused&&read(destination/L"disc.iso")==base.iso,"existing data preserved");
        const auto empty=folder/L"empty";fs::create_directory(empty);refused=false;
        try{prepare_impl(source,empty,base.version,{},nullptr);}catch(...){refused=true;}
        check(refused&&fs::is_empty(empty),"empty destination also preserved");fs::remove(empty);
        for(Phase when:{Phase::inspect,Phase::copy,Phase::verify_copy,Phase::verify_source,Phase::publish}){
            std::atomic_bool cancel=false;bool cancelled=false;
            try{prepare_impl(source,folder/L"cancelled",base.version,[&](Phase phase,unsigned){if(phase==when)cancel=true;},&cancel);}
            catch(const Cancelled&){cancelled=true;}
            check(cancelled&&!fs::exists(folder/L"cancelled"),"cancelled import not published");
            for(const auto& entry:fs::directory_iterator(folder))check(entry.path().filename().wstring().find(L".speedracer-import-")!=0,"cancel cleans owned staging files");
        }
        const auto raced=folder/L"raced";refused=false;
        try{prepare_impl(source,raced,base.version,[&](Phase phase,unsigned){if(phase==Phase::publish){fs::create_directory(raced);write(raced/L"marker",B{'o','l','d'});}},nullptr);}catch(...){refused=true;}
        check(refused&&read(raced/L"marker")==B({'o','l','d'})&&!fs::exists(raced/L"disc.iso"),"destination creation race preserved");
        clear_data(raced);
        // The public production entry cannot accept a fake executable version.
        refused=false;try{prepare(source,folder/L"public");}catch(...){refused=true;}
        check(refused&&!fs::exists(folder/L"public"),"production version fixed to audited game");
        clear_data(destination);fs::remove(source);check(fs::is_empty(folder),"all staging cleaned");fs::remove(folder);
        std::cout<<"Native import: "<<checks<<" checks pass; malformed ISO, SHA, Unicode, source sharing, cancellation and publication race.\n";
        return 0;
    }catch(const std::exception& e){std::cerr<<"Native import FAILED: "<<e.what()<<"; owned test root retained\n";return 1;}
}
