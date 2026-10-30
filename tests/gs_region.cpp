#include "../runtime/src/gs/gpu/gpu.cpp"
#include <random>

int main() {
#ifdef _WIN32
    _putenv_s("PS2_GS", "cpu");
#else
    setenv("PS2_GS", "cpu", 1);
#endif
    ps2::gs::init();
    using namespace ps2::gs;
    using namespace ps2::gs::gpu;
    const auto offset = region(0,4,PSMCT32,128,128,191,159);
    const auto origin = region(0,4,PSMCT32,0,0,63,31);
    if (overlaps_vram(offset,origin)) {
        std::puts("FAIL: offset rectangle spuriously includes the buffer origin");
        return 1;
    }
    std::mt19937 rng(0x6a522);
    unsigned rectangles=0, changed=0;
    for (auto psm : {PSMCT32,PSMCT24,PSMCT16,PSMCT16S,PSMT8,PSMT4,PSMT8H,PSMT4HL,PSMT4HH,PSMZ32,PSMZ24,PSMZ16,PSMZ16S}) {
        for (unsigned test=0;test<100;++test) {
            auto bp=rng()&0x3fffu,bw=rng()&63u;
            int x=rng()%2048,y=rng()%2048,width=1+rng()%257,height=1+rng()%257;
            if(test==0) {bp=0x3fffu;bw=1;x=60;y=28;width=200;height=200;}
            const auto ranges=physical_ranges(region(bp,bw,psm,x,y,x+width-1,y+height-1));
            std::memset(memory(),0,kMemorySize);
            for(unsigned sample=0;sample<50;++sample) {
                const auto px=sample<4?x+((sample&1)?width-1:0):x+rng()%width;
                const auto py=sample<4?y+((sample&2)?height-1:0):y+rng()%height;
                write_pixel(psm,bp,bw,px,py,0xffffffffu);
            }
            // Validate against real CPU swizzle writes, not another range formula.
            auto *words=reinterpret_cast<const std::uint64_t *>(memory());
            for(unsigned word=0;word<kMemorySize/8;++word) {
                if(!words[word])continue;
                for(unsigned byte=0;byte<8;++byte) {
                    if(!memory()[word*8+byte])continue;
                    const unsigned at=word*8+byte;
                    bool found=false;
                    for(unsigned i=0;i<ranges.count;++i) found|=ranges.ranges[i].overlaps(at,at+1);
                    if(!found) {std::fprintf(stderr,"FAIL: psm=%x bp=%x bw=%u rect=%d,%d,%d,%d escaped byte=%x\n",psm,bp,bw,x,y,width,height,at);return 2;}
                    ++changed;
                }
            }
            ++rectangles;
        }
    }
    if(changed==0)return 3;
    std::printf("GS regions: %u rectangles / %u actual swizzled bytes covered, including wrap and unaligned bases\n",rectangles,changed);
}
