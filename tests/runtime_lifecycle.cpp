#include "ps2/system.hpp"
#include "gs/gs.hpp"
#include "gs/queue.hpp"
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <thread>

int main(int argc, char **argv) {
    using namespace ps2;
    namespace q = ps2::gs::queue;
    const bool vu = argc < 2 || std::strcmp(argv[1], "direct") != 0;
    const unsigned count = argc > 1 && std::strcmp(argv[1], "empty") == 0 ? 0 : 4096;
    init_graphics();
    start_render_thread();
    q::render().start(256); // Force downstream backpressure/wrap before launch.
    std::thread worker;
    if (vu) {
        start_vu_thread();
        q::vu().start(256);
        worker = std::thread(run_vu_thread);
    }
    std::atomic<bool> done{false}, valid{true};
    const auto value = [](unsigned i) { return 0x8000000000000000ull | i; };
    std::thread producer([&] {
        for (unsigned i = 0; i < count; ++i) {
            const std::uint64_t gif[] = {1ull | (1ull << 15) | (1ull << 60), 0xe, value(i), 0x3b};
            q::post(q::kGif, 3, 2, gif, sizeof gif);
            if (vu && i % 7 == 0) {
                const std::uint32_t nop[4]{};
                q::vu().post(q::kVif1, 1, 0, nop, sizeof nop);
            }
            gs::DisplayRegs regs{};regs.pmode = i + 1;
            q::post(q::kPresent, 0, 0, &regs, sizeof regs);
        }
        finish_workers();
        if (count && gs::g_state.texa != value(count - 1)) valid = false;
        finish_workers(); // Completion is idempotent, including after VU exits.
        done = true;
        wake_render_thread();
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    unsigned presented = 0;
    while (!done.load()) {
        if (gs::render_pending([&](const gs::DisplayRegs &regs) {
            if (regs.pmode != presented + 1 || gs::g_state.texa != value(presented)) valid = false;
            ++presented;
        }, .01) == Rendered::idle) wait_render_work(1);
    }
    producer.join();
    if (worker.joinable()) worker.join();
    q::Header h{};const std::uint8_t *payload = nullptr;
    if (q::render().peek(h,payload) || (vu && q::vu().peek(h,payload)) || presented != count) valid = false;
    std::thread closer(request_stop);
    while (!halted()) std::this_thread::yield();
    closer.join();
    std::printf("Lifecycle %s: %u ordered real GIF/presents, final payload, empty queues, idempotent drain, joined VU and atomic stop: %s\n",
                argc > 1 ? argv[1] : "vu", count, valid ? "PASS" : "FAIL");
    return valid ? 0 : 1;
}
