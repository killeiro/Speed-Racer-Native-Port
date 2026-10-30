// SPDX-License-Identifier: MIT
#include "media_import.hpp"
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <bcrypt.h>
#include <algorithm>
#include <array>
#include <cstring>
#include <regex>
#include <sstream>
#include <vector>

namespace speedracer::media {
namespace {
namespace fs = std::filesystem;
using Bytes = std::vector<unsigned char>;
constexpr std::uint64_t sector_size = 2048, max_iso = 16ull << 30, max_root = 1 << 20;
constexpr DWORD chunk_size = 1 << 20;
constexpr const char* serial = "SLUS_218.12";
struct Version { std::uint64_t size; std::string sha256; std::uint32_t entry; };
const Version audited{5329820, "6d6b8e257c7019e859fa5c54276800a3566680289420a664a83609088edc7fda", 0x100008};
void need(bool ok, const std::string& text) { if (!ok) throw std::runtime_error(text); }
[[noreturn]] void win_error(const char* action, DWORD error = GetLastError()) {
    throw std::runtime_error(std::string(action) + " (Windows " + std::to_string(error) + ").");
}
void checkpoint(const std::atomic_bool* cancel) { if (cancel && cancel->load()) throw Cancelled(); }
void notify(const Progress& progress, Phase phase, unsigned percent, const std::atomic_bool* cancel) {
    checkpoint(cancel);
    if (progress) progress(phase, percent);
    checkpoint(cancel);
}
class File {
    HANDLE handle_ = INVALID_HANDLE_VALUE;
public:
    File(const fs::path& path, bool output = false) {
        // The source stays open with read sharing only throughout preparation:
        // other handles cannot write it or rename/delete it during the copy.
        handle_ = CreateFileW(path.c_str(), output ? GENERIC_WRITE : GENERIC_READ,
            output ? 0 : FILE_SHARE_READ, nullptr, output ? CREATE_NEW : OPEN_EXISTING,
            FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, nullptr);
        if (handle_ == INVALID_HANDLE_VALUE) win_error(output ? "Não foi possível criar o arquivo" : "Não foi possível ler a ISO");
    }
    File(const File&) = delete;
    File& operator=(const File&) = delete;
    ~File() { if (handle_ != INVALID_HANDLE_VALUE) CloseHandle(handle_); }
    BY_HANDLE_FILE_INFORMATION info() const {
        BY_HANDLE_FILE_INFORMATION out{};
        if (GetFileType(handle_) != FILE_TYPE_DISK || !GetFileInformationByHandle(handle_, &out))
            win_error("Não foi possível identificar o arquivo");
        need(!(out.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY), "A ISO precisa ser um arquivo regular.");
        return out;
    }
    void seek(std::uint64_t offset) {
        LARGE_INTEGER target{}; target.QuadPart = static_cast<LONGLONG>(offset);
        if (!SetFilePointerEx(handle_, target, nullptr, FILE_BEGIN)) win_error("Falha ao posicionar a leitura");
    }
    DWORD read(unsigned char* data, DWORD count) {
        DWORD done = 0;
        if (!ReadFile(handle_, data, count, &done, nullptr)) win_error("Falha de leitura da ISO");
        return done;
    }
    void write(const unsigned char* data, DWORD count) {
        DWORD done = 0;
        if (!WriteFile(handle_, data, count, &done, nullptr) || done != count) win_error("Falha ao gravar os dados");
    }
    void flush() { if (!FlushFileBuffers(handle_)) win_error("Falha ao concluir a gravação"); }
};
std::uint64_t file_size(const BY_HANDLE_FILE_INFORMATION& i) {
    return (std::uint64_t(i.nFileSizeHigh) << 32) | i.nFileSizeLow;
}
bool same_file(const BY_HANDLE_FILE_INFORMATION& a, const BY_HANDLE_FILE_INFORMATION& b) {
    return a.dwVolumeSerialNumber == b.dwVolumeSerialNumber && a.nFileIndexHigh == b.nFileIndexHigh &&
        a.nFileIndexLow == b.nFileIndexLow && file_size(a) == file_size(b) &&
        a.ftLastWriteTime.dwLowDateTime == b.ftLastWriteTime.dwLowDateTime &&
        a.ftLastWriteTime.dwHighDateTime == b.ftLastWriteTime.dwHighDateTime;
}
class Sha256 {
    BCRYPT_ALG_HANDLE algorithm_ = nullptr;
    BCRYPT_HASH_HANDLE hash_ = nullptr;
public:
    Sha256() {
        need(BCryptOpenAlgorithmProvider(&algorithm_, BCRYPT_SHA256_ALGORITHM, nullptr, 0) >= 0,
             "SHA-256 não está disponível no Windows.");
        if (BCryptCreateHash(algorithm_, &hash_, nullptr, 0, nullptr, 0, 0) < 0) {
            BCryptCloseAlgorithmProvider(algorithm_, 0); algorithm_ = nullptr;
            throw std::runtime_error("Não foi possível iniciar a verificação SHA-256.");
        }
    }
    Sha256(const Sha256&) = delete;
    Sha256& operator=(const Sha256&) = delete;
    ~Sha256() { if (hash_) BCryptDestroyHash(hash_); if (algorithm_) BCryptCloseAlgorithmProvider(algorithm_, 0); }
    void add(const unsigned char* data, DWORD size) {
        need(BCryptHashData(hash_, const_cast<PUCHAR>(data), size, 0) >= 0, "Falha na verificação SHA-256.");
    }
    std::string finish() {
        std::array<unsigned char, 32> digest{};
        need(BCryptFinishHash(hash_, digest.data(), digest.size(), 0) >= 0, "Falha ao concluir SHA-256.");
        constexpr char hex[] = "0123456789abcdef";
        std::string out; out.reserve(64);
        for (auto n : digest) { out += hex[n >> 4]; out += hex[n & 15]; }
        return out;
    }
};
std::string hash_bytes(const Bytes& b) { Sha256 hash; hash.add(b.data(), static_cast<DWORD>(b.size())); return hash.finish(); }
Bytes read_at(File& file, std::uint64_t at, std::uint64_t size, std::uint64_t limit) {
    need(at <= limit && size <= limit-at && size <= 16*max_root, "Região de arquivo fora dos limites da ISO.");
    Bytes data(static_cast<std::size_t>(size)); file.seek(at);
    need(file.read(data.data(), static_cast<DWORD>(size)) == size, "A ISO está truncada.");
    return data;
}
std::uint32_t little(const Bytes& b, std::size_t at, unsigned width) {
    need(at+width <= b.size(), "Campo ISO truncado.");
    std::uint32_t out=0; for(unsigned i=0;i<width;++i) out |= std::uint32_t(b[at+i]) << (8*i); return out;
}
std::uint32_t dual(const Bytes& b, std::size_t at, unsigned width) {
    const auto left=little(b,at,width); need(at+2*width<=b.size(), "Campo ISO truncado.");
    std::uint32_t right=0; for(unsigned i=0;i<width;++i) right=(right<<8)|b[at+width+i];
    need(left==right, "A ISO contém campos little/big-endian divergentes."); return left;
}
struct Record { std::uint64_t at, size; unsigned flags; std::string name; };
Record record(const Bytes& b) {
    need(b.size()>=34 && b[0]==b.size(), "Registro ISO inválido.");
    const unsigned count=b[32];
    need(count && 33+count+(count%2==0)<=b.size(), "Nome ISO truncado.");
    need(!b[1] && !b[26] && !b[27] && !(b[25]&~3u) && dual(b,28,2)==1,
         "Formato ISO estendido, intercalado ou multivolume não suportado.");
    return {std::uint64_t(dual(b,2,4))*sector_size,dual(b,10,4),b[25],
            std::string(reinterpret_cast<const char*>(b.data()+33),count)};
}
std::string upper(std::string text) {
    for(char& ch:text) if(ch>='a'&&ch<='z') ch=char(ch-'a'+'A'); return text;
}
struct Details { Bytes elf; std::uint64_t volume_bytes; };
Details inspect(File& file, std::uint64_t size, const Version& version) {
    need(size>=18*sector_size && size<=max_iso && size%sector_size==0,
         "Selecione uma ISO completa com setores de 2048 bytes (até 16 GiB).");
    const auto pvd=read_at(file,16*sector_size,sector_size,size);
    need(std::memcmp(pvd.data(),"\x01" "CD001\x01",7)==0 && !pvd[7], "ISO9660: descritor principal ausente.");
    need(dual(pvd,128,2)==sector_size && dual(pvd,120,2)==1 && dual(pvd,124,2)==1,
         "Tamanho de setor ou volume ISO não suportado.");
    const std::uint64_t volume=std::uint64_t(dual(pvd,80,4))*sector_size;
    need(volume>=18*sector_size && volume<=size, "Volume ISO truncado.");
    unsigned end=0;
    for(unsigned n=17;n<std::min<std::uint64_t>(volume/sector_size,80);++n) {
        const auto d=read_at(file,n*sector_size,sector_size,volume);
        need(std::memcmp(d.data()+1,"CD001\x01",6)==0 &&
             (d[0]==0||d[0]==2||d[0]==3||d[0]==255), "Descritor ISO inválido.");
        if(d[0]==255) {end=n;break;}
    }
    need(end!=0,"ISO sem terminador de descritores.");
    need(156u+pvd[156]<=pvd.size(),"Registro raiz ISO truncado.");
    const auto root=record(Bytes(pvd.begin()+156,pvd.begin()+156+pvd[156]));
    need((root.flags&2) && root.name==std::string(1,'\0') && root.size>0 && root.size<=max_root,
         "Diretório raiz ISO inválido ou muito grande.");
    const std::uint64_t metadata_end=(end+1)*sector_size;
    need(root.at>=metadata_end,"Diretório raiz sobrepõe descritores ISO.");
    const auto directory=read_at(file,root.at,root.size,volume);
    Record cnf{},elf{}; bool have_cnf=false,have_elf=false;
    for(std::size_t offset=0;offset<directory.size();) {
        const unsigned length=directory[offset];
        if(!length) {
            const auto limit=std::min<std::size_t>((offset/sector_size+1)*sector_size,directory.size());
            need(std::all_of(directory.begin()+offset,directory.begin()+limit,[](auto n){return n==0;}),
                 "Preenchimento de diretório ISO inválido."); offset=limit;continue;
        }
        need(offset+length<=directory.size() && offset%sector_size+length<=sector_size,
             "Registro ISO atravessa um setor.");
        auto item=record(Bytes(directory.begin()+offset,directory.begin()+offset+length)); offset+=length;
        need(item.at<=volume && item.size<=volume-item.at,"Arquivo ISO fora do volume.");
        if(item.name==std::string(1,'\0') || item.name==std::string(1,'\1')) continue;
        need(std::all_of(item.name.begin(),item.name.end(),[](unsigned char c){
            return c>=32&&c<127&&c!='/'&&c!='\\'&&c!=':';}),"Nome de arquivo ISO não suportado.");
        const auto full=upper(item.name),name=full.substr(0,full.find(';'));
        if(name!="SYSTEM.CNF" && name!=serial) continue;
        need(full==name+";1" && !(item.flags&2),"Arquivo necessário precisa ser regular, versão 1.");
        need(item.at>=metadata_end && (item.at+item.size<=root.at || item.at>=root.at+root.size),
             "Arquivo necessário sobrepõe metadados ISO.");
        if(name=="SYSTEM.CNF") {need(!have_cnf,"SYSTEM.CNF duplicado.");cnf=item;have_cnf=true;}
        else {need(!have_elf,"Executável duplicado.");elf=item;have_elf=true;}
    }
    need(have_cnf&&have_elf,"ISO sem SYSTEM.CNF ou SLUS_218.12 na raiz.");
    need(cnf.size>0&&cnf.size<=4096,"SYSTEM.CNF inválido.");
    need(elf.size==version.size,"Versão incompatível: é necessária a edição USA auditada.");
    need(cnf.at+cnf.size<=elf.at || elf.at+elf.size<=cnf.at,"Arquivos necessários sobrepostos.");
    const auto cnf_bytes=read_at(file,cnf.at,cnf.size,volume);
    need(std::all_of(cnf_bytes.begin(),cnf_bytes.end(),[](auto n){return n<128;}),"SYSTEM.CNF precisa ser ASCII.");
    std::istringstream lines(std::string(cnf_bytes.begin(),cnf_bytes.end())); std::string line,boot;
    const std::regex expression("^\\s*BOOT2\\s*=\\s*(.*?)\\s*$",std::regex::icase); unsigned count=0;
    while(std::getline(lines,line)) {std::smatch match;if(std::regex_match(line,match,expression)){boot=upper(match[1].str());++count;}}
    need(count==1&&boot==std::string("CDROM0:\\")+serial+";1","SYSTEM.CNF não inicia o executável USA auditado.");
    auto bytes=read_at(file,elf.at,elf.size,volume);
    need(bytes.size()>=52 && std::memcmp(bytes.data(),"\x7f" "ELF\x01\x01\x01",7)==0 &&
         little(bytes,18,2)==8 && little(bytes,24,4)==version.entry,"Executável MIPS/ELF incompatível.");
    need(hash_bytes(bytes)==version.sha256,"Executável modificado ou incompatível: SHA-256 não corresponde.");
    return {std::move(bytes),volume};
}
bool path_exists(const fs::path& path) {
    if(GetFileAttributesW(path.c_str())!=INVALID_FILE_ATTRIBUTES)return true;
    const auto e=GetLastError();
    if(e==ERROR_FILE_NOT_FOUND||e==ERROR_PATH_NOT_FOUND)return false;
    win_error("Não foi possível verificar a pasta de destino",e);
}
class Staging {
public:
    fs::path root,data;
    explicit Staging(const fs::path& parent) {
        for(unsigned attempt=0;attempt<16;++attempt) {
            std::array<unsigned char,16> random{};
            need(BCryptGenRandom(nullptr,random.data(),random.size(),BCRYPT_USE_SYSTEM_PREFERRED_RNG)>=0,
                 "Não foi possível criar uma pasta temporária exclusiva.");
            constexpr wchar_t hex[]=L"0123456789abcdef";std::wstring name=L".speedracer-import-";
            for(auto b:random){name+=hex[b>>4];name+=hex[b&15];}
            root=parent/name;
            if(CreateDirectoryW(root.c_str(),nullptr)) {
                data=root/L"data";
                if(!CreateDirectoryW(data.c_str(),nullptr)) {
                    const auto error=GetLastError();RemoveDirectoryW(root.c_str());
                    win_error("Não foi possível criar a pasta de preparação",error);
                }
                return;
            }
            const auto error=GetLastError();
            if(error!=ERROR_ALREADY_EXISTS)win_error("Sem acesso de gravação: extraia o jogo em uma pasta sua",error);
        }
        throw std::runtime_error("Não foi possível criar uma pasta temporária exclusiva.");
    }
    Staging(const Staging&)=delete;
    Staging& operator=(const Staging&)=delete;
    ~Staging() {
        // No recursive removal or traversal. These are ONLY the fixed files in
        // the new random directory we created. Published data is never touched.
        DeleteFileW((data/L"disc.iso").c_str());DeleteFileW((data/L"SLUS_218.12").c_str());
        DeleteFileW((data/L"preparation.json").c_str());RemoveDirectoryW(data.c_str());RemoveDirectoryW(root.c_str());
    }
};
std::string stream(File& input, std::uint64_t size, File* output,
                   Phase phase, unsigned start, unsigned finish,
                   const Progress& progress, const std::atomic_bool* cancel) {
    input.seek(0);Bytes buffer(chunk_size);Sha256 hash;
    for(std::uint64_t at=0;at<size;) {
        checkpoint(cancel);const DWORD count=static_cast<DWORD>(std::min<std::uint64_t>(buffer.size(),size-at));
        need(input.read(buffer.data(),count)==count,"A ISO foi truncada durante a preparação.");
        if(output)output->write(buffer.data(),count);
        hash.add(buffer.data(),count);at+=count;
        notify(progress,phase,start+static_cast<unsigned>((finish-start)*at/size),cancel);
    }
    unsigned char extra=0;need(input.read(&extra,1)==0,"A ISO mudou de tamanho durante a preparação.");
    if(output)output->flush();return hash.finish();
}
Result prepare_impl(const fs::path& source_path, const fs::path& destination_path, const Version& version,
                    const Progress& progress, const std::atomic_bool* cancel) {
    notify(progress,Phase::inspect,0,cancel);
    const auto source=fs::canonical(source_path);
    const auto requested=fs::absolute(destination_path);
    need(!requested.filename().empty()&&requested.filename()!=L"."&&requested.filename()!=L"..",
         "Pasta de destino inválida.");
    const auto parent=fs::canonical(requested.parent_path()),destination=parent/requested.filename();
    need(!path_exists(destination),"A pasta data já existe. Nenhum arquivo foi substituído; use uma pasta nova para o jogo.");
    File original(source);const auto before=original.info();const auto size=file_size(before);
    const auto details=inspect(original,size,version);
    ULARGE_INTEGER available{};
    if(!GetDiskFreeSpaceExW(parent.c_str(),&available,nullptr,nullptr))win_error("Não foi possível verificar o espaço livre");
    need(available.QuadPart>=size+version.size+chunk_size,"Espaço livre insuficiente para uma cópia completa da ISO.");
    checkpoint(cancel);Staging staging(parent);std::string iso_hash;
    {File output(staging.data/L"disc.iso",true);iso_hash=stream(original,size,&output,Phase::copy,0,32,progress,cancel);}
    Details copied_details;
    {File copied(staging.data/L"disc.iso");
        need(stream(copied,size,nullptr,Phase::verify_copy,32,64,progress,cancel)==iso_hash,"A cópia da ISO falhou na verificação.");
        copied_details=inspect(copied,size,version);}
    need(copied_details.elf==details.elf&&copied_details.volume_bytes==details.volume_bytes,"A ISO mudou durante a cópia.");
    {File executable(staging.data/L"SLUS_218.12",true);executable.write(copied_details.elf.data(),static_cast<DWORD>(copied_details.elf.size()));executable.flush();}
    {File extracted(staging.data/L"SLUS_218.12");need(hash_bytes(read_at(extracted,0,version.size,version.size))==version.sha256,"Verificação do executável extraído falhou.");}
    need(stream(original,size,nullptr,Phase::verify_source,64,98,progress,cancel)==iso_hash&&same_file(before,original.info()),
         "A ISO original mudou durante a preparação.");
    {File current(source);need(same_file(before,current.info()),"O caminho da ISO original mudou durante a preparação.");}
    std::ostringstream manifest;
    manifest<<"{\n  \"schema\": 1,\n  \"serial\": \""<<serial<<"\",\n"
        <<"  \"purpose\": \"private portable data preparation\",\n"
        <<"  \"iso_bytes\": "<<size<<",\n  \"iso_sha256\": \""<<iso_hash<<"\",\n"
        <<"  \"volume_bytes\": "<<details.volume_bytes<<",\n  \"elf_bytes\": "<<version.size<<",\n"
        <<"  \"elf_sha256\": \""<<version.sha256<<"\",\n  \"elf_entry\": \"0x"<<std::hex<<version.entry<<"\",\n"
        <<"  \"source_opened_read_only\": true,\n  \"source_rehashed_and_unchanged_at_check\": true,\n"
        <<"  \"gameplay_validated\": false,\n  \"saves_created\": false\n}\n";
    const auto text=manifest.str();
    {File out(staging.data/L"preparation.json",true);out.write(reinterpret_cast<const unsigned char*>(text.data()),static_cast<DWORD>(text.size()));out.flush();}
    notify(progress,Phase::publish,99,cancel);
    // No replace/copy flags: same-volume directory rename, refusing even an
    // empty destination that appears after our earlier existence check.
    if(!MoveFileExW(staging.data.c_str(),destination.c_str(),0))win_error("Não foi possível concluir a pasta data; nenhum destino existente foi substituído");
    // Once published, a late cancel must not turn a successful import into an
    // apparent failure. The caller may close without starting the game.
    if(progress)progress(Phase::complete,100);
    return {size,iso_hash};
}
}
Result prepare(const fs::path& source,const fs::path& destination,const Progress& progress,const std::atomic_bool* cancel) {
    return prepare_impl(source,destination,audited,progress,cancel);
}
}
