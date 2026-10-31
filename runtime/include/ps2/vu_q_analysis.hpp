#pragma once
#include "vu_ops.hpp"
#include <array>
#include <bit>

namespace ps2::vu {
// Derived branch edges only. Unknown writes reset the graph; known writes
// update their source nodes lazily before the next query. Q result invalidation
// stays global in the caller. Predecessor order/path/work limits are unchanged.
class QReadIndex {
public:
    struct Stats {
        std::uint64_t full_builds=0,full_nodes=0,incremental_updates=0;
        std::uint64_t incremental_nodes=0,incremental_fallbacks=0;
    };
private:
    static constexpr std::uint16_t kNone = 0xffff;
    struct Path {
        std::uint16_t pcs[16] = {};
        unsigned length = 0;
    };
    const std::uint8_t *code_ = nullptr;
    std::uint32_t mask_ = 0;
    bool dirty_ = true;
    std::array<std::uint16_t, 2048> heads_, next_, targets_;
    std::array<std::uint64_t,32> pending_{};
    bool pending_any_=false;
    Stats *stats_=nullptr;
    std::vector<Path> work_;

    void load(std::uint32_t pc, std::uint32_t &lo, std::uint32_t &hi) const {
        std::memcpy(&lo, code_ + (pc & mask_), 4);
        std::memcpy(&hi, code_ + (pc & mask_) + 4, 4);
    }
    std::uint16_t target(std::uint32_t index) const {
        std::uint32_t lo,hi;load(index*8u,lo,hi);
        return !(hi & 0x80000000u) && is_branch(lo) && !is_jump_register(lo)
            ? static_cast<std::uint16_t>(branch_target(lo,index*8u,mask_)>>3) : kNone;
    }
    void clear_pending() {pending_.fill(0);pending_any_=false;}
    void build() {
        if(stats_) {++stats_->full_builds;stats_->full_nodes+=(mask_+1u)/8u;}
        heads_.fill(kNone);
        targets_.fill(kNone);
        // Prepending in reverse PC order reproduces the ascending reference scan.
        for (std::uint32_t i = (mask_ + 1u) / 8u; i-- > 0;) {
            const auto dest=target(i);
            targets_[i]=dest;
            if(dest!=kNone) {
                next_[i]=heads_[dest];
                heads_[dest]=static_cast<std::uint16_t>(i);
            }
        }
        dirty_ = false;
        clear_pending();
    }
    void mark(std::uint32_t begin,std::uint32_t bytes) {
        if(!bytes)return;
        const auto first=begin>>3,last=(begin+bytes-1u)>>3;
        for(auto word=first>>6;word<=last>>6;++word) {
            const auto lo=word==(first>>6) ? first&63u : 0u;
            const auto hi=word==(last>>6) ? last&63u : 63u;
            pending_[word]|=(~std::uint64_t(0)<<lo)&(~std::uint64_t(0)>>(63u-hi));
        }
        pending_any_=true;
    }
    void update() {
        unsigned nodes=0;for(auto word:pending_)nodes+=std::popcount(word);
        // Bound both dense changes and pathological fan-in relinking. Falling
        // back rebuilds from actual code even after a partially applied update.
        unsigned budget=4096;
        const auto fallback=[&] {if(stats_)++stats_->incremental_fallbacks;build();};
        if(nodes>(mask_+1u)/32u) {fallback();return;}
        for(unsigned word=0;word<pending_.size();++word) {
            auto bits=pending_[word];
            while(bits) {
                const unsigned i=word*64u+std::countr_zero(bits);bits&=bits-1u;
                const auto dest=target(i),old=targets_[i];
                if(dest==old)continue;
                if(old!=kNone) {
                    auto *link=&heads_[old];
                    while(*link!=i && *link!=kNone) {
                        if(!budget--) {fallback();return;}
                        link=&next_[*link];
                    }
                    if(*link!=i) {fallback();return;}
                    *link=next_[i];
                }
                targets_[i]=dest;
                if(dest!=kNone) {
                    auto *link=&heads_[dest];
                    while(*link!=kNone && *link<i) {
                        if(!budget--) {fallback();return;}
                        link=&next_[*link];
                    }
                    next_[i]=*link;*link=static_cast<std::uint16_t>(i);
                }
            }
        }
        if(stats_) {++stats_->incremental_updates;stats_->incremental_nodes+=nodes;}
        clear_pending();
    }
    bool complete(const Path &path, std::uint32_t latency) const {
        std::uint32_t ready[32][4] = {}, vi_ready[16] = {};
        std::uint32_t cycle = 0, issued = 0, step = 0;
        const auto issue_at = [&](std::uint32_t pc) {
            std::uint32_t lo, hi;
            load(pc, lo, hi);
            const auto use = vf_use(lo, hi);
            cycle = issue(use, cycle + 1u, ready, vi_ready);
            if (step++ == 3) issued = cycle;
            retire(use, cycle, ready, vi_ready);
        };
        const auto div = path.pcs[path.length - 1];
        for (unsigned k = 3; k > 0; --k) issue_at(div - 8u * k);
        for (unsigned i = path.length; i-- > 0;) issue_at(path.pcs[i]);
        return cycle >= issued + latency;
    }
public:
    explicit QReadIndex(Stats *stats=nullptr):stats_(stats) {}
    void reset(const std::uint8_t *code, std::uint32_t mask) {
        code_ = code;
        mask_ = mask;
        dirty_ = true;
        clear_pending();
    }
    // Called after the byte mutation, on the same VU owner. The pending bitset
    // unions successive overlapping writes; the graph sees only the latest code.
    void changed(const std::uint8_t *code,std::uint32_t mask,
                 std::uint32_t address,std::uint32_t bytes) {
        if(code_!=code || mask_!=mask) {reset(code,mask);return;}
        if(dirty_)return; // A full rebuild already covers every pending write.
        if(!bytes || bytes>=mask+1u) {reset(code,mask);return;}
        const auto begin=address&mask;
        const auto first=std::min(bytes,mask+1u-begin);
        mark(begin,first);mark(0,bytes-first);
    }
    QRead read(std::uint32_t pc) {
        std::uint32_t lo, hi;
        load(pc, lo, hi);
        if (waits_q(lo, hi) || q_unit_latency(lo, hi)) return kQNew;
        if (dirty_) build();
        else if(pending_any_) update();
        bool any_new = false, any_old = false;
        unsigned budget = 4096;
        work_.clear();
        Path initial;
        initial.pcs[0] = static_cast<std::uint16_t>(pc & mask_);
        initial.length = 1;
        work_.push_back(initial);
        while (!work_.empty()) {
            if (!--budget) return kQDynamic;
            const Path path = work_.back();
            work_.pop_back();
            const auto at = path.pcs[path.length - 1];
            if (path.length > 1) {
                load(at, lo, hi);
                if (const auto latency = q_unit_latency(lo, hi)) {
                    (complete(path, latency) ? any_new : any_old) = true;
                    continue;
                }
                if (waits_q(lo, hi) || path.length > 15) {
                    any_new = true;
                    continue;
                }
            }
            const auto push = [&](std::uint32_t predecessor) {
                Path next = path;
                next.pcs[next.length++] = static_cast<std::uint16_t>(predecessor);
                work_.push_back(next);
            };
            load(at - 16u, lo, hi);
            const bool jumped = !(hi & 0x80000000u) && is_branch(lo) &&
                (is_unconditional(lo) || is_jump_register(lo));
            const bool linear = !jumped && !(hi & 0x40000000u);
            if (linear) push((at - 8u) & mask_);
            auto branch = heads_[at >> 3];
            if (!linear && branch == kNone) any_new = true;
            for (; branch != kNone; branch = next_[branch])
                push(((static_cast<std::uint32_t>(branch) + 1u) * 8u) & mask_);
            if (any_new && any_old) return kQDynamic;
        }
        return any_old ? kQOld : kQNew;
    }
};
}
