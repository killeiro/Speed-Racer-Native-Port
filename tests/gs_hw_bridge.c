/* SPDX-License-Identifier: GPL-3.0-or-later */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "bridge.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static const SrgsApi* api;
static uint8_t priv[SRGS_PRIV_BYTES];
static unsigned checks;
static void check(int condition,const char* name) {
    char error[256]={0};++checks;
    if(condition)return;
    if(api)api->last_error(error,sizeof(error));
    fprintf(stderr,"FAIL %s: %s\n",name,error);if(api)api->close();exit(1);
}
static void reg(uint32_t offset,uint64_t value){memcpy(priv+offset,&value,8);}
static void setup(void) {
    memset(priv,0,sizeof(priv));
    reg(0,1ull|(1ull<<2)|(1ull<<5)|(0xFFull<<8));
    reg(0x10,4ull|(32ull<<3)|(2ull<<13));reg(0x20,1);
    reg(0x70,10ull<<9);
    reg(0x80,636ull|(50ull<<12)|(3ull<<23)|(2559ull<<32)|(447ull<<44));
}
typedef struct Pair {uint64_t value,address;} Pair;
static void send(const Pair* pairs,uint32_t count,uint32_t path,int fragment) {
    Pair* data=(Pair*)malloc((count+1)*16);
    check(data!=NULL,"allocate GIF");
    data[0]=(Pair){count|(1ull<<15)|(1ull<<60),0xE};memcpy(data+1,pairs,count*16);
    if(fragment) {
        check(api->gif(path,(const uint8_t*)data,16)==0,"separate GIFtag");
        for(uint32_t i=1;i<=count;++i)check(api->gif(path,(const uint8_t*)(data+i),16)==0,"continued A+D");
    } else check(api->gif(path,(const uint8_t*)data,(count+1)*16)==0,"complete GIF");
    free(data);
}
static uint8_t* picture(unsigned scale) {
    SrgsImage info={sizeof(info),0,0,0};
    check(api->read_frame(&info,NULL,0)==SRGS_BUFFER_SMALL,"query image");
    check(info.width==640*scale && info.height==448*scale && info.bytes==info.width*info.height*4,"internal scale");
    uint8_t* image=(uint8_t*)malloc(info.bytes);check(image!=NULL,"allocate image");
    memset(image,0xA5,info.bytes);
    check(api->read_frame(&info,image,info.bytes-1)==SRGS_BUFFER_SMALL && image[0]==0xA5,"short buffer untouched");
    check(api->read_frame(&info,image,info.bytes)==0,"copy image");
    return image;
}
static void color(uint8_t* image,unsigned scale,unsigned x,unsigned y,uint32_t expected,const char* name) {
    uint32_t actual;memcpy(&actual,image+((y*scale)*(640*scale)+x*scale)*4,4);
    check((actual&0xFFFFFF)==expected,name);
}
int main(int argc,char** argv) {
    check(argc==2 || (argc==3 && !strcmp(argv[2],"--headless")),"DLL argument");
    const int headless=argc==3;
    SetEnvironmentVariableA("PS2_GS_FXAA","0");
    SetEnvironmentVariableA("PS2_GS_LINEAR","0");
    HMODULE dll=LoadLibraryA(argv[1]);check(dll!=NULL,"load native GS DLL");
    SrgsGetApi get=(SrgsGetApi)(void*)GetProcAddress(dll,"srgs_get_api");check(get!=NULL,"C export");
    check(get(99,sizeof(SrgsApi))==NULL && get(SRGS_ABI_VERSION,sizeof(SrgsApi)-1)==NULL,"ABI mismatch rejected");
    api=get(SRGS_ABI_VERSION,sizeof(SrgsApi));check(api!=NULL && api->size==sizeof(*api),"ABI table");
    check(api->sync()==SRGS_CLOSED,"closed state rejected");
    HWND window=NULL;
    if(!headless) {
        window=CreateWindowExW(0,L"STATIC",L"Native GS bridge test",WS_OVERLAPPEDWINDOW,
            CW_USEDEFAULT,CW_USEDEFAULT,640,448,NULL,NULL,GetModuleHandleW(NULL),NULL);
        check(window!=NULL,"create hidden renderer test window");
    }
    for(unsigned scale=1;scale<=4;++scale) {
        const unsigned path=scale<=3?scale:3;
        setup();SrgsConfig cfg={sizeof(cfg),scale,SRGS_4_3,0,NULL,NULL};
        SrgsConfig bad=cfg;bad.scale=5;
        check(api->open(&bad,NULL,priv,sizeof(priv))==SRGS_ARGUMENT,"invalid scale rejected");
        check(api->open(&cfg,window,priv,sizeof(priv))==0,"open native Vulkan");
        check(api->gif(0,priv,16)==SRGS_ARGUMENT && api->gif(3,priv,15)==SRGS_ARGUMENT,"invalid GIF rejected");
        check(api->resize(0,448)==SRGS_ARGUMENT,"invalid resize rejected");
        Pair scene[]={
            {10ull<<16,0x4C},{140ull|(1ull<<32),0x4E},{0,0x18},
            {(639ull<<16)|(447ull<<48),0x40},{3ull<<16,0x47},{1,0x1A},{1,0x46},{6,0},
            {0x80000080ull|(0x3F800000ull<<32),1},{0,5},{(640ull*16)|((448ull*16)<<16),5},
            {0x800000FFull|(0x3F800000ull<<32),1},{(64ull*16)|((64ull*16)<<16),5},{(192ull*16)|((192ull*16)<<16),5},
            {3,0},{0x8000FFFFull|(0x3F800000ull<<32),1},
            {(400ull*16)|((40ull*16)<<16),5},{(600ull*16)|((40ull*16)<<16),5},
            {(500ull*16)|((200ull*16)<<16),5}};
        /* Each path's raw stream is exercised. The vertex queue must also
           survive a GIF soft reset; GS CSR/interrupts belong to the caller. */
        if(scale==1) {
            Pair incomplete={2|(1ull<<15)|(1ull<<60),0xE};
            check(api->gif(1,(const uint8_t*)&incomplete,16)==SRGS_ARGUMENT,"partial PATH1 rejected before transfer");
        }
        check(api->soft_reset(7)==0 && api->write_csr(0)==0,"GIF reset and CSR forwarding");
        reg(0x1000,1ull<<13);
        for(unsigned f=0;f<3;++f) {
            send(scene,sizeof(scene)/sizeof(scene[0]),path,scale!=1);
            reg(0x1000,(f&1)?0:1ull<<13);
            check(api->present(priv,sizeof(priv),f&1)==0,"initial present");
        }
        check(api->sync()==0,"drain");
        uint8_t* image=picture(scale);
        color(image,scale,16,16,0x80,"background");color(image,scale,100,100,0xFF,"red rectangle");
        color(image,scale,500,93,0xFFFF,"yellow triangle");
        free(image);
        uint32_t state_bytes=0;
        check(api->save_state(NULL,0,&state_bytes)==SRGS_BUFFER_SMALL && state_bytes>(4u<<20),"freeze size");
        uint8_t* state=(uint8_t*)malloc(state_bytes);check(state!=NULL,"allocate state");
        check(api->save_state(state,state_bytes,&state_bytes)==0,"freeze all GS state");
        Pair download[]={{10ull<<16,0x50},{100ull|(100ull<<16),0x51},{4ull|(1ull<<32),0x52},{1,0x53}};
        send(download,4,3,1);
        uint8_t unaligned[17]={0};uint32_t fifo[4]={0};
        check(api->read_fifo(unaligned+1,16)==0,"unaligned caller FIFO buffer");memcpy(fifo,unaligned+1,16);
        check(fifo[0]==0x800000FF && fifo[3]==0x800000FF,"guest FIFO pixels");
        check(api->reset()==0,"full GS reset");
        check(api->load_state(state,state_bytes-1)==SRGS_ARGUMENT,"incompatible freeze rejected");
        check(api->load_state(state,state_bytes)==0,"restore complete GS state");
        send(download,4,3,1);memset(fifo,0,sizeof(fifo));
        check(api->read_fifo((uint8_t*)fifo,sizeof(fifo))==0,"restored guest FIFO readback");
        check(fifo[0]==0x800000FF && fifo[3]==0x800000FF,"restored guest VRAM");
        check(api->load_state(state,state_bytes)==0,"restore before next draw");free(state);
        /* Freeze restores native GS memory, not the GPU texture-cache objects.
           Validate restored guest VRAM above, then redraw the next whole frame
           as the game does. This does not claim restored high-res samples. */
        send(scene,sizeof(scene)/sizeof(scene[0]),3,0);
        check(api->present(priv,sizeof(priv),0)==0,"present restored state");
        image=picture(scale);color(image,scale,100,100,0xFF,"first full redraw after restore");
        if(scale==3) {
            check(api->close()==0,"close before FXAA comparison");
            SetEnvironmentVariableA("PS2_GS_FXAA","1");
            check(api->open(&cfg,window,priv,sizeof(priv))==0,"open FXAA native Vulkan");
            for(unsigned f=0;f<3;++f) {
                send(scene,sizeof(scene)/sizeof(scene[0]),3,0);
                check(api->present(priv,sizeof(priv),f&1)==0,"FXAA present");
            }
            uint8_t* filtered=picture(scale);
            unsigned changed=0;
            for(unsigned p=0;p<640*448*scale*scale;++p)
                if(memcmp(image+p*4,filtered+p*4,3))++changed;
            check(changed>100 && changed<640*448*scale*scale/4,"FXAA smooths edges without replacing most pixels");
            color(filtered,scale,100,100,0xFF,"FXAA preserves flat rectangle interior");
            free(filtered);SetEnvironmentVariableA("PS2_GS_FXAA","0");
        }
        free(image);
        check(api->close()==0 && api->close()==0,"close joins GS thread");
        printf("C ABI %ux: PATH%u, pixels, FIFO, reset and state roundtrip PASS\n",scale,path);fflush(stdout);
    }
    if(window)check(DestroyWindow(window)!=0,"destroy renderer test window");
    check(FreeLibrary(dll)!=0,"unload DLL");
    printf("PASS %u checks\n",checks);return 0;
}
