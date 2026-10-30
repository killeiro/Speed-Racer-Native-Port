#include "audio_output.hpp"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

int main(int argc, char **argv) {
    host::AudioOutput filter;
    std::vector<std::int16_t> in(48000 * 2), out(in.size()), chunked(in.size());
    for (std::size_t n = 0; n < in.size() / 2; ++n) {
        in[n * 2] = 1074;
        in[n * 2 + 1] = 1191;
    }
    filter.process(in.data(), out.data(), in.size() / 2);
    if (!std::all_of(out.end() - 9600, out.end(), [](int x) { return x == 0; })) return 1;
    filter.reset();
    for (std::size_t at = 0; at < in.size() / 2; at += 32)
        filter.process(in.data() + at * 2, chunked.data() + at * 2, 32);
    if (out != chunked) return 2;
    filter.reset();
    for (std::size_t n = 0; n < in.size() / 2; ++n) {
        in[n * 2] = static_cast<std::int16_t>(3000 + 10000 * std::sin(n * 6.283185307179586 * 1000 / 48000));
        in[n * 2 + 1] = -1191;
    }
    filter.process(in.data(), out.data(), in.size() / 2);
    double mean = 0, square = 0;
    for (std::size_t n = 4800; n < 48000; ++n) {
        mean += out[n * 2]; square += double(out[n * 2]) * out[n * 2];
        if (out[n * 2 + 1]) return 3;
    }
    mean /= 43200; square = std::sqrt(square / 43200);
    if (std::abs(mean) > 1 || square < 6900 || square > 7200) return 4;
    filter.reset();
    std::fill(in.begin(), in.end(), 0);
    filter.process(in.data(), out.data(), in.size() / 2);
    if (std::any_of(out.begin(), out.end(), [](int x) { return x; })) return 5;
    if (argc == 3) {
        // Private raw-PCM replay of a captured pause; same production filter.
        auto *src = std::fopen(argv[1], "rb"), *dst = std::fopen(argv[2], "wb");
        if (!src || !dst) return 6;
        std::uint8_t header[44];
        if (std::fread(header, 1, 44, src) != 44) return 7;
        std::fwrite(header, 1, 44, dst);
        filter.reset();
        for (;;) {
            const auto count = std::fread(in.data(), 4, 48000, src);
            if (!count) break;
            filter.process(in.data(), out.data(), count);
            std::fwrite(out.data(), 4, count, dst);
        }
        std::fclose(src); std::fclose(dst);
    }
    std::printf("PASS output DC silence, chunk continuity, stereo isolation, 1kHz retention and reset\n");
}
