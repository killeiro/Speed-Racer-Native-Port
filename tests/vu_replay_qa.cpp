#include "vu_replay.hpp"
#include <algorithm>
#include <cerrno>
#include <cstdlib>
#include <cstdio>
#include <limits>
void register_generated_vu_continuations();
int main(int argc,char **argv) {
    using namespace ps2::vu::replay;
    if(argc<2){std::fprintf(stderr,"Usage: vu_replay_qa CAPTURE [--iterations N] [--cold] [--verify-only]\n");return 2;}
    unsigned iterations=1000;bool cold=false,verify_only=false;
    for(int i=2;i<argc;++i) {
        if(!std::strcmp(argv[i],"--cold"))cold=true;
        else if(!std::strcmp(argv[i],"--verify-only"))verify_only=true;
        else if(!std::strcmp(argv[i],"--iterations") && i+1<argc) {
            char *end=nullptr;errno=0;const auto n=std::strtoul(argv[++i],&end,10);
            if(errno || !end || *end || n<1 || n>20000)return 2;iterations=unsigned(n);
        } else return 2;
    }
    std::vector<Record> records;std::string error;
    if(!read_file(argv[1],records,error)){std::fprintf(stderr,"[vu-replay] %s\n",error.c_str());return 3;}
    register_generated_vu_continuations();
    unsigned covered[2]={};
    for(unsigned i=0;i<records.size();++i) {
        const auto &r=records[i];++covered[target(r.pc,r.key)];
        for(bool native:{false,true}) {
            Result out;
            if(!run_record(r,native,true,out,error) || !matches(r,out,error)) {
                std::fprintf(stderr,"[vu-replay] FAIL fixture=%u pc=%04X native=%u %s\n",i,r.pc,unsigned(native),error.c_str());return 4;
            }
        }
        std::printf("[vu-replay] fixture=%u frame=%llu key=%016llX pc=%04X issues=%u packet_bytes=%zu exact=1\n",i,
            static_cast<unsigned long long>(r.frame),static_cast<unsigned long long>(r.key),r.pc,r.issues,r.packets.size());
    }
    std::printf("[vu-replay] fixtures=%zu key2810=%u key10C8=%u exact_native_and_reference=1\n",records.size(),covered[0],covered[1]);
    if(verify_only)return 0;
    std::puts("fixture,key,pc,mode,iterations,total_function_ns,min_function_ns,max_function_ns,issues,packet_bytes");
    for(unsigned i=0;i<records.size();++i) {
        const auto &r=records[i];Result out;std::uint64_t total=0,minimum=std::numeric_limits<std::uint64_t>::max(),maximum=0;
        // Warm each fixture after possible code changes from another fixture.
        if(!run_record(r,true,true,out,error) || !matches(r,out,error))return 5;
        for(unsigned n=0;n<iterations;++n) {
            if(!run_record(r,true,cold,out,error) || !matches(r,out,error)) {
                std::fprintf(stderr,"[vu-replay] benchmark mismatch fixture=%u %s\n",i,error.c_str());return 5;
            }
            total+=out.function_ns;minimum=std::min(minimum,out.function_ns);maximum=std::max(maximum,out.function_ns);
        }
        std::printf("%u,%016llX,%04X,%s,%u,%llu,%llu,%llu,%u,%zu\n",i,static_cast<unsigned long long>(r.key),r.pc,
            cold?"invalidate_each_call":"derived_analyses_warm",iterations,static_cast<unsigned long long>(total),
            static_cast<unsigned long long>(minimum),static_cast<unsigned long long>(maximum),r.issues,r.packets.size());
    }
}
