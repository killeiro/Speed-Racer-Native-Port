#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <random>

namespace {
std::uint64_t candidate_ranges=0,reference_ranges=0,*active_ranges=nullptr;
std::uint64_t candidate_shared=0,reference_shared=0,*active_shared=nullptr;
}
#define GS_SNAPSHOT_RANGE(setup, level) (++*active_ranges, texture_range(setup, level))
#define GS_SNAPSHOT_SHARED(out, a, b) (++*active_shared, add_shared_vram(out, a, b))
#include "gpu_snapshot_candidate.cpp"
#include "gpu_snapshot_reference.cpp"
#undef GS_SNAPSHOT_RANGE
#undef GS_SNAPSHOT_SHARED

namespace candidate=ps2::gs::gpu;
namespace reference=ps2::gs::gpu_snapshot_reference;
using ps2::gs::State;
using Encoded=std::array<std::uint32_t,31>;
namespace {
unsigned cases=0;
std::uint64_t primitives=0,nonempty_snapshots=0;
void require(bool value,const char *what) {
    if(!value){std::fprintf(stderr,"FAIL snapshot case %u: %s\n",cases,what);std::exit(1);}
}
void set_mip(Encoded &w,unsigned level,unsigned bp,unsigned bw) {
    const auto group=(level-1)/3,shift=((level-1)%3)*20;
    auto packed=std::uint64_t(w[27+group*2])|(std::uint64_t(w[28+group*2])<<32);
    packed=(packed&~(0xfffffull<<shift))|((std::uint64_t(bp)|(std::uint64_t(bw)<<14))<<shift);
    w[27+group*2]=std::uint32_t(packed);w[28+group*2]=std::uint32_t(packed>>32);
}
Encoded descriptor(std::mt19937 &rng,unsigned pattern,unsigned id) {
    State state{};state.colclamp=1;state.prmodecont=1;
    auto &c=state.ctx[0];
    const unsigned formats[]={0,1,2,10,19,20,27,36,44,48,49,50,58};
    c.frame=(1ull<<16)|((pattern%4==0?1ull:0ull)<<24);
    c.zbuf=(1ull<<32);
    c.scissor=(255ull<<16)|(255ull<<48);
    c.tex0=(id*32u)|(1ull<<14)|(std::uint64_t(formats[rng()%13])<<20)|(6ull<<26)|(5ull<<30);
    c.tex1=((rng()%7)<<2)|((rng()%6)<<6);
    if(pattern%7==0)c.tex1|=1ull|(std::uint64_t(0xff0u)<<32);
    if(pattern%11==0)c.tex1|=(1u<<9);
    const unsigned mode=rng()%4;
    c.clamp=mode|(std::uint64_t(rng()%4)<<2)|(std::uint64_t(rng()%64)<<4)|
        (std::uint64_t(rng()%256)<<14)|(std::uint64_t(rng()%64)<<24)|(std::uint64_t(rng()%256)<<34);
    Encoded w{};
    const auto flags=16u|256u|((pattern%3==0)?0u:8u);
    candidate::make_setup(state,flags,w.data());
    if(pattern%13==0)w[0]&=~2u;
    if(pattern%5==0)w[12]=16383u;
    for(unsigned level=1;level<=6;++level)
        set_mip(w,level,pattern%9==0?16383u:(id*32u+level*64u),1u+(rng()%3));
    return w;
}
template<typename Batch,typename Reads>
void prepare(Batch &b,Reads &reads,const std::vector<Encoded> &setups,
             const std::vector<std::uint32_t> &records,unsigned pattern) {
    b=Batch{};reads.clear();
    b.fbp=pattern%5==0?16352u:0u;b.fbw=1;b.fpsm=pattern%4==0?1u:0u;
    b.zbp=pattern%8==0?0u:16320u;b.zpsm=pattern%3==0?49u:48u;
    b.zwrite=pattern%2;b.zte=b.zwrite;
    b.minx=pattern%19;b.miny=pattern%23;b.maxx=b.minx+63;b.maxy=b.miny+63;
    for(const auto &s:setups)b.setups.insert(b.setups.end(),s.begin(),s.end());
    b.prims=records;
    for(const auto &s:setups)for(unsigned level=0;level<=candidate::active_mips(s.data());++level) {
        const auto r=candidate::texture_range(s.data(),level);
        typename Reads::value_type value;value.add(r.lo,r.hi);reads.push_back(value);
    }
    if(pattern%17==0)reads.clear();
}
void compare(const std::vector<Encoded> &setups,const std::vector<std::uint32_t> &records,unsigned pattern,unsigned scale) {
    ++cases;primitives+=records.size()/28;
    prepare(candidate::g_batch,candidate::g_batch_reads,setups,records,pattern);
    prepare(reference::g_batch,reference::g_batch_reads,setups,records,pattern);
    candidate::g_scale=reference::g_scale=scale;
    candidate::g_commands.clear();reference::g_commands.clear();
    candidate::g_param_records.clear();reference::g_param_records.clear();
    std::uint32_t alo=55,ahi=66,blo=55,bhi=66;
    active_ranges=&candidate_ranges;active_shared=&candidate_shared;
    const auto a=candidate::snapshot_batch(std::uint32_t(records.size()/28),alo,ahi);
    active_ranges=&reference_ranges;active_shared=&reference_shared;
    const auto b=reference::snapshot_batch(std::uint32_t(records.size()/28),blo,bhi);
    require(a==b&&alo==blo&&ahi==bhi,"snapshot size or bounds differ");
    nonempty_snapshots+=a!=0;
    require(candidate::g_param_records==reference::g_param_records,"ordered GPU parameters differ");
    require(candidate::g_commands.size()==reference::g_commands.size(),"dispatch count differs");
    for(std::size_t i=0;i<candidate::g_commands.size();++i) {
        const auto &x=candidate::g_commands[i];const auto &y=reference::g_commands[i];
        require(x.pipeline==unsigned(y.pipeline)&&x.x==y.x&&x.y==y.y&&x.param==y.param,"ordered dispatch differs");
    }
    require(candidate::g_batch.prims==records&&reference::g_batch.prims==records,"primitive payload mutated");
    require(candidate::g_batch.setups==reference::g_batch.setups,"descriptor payload differs");
    require(candidate::g_batch_reads.size()==reference::g_batch_reads.size(),"read set mutated");
    for(std::size_t i=0;i<candidate::g_batch_reads.size();++i)
        require(candidate::g_batch_reads[i].lo==reference::g_batch_reads[i].lo&&
                candidate::g_batch_reads[i].hi==reference::g_batch_reads[i].hi,"read range mutated");
}
void append(std::vector<std::uint32_t> &out,unsigned index,unsigned kind,unsigned offset) {
    std::uint32_t rec[28]{};rec[0]=index;rec[1]=kind;
    rec[2]=(offset%80)|((offset%64)<<16);rec[3]=(offset%80+15)|((offset%64+15)<<16);
    rec[4]=candidate::f2u(float(offset%80));rec[5]=candidate::f2u(float(offset%64));
    rec[6]=rec[7]=candidate::f2u(16.f);
    rec[15]=candidate::f2u(float(offset%80*16));rec[16]=candidate::f2u(float(offset%64*16));
    rec[18]=candidate::f2u(float((offset%80+16)*16));rec[19]=candidate::f2u(float((offset%64+16)*16));
    out.insert(out.end(),rec,rec+28);
}
}
int main() {
    std::mt19937 rng(0x15a5a771);
    for(unsigned pattern=0;pattern<2200;++pattern) {
        const unsigned count=1+rng()%8;
        std::vector<Encoded> setups;
        for(unsigned i=0;i<count;++i)setups.push_back(descriptor(rng,pattern,i));
        std::vector<std::uint32_t> records;
        const unsigned n=pattern%29==0?0u:pattern%31==0?1024u:1u+rng()%256;
        for(unsigned i=0;i<n;++i) {
            const unsigned index=pattern%4==0?i%count:pattern%4==1?i/32%count:0u;
            append(records,index,i%3==0?1u:0u,rng()%256);
        }
        for(unsigned scale:{1u,2u,3u,4u})compare(setups,records,pattern,scale);
    }
    // Explicit same-word sprites: framebuffer identity, high-lane/halfword
    // formats, fixed/dynamic mip bounds and descriptor reuse across skipped draws.
    for(unsigned format:{0u,1u,2u,10u,27u,36u,44u})for(unsigned mip=0;mip<=6;++mip) {
        auto s=descriptor(rng,1,0);s[0]|=2u|16u;s[0]&=~16384u;
        s[1]=s[12]=0;s[2]=s[13]=1;s[3]=s[14]=format;
        s[25]=mip?((mip<<2)|(5u<<6)):1u;s[26]=0;
        for(unsigned level=1;level<=6;++level)set_mip(s,level,0,1);
        auto skipped=s;skipped[0]&=~2u;
        std::vector<Encoded> setups{s,skipped,s};
        std::vector<std::uint32_t> records;
        for(unsigned i=0;i<512;++i)append(records,i%11==0?1:i<256?0:2,1,i);
        for(unsigned scale:{1u,2u,3u,4u})compare(setups,records,1,scale);
    }
    // The same eligible mip descriptor contributes only once even across
    // skipped untextured records. At mip0 every primitive still contributes.
    for(unsigned mip=0;mip<=6;++mip)for(unsigned scale:{1u,2u,3u,4u}) {
        auto s=descriptor(rng,2,0);s[0]|=2u;s[12]=0;s[13]=1;s[14]=0;
        s[25]=mip?((mip<<2)|(5u<<6)):0u;s[26]=0;
        for(unsigned level=1;level<=6;++level)set_mip(s,level,0,1);
        auto skipped=s;skipped[0]&=~2u;
        std::vector<std::uint32_t> records;
        for(unsigned i=0;i<1024;++i) {
            if(i%11==0)append(records,1,0,i);
            append(records,0,0,i);
        }
        const auto a=candidate_shared,b=reference_shared;
        compare({s,skipped},records,2,scale);
        require(candidate_shared-a==(mip?mip+1u:1024u),"mip dedup or nonmip contribution count");
        require(reference_shared-b==(mip+1u)*1024u,"frozen v16 contribution count");
    }
    // Re-enter descriptors after eligible nonmip/mip changes and skipped
    // records, including wrapped upper-level bases and sprite own-word gates.
    for(unsigned mip=1;mip<=6;++mip) {
        auto a=descriptor(rng,1,0);a[0]|=2u;a[12]=0;a[13]=1;a[14]=0;
        a[25]=(mip<<2)|(5u<<6);a[26]=0;
        auto skipped=a;skipped[0]&=~2u;
        auto nonmip=a;nonmip[25]=0;
        auto wrapped=a;for(unsigned l=1;l<=6;++l)set_mip(wrapped,l,16383,1);
        const unsigned ids[]={0,1,0,2,0,3};
        std::vector<std::uint32_t> records;
        for(unsigned i=0;i<768;++i)append(records,ids[i/16%6],i%3==0?1:0,i);
        for(unsigned scale:{1u,2u,3u,4u})compare({a,skipped,nonmip,wrapped},records,1,scale);
    }
    require(nonempty_snapshots>100,"positive snapshots not exercised");
    require(candidate_ranges==reference_ranges,"descriptor bounds derivations changed");
    require(candidate_shared<reference_shared,"mip union reuse not exercised");
    std::printf("GS snapshots: %u cases / %llu primitives / %llu positive snapshots; exact ordered GPU payloads; texture bounds candidate=%llu reference=%llu; shared unions candidate=%llu reference=%llu\n",
        cases,(unsigned long long)primitives,(unsigned long long)nonempty_snapshots,
        (unsigned long long)candidate_ranges,(unsigned long long)reference_ranges,
        (unsigned long long)candidate_shared,(unsigned long long)reference_shared);
}
