#include "ps2/display.hpp"
#include <cmath>
#include <cstdio>
int main() {
    using namespace ps2;
    const auto near=[](float a,float b){return std::abs(a-b)<0.01f;};
    for (auto size : {DisplayViewport{0,0,1920,1080}, {0,0,3440,1440},
                      {0,0,1280,1024}, {0,0,1080,1920}, {0,0,960,720}}) {
        for (auto mode : {DisplayAspect::Auto,DisplayAspect::Stretch}) {
            const auto v=display_viewport(size.width,size.height,mode);
            if(v.x!=0 || v.y!=0 || v.width!=size.width || v.height!=size.height)return 1;
        }
        for(auto mode : {DisplayAspect::Original,DisplayAspect::Wide}) {
            const auto v=display_viewport(size.width,size.height,mode);
            const float ratio=mode==DisplayAspect::Original?4.f/3.f:16.f/9.f;
            if(!near(v.width/v.height,ratio) || v.x < -0.01f || v.y < -0.01f ||
               !near(v.x*2+v.width,size.width) || !near(v.y*2+v.height,size.height))return 2;
        }
    }
    if(display_viewport(0,720,DisplayAspect::Auto).width!=0)return 3;
    if(display_viewport(960,0,DisplayAspect::Wide).height!=0)return 4;
    if(display_screen_type(1920,1080,DisplayAspect::Auto)!=2 ||
       display_screen_type(960,720,DisplayAspect::Auto)!=0 ||
       display_screen_type(3440,1440,DisplayAspect::Auto)!=2 ||
       display_screen_type(1920,1080,DisplayAspect::Original)!=0 ||
       display_screen_type(960,720,DisplayAspect::Wide)!=2)return 5;
    DisplayAspect parsed=DisplayAspect::Original;
    for(auto text:{"auto","4:3","16:9","stretch"})if(!parse_display_aspect(text,parsed))return 6;
    if(parse_display_aspect("unknown",parsed))return 7;
    std::puts("Display: fill/ratio fitting, wide/portrait sizes, zero-size guards and guest screen selection PASS");
}
