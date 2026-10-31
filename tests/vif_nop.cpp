#include <algorithm>
#include <array>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <random>
#include <string>
#include <vector>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

#include "vif_reference.cpp"
#include "vif_candidate.cpp"

// Deterministic host dependencies: the complete, unmodified VIF parsers above
// still perform all command decoding, payload parsing, state mutation, UNPACK,
// MPG and interrupt decisions. These stubs record their external side effects.
namespace fixture {
std::vector<std::uint64_t> trace;
ps2::gs::queue::Role thread_role = ps2::gs::queue::Role::Emulation;
bool shadow_active = false;
std::uint64_t digest(const void *data, std::size_t bytes) {
    auto *p = static_cast<const std::uint8_t *>(data);
    std::uint64_t h = 1469598103934665603ull;
    for (std::size_t i = 0; i < bytes; ++i) h = (h ^ p[i]) * 1099511628211ull;
    return h;
}
void event(unsigned kind, std::uint64_t a = 0, std::uint64_t b = 0, std::uint64_t c = 0) {
    trace.insert(trace.end(), {kind,a,b,c});
}
}

namespace ps2 {
std::uint8_t g_vu0_code[4096], g_vu0_mem[4096], g_vu1_code[16384], g_vu1_mem[16384];
namespace gs::queue {
[[gnu::noinline]] Role &role() { return fixture::thread_role; }
[[gnu::noinline]] bool vu_active() { return fixture::shadow_active; }
Ring &vu() { static Ring q; return q; }
void Ring::post(Type type, std::uint32_t a, std::uint32_t b, const void *data, std::uint32_t bytes) {
    fixture::event(1, type, (static_cast<std::uint64_t>(a) << 32) | b, fixture::digest(data,bytes));
}
}
namespace dmac { void resume(int unit) { fixture::event(2,unit); } }
namespace hw { void intc_raise(unsigned cause) { fixture::event(3,cause); } }
namespace vu {
void set_tops(std::uint32_t top, std::uint32_t itop) { fixture::event(4,top,itop); }
void run(int unit, std::uint32_t address) { fixture::event(5,unit,address); }
std::uint32_t tpc(int unit) { fixture::event(6,unit); return 24; }
void code_changed(int unit) { fixture::event(7,unit); }
void code_changed(int unit, std::uint32_t, std::uint32_t) { code_changed(unit); }
}
namespace gif {
void set_path3_masked(bool masked) { fixture::event(8,masked); }
void scan_signals(int path, const std::uint8_t *data, std::uint32_t qwc) { fixture::event(9,path,qwc,fixture::digest(data,qwc*16)); }
void transfer(int path, const std::uint8_t *data, std::uint32_t qwc) { fixture::event(10,path,qwc,fixture::digest(data,qwc*16)); }
}
}

