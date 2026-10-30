#include "gs/queue.hpp"
#include <atomic>
#include <cstdio>
#include <cstring>
#include <thread>
#include <array>
#include <chrono>

int main() {
    using namespace ps2::gs::queue;
    Ring ring;
    ring.start(512);
    std::atomic<bool> valid{true};
    constexpr unsigned count = 200000;
    std::thread consumer([&] {
        for (unsigned expected = 0; expected < count;) {
            Header h{};
            const std::uint8_t *payload;
            if (!ring.peek(h, payload)) { ring.wait_for_work(50); continue; }
            unsigned data[7];
            if (h.bytes != sizeof data || h.arg0 != expected) valid = false;
            else {
                std::memcpy(data, payload, sizeof data);
                for (unsigned n = 0; n < 7; ++n) if (data[n] != expected + n) valid = false;
            }
            ring.pop(h);
            ++expected;
        }
    });
    for (unsigned i = 0; i < count; ++i) {
        unsigned data[7];
        for (unsigned n = 0; n < 7; ++n) data[n] = i + n;
        ring.post(kGif, i, 0, data, sizeof data);
        if (i % 1000 == 0) std::this_thread::yield();
    }
    consumer.join();
    // Exercise every payload alignment, header-only packets and repeated wraps
    // while both sides alternate between short bursts and waiting for work/space.
    Ring mixed;
    mixed.start(512);
    constexpr std::array<unsigned, 10> sizes{0, 1, 15, 16, 17, 31, 63, 127, 223, 319};
    constexpr unsigned mixed_count = 40000;
    const auto byte = [](unsigned index, unsigned offset) {
        return static_cast<std::uint8_t>((index * 37u + offset * 19u) ^ (index >> 7));
    };
    std::thread mixed_consumer([&] {
        for (unsigned expected = 0; expected < mixed_count;) {
            Header h{};
            const std::uint8_t *payload;
            if (!mixed.peek(h, payload)) { mixed.wait_for_work(-1); continue; }
            const unsigned size = sizes[(expected * 7u) % sizes.size()];
            if (h.arg0 != expected || h.arg1 != ~expected || h.bytes != size ||
                h.type != (expected % 2 ? kGif : kVif1)) valid = false;
            else for (unsigned n = 0; n < size; ++n)
                if (payload[n] != byte(expected, n)) valid = false;
            mixed.pop(h);
            ++expected;
            if (expected % 1999 == 0) std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    });
    for (unsigned i = 0; i < mixed_count; ++i) {
        std::array<std::uint8_t, 319> payload;
        const unsigned size = sizes[(i * 7u) % sizes.size()];
        for (unsigned n = 0; n < size; ++n) payload[n] = byte(i, n);
        mixed.post(i % 2 ? kGif : kVif1, i, ~i, payload.data(), size);
        if (i % 997 == 0) std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    mixed_consumer.join();

    // A producer must resume after a consumer frees a completely full ring.
    // This directly covers the moved freed_ snapshot, including repeated reuse.
    Ring full;
    full.start(64);
    std::array<std::uint8_t, 48> block{};
    for (unsigned round = 0; round < 128; ++round) {
        full.post(kGif, round * 2, 0, block.data(), block.size());
        std::atomic<bool> entering{false}, returned{false};
        std::thread blocked([&] {
            entering.store(true);
            full.post(kGif, round * 2 + 1, 0, block.data(), block.size());
            returned.store(true);
        });
        while (!entering.load()) std::this_thread::yield();
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        if (returned.load()) valid = false;
        Header h{};
        const std::uint8_t *payload;
        if (!full.peek(h, payload) || h.arg0 != round * 2) valid = false;
        full.pop(h);
        blocked.join();
        if (!returned.load() || !full.peek(h, payload) || h.arg0 != round * 2 + 1) valid = false;
        full.pop(h);
    }

    // Acknowledge each packet before the next post. Unlike the burst tests,
    // this repeatedly drives the consumer through the empty/infinite wait path.
    Ring empty;
    empty.start(64);
    std::atomic<unsigned> ack{0};
    constexpr unsigned rendezvous_count = 20000;
    std::thread receiver([&] {
        for (unsigned i = 0; i < rendezvous_count; ++i) {
            Header h{};
            const std::uint8_t *payload;
            while (!empty.peek(h, payload)) empty.wait_for_work(-1);
            if (h.type != kPresent || h.arg0 != i || h.bytes != 0) valid = false;
            empty.pop(h);
            ack.store(i + 1);
        }
    });
    for (unsigned i = 0; i < rendezvous_count; ++i) {
        empty.post(kPresent, i, 0, nullptr, 0);
        while (ack.load() != i + 1) std::this_thread::yield();
    }
    receiver.join();

    // Wake without payload also releases an idle consumer.
    std::atomic<bool> ready{false};
    std::thread sleeper([&] { ready = true; ring.wait_for_work(10); });
    while (!ready.load()) std::this_thread::yield();
    ring.wake();
    sleeper.join();
    std::printf("Queue: %u ordered fixed, 40000 mixed, 128 full and 20000 rendezvous messages: %s\n", count, valid ? "PASS" : "FAIL");
    return valid ? 0 : 1;
}
