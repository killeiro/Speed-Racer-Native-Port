#include "vu_micro.hpp"
#include "hw.hpp"
#include "ps2/memory.hpp"
#include "ps2/state.hpp"
#include "ps2/vu_continuation.hpp"
#include "gs/queue.hpp"
#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <stdexcept>
#include <vector>

// Lookup-only placeholders. Never execute these as guest continuations: this
// fixture verifies byte identity/cache invalidation, separately from the actual
// generated forty-block full-state/FlagPipe/GIF differential fixture.
static std::uint32_t first(ps2::Vu0Regs &, std::uint8_t *, ps2::vuops::FlagPipe &) {
    std::abort();
}
static std::uint32_t second(ps2::Vu0Regs &, std::uint8_t *, ps2::vuops::FlagPipe &) {
    std::abort();
}

int main() {
    using namespace ps2;
    unsigned checks = 0;
    const auto require = [&](bool value, const char *label) {
        ++checks;
        if (!value) { std::fprintf(stderr, "VU local cache: %s FAILED\n", label); std::abort(); }
    };
    const auto rejects_argument = [&](const vu::LocalContinuation &span, const char *label) {
        bool rejected = false;
        try { vu::register_local_continuations(&span, 1); }
        catch (const std::invalid_argument &) { rejected = true; }
        require(rejected, label);
    };
    const bool off = std::getenv("PS2_VU_LOCAL_BLOCKS_OFF") ||
        std::getenv("PS2_VU_CONT_OFF") || std::getenv("PS2_VU_INTERPRET");
    const bool reuse = !std::getenv("PS2_VU_RANGE_REUSE_OFF");
    constexpr std::array<std::uint32_t, 6> pcs{0x3490u,0x34E0u,0x34F0u,0x3500u,0x3510u,0x3520u};
    std::array<std::vector<std::uint8_t>, 6> source, expected;
    for (std::size_t n = 0; n < pcs.size(); ++n) {
        source[n].resize(n == 0 ? 80 : 16);
        for (std::size_t i = 0; i < source[n].size(); ++i)
            source[n][i] = static_cast<std::uint8_t>((37u * i + 11u * n + 3u) & 255u);
        expected[n] = source[n];
    }
    rejects_argument({0u,16u,source[1].data(),first}, "unlisted entry rejected");
    rejects_argument({0x3490u,8u,source[0].data(),first}, "short span rejected");
    rejects_argument({0x3490u,264u,source[0].data(),first}, "oversized span rejected");
    rejects_argument({0x3490u,17u,source[0].data(),first}, "unaligned byte count rejected");
    rejects_argument({0x3FF8u,16u,source[0].data(),first}, "wrapping/unlisted span rejected");
    rejects_argument({0x3490u,80u,nullptr,first}, "null expected bytes rejected");
    rejects_argument({0x3490u,80u,source[0].data(),nullptr}, "null function rejected");
    bool rejected_null = false;
    try { vu::register_local_continuations(nullptr,1); }
    catch (const std::invalid_argument &) { rejected_null = true; }
    require(rejected_null,"null descriptor table rejected");
    std::array<vu::LocalContinuation,6> spans;
    for (std::size_t i = 0; i < spans.size(); ++i)
        spans[i] = {pcs[i],static_cast<std::uint32_t>(source[i].size()),source[i].data(),first};
    vu::register_local_continuations(spans.data(),static_cast<std::uint32_t>(spans.size()));
    auto alternate = expected[0];
    for (auto &b : alternate) b ^= 0x55u;
    const vu::LocalContinuation alt{pcs[0],80u,alternate.data(),second};
    vu::register_local_continuations(&alt,1);
    require(vu::local_continuation_stats().registered == 7,"seven owned lookup spans");
    vu::register_local_continuations(&spans[0],1);
    require(vu::local_continuation_stats().registered == 7,"same function/span registration is idempotent");
    rejects_argument({pcs[0],80u,source[0].data(),second},"ambiguous function for same bytes rejected");
    for (auto &bytes : source) for (auto &b : bytes) b ^= 0xAAu;
    // Registry must own its expected bytes rather than retain caller buffers.
    const auto load = [&](std::size_t i) {
        std::memcpy(g_vu1_code + pcs[i],expected[i].data(),expected[i].size());
        vu::code_changed(1);
    };
    vu::reset();
    for (std::size_t i = 0; i < pcs.size(); ++i) {
        load(i);
        require(vu::lookup_local_continuation(pcs[i]) == (off ? nullptr : first),"owned span identity or disabled feature");
    }
    if (off) {
        const auto stats=vu::local_continuation_stats();
        require(stats.calls==0 && stats.byte_validations==0 && stats.range_reuses==0 && stats.cache_hits==0,
                "all three opt-out flags bypass local lookup work");
        std::printf("VU local cache: %u checks PASS (disabled)\n",checks);
        return 0;
    }
    require(vu::lookup_local_continuation(0)==nullptr,"unregistered PC stays legacy");
    require(vu::lookup_local_continuation(pcs[0]+1)==nullptr,"misaligned PC never uses local block");
    for (std::size_t i = 0; i < pcs.size(); ++i) {
        load(i);
        require(vu::lookup_local_continuation(pcs[i])==first,"initial exact bytes select expected function");
        auto a=vu::local_continuation_stats();
        require(vu::lookup_local_continuation(pcs[i])==first,"same serial positive cache identity");
        auto b=vu::local_continuation_stats();
        require(b.byte_validations==a.byte_validations && b.cache_hits==a.cache_hits+1,
                "same serial skips repeated byte validation");
        // Includes every opcode, immediate, upper word, BAL and delay-slot byte.
        for (std::size_t at=0;at<expected[i].size();++at) {
            load(i);require(vu::lookup_local_continuation(pcs[i])==first,"every-byte seed");
            a=vu::local_continuation_stats();
            g_vu1_code[pcs[i]+at]^=0x80u;vu::code_changed(1,pcs[i]+static_cast<std::uint32_t>(at),1);
            require(vu::lookup_local_continuation(pcs[i])==nullptr,"changed prefix or delay byte rejects stale function");
            b=vu::local_continuation_stats();
            require(b.byte_validations>a.byte_validations && b.range_reuses==a.range_reuses,
                    "overlap uses exact comparison");
            g_vu1_code[pcs[i]+at]^=0x80u;vu::code_changed(1,pcs[i]+static_cast<std::uint32_t>(at),1);
            require(vu::lookup_local_continuation(pcs[i])==first,"restored byte selects original function");
        }
    }
    load(0);require(vu::lookup_local_continuation(pcs[0])==first,"disjoint seed");
    auto a=vu::local_continuation_stats();
    for (unsigned at : {0x0000u,0x1EB0u,0x2810u}) {
        g_vu1_code[at]^=1;vu::code_changed(1,at,1);
    }
    require(vu::lookup_local_continuation(pcs[0])==first,"changed callees preserve independent local prefix");
    auto b=vu::local_continuation_stats();
    require(b.range_reuses==a.range_reuses+(reuse?1u:0u),"actual journal path for disjoint callees");
    require(reuse ? b.byte_validations==a.byte_validations : b.byte_validations>a.byte_validations,
            "range opt-out retains exact comparison");
    // A wrapped description remains disjoint from this middle-of-memory span.
    a=vu::local_continuation_stats();
    g_vu1_code[16383]^=1;g_vu1_code[0]^=1;vu::code_changed(1,16383,2);
    require(vu::lookup_local_continuation(pcs[0])==first,"wrapped disjoint write identity");
    b=vu::local_continuation_stats();
    require(b.range_reuses==a.range_reuses+(reuse?1u:0u),"wrapped disjoint proof");
    for (unsigned kind=0;kind<4;++kind) {
        a=vu::local_continuation_stats();g_vu1_code[64]^=1;
        if (kind==0)vu::code_changed(1);
        else vu::code_changed(1,64,kind==1?0u:kind==2?16384u:std::numeric_limits<std::uint32_t>::max());
        require(vu::lookup_local_continuation(pcs[0])==first,"unknown write retains exact function identity");
        b=vu::local_continuation_stats();
        require(b.byte_validations>a.byte_validations && b.range_reuses==a.range_reuses,
                "unknown or unusable ranges cannot prove disjointness");
    }
    for (unsigned count : {64u,65u,128u}) {
        load(0);require(vu::lookup_local_continuation(pcs[0])==first,"journal loss seed");
        a=vu::local_continuation_stats();
        for (unsigned n=0;n<count;++n){g_vu1_code[64]^=1;vu::code_changed(1,64,1);}
        require(vu::lookup_local_continuation(pcs[0])==first,"journal retained/lost history identity");
        b=vu::local_continuation_stats();
        require(b.range_reuses==a.range_reuses+((count==64 && reuse)?1u:0u),"journal capacity boundary and overrun proof");
        if(count>64 || !reuse)require(b.byte_validations>a.byte_validations,"lost history forces full span bytes");
    }
    // A negative is only reusable in the same serial, never across an upload.
    load(0);g_vu1_code[pcs[0]]^=0x80u;vu::code_changed(1,pcs[0],1);
    require(vu::lookup_local_continuation(pcs[0])==nullptr,"negative seed");
    a=vu::local_continuation_stats();
    require(vu::lookup_local_continuation(pcs[0])==nullptr,"same serial negative identity");
    b=vu::local_continuation_stats();
    require(b.byte_validations==a.byte_validations && b.cache_hits==a.cache_hits+1,"negative same-serial shortcut only");
    a=b;g_vu1_code[64]^=1;vu::code_changed(1,64,1);
    require(vu::lookup_local_continuation(pcs[0])==nullptr,"negative remains negative after disjoint upload");
    b=vu::local_continuation_stats();
    require(b.byte_validations>a.byte_validations && b.range_reuses==a.range_reuses,"negative never takes positive journal reuse");
    g_vu1_code[pcs[0]]^=0x80u;vu::code_changed(1,pcs[0],1);
    require(vu::lookup_local_continuation(pcs[0])==first,"negative discovers newly matching prefix");
    std::memcpy(g_vu1_code+pcs[0],alternate.data(),alternate.size());vu::code_changed(1,pcs[0],80);
    require(vu::lookup_local_continuation(pcs[0])==second,"changed valid prefix selects another registered variant");
    load(0);require(vu::lookup_local_continuation(pcs[0])==first,"reset seed");
    a=vu::local_continuation_stats();vu::reset();
    require(vu::lookup_local_continuation(pcs[0])==first,"reset preserves registry");
    b=vu::local_continuation_stats();require(b.byte_validations>a.byte_validations,"reset invalidates local cache");
    state::Writer snapshot;vu::state(snapshot);
    g_vu1_code[pcs[0]]^=0x80u;vu::code_changed(1,pcs[0],1);
    require(vu::lookup_local_continuation(pcs[0])==nullptr,"state restoration changed prefix");
    a=vu::local_continuation_stats();
    state::Reader restore(snapshot.out.data(),snapshot.out.size());vu::state(restore);
    require(vu::lookup_local_continuation(pcs[0])==first,"state restores exact prefix");
    b=vu::local_continuation_stats();
    require(b.byte_validations>a.byte_validations && b.range_reuses==a.range_reuses,"state full invalidation byte-checks span");
    // Real EE-mapped stores must invalidate the guard without test-side notify.
    for (std::uint32_t base : {0x11008000u,0x91008000u,0xB1008000u}) {
        for (unsigned bits : {8u,16u,32u,64u,128u}) {
            load(0);require(vu::lookup_local_continuation(pcs[0])==first,"mapped store seed");
            const auto target=base+pcs[0];
            Reg128 replacement{};replacement.w[0]=0xDEADBEEFu;
            switch(bits) {
            case 8:st8(target,0xEF);break;
            case 16:st16(target,0xBEEF);break;
            case 32:st32(target,replacement.w[0]);break;
            case 64:st64(target,replacement.d[0]);break;
            case 128:st128(target,replacement);break;
            }
            require(vu::lookup_local_continuation(pcs[0])==nullptr,"mapped byte/word/SQ store rejects stale local function");
        }
    }
    // Enforce the per-entry bound with distinct synthetic lookup-only spans.
    for(unsigned n=1;n<16;++n) {
        auto extra=expected[5];extra[0]^=static_cast<std::uint8_t>(n);
        const vu::LocalContinuation span{pcs[5],16u,extra.data(),first};vu::register_local_continuations(&span,1);
    }
    auto extra=expected[5];extra[0]^=0x80u;
    rejects_argument({pcs[5],16u,extra.data(),first},"bounded registry refuses a seventeenth variant");
    require(vu::local_continuation_stats().calls==0,"guard fixture never executes placeholder continuations");
    // This creates a unit ring only, without a worker/game; active ownership
    // means registry mutation must be rejected even before a consumer starts.
    gs::queue::render().start(1024);
    bool rejected_active=false;
    try{vu::register_local_continuations(&spans[0],1);}
    catch(const std::logic_error &){rejected_active=true;}
    require(rejected_active,"registration forbidden after worker infrastructure startup");
    std::printf("VU local cache: %u checks PASS (exact bytes, every opcode/delay byte, aliases, history64/65/128, reset, state, flags)\n",checks);
}
