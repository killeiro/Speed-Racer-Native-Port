// SPDX-License-Identifier: GPL-3.0-or-later
#include "ps2/system.hpp"
#include "gs/gs.hpp"
#include "gs/gif.hpp"
#include "gs/hardware.hpp"
#include "gs/queue.hpp"
#include "hw.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <thread>
#include <vector>

namespace {
std::atomic<unsigned> checks{0};
void check(bool ok, const char* message) {
    ++checks;
    if (!ok) { std::fprintf(stderr, "FAIL %s\n", message); std::exit(1); }
}
struct Pair { std::uint64_t value, address; };
void send(unsigned path, std::initializer_list<Pair> values, bool fragments = false) {
    std::vector<Pair> packet{{values.size() | (1ull<<15) | (1ull<<60), 0xE}};
    packet.insert(packet.end(), values.begin(), values.end());
    if (fragments) {
        ps2::gif::transfer(path, reinterpret_cast<const std::uint8_t*>(packet.data()), 1);
        for (unsigned i=1; i<packet.size(); ++i)
            ps2::gif::transfer(path, reinterpret_cast<const std::uint8_t*>(packet.data()+i), 1);
    } else ps2::gif::transfer(path, reinterpret_cast<const std::uint8_t*>(packet.data()), unsigned(packet.size()));
}
void display(bool enabled) {
    using ps2::gs::write_privileged;
    write_privileged(0, enabled ? 1ull|(1ull<<2)|(1ull<<5)|(0xFFull<<8) : 0);
    ps2::hw::gs_set_crt(1,2,0);
    write_privileged(0x70, 10ull<<9);
    write_privileged(0x80, 636ull|(50ull<<12)|(3ull<<23)|(2559ull<<32)|(447ull<<44));
}
void scene(unsigned color, unsigned path, bool fragments) {
    send(path, {{10ull<<16,0x4C},{140ull|(1ull<<32),0x4E},{0,0x18},
        {(639ull<<16)|(447ull<<48),0x40},{3ull<<16,0x47},{1,0x1A},{1,0x46},{6,0},
        {0x80000000ull|color|(0x3F800000ull<<32),1},{0,5},{640ull*16|((448ull*16)<<16),5}}, fragments);
    // The live game uses packed RGBA/XYZ, unlike the C ABI's A+D fixtures.
    alignas(16) std::uint32_t packet[16]{};
    const std::uint64_t tag=1ull|(1ull<<15)|(1ull<<46)|(6ull<<47)|(3ull<<60);
    std::memcpy(packet,&tag,8);packet[2]=0x551;
    packet[4]=color;packet[7]=0x80;
    packet[12]=640*16;packet[13]=448*16;
    ps2::gif::transfer(path,reinterpret_cast<const std::uint8_t*>(packet),4);
}
void fifo(unsigned color, unsigned path) {
    send(path, {{10ull<<16,0x50},{0,0x51},{4ull|(1ull<<32),0x52},{1,0x53}}, path!=1);
    // Repeating the same source after a new draw must return NEW pixels.
    alignas(16) std::uint32_t pixels[4]{};
    ps2::gs::read_image(reinterpret_cast<std::uint8_t*>(pixels),1);
    for (const auto p : pixels) check((p&0xFFFFFF)==color,"ordered FIFO pixels, no stale download cache");
}
void frame(unsigned color) {
    std::vector<std::uint32_t> pixels; std::uint32_t w=0,h=0;
    check(ps2::copy_frame(pixels,w,h),"native runtime frame available");
    check(w==1280 && h==896,"2x through runtime privileged-register snapshot");
    check((pixels[(h/2)*w+w/2]&0xFFFFFF)==color,"runtime frame pixel");
}
void textured_copy() {
    // Match the game's offscreen CT24 -> CT16 display blit, including render-target sampling.
    send(3,{{10ull<<16|(1ull<<24),0x4C},{6,0},
        {0x800000FFull|(0x3F800000ull<<32),1},{0,5},{640ull*16|((448ull*16)<<16),5}});
    send(3,{{10ull<<16|(2ull<<24),0x4C},
        {(10ull<<14)|(1ull<<20)|(10ull<<26)|(9ull<<30)|(1ull<<34)|(1ull<<35),6},
        {0,0x14},{6ull|(1ull<<4)|(1ull<<8),0},
        {0x80808080ull|(0x3F800000ull<<32),1},{0,3},{0,5},
        {(640ull*16)|((448ull*16)<<16),3},{640ull*16|((448ull*16)<<16),5}});
    ps2::gs::write_privileged(0x70,(10ull<<9)|(2ull<<15));
}
void signals() {
    send(3,{{0xFFFFFFFF12345678ull,0x60},{0,0x61},{0xFFFFFFFFABCDEF01ull,0x62}},true);
    check((ps2::gs::read_privileged(0x1000)&3)==3,"EE owns SIGNAL and FINISH before GS consume");
    check(ps2::gs::read_privileged(0x1080)==0xABCDEF0112345678ull,"EE owns SIGNAL/LABEL IDs");
    ps2::gs::write_privileged(0x1000,3);
    check((ps2::gs::read_privileged(0x1000)&3)==0,"EE CSR acknowledge");
}
}
int main(int argc,char** argv) {
    check(argc==3,"DLL and mode arguments");
    _putenv_s("PS2_GS","hw"); _putenv_s("PS2_GS_HW_DLL",argv[1]);
    const auto stamp=std::chrono::steady_clock::now().time_since_epoch().count();
    const auto cache=std::filesystem::absolute(std::filesystem::path("tests") / ("hw-cold-cache-"+std::to_string(stamp)));
    check(std::filesystem::create_directories(cache),"fresh shader cache directory");
    _putenv_s("PS2_GS_HW_CACHE",cache.string().c_str());
    ps2::g_options.render_scale=2;
    const bool queued=std::strcmp(argv[2],"queued")==0;
    const bool missing=std::strcmp(argv[2],"missing")==0;
    if (std::strcmp(argv[2],"failurequeued")==0) {
        _putenv_s("PS2_GS_HW_DLL","C:/intentionally-missing-native-gs-test.dll");
        ps2::start_render_thread();ps2::start_vu_thread();
        std::atomic<bool> finished{false};
        std::thread vu(ps2::run_vu_thread),ee([&] {
            ps2::gs::reset();display(true);scene(0x30,1,false);ps2::post_present();
            std::uint8_t data[16];std::memset(data,0xA5,sizeof(data));
            ps2::gs::read_image(data,1);
            for(auto byte:data)check(byte==0,"failed FIFO returns initialized buffer");
            ps2::finish_workers();finished.store(true);ps2::wake_render_thread();
        });
        while(!finished.load()) {
            if(ps2::render_pending(true,{}, {},20)==ps2::Rendered::idle)ps2::wait_render_work(2);
        }
        ee.join();vu.join();check(ps2::graphics_failed(),"failed renderer drains/ACKs both queues");
        ps2::close_graphics();return 0;
    }
    if (missing) {
        ps2::gs::reset(); scene(0x80,1,false);
        check(ps2::graphics_failed(),"missing DLL fails closed without compute/software fallback");
        ps2::close_graphics(); return 0;
    }
    HWND window=nullptr;
    if(std::strcmp(argv[2],"window")==0) {
        window=CreateWindowExW(0,L"STATIC",L"Speed Racer native runtime test",WS_OVERLAPPEDWINDOW,
            CW_USEDEFAULT,CW_USEDEFAULT,640,448,nullptr,nullptr,GetModuleHandleW(nullptr),nullptr);
        check(window!=nullptr,"create hidden native runtime window");
        ps2::WindowTarget target;target.kind=ps2::WindowTarget::Win32;
        // Match host/window.cpp: SDL Win32 uses surface (HWND), not the X11 window ID.
        target.display=GetModuleHandleW(nullptr);target.surface=window;target.width=640;target.height=448;
        ps2::init_graphics();check(ps2::attach_window(target),"native runtime attaches Win32 surface");
        ps2::resize_window(800,600);
    }
    ps2::g_cpu.r[2].d[0]=0x1122334455667788ull;
    const std::uint8_t invalid[4]{};
    check(!ps2::load_state(invalid,sizeof(invalid)),"foreign checkpoint rejected");
    check(ps2::g_cpu.r[2].d[0]==0x1122334455667788ull,"checkpoint rejected before EE mutation");
    check(!ps2::save_state("unimplemented-hardware-checkpoint.state"),"unsupported export rejected");
    check(!std::filesystem::exists("unimplemented-hardware-checkpoint.state"),"unsupported export creates no file");
    std::atomic<bool> done{false};
    unsigned frames=0;
    auto produce=[&] {
        ps2::gs::reset(); ps2::gif::reset(); display(true); signals();
        for(unsigned path=1;path<=3;++path) {
            display(true); scene(path*0x30,path,path!=1);
            if(queued) { ps2::post_present(); display(false); }
            else frame(path*0x30);
            fifo(path*0x30,path);
        }
        // A GIF reset drops a partial PATH2 tag. A subsequent full tag works.
        const Pair partial{5|(1ull<<15)|(1ull<<60),0xE};
        ps2::gif::transfer(2,reinterpret_cast<const std::uint8_t*>(&partial),1);
        ps2::gif::reset(); display(true); scene(0xEE,2,true);
        if(queued) { ps2::post_present(); display(false); } else frame(0xEE);
        fifo(0xEE,2);
        ps2::gs::reset(); ps2::gif::reset(); display(true); scene(0x77,1,false);
        if(queued) { ps2::post_present(); display(false); } else frame(0x77);
        fifo(0x77,1);
        display(true); textured_copy();
        if(queued) { ps2::post_present(); display(false); } else frame(0xF8);
        if(queued) ps2::finish_workers(); else ps2::gs::flush_and_wait();
        done.store(true); ps2::wake_render_thread();
    };
    if(queued) {
        ps2::start_render_thread(); ps2::start_vu_thread();
        std::thread vu(ps2::run_vu_thread), ee(produce);
        while(!done.load()) {
            const auto state=ps2::render_pending(false,[&](const std::uint32_t* p,std::uint32_t w,std::uint32_t h) {
                check(w==1280 && h==896,"queued snapshot survives later EE PMODE change");
                const unsigned colors[]{0x30,0x60,0x90,0xEE,0x77,0xF8};
                check(frames<6 && (p[(h/2)*w+w/2]&0xFFFFFF)==colors[frames],"ordered queued image");
                ++frames;
            },{},20.0);
            if(state==ps2::Rendered::idle) ps2::wait_render_work(2);
        }
        ee.join();vu.join();check(frames==6,"all presents acknowledged before shutdown");
    } else produce();
    check(!ps2::graphics_failed(),"runtime hardware backend healthy");
    ps2::gs::stats();ps2::close_graphics();
    if(window)DestroyWindow(window);
    std::fprintf(stderr,"PASS hardware runtime %s: %u checks\n",argv[2],checks.load());
}
