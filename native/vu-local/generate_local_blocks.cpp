// Local experiment only. This TU borrows the exact current recompiler lowering;
// it does not duplicate integer/memory instruction semantics by hand.
#define main vurecomp_original_main
#include "../../recomp/vurecomp.cpp"
#undef main

#include <array>
#include <tuple>

namespace local_generator {
struct Block {
    std::uint32_t entry, bytes, target;
    std::vector<std::uint8_t> code;
};

bool qualify(const Program &p, std::uint32_t entry, Block &b) {
    const std::uint32_t size = entry == 0x3490u ? 80u : 16u;
    static constexpr std::array<std::uint32_t, 10> prefix{
        0x800A06BDu, 0x09025001u, 0x08475000u, 0x08265000u,
        0x10045001u, 0u, 0x800A39F0u, 0x800A31B0u, 0u, 0x8000033Cu};
    for (std::uint32_t off=0; off<size; off+=8) {
        const auto lo=word(p.code,entry+off), hi=word(p.code,entry+off+4);
        // Exact canonical upper NOP, no I/E/M/D/T modifiers.
        if(hi != 0x000002FFu) return false;
        const bool bal=off==size-16;
        if(bal) { if((lo>>25)!=0x21u) return false; }
        else if(entry==0x3490u) {
            if(off==40) { if(lo!=0x10050000u && lo!=0x1005004Bu) return false; }
            else if(lo!=prefix[off/8]) return false;
        } else if(lo!=0x8000033Cu) return false;
        const auto l=lower(lo,entry+off);
        if(!l.supported || l.jump || l.reads_flags || l.reads_status || (l.branch!=bal)) return false;
    }
    b={entry,size,ps2::vu::branch_target(word(p.code,entry+size-16),entry+size-16,kMask),
       std::vector<std::uint8_t>(p.code.begin()+entry,p.code.begin()+entry+size)};
    return true;
}

std::string emit(const Block &b, unsigned n) {
    const auto name=std::format("local_block_{:03}",n);
    std::string out=std::format("static const std::uint8_t code_{:03}[] = {{",n);
    for(auto c:b.code) out+=std::format("0x{:02X},",c);
    out+="};\n";
    out+=std::format("static std::uint32_t {}(Vu0Regs &PS2_VU_REGS_RESTRICT r, std::uint8_t *mem, FlagPipe &fl) {{\n    (void)mem; bool pend=false;\n",name);
    for(std::uint32_t off=0;off<b.bytes;off+=8) {
        std::uint32_t lo; std::memcpy(&lo,b.code.data()+off,4);
        // Lower is the actual current recomp/vurecomp.cpp function above.
        // BAL's generated link write executes before the unmodified delay slot.
        out+=std::format("    {{ ++fl.t; {} }}\n",lower(lo,b.entry+off).code);
    }
    out+=std::format("    (void)pend; return {}u;\n}}\n",b.target);
    return out;
}
}

int main(int argc,char **argv) {
    if(argc!=3) { std::fprintf(stderr,"usage: generate_local_blocks <captures> <new output cpp>\n");return 1; }
    const fs::path output=argv[2];
    if(fs::exists(output)) { std::fprintf(stderr,"refusing existing output\n");return 2; }
    using Key=std::pair<std::uint32_t,std::vector<std::uint8_t>>;
    std::map<Key,local_generator::Block> unique;
    unsigned captures=0,rejected=0;
    for(const auto &file:fs::directory_iterator(argv[1])) {
        if(file.path().extension()!=".bin") continue;
        unsigned long long key=0;unsigned entry=0;
        if(std::sscanf(file.path().stem().string().c_str(),"%llx_%x",&key,&entry)!=2) return 3;
        Program p{key,entry,std::vector<std::uint8_t>(16384)};
        std::ifstream in(file.path(),std::ios::binary);
        in.read(reinterpret_cast<char *>(p.code.data()),p.code.size());
        if(in.gcount()!=16384 || entry!=0x3490u) return 4;
        if(ps2::vu::program_key(p.code.data(),ps2::vu::reachable(p.code.data(),kMask,entry),entry)!=key) return 5;
        ++captures;
        for(auto pc:{0x3490u,0x34E0u,0x34F0u,0x3500u,0x3510u,0x3520u}) {
            local_generator::Block b;
            if(!local_generator::qualify(p,pc,b)) { ++rejected;continue; }
            unique.try_emplace(Key{pc,b.code},b);
        }
    }
    std::string text="#include \"ps2/vu_continuation.hpp\"\nnamespace gen_local {\nusing namespace ps2; using namespace ps2::vuops;\n";
    unsigned n=0;
    for(const auto &[key,b]:unique) text+=local_generator::emit(b,n++);
    text+="static const ps2::vu::LocalContinuation blocks[] = {\n";n=0;
    for(const auto &[key,b]:unique) text+=std::format("    {{{}u,{}u,code_{:03},local_block_{:03}}},\n",b.entry,b.bytes,n,n),++n;
    text+="};\n}\nvoid register_generated_vu_local_blocks() { ps2::vu::register_local_continuations(gen_local::blocks, "+std::to_string(n)+"u); }\n";
    std::ofstream out(output);out<<text;out.close();
    if(!out) return 6;
    std::printf("%u captures, %zu unique local blocks, %u rejected capture/entry combinations\n",captures,unique.size(),rejected);
}
