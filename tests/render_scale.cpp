#include "speedracer_graphics.hpp"
#include <cstdio>
int main(int argc,char **argv) {
    using namespace ps2;
    unsigned scale=3;
    for(auto text:{"0","5","-1","9999999999","2x","2 ",""," 3"})
        if(parse_render_scale(text,scale) || scale!=3)return 1;
    for(unsigned n=1;n<=4;++n) {
        if(!parse_render_scale(std::to_string(n),scale) || scale!=n)return 2;
        const std::uint64_t exact=(8ull<<20)*n*n;
        if(supported_render_scale(4,exact,exact)!=n)return 3;
        if(n>1 && supported_render_scale(n,exact-1,exact)!=n-1)return 4;
        if(n>1 && supported_render_scale(n,exact,exact-1)!=n-1)return 5;
    }
    if(argc!=2)return 6;
    const std::filesystem::path root=argv[1];std::filesystem::create_directories(root);
    const auto path=root/"graphics.ini";
    if(speedracer::graphics::load(root/"absent.ini")!=3)return 7;
    for(unsigned n=1;n<=4;++n) {
        speedracer::graphics::save(path,n);
        if(speedracer::graphics::load(path)!=n)return 8;
    }
    for(auto text:{"resolution=0\n","resolution=5\n","resolution=garbage\n","other=4\n",""}) {
        std::ofstream file(path);file<<text;file.close();
        if(speedracer::graphics::load(path)!=3)return 9;
    }
    {std::ofstream file(path);file<<"resolution=3\r\n";}
    if(speedracer::graphics::load(path)!=3)return 10;
    if(!speedracer::graphics::load_fxaa(root/"absent.ini"))return 12;
    speedracer::graphics::save(path,3,false);
    speedracer::graphics::save(path,4);
    if(speedracer::graphics::load(path)!=4 || speedracer::graphics::load_fxaa(path))return 13;
    speedracer::graphics::save(path,2,true);
    if(!speedracer::graphics::load_fxaa(path))return 14;
    {std::ofstream file(path);file<<"resolution=3\r\nantialiasing=off\r\n";}
    if(speedracer::graphics::load_fxaa(path))return 15;
    if(!speedracer::graphics::load_linear(root/"absent.ini"))return 16;
    speedracer::graphics::save(path,3,true,false);
    speedracer::graphics::save(path,2);
    if(speedracer::graphics::load_linear(path))return 17;
    speedracer::graphics::save(path,3,true,true);
    if(!speedracer::graphics::load_linear(path) || !speedracer::graphics::load_fxaa(path))return 18;
    {std::ofstream file(path);file<<"resolution=3\r\nantialiasing=off\r\ntexture_filter=ps2\r\n";}
    if(speedracer::graphics::load_linear(path) || speedracer::graphics::load_fxaa(path))return 19;
    bool failed=false;
    try{speedracer::graphics::save(root/"absent-parent/graphics.ini",2);}catch(const std::runtime_error&){failed=true;}
    if(!failed)return 11;
    std::puts("Render scale: strict input, exact GPU memory limits, config persistence/corruption/write-failure PASS");
}
