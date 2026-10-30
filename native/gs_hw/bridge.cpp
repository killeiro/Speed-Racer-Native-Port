// SPDX-License-Identifier: GPL-3.0-or-later
#include "bridge.h"
#include "gif_packet.hpp"
#include "kzgs.h"
#include "kzgs_internal.h"
#include "GS/GS.h"
#include "GS/Renderers/Common/GSRenderer.h"
#include "SaveState.h"
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstring>
#include <windows.h>
#include <exception>
#include <mutex>
#include <string>
#include <vector>

namespace {
std::mutex lock;
bool opened=false;
alignas(16) std::array<uint8_t,SRGS_PRIV_BYTES> registers{};
std::vector<uint8_t> image, frozen;
uint32_t image_width=0, image_height=0;
std::string error;
struct alignas(16) FifoWord { uint8_t bytes[16]; };
std::vector<FifoWord> fifo_buffer;
void invalidate() { image.clear(); frozen.clear(); image_width=image_height=0; }
int32_t fail(const char* message,int32_t status=SRGS_FAILED) { error=message; return status; }
template<class F> int32_t call(F operation) noexcept {
    std::lock_guard guard(lock);
    try { error.clear(); return operation(); }
    catch(const std::exception& e) { error=e.what(); return SRGS_FAILED; }
    catch(...) { error="Unhandled GS bridge exception"; return SRGS_FAILED; }
}
int32_t require_open() { return opened?SRGS_OK:fail("GS bridge is closed",SRGS_CLOSED); }
template<class F> void on_gs_thread(F operation) {
    std::exception_ptr failure;
    kzgs::RunOnGSThread([&](){try{operation();}catch(...){failure=std::current_exception();}});
    if(failure)std::rethrow_exception(failure);
}
int32_t SRGS_CALL open(const SrgsConfig* cfg,void* hwnd,const uint8_t* priv,uint32_t count) {
    return call([&]() -> int32_t {
        if(!cfg||cfg->size!=sizeof(*cfg)||cfg->scale<1||cfg->scale>4||cfg->aspect>SRGS_FILL||cfg->vsync>1||!priv||count!=registers.size())
            return fail("Invalid config or privileged-register block",SRGS_ARGUMENT);
        if(opened) return fail("Only one GS bridge can be open");
        std::memcpy(registers.data(),priv,registers.size()); invalidate();
        KzgsConfig config;
        config.renderer=KzgsRenderer::Vulkan;
        config.upscale=int(cfg->scale);config.aspect=KzgsAspect(cfg->aspect);config.vsync=cfg->vsync!=0;
        // This frontend sends exact per-path streams, including partial GIFtags.
        config.selfContainedGifPackets=false;config.maxQueuedFrames=1;
        config.halfPixelOffset=2;config.autoFlush=1;config.nativeScaling=0;
        // SDL and this DLL can use different CRT environment snapshots.
        // Read the Win32 process environment used by the native launcher.
        char fxaa[2]{};
        const DWORD fxaa_size=GetEnvironmentVariableA("PS2_GS_FXAA",fxaa,sizeof(fxaa));
        if(fxaa_size>1||(fxaa_size==1&&fxaa[0]!='0'&&fxaa[0]!='1'))return fail("PS2_GS_FXAA must be 0 or 1",SRGS_ARGUMENT);
        config.fxaa=fxaa_size==1&&fxaa[0]=='1';
        char linear[2]{};
        const DWORD linear_size=GetEnvironmentVariableA("PS2_GS_LINEAR",linear,sizeof(linear));
        if(linear_size>1||(linear_size==1&&linear[0]!='0'&&linear[0]!='1'))return fail("PS2_GS_LINEAR must be 0 or 1",SRGS_ARGUMENT);
        const bool linear_textures=linear_size==1&&linear[0]=='1';
        config.textureFiltering=linear_textures?KzgsTextureFilter::Forced:KzgsTextureFilter::PS2;
        std::fprintf(stderr,"[native-gs] texture filtering %s\n",linear_textures?"bilinear including sprites":"PS2");
        config.smaa=config.edgeAA=false;
        std::fprintf(stderr,"[native-gs] FXAA %s\n",config.fxaa?"enabled":"disabled");
        config.loadTextureReplacements=config.dumpTextures=false;
        if(cfg->resources_utf8)config.resourcesDir=cfg->resources_utf8;
        if(cfg->cache_utf8)config.cacheDir=cfg->cache_utf8;
        kzgsSetLogCallback([](int level,const char* text){std::fprintf(stderr,"[native-gs %d] %s\n",level,text);});
        opened=kzgsOpen(hwnd,config,registers.data(),&error);
        if(!opened) { kzgsClose(); return SRGS_FAILED; }
        return SRGS_OK;
    });
}
int32_t SRGS_CALL close() { return call([]() -> int32_t {kzgsClose();opened=false;invalidate();return SRGS_OK;}); }
int32_t SRGS_CALL gif(uint32_t path,const uint8_t* data,uint32_t bytes) {
    return call([&]() -> int32_t {
        if(auto r=require_open())return r;
        if(path<1||path>3||!data||!bytes||(bytes&15u)||bytes>(16u<<20))return fail("Invalid GIF stream chunk",SRGS_ARGUMENT);
        if(path==1&&!srgs::complete_path1(data,bytes))return fail("PATH1 requires a complete EOP packet",SRGS_ARGUMENT);
        invalidate();kzgsGifTransfer(int(path),data,bytes/16);return SRGS_OK;
    });
}
int32_t SRGS_CALL present(const uint8_t* priv,uint32_t bytes,uint32_t field) {
    return call([&]() -> int32_t {
        if(auto r=require_open())return r;
        if(!priv||bytes!=registers.size()||field>1)return fail("Invalid present snapshot",SRGS_ARGUMENT);
        invalidate();std::memcpy(registers.data(),priv,bytes);kzgsVsync(int(field),true);return SRGS_OK;
    });
}
int32_t SRGS_CALL sync() {return call([]() -> int32_t {if(auto r=require_open())return r;kzgsSync();return SRGS_OK;});}
int32_t SRGS_CALL reset() {return call([]() -> int32_t {if(auto r=require_open())return r;invalidate();kzgsReset();return SRGS_OK;});}
int32_t SRGS_CALL soft_reset(uint32_t mask) {return call([&]() -> int32_t {
    if(auto r=require_open())return r;if(mask>7)return fail("Invalid path mask",SRGS_ARGUMENT);
    invalidate();kzgsSoftReset(mask);return SRGS_OK;});}
int32_t SRGS_CALL write_csr(uint32_t value) {return call([&]() -> int32_t {
    if(auto r=require_open())return r;invalidate();kzgsWriteCSR(value);return SRGS_OK;});}
int32_t SRGS_CALL resize(uint32_t w,uint32_t h) {return call([&]() -> int32_t {
    if(auto r=require_open())return r;if(!w||!h||w>16384||h>16384)return fail("Invalid window size",SRGS_ARGUMENT);
    invalidate();kzgsResize(int(w),int(h));return SRGS_OK;});}
int32_t SRGS_CALL read_frame(SrgsImage* info,uint8_t* data,uint32_t capacity) {
    return call([&]() -> int32_t {
        if(auto r=require_open())return r;
        if(!info||info->size!=sizeof(*info)||(!data&&capacity))return fail("Invalid image buffer",SRGS_ARGUMENT);
        if(image.empty()) {
            int w=0,h=0;
            const bool available=kzgsReadback(image,w,h);
            if(!available||w<=0||h<=0||image.size()>UINT32_MAX||image.size()!=size_t(w)*h*4) {
                image.clear();image_width=image_height=0;
                return fail("GS output is not available");
            }
            image_width=uint32_t(w);image_height=uint32_t(h);
        }
        info->width=image_width;info->height=image_height;info->bytes=uint32_t(image.size());
        if(!data||capacity<image.size())return SRGS_BUFFER_SMALL;
        std::memcpy(data,image.data(),image.size());image.clear();return SRGS_OK;
    });
}
int32_t SRGS_CALL read_fifo(uint8_t* data,uint32_t bytes) {
    return call([&]() -> int32_t {
        if(auto r=require_open())return r;
        if(!data||!bytes||(bytes&15u)||bytes>(4u<<20))return fail("Invalid FIFO read",SRGS_ARGUMENT);
        invalidate();fifo_buffer.resize(bytes/16);
        on_gs_thread([&](){GSInitAndReadFIFO(reinterpret_cast<uint8_t*>(fifo_buffer.data()),bytes/16);});
        std::memcpy(data,fifo_buffer.data(),bytes);return SRGS_OK;
    });
}
int32_t SRGS_CALL save_state(uint8_t* data,uint32_t capacity,uint32_t* required) {
    return call([&]() -> int32_t {
        if(auto r=require_open())return r;
        if(!required||(!data&&capacity))return fail("Invalid freeze buffer",SRGS_ARGUMENT);
        if(frozen.empty()) {
            int result=-1;
            on_gs_thread([&](){
                freezeData state{};
                result=GSfreeze(FreezeAction::Size,&state);
                if(result||state.size<=0||state.size>(16<<20))return;
                frozen.resize(size_t(state.size));state.data=frozen.data();
                g_gs_renderer->Flush(GSState::SAVESTATE);
                g_gs_renderer->ReadbackTextureCache();
                result=GSfreeze(FreezeAction::Save,&state);
            });
            if(result||frozen.empty())return fail("GS freeze failed");
        }
        *required=uint32_t(frozen.size());
        if(!data||capacity<frozen.size())return SRGS_BUFFER_SMALL;
        std::memcpy(data,frozen.data(),frozen.size());frozen.clear();return SRGS_OK;
    });
}
int32_t SRGS_CALL load_state(const uint8_t* data,uint32_t bytes) {
    return call([&]() -> int32_t {
        if(auto r=require_open())return r;
        if(!data||!bytes||bytes>(16u<<20))return fail("Invalid GS state",SRGS_ARGUMENT);
        int result=-1;bool valid=false;
        on_gs_thread([&](){
            freezeData state{};
            if(GSfreeze(FreezeAction::Size,&state)||uint32_t(state.size)!=bytes)return;
            valid=true;state.data=const_cast<uint8_t*>(data);result=GSfreeze(FreezeAction::Load,&state);
        });
        if(!valid)return fail("Incompatible GS state size",SRGS_ARGUMENT);
        invalidate();return result?fail("GS state restore failed"):SRGS_OK;
    });
}
uint32_t SRGS_CALL last_error(char* data,uint32_t capacity) {
    std::lock_guard guard(lock);
    if(data&&capacity){auto n=std::min<size_t>(error.size(),capacity-1);std::memcpy(data,error.data(),n);data[n]=0;}
    return uint32_t(std::min<size_t>(error.size()+1,UINT32_MAX));
}
const SrgsApi api{SRGS_ABI_VERSION,sizeof(SrgsApi),open,close,gif,present,sync,reset,soft_reset,write_csr,resize,read_frame,read_fifo,save_state,load_state,last_error};
}
extern "C" __declspec(dllexport) const SrgsApi* SRGS_CALL srgs_get_api(uint32_t version,uint32_t bytes) noexcept {
    return version==SRGS_ABI_VERSION&&bytes==sizeof(SrgsApi)?&api:nullptr;
}
