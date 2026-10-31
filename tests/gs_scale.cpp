#include "gs/gs.hpp"
#include "gs/gpu/gpu.hpp"
#include "ps2/system.hpp"
#include <algorithm>
#include <cstdio>
#include <cstring>
int main(int argc,char **argv) {
    using namespace ps2;using namespace ps2::gs;
    unsigned requested=0;if(argc!=2 || !parse_render_scale(argv[1],requested))return 1;
    g_options.render_scale=requested;
#ifdef _WIN32
    _putenv_s("PS2_GS","cpu");
#else
    setenv("PS2_GS","cpu",1);
#endif
    init();if(!gpu::init(gpu::Mode::primary))return 2;
    if(g_options.render_scale!=requested)return 3;
    std::vector<std::uint32_t> zero(kMemorySize/4),clut(256);
    gpu::write_state(zero,1,clut);
    State st{};st.prim=3;st.prmodecont=st.colclamp=1;
    st.ctx[0].frame=1ull<<16;st.ctx[0].zbuf=1ull<<32;
    st.ctx[0].scissor=(63ull<<16)|(63ull<<48);
    Vertex v[3]{};v[1].x=63*16;v[1].y=17*16;v[2].x=3*16;v[2].y=61*16;
    for(auto &p:v){p.r=p.g=p.b=220;p.a=128;p.q=1;}
    ++g_setup_generation;gpu::draw(st,v,3);
    std::vector<std::uint32_t> raw,palette;std::uint32_t actual=0;
    gpu::read_state(raw,actual,palette);
    if(actual!=requested || raw.size()!=zero.size()*actual*actual)return 4;
    unsigned mixed=0,colored=0;const unsigned samples=actual*actual;
    for(std::size_t word=0;word<zero.size();++word) {
        auto first=raw.begin()+word*samples;
        mixed+=!std::all_of(first,first+samples,[&](auto c){return c==*first;});
        colored+=*first!=0;
    }
    if(!colored || (actual>1 && !mixed))return 5;
    // Every supersample survives a raw state roundtrip (including the last lane).
    gpu::write_state(raw,actual,palette);
    std::vector<std::uint32_t> roundtrip,round_palette;std::uint32_t round_scale=0;
    gpu::read_state(roundtrip,round_scale,round_palette);
    if(roundtrip!=raw || round_scale!=actual)return 6;
    std::vector<std::uint32_t> image;std::uint32_t width=0,height=0;
    if(!gpu::display({0,1,PSMCT32,0,0,64,64,false},image,width,height))return 7;
    if(width!=64*actual || height!=64*actual || image.size()!=width*height)return 8;
    if(std::none_of(image.begin(),image.end(),[](auto p){return (p&0xFFFFFFu)!=0;}))return 9;
    // Legacy 1x guest VRAM readback must still work after high-resolution drawing.
    gpu::download(memory());
    if(read_pixel(PSMCT32,0,1,8,16)!=0x80DCDCDCu)return 10;
    std::printf("GS %ux: %ux%u output, %u mixed-subsample words, %u colored words, exact state roundtrip and guest download PASS\n",
        actual,width,height,mixed,colored);
}
