#pragma once
// Private, same-build offline QA fixtures. Never loaded as game data.
#include "ps2/vu_ops.hpp"
#include "ps2/host_path.hpp"
#include <array>
#include <bit>
#include <cerrno>
#include <cfenv>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <string>
#include <vector>
#if defined(__SSE__)
#include <xmmintrin.h>
#endif

namespace ps2::vu::replay {
inline constexpr unsigned kMaxRecords=8,kPerKey=4,kPacketLimit=2u*1024u*1024u;
inline constexpr unsigned kRegsBytes=offsetof(Vu0Regs,tpc)+sizeof(std::uint32_t);
inline constexpr unsigned kPipePrefix=offsetof(vuops::FlagPipe,q_pending);
static_assert(kRegsBytes==596 && kPipePrefix==180);
static_assert(std::endian::native==std::endian::little);
struct State {
    std::array<std::uint8_t,kRegsBytes> regs{};
    std::array<std::uint32_t,46> pipe{};
    std::array<std::uint8_t,16384> memory{};
};
inline void take(State &out,const Vu0Regs &r,const vuops::FlagPipe &pipe,const std::uint8_t *memory) {
    std::memcpy(out.regs.data(),&r,kRegsBytes);
    std::memcpy(out.pipe.data(),&pipe,kPipePrefix);out.pipe[45]=pipe.q_pending?1u:0u;
    std::memcpy(out.memory.data(),memory,out.memory.size());
}
inline void restore(const State &in,Vu0Regs &r,vuops::FlagPipe &pipe,std::uint8_t *memory) {
    // Padding is deliberately excluded from the format and comparisons.
    std::memset(&r,0,sizeof r);std::memcpy(&r,in.regs.data(),kRegsBytes);
    pipe={};std::memcpy(&pipe,in.pipe.data(),kPipePrefix);pipe.q_pending=in.pipe[45]!=0;
    std::memcpy(memory,in.memory.data(),in.memory.size());
}
inline std::uint32_t mxcsr() {
#if defined(__SSE__)
    return _mm_getcsr();
#else
    return 0;
#endif
}
inline bool fp_control(int rounding,std::uint32_t value) {
    if(std::fesetround(rounding))return false;
#if defined(__SSE__)
    if(value&~0xffffu)return false;_mm_setcsr(value);
#else
    if(value)return false;
#endif
    return true;
}
inline int target(std::uint32_t pc,std::uint64_t key) {
    return pc==0x2810u && key==0x3629DCD016897BE2ull ? 0 :
           pc==0x10C8u && key==0xBDDB931EFD33B73Eull ? 1 : -1;
}
struct Record {
    std::uint64_t key=0,frame=0;
    std::uint32_t pc=0,top=0,itop=0,entry_pc=0,issues=0,next_pc=0,mxcsr_value=0;
    int rounding=FE_TONEAREST;
    std::array<std::uint8_t,16384> code{};
    State before{},after{};
    std::vector<std::uint8_t> packets;
    bool complete=false,overflow=false;
};
inline void tee(Record &record,const std::uint8_t *bytes,std::uint32_t count) {
    const auto n=std::size_t(count)*16u;
    if(record.overflow || n+sizeof(count)>kPacketLimit-record.packets.size()) {record.overflow=true;return;}
    const auto *size=reinterpret_cast<const std::uint8_t *>(&count);
    record.packets.insert(record.packets.end(),size,size+sizeof count);
    record.packets.insert(record.packets.end(),bytes,bytes+n);
}
inline bool write_bytes(std::FILE *f,const void *p,std::size_t n) {return !n || std::fwrite(p,1,n,f)==n;}
inline bool read_bytes(std::FILE *f,void *p,std::size_t n) {return !n || std::fread(p,1,n,f)==n;}
inline bool state_io(std::FILE *f,State &s,bool write) {
    const auto io=[&](std::FILE *file,void *p,std::size_t n) {return write?write_bytes(file,p,n):read_bytes(file,p,n);};
    return io(f,s.regs.data(),s.regs.size()) && io(f,s.pipe.data(),s.pipe.size()*4u) && io(f,s.memory.data(),s.memory.size());
}
// Do not use sizeof(Record/State): vectors, padding and pointers are not on disk.
inline bool record_io(std::FILE *f,Record &r,bool write) {
    auto field=[&](auto &x) {return write?write_bytes(f,&x,sizeof x):read_bytes(f,&x,sizeof x);};
    std::int32_t rounding=r.rounding;std::uint32_t bytes=static_cast<std::uint32_t>(r.packets.size());
    if(!field(r.key)||!field(r.frame)||!field(r.pc)||!field(r.top)||!field(r.itop)||!field(r.entry_pc)||
       !field(r.issues)||!field(r.next_pc)||!field(r.mxcsr_value)||!field(rounding)||!field(bytes))return false;
    if(!write) {
        if(target(r.pc,r.key)<0 || !r.issues || r.issues>1000000u || bytes>kPacketLimit ||
           (r.next_pc!=0xffffffffu && ((r.next_pc&7u)||r.next_pc>=16384u)) ||
           (r.mxcsr_value&~0xffffu) ||
           (rounding!=FE_TONEAREST && rounding!=FE_DOWNWARD && rounding!=FE_UPWARD && rounding!=FE_TOWARDZERO))return false;
        r.rounding=rounding;r.packets.resize(bytes);
    }
    const auto io=[&](std::FILE *file,void *p,std::size_t n) {return write?write_bytes(file,p,n):read_bytes(file,p,n);};
    if(!io(f,r.code.data(),r.code.size()) || !state_io(f,r.before,write) || !state_io(f,r.after,write) || !io(f,r.packets.data(),bytes))return false;
    if(!write) {
        if(r.before.pipe[45]>1u || r.after.pipe[45]>1u)return false;
        std::size_t at=0;
        while(at<bytes) {
            if(bytes-at<4)return false;std::uint32_t count;std::memcpy(&count,r.packets.data()+at,4);at+=4;
            if(!count || count>1024 || std::size_t(count)*16u>bytes-at)return false;at+=std::size_t(count)*16u;
        }
        r.complete=true;
    }
    return true;
}
inline bool read_file(const char *path,std::vector<Record> &records,std::string &error) {
    records.clear();auto *f=host_path::open(path,"rb");if(!f){error="cannot open capture";return false;}
    char magic[8];std::uint32_t count=0,regs=0,pipe=0;
    bool ok=read_bytes(f,magic,8)&&!std::memcmp(magic,"SRVUREP1",8)&&read_bytes(f,&count,4)&&read_bytes(f,&regs,4)&&read_bytes(f,&pipe,4);
    ok=ok && count>0 && count<=kMaxRecords && regs==kRegsBytes && pipe==184;
    if(ok) {records.resize(count);for(auto &r:records)if(!record_io(f,r,false)){ok=false;break;}}
    if(ok && std::fgetc(f)!=EOF)ok=false;
    const bool failed=std::ferror(f)!=0;const int closed=std::fclose(f);
    if(!ok || failed || closed) {records.clear();error="invalid/truncated/private capture format";return false;}
    return true;
}
class Capture {
    std::array<Record,kMaxRecords> records_{};
    std::string path_;
    std::uint64_t frame_=1,markers_=0,from_=10611,to_=11999,stride_=257,seen_[2]={};
    unsigned per_key_[2]={},dropped_=0;
    bool valid_=true;
    std::uint64_t setting(const char *name,std::uint64_t fallback) {
        const auto *text=std::getenv(name);if(!text)return fallback;
        char *end=nullptr;errno=0;const auto x=std::strtoull(text,&end,10);
        if(!*text || *text=='-' || *text=='+' || errno || !end || *end)valid_=false;
        return x;
    }
public:
    explicit Capture(const char *path):path_(path) {
        from_=setting("PS2_VU_REPLAY_FROM",10611);to_=setting("PS2_VU_REPLAY_TO",11999);
        stride_=setting("PS2_VU_REPLAY_STRIDE",257);
        valid_=valid_ && from_>0 && from_<=to_ && stride_>0 && stride_<=1000000000ull;
        if(valid_)for(auto &r:records_)r.packets.reserve(kPacketLimit);
    }
    void present_marker() {++markers_;if(frame_!=std::numeric_limits<std::uint64_t>::max())++frame_;else valid_=false;}
    Record *begin(std::uint32_t pc,std::uint64_t key,const Vu0Regs &regs,const vuops::FlagPipe &pipe,
                  const std::uint8_t *code,const std::uint8_t *mem,std::uint32_t top,std::uint32_t itop,std::uint32_t entry) {
        if(!valid_ || frame_<from_ || frame_>to_)return nullptr;
        const int t=target(pc,key);if(t<0 || per_key_[t]>=kPerKey)return nullptr;
        if(seen_[t]++%stride_)return nullptr;
        auto &r=records_[unsigned(t)*kPerKey+per_key_[t]++];
        r.pc=pc;r.key=key;r.frame=frame_;r.top=top;r.itop=itop;r.entry_pc=entry;
        r.mxcsr_value=mxcsr();r.rounding=std::fegetround();
        std::memcpy(r.code.data(),code,r.code.size());take(r.before,regs,pipe,mem);
        return &r;
    }
    void finish(Record &r,std::uint32_t next,const Vu0Regs &regs,const vuops::FlagPipe &pipe,const std::uint8_t *mem) {
        take(r.after,regs,pipe,mem);r.next_pc=next;r.issues=pipe.t-r.before.pipe[0];
        r.complete=!r.overflow && r.issues>0 && r.issues<=1000000u;
        if(!r.complete)++dropped_;
    }
    void dump() {
        if(!valid_){std::fprintf(stderr,"[vu-replay-capture] invalid_config write_ok=0\n");return;}
        unsigned count=0;for(const auto &r:records_)if(r.complete)++count;
        auto *f=host_path::open(path_.c_str(),"wb");if(!f){std::fprintf(stderr,"[vu-replay-capture] cannot_open write_ok=0\n");return;}
        const std::uint32_t regs=kRegsBytes,pipe=184;
        bool ok=write_bytes(f,"SRVUREP1",8)&&write_bytes(f,&count,4)&&write_bytes(f,&regs,4)&&write_bytes(f,&pipe,4);
        for(auto &r:records_)if(r.complete)ok=record_io(f,r,true)&&ok;
        const bool failed=std::ferror(f)!=0;const int closed=std::fclose(f);
        std::fprintf(stderr,"[vu-replay-capture] records=%u key2810=%u key10C8=%u dropped=%u phase=%llu-%llu markers=%llu next_frame=%llu write_ok=%u\n",
            count,per_key_[0],per_key_[1],dropped_,static_cast<unsigned long long>(from_),static_cast<unsigned long long>(to_),
            static_cast<unsigned long long>(markers_),static_cast<unsigned long long>(frame_),unsigned(ok&&!failed&&closed==0));
    }
};
struct Result {
    State after{};
    std::vector<std::uint8_t> packets;
    std::uint32_t next_pc=0,issues=0;
    bool clean_boundary=false;
    std::uint64_t function_ns=0;
};
// Destructive QA state API: call only in a dedicated process with queues off.
// `cold` invalidates derived code analyses; warm still resets all guest inputs.
bool run_record(const Record &record,bool native,bool cold,Result &result,std::string &error);
inline bool matches(const Record &r,const Result &out,std::string &error) {
    if(!out.clean_boundary){error="pending branch/E boundary";return false;}
    if(out.next_pc!=r.next_pc || out.issues!=r.issues){error="next PC/issue count";return false;}
    if(out.after.regs!=r.after.regs){error="VU registers";return false;}
    if(out.after.pipe!=r.after.pipe){error="live FlagPipe";return false;}
    if(out.after.memory!=r.after.memory){error="VU memory";return false;}
    if(out.packets!=r.packets){error="GIF packets";return false;}
    return true;
}
}