namespace {
struct Operation {
    enum Type { Run, Transfer, Write } type = Run;
    std::vector<std::uint32_t> data;
    unsigned reg = 0, value = 0;
};
struct Result { std::vector<std::uint8_t> bytes; std::vector<std::uint64_t> trace; };
int checked = 0, failures = 0;

template<class Unit>
void seed_unit(Unit &u, std::uint32_t seed) {
    u = Unit{};
    u.stat = seed & 0x3f;
    u.mark = seed ^ 0x845;
    u.cycle = 0x0101;
    u.num = (seed & 0xff) + 1; // NOP must not modify an existing NUM value.
    u.code = 0x07550000u | (seed & 0xffff);
    u.base = seed & 0x3f;
    u.tops = u.base;
    for (unsigned i = 0; i < 4; ++i) { u.row[i] = seed + i; u.col[i] = seed * 3 + i; }
}

Result replay(bool candidate, int unit, ps2::gs::queue::Role role, bool shadow,
              std::uint32_t seed, const std::vector<Operation> &operations, bool stalled = false, bool ignore_irq = false) {
    using namespace ps2;
    fixture::trace.clear(); fixture::thread_role=role; fixture::shadow_active=shadow;
    auto initialize = [&](auto &units, auto &worker, auto &counts, auto &dry) {
        seed_unit(units[0],seed); seed_unit(units[1],seed+1); seed_unit(worker,seed+2);
        units[unit].stalled = stalled; units[unit].err = ignore_irq;
        worker.stalled = stalled; worker.err = ignore_irq;
        for (unsigned i=0;i<2;++i) for (unsigned op=0;op<128;++op) counts[i][op]=seed+op+i;
        std::memset(dry,0x9b,sizeof(dry));
    };
    if (candidate) initialize(vif_candidate::g_units,vif_candidate::g_vu_side,vif_candidate::g_commands,vif_candidate::g_dry_run);
    else initialize(vif_reference::g_units,vif_reference::g_vu_side,vif_reference::g_commands,vif_reference::g_dry_run);
    std::memset(g_vu0_code,0x7d,sizeof g_vu0_code); std::memset(g_vu1_code,0x7d,sizeof g_vu1_code);
    std::memset(g_vu0_mem,0x39,sizeof g_vu0_mem); std::memset(g_vu1_mem,0x39,sizeof g_vu1_mem);
    state::Writer writer;
    for (const auto &op : operations) {
        if (op.type == Operation::Run) {
            auto consumed = candidate ? vif_candidate::run(unit,op.data.data(),op.data.size()) : vif_reference::run(unit,op.data.data(),op.data.size());
            writer.pod(consumed);
        } else if (op.type == Operation::Transfer) {
            if (candidate) vif_candidate::transfer(unit,reinterpret_cast<const std::uint8_t *>(op.data.data()),op.data.size()/4);
            else vif_reference::transfer(unit,reinterpret_cast<const std::uint8_t *>(op.data.data()),op.data.size()/4);
        } else {
            if (candidate) vif_candidate::write(unit,op.reg,op.value); else vif_reference::write(unit,op.reg,op.value);
        }
        if (candidate) vif_candidate::state(writer); else vif_reference::state(writer);
    }
    writer.pod(g_vu0_code); writer.pod(g_vu1_code); writer.pod(g_vu0_mem); writer.pod(g_vu1_mem);
    if (candidate) { writer.pod(vif_candidate::g_commands); writer.pod(vif_candidate::g_dry_run); }
    else { writer.pod(vif_reference::g_commands); writer.pod(vif_reference::g_dry_run); }
    return {std::move(writer.out), fixture::trace};
}

void check(const char *name, const std::vector<Operation> &operations, std::uint32_t seed, bool stalled=false, bool ignore_irq=false) {
    using ps2::gs::queue::Role;
    for (int unit=0;unit<2;++unit) for (Role role : {Role::Emulation,Role::Vu}) for (bool shadow : {false,true}) {
        const auto ref=replay(false,unit,role,shadow,seed,operations,stalled,ignore_irq);
        const auto got=replay(true,unit,role,shadow,seed,operations,stalled,ignore_irq);
        ++checked;
        if (ref.bytes != got.bytes || ref.trace != got.trace) {
            ++failures;
            std::printf("FAIL %s unit=%d role=%u shadow=%d bytes=%zu/%zu trace=%zu/%zu\n",name,unit,unsigned(role),shadow,ref.bytes.size(),got.bytes.size(),ref.trace.size(),got.trace.size());
        }
    }
}

Operation run(std::vector<std::uint32_t> words) { return {Operation::Run,std::move(words)}; }
Operation transfer(std::vector<std::uint32_t> words) { words.resize((words.size()+3)&~std::size_t(3)); return {Operation::Transfer,std::move(words)}; }
Operation write(unsigned reg,unsigned value) { return {Operation::Write,{},reg,value}; }

void correctness() {
    check("empty",{run({})},1);
    for (unsigned n=1;n<130;++n) check("zero runs",{run(std::vector<std::uint32_t>(n))},n);
    check("NOP CODE bits",{run({0,0x00000001,0,0x00120000,0,0x007fffff,0})},2);
    check("stalled on entry",{run({0,0,0,0x07000012})},3,true);
    check("IRQ NOP",{transfer({0,0x80000000,0,0x07000012}),write(0x10,8)},4);
    check("IRQ disabled by ERR",{transfer({0,0x80000000,0,0x07000012})},5,false,true);
    check("IRQ at boundary",{transfer({0,0,0,0x80000000}),transfer({0,0,0,0}),write(0x10,8)},6);
    check("IRQ with immediate",{transfer({0x80000077,0,0,0}),write(0x10,8)},7);
    check("incomplete STROW",{transfer({0,0,0,0x30000000}),transfer({0,0,0,0}),transfer({0,0,0,0})},8);
    check("incomplete STCOL",{transfer({0,0,0,0x31000000}),transfer({1,0,3,0}),transfer({0,0,0,0})},9);
    check("incomplete MPG",{transfer({0,0,0,0x4a020007}),transfer({0,0,0,0}),transfer({0,0,0,0})},10);
    check("incomplete DIRECT",{transfer({0,0,0,0x50000002}),transfer({0,0,0,0}),transfer({0,0,0,0})},11);
    check("UNPACK zero payload",{transfer({0,0x6c020000,0,0}),transfer({0,0,0,0}),transfer({0,0,0,0})},12);
    check("commands and stale NUM",{run({0,0x01000201,0,0x02000017,0,0x03000011,0,0x04000009,0,0x05000002,0,0x06008000,0,0x0700abcd,0})},13);
    check("VU commands",{run({0,0x14000017,0,0x1500000a,0,0x17000000,0})},14);
    check("incomplete command untouched",{run({0,0,0x30000000,0,0})},15);
    check("pending reset",{transfer({0,0,0,0x30000000}),write(0x10,1),transfer({0,0,0,0})},16);
    check("multiple pending IRQs",{transfer({0x80000000,0,0x80000000,0}),transfer({0,0,0x80000000,0}),write(0x10,8),write(0x10,8),write(0x10,8)},17);
    // MASK=0 is data for every lane, including encoded masked commands.
    // Cover all formats, signedness, normal/skip/fill cycles, ROW modes and NUM=256.
    for (unsigned vn=0;vn<4;++vn) for (unsigned vl=0;vl<4;++vl) for (unsigned usn=0;usn<2;++usn)
        for (unsigned num : {1u,2u,15u,64u,255u,256u}) for (unsigned cycle : {0x0101u,0x0204u,0x0402u,0x0000u}) for (unsigned mode=0;mode<3;++mode) {
            const unsigned cmd=0x70000000u|(vn<<26)|(vl<<24)|((num&255u)<<16)|(usn<<14)|((num&1)<<15)|1020u;
            ps2::vif_reference::Unit u;u.cycle=cycle;
            std::vector<std::uint32_t> words{0x20000000u,0u,0x30000000u,0x7fffffffu,0x80000000u,0xffffffffu,1u,
                0x31000000u,0x10203040u,0x50607080u,0x90a0b0c0u,0xd0e0f000u,0x01000000u|cycle,0x05000000u|mode,cmd};
            const auto payload=ps2::vif_reference::unpack_words(cmd,u,num);
            for(unsigned i=0;i<payload;++i)words.push_back((i*0x9e3779b9u)^0x807fff00u);
            words.push_back(0x070000a5u);
            check("zero MASK all formats/cycles/modes",{run(words)},num+cycle+mode);
        }
    // Aliased data sources are valid: reads of each vector precede its writes.
    fixture::thread_role=ps2::gs::queue::Role::Emulation;fixture::shadow_active=false;
    for(int unit=0;unit<2;++unit) for(unsigned vn=0;vn<4;++vn) for(unsigned vl=0;vl<4;++vl)
        for(unsigned num : {2u,8u}) for(unsigned at : {0u,1u,2u,255u}) for(unsigned source : {0u,4u,16u}) {
            std::vector<std::uint8_t> expected;
            for(bool candidate : {false,true}) {
                auto *mem=unit?ps2::g_vu1_mem:ps2::g_vu0_mem;
                const unsigned bytes=unit?16384:4096;
                for(unsigned i=0;i<bytes;++i)mem[i]=static_cast<std::uint8_t>(i*97u+(i>>7));
                const unsigned cmd=0x70000000u|(vn<<26)|(vl<<24)|(num<<16)|at;
                if(candidate) {
                    auto &u=ps2::vif_candidate::g_units[unit];u=ps2::vif_candidate::Unit{};u.cycle=0x0101;
                    ps2::vif_candidate::unpack(unit,cmd,reinterpret_cast<const std::uint32_t*>(mem+source));
                } else {
                    auto &u=ps2::vif_reference::g_units[unit];u=ps2::vif_reference::Unit{};u.cycle=0x0101;
                    ps2::vif_reference::unpack(unit,cmd,reinterpret_cast<const std::uint32_t*>(mem+source));
                }
                if(!candidate)expected.assign(mem,mem+bytes);
                else {++checked;if(!std::equal(expected.begin(),expected.end(),mem)){++failures;std::printf("FAIL zero MASK alias unit=%d vn=%u vl=%u num=%u at=%u source=%u\n",unit,vn,vl,num,at,source);}}
            }
        }
    // CL=0 has no payload. Exercise all 256 per-row selector patterns,
    // encoded WL=0/NUM=0, row-3 saturation, TOPS/wrap, dry mode and IRQ parsing.
    const unsigned lengths[] = {1u,2u,3u,4u,5u,15u,63u,168u,240u,255u,256u};
    for (unsigned selectors=0;selectors<256;++selectors)
        for (unsigned encoded_wl : {0u,1u,2u,3u,4u,5u,16u,255u}) {
            const unsigned num=lengths[(selectors+encoded_wl)%11];
            const unsigned mask=selectors*0x01010101u;
            const unsigned cmd=0x70000000u|((selectors&3u)<<26)|(((selectors>>2)&3u)<<24)|
                ((num&255u)<<16)|((selectors&1u)<<14)|((selectors&1u)<<15)|((selectors*29u)&1023u);
            check("CL0 selectors/formats/wrap",{run({0x20000000u,mask,
                0x30000000u,0x7fffffffu,0x80000000u,0xffffffffu,1u,
                0x31000000u,0x10203040u,0x50607080u,0x90a0b0c0u,0xd0e0f000u,
                0x01000000u|(encoded_wl<<8),0x05000000u|(selectors&3u),cmd,0x070000a5u})},selectors+encoded_wl);
        }
    for (unsigned mask : {0u,0xffffffffu,0x00ffff55u,0xaaff0055u,0xc6395aa5u,0x5555ffffu,0xff000000u})
        for (unsigned encoded_wl : {0u,1u,2u,3u,4u,5u,7u,16u,255u})
            for (unsigned num : lengths) for (unsigned mode=0;mode<4;++mode) {
                const unsigned cmd=0x7c000000u|((num&255u)<<16)|0x83fdu;
                check("CL0 distinct rows/tail",{transfer({0x20000000u,mask,
                    0x01000000u|(encoded_wl<<8),0x05000000u|mode,cmd,
                    0x80000000u,0,0}),write(0x10,8),transfer({0x30000000u,7u,13u,17u}),
                    transfer({23u,cmd,0,0})},num+mode+encoded_wl,false,mode==3);
            }
    // A null source verifies that CL=0 does not even read a payload, regardless
    // of input format. Full memory and ROW contents must match the old parser.
    fixture::thread_role=ps2::gs::queue::Role::Emulation;fixture::shadow_active=false;
    for (int unit=0;unit<2;++unit) for(unsigned format=0;format<16;++format)
        for(unsigned encoded_wl : {0u,1u,3u,5u,255u}) for(unsigned mode=0;mode<4;++mode) {
            auto *mem=unit?ps2::g_vu1_mem:ps2::g_vu0_mem;
            const unsigned size=unit?16384:4096;
            const unsigned cmd=0x70000000u|(format<<24)|255u; // NUM=0 means 256.
            ps2::vif_reference::Unit ref;ref.cycle=encoded_wl<<8;ref.mode=mode;ref.mask=0xc6395aa5u;
            ps2::vif_candidate::Unit got;got.cycle=ref.cycle;got.mode=mode;got.mask=ref.mask;
            for(unsigned j=0;j<4;++j) {ref.row[j]=got.row[j]=0xffffffffu-j;ref.col[j]=got.col[j]=j*0x12345678u;}
            std::memset(mem,0x39,size);
            ps2::vif_reference::unpack(unit,cmd,nullptr,ref,false);
            std::vector<std::uint8_t> expected(mem,mem+size);
            std::memset(mem,0x39,size);
            ps2::vif_candidate::unpack(unit,cmd,nullptr,got,false);
            ++checked;
            if(!std::equal(expected.begin(),expected.end(),mem)||!std::equal(std::begin(ref.row),std::end(ref.row),got.row)||ref.num!=got.num) {
                ++failures;std::printf("FAIL CL0 null payload unit=%d format=%u wl=%u mode=%u\n",unit,format,encoded_wl,mode);
            }
        }
    std::mt19937 rng(0x4e4f5001);
    for (unsigned trial=0;trial<1200;++trial) {
        std::vector<std::uint32_t> words;
        // Valid synthetic commands plus payloads that contain zeroes. Parsing
        // may start a payload in one transfer and finish it in the next one.
        for (unsigned c=0;c<80;++c) {
            const unsigned kind=rng()%15;
            if (kind<5) { words.insert(words.end(),rng()%33,0); continue; }
            if (kind==5) words.push_back(0x00000001u | ((rng()&255u)<<16));
            if (kind==6) words.push_back(0x07000000u | (rng()&65535u));
            if (kind==7) { words.push_back(0x20000000u); words.push_back(rng()); }
            if (kind==8) { words.push_back(0x30000000u); for(unsigned i=0;i<4;++i) words.push_back((rng()&3)?0:rng()); }
            if (kind==9) { words.push_back(0x31000000u); for(unsigned i=0;i<4;++i) words.push_back(rng()); }
            if (kind==10) { words.push_back(0x6c010000u|(rng()&1023u)); for(unsigned i=0;i<4;++i) words.push_back((rng()&3)?0:rng()); }
            if (kind==11) { words.push_back(0x80000000u); }
            if (kind==12) { words.push_back(0x4a010000u|(rng()&1023u)); words.push_back(0); words.push_back(rng()); }
            if (kind==13) {
                const unsigned cycle=std::array<unsigned,6>{0x0101,0x0204,0x0402,0x0100,0x0000,0x0307}[rng()%6];
                const unsigned mode=rng()%3, num=std::array<unsigned,12>{1,2,3,4,7,8,15,16,63,64,255,256}[rng()%12];
                const unsigned cmd=0x60000000u | ((rng()%4)<<26) | ((rng()%4)<<24) |
                    ((rng()&1)<<28) | ((num&255u)<<16) | ((rng()&3)<<14) | (rng()&1023u);
                words.push_back(0x01000000u|cycle); words.push_back(0x05000000u|mode);
                ps2::vif_reference::Unit u; u.cycle=cycle;
                const auto payload=ps2::vif_reference::unpack_words(cmd,u,num);
                words.push_back(cmd);
                for(unsigned i=0;i<payload;++i) words.push_back((rng()&3)?0:rng());
                words.push_back(0x01000101); words.push_back(0x05000000); // restore base cycle/mode.
            }
            if (kind==14) words.push_back(0x06000000u|((rng()&1)<<15));
        }
        words.resize((words.size()+3)&~std::size_t(3));
        std::vector<Operation> ops;
        for(std::size_t pos=0;pos<words.size();) {
            const std::size_t end=std::min(words.size(),pos+4*(1+rng()%8));
            ops.push_back(transfer({words.begin()+pos,words.begin()+end})); pos=end;
            if ((rng()&3)==0) ops.push_back(write(0x10,8));
        }
        ops.push_back(write(0x10,8));
        check("random fragmented streams",ops,rng(),false,(trial&1));
    }
    std::printf("Differential: %d cases, %d failures; serialized VIF state after every operation, command counters, VU memories/code, dry-run memory and IRQ/GIF/DMA traces.\n",checked,failures);
}

using Parser = std::size_t(*)(int,const std::uint32_t*,std::size_t);
[[gnu::noinline]] double bench(Parser parser, const std::vector<std::uint32_t> &words, unsigned repeats, bool vu_role) {
    fixture::thread_role=vu_role?ps2::gs::queue::Role::Vu:ps2::gs::queue::Role::Emulation;
    fixture::shadow_active=false;
    ps2::vif_reference::reset(); ps2::vif_reference::reset_vu_side();
    ps2::vif_candidate::reset(); ps2::vif_candidate::reset_vu_side();
    fixture::trace.clear();
    std::uint64_t consumed=0;
    const auto begin=std::chrono::steady_clock::now();
    for(unsigned r=0;r<repeats;++r) consumed+=parser(1,words.data(),words.size());
    const auto end=std::chrono::steady_clock::now();
    if(consumed!=std::uint64_t(words.size())*repeats) std::abort();
    return std::chrono::duration<double,std::nano>(end-begin).count()/(words.size()*double(repeats));
}

void fill_benchmarks() {
    std::puts("pattern,trial,reference_ns_per_word,candidate_ns_per_word,speedup");
    for(unsigned pattern=0;pattern<3;++pattern) {
        const unsigned mask=pattern==0?0x00ffff55u:pattern==1?0xc6395aa5u:0u;
        const unsigned cycle=pattern==0?0x0300u:pattern==1?0x0800u:0x0101u;
        const unsigned cmd=pattern==2?0x6c020000u:0x7cf00000u;
        std::vector<std::uint32_t> words{0x20000000u,mask,0x01000000u|cycle,0x05000000u};
        for(unsigned i=0;i<2000;++i) {
            words.push_back(cmd|(i&1023u));
            if(pattern==2) for(unsigned j=0;j<8;++j)words.push_back(i*0x9e3779b9u+j);
        }
        for(unsigned trial=0;trial<5;++trial) {
            double ref,got;
            if(trial&1) {got=bench(ps2::vif_candidate::run,words,100,true);ref=bench(ps2::vif_reference::run,words,100,true);}
            else {ref=bench(ps2::vif_reference::run,words,100,true);got=bench(ps2::vif_candidate::run,words,100,true);}
            std::printf("%u,%u,%.4f,%.4f,%.4f\n",pattern,trial,ref,got,ref/got);std::fflush(stdout);
        }
    }
}

void benchmarks() {
#ifdef _WIN32
    const unsigned cpus=GetActiveProcessorCount(ALL_PROCESSOR_GROUPS);
    if(cpus && cpus<=sizeof(DWORD_PTR)*8) SetThreadAffinityMask(GetCurrentThread(),DWORD_PTR(1)<<(cpus-1));
#endif
    std::puts("pattern,role,trial,reference_ns_per_word,candidate_ns_per_word,speedup");
    for (unsigned pattern=0;pattern<6;++pattern) {
        std::vector<std::uint32_t> words(40000);
        const char *name;
        if(pattern==0) name="all-zero";
        if(pattern==1) { name="runs-3"; for(unsigned i=3;i<words.size();i+=4) words[i]=0x07000001; }
        if(pattern==2) { name="runs-15"; for(unsigned i=15;i<words.size();i+=16) words[i]=0x07000001; }
        if(pattern==3) { name="alternating"; for(unsigned i=1;i<words.size();i+=2) words[i]=0x07000001; }
        if(pattern==4) { name="no-zero"; std::fill(words.begin(),words.end(),0x07000001); }
        if(pattern==5) { name="unpack-zero-payload"; words.clear(); for(unsigned i=0;i<4000;++i) words.insert(words.end(),{0x6c010000,0,0,0,0,0,0,0,0,0}); }
        for(bool vu_role : {false,true}) for(unsigned trial=0;trial<7;++trial) {
            double ref,got;
            if(trial&1) { got=bench(ps2::vif_candidate::run,words,500,vu_role); ref=bench(ps2::vif_reference::run,words,500,vu_role); }
            else { ref=bench(ps2::vif_reference::run,words,500,vu_role); got=bench(ps2::vif_candidate::run,words,500,vu_role); }
            std::printf("%s,%s,%u,%.4f,%.4f,%.4f\n",name,vu_role?"VU":"EE",trial,ref,got,ref/got);
            std::fflush(stdout);
        }
    }
}
}

int main(int argc,char **argv) {
    if(argc>1 && std::string(argv[1])=="--bench") benchmarks();
    else if(argc>1 && std::string(argv[1])=="--fill-bench") fill_benchmarks();
    else correctness();
    return failures?1:0;
}
