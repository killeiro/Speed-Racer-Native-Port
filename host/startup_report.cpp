// SPDX-License-Identifier: MIT
#include "startup_report.hpp"
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <cpuid.h>
#include <fstream>
#include <stdexcept>
#include <string>
#include <cstdint>
#include <cstring>

namespace speedracer {
namespace {
std::string utf8(const wchar_t* text) {
    const int n=WideCharToMultiByte(CP_UTF8,0,text,-1,nullptr,0,nullptr,nullptr);
    if(n<1)return "unavailable";
    std::string out(n,'\0');WideCharToMultiByte(CP_UTF8,0,text,-1,out.data(),n,nullptr,nullptr);
    out.resize(n-1);return out;
}
}
void verify_graphics_runtime(const std::filesystem::path& beside) {
    for (const wchar_t* name : {L"SpeedRacerGS.dll", L"SDL2.dll", L"shaderc_shared.dll", L"dxcompiler.dll",
        L"libstdc++-6.dll", L"libgcc_s_seh-1.dll", L"libwinpthread-1.dll", L"libpng16.dll", L"jpeg62.dll",
        L"libwebp.dll", L"libsharpyuv.dll", L"z.dll", L"zstd.dll"}) {
        std::error_code error;
        if (!std::filesystem::is_regular_file(beside/name, error))
            throw std::runtime_error("Pacote incompleto: " + utf8(name) + ". Extraia o ZIP por completo em uma pasta nova.");
    }
    // This is the same dependent-DLL resolution used by the GS. Merely finding
    // DLLs in this PC's System32 does not make MSVC libraries part of Windows.
    const auto path=beside/L"shaderc_shared.dll";
    const HMODULE compiler=LoadLibraryExW(path.c_str(),nullptr,
        LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR|LOAD_LIBRARY_SEARCH_DEFAULT_DIRS);
    if (!compiler) {
        const auto error=GetLastError();
        throw std::runtime_error("Não foi possível carregar a dependência gráfica shaderc_shared.dll (Windows " +
            std::to_string(error) + ").\n\nConfira se o ZIP foi extraído por completo. Se faltar o Visual C++ x64, "
            "use o atalho oficial na pasta prerequisites e depois abra o jogo novamente.");
    }
    FreeLibrary(compiler);
    const HMODULE loader=LoadLibraryExW(L"vulkan-1.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (!loader) throw std::runtime_error("O driver Vulkan não está disponível. Instale o driver gráfico oficial para sua placa e abra o jogo novamente.");
    FreeLibrary(loader);
}
std::filesystem::path write_startup_report(const std::filesystem::path& beside,bool avx2) {
    const auto folder=beside/L"diagnostics";
    std::filesystem::create_directories(folder);
    const auto path=folder/(L"startup-"+std::to_wstring(GetCurrentProcessId())+L"-"+std::to_wstring(GetTickCount64())+L".txt");
    std::ofstream out(path,std::ios::binary);
    if(!out)throw std::runtime_error("Não foi possível gravar o diagnóstico; extraia o jogo em uma pasta sua.");
    out<<"Speed Racer private alpha v37 — startup report\n";
    out<<"AVX2 CPU/OS available: "<<(avx2?"yes":"no")<<"\n";
    char brand[49]{};unsigned a,b,c,d;
    if(__get_cpuid_max(0x80000000,nullptr)>=0x80000004) {
        for(unsigned i=0;i<3;++i) {
            __cpuid(0x80000002+i,a,b,c,d);
            const unsigned values[]={a,b,c,d};std::memcpy(brand+16*i,values,sizeof(values));
        }
        out<<"CPU: "<<brand<<"\n";
    }
    SYSTEM_INFO system{};GetNativeSystemInfo(&system);
    out<<"Logical processors: "<<system.dwNumberOfProcessors<<"\n";
    MEMORYSTATUSEX memory{};memory.dwLength=sizeof(memory);
    if(GlobalMemoryStatusEx(&memory))out<<"RAM bytes: "<<memory.ullTotalPhys<<"\n";
    // Manifest declares Windows 10/11 support so GetVersionEx reports the
    // actual build rather than the compatibility version of an unmanifested EXE.
    OSVERSIONINFOW version{};version.dwOSVersionInfoSize=sizeof(version);
    if(GetVersionExW(&version))out<<"Windows: "<<version.dwMajorVersion<<'.'<<version.dwMinorVersion<<" build "<<version.dwBuildNumber<<"\n";
    DISPLAY_DEVICEW device{};device.cb=sizeof(device);
    for(DWORD index=0;EnumDisplayDevicesW(nullptr,index,&device,0);++index) {
        if(device.StateFlags&DISPLAY_DEVICE_ATTACHED_TO_DESKTOP)out<<"Display adapter: "<<utf8(device.DeviceString)<<"\n";
        device={};device.cb=sizeof(device);
    }
    const HMODULE vulkan=LoadLibraryExW(L"vulkan-1.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
    out<<"System Vulkan loader: "<<(vulkan?"found":"not found")<<"\n";
    if(vulkan) {
        using EnumerateVersion=int(WINAPI*)(std::uint32_t*);
        const auto enumerate=reinterpret_cast<EnumerateVersion>(GetProcAddress(vulkan,"vkEnumerateInstanceVersion"));
        std::uint32_t version_number=1u<<22;
        if(enumerate&&enumerate(&version_number)!=0)version_number=0;
        out<<"Loader API (not GPU capability certification): "<<((version_number>>22)&127)<<'.'<<((version_number>>12)&1023)<<'.'<<(version_number&4095)<<"\n";
        FreeLibrary(vulkan);
    }
    for(const wchar_t* name:{L"SpeedRacerGS.dll",L"SDL2.dll",L"shaderc_shared.dll",L"dxcompiler.dll",
        L"libstdc++-6.dll",L"libgcc_s_seh-1.dll",L"libwinpthread-1.dll",L"libpng16.dll",L"jpeg62.dll",
        L"libwebp.dll",L"libsharpyuv.dll",L"z.dll",L"zstd.dll"}) {
        std::error_code ec;const auto length=std::filesystem::file_size(beside/name,ec);
        out<<utf8(name)<<": "<<(ec?"missing":std::to_string(length)+" bytes")<<"\n";
    }
    wchar_t system_directory[32768]{};
    if(GetSystemDirectoryW(system_directory,32768)) {
        for(const wchar_t* name:{L"msvcp140.dll",L"vcruntime140.dll",L"vcruntime140_1.dll"}) {
            std::error_code ec;
            const bool present=std::filesystem::is_regular_file(beside/name,ec)||
                std::filesystem::is_regular_file(std::filesystem::path(system_directory)/name,ec);
            out<<"External MSVC prerequisite "<<utf8(name)<<": "<<(present?"present (version not certified)":"missing")<<"\n";
        }
    }
    out<<"No usernames, computer names, product/device IDs, media paths or network data collected.\n"
       <<"Actual renderer/device/driver and gameplay diagnostics are in the runtime log.\n";
    out.flush();if(!out)throw std::runtime_error("Falha ao concluir o relatório de diagnóstico.");
    return path;
}
}
