#pragma once
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdint>

namespace host {
// Output-stage DC blocker, as used by PCSX2 for voices paused at nonzero
// volume. This never changes SPU RAM, voice state, audio clocks or queue sizes.
class AudioOutput {
public:
    void reset() {
        previous_input_[0] = previous_input_[1] = 0;
        previous_output_[0] = previous_output_[1] = 0;
    }
    void process(const std::int16_t *input, std::int16_t *output, std::size_t frames) {
        for (std::size_t n = 0; n < frames; ++n) {
            for (unsigned c = 0; c < 2; ++c) {
                const float sample = input[n * 2 + c];
                const float filtered = sample - previous_input_[c] + 0.995f * previous_output_[c];
                previous_input_[c] = sample;
                previous_output_[c] = filtered;
                output[n * 2 + c] = static_cast<std::int16_t>(std::lrint(std::clamp(filtered, -32768.0f, 32767.0f)));
            }
        }
    }
private:
    float previous_input_[2] = {}, previous_output_[2] = {};
};
} // namespace host
