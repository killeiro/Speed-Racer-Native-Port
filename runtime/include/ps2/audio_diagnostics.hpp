#pragma once
#include <algorithm>
#include <cstddef>
#include <cstdint>

namespace ps2::audio {
// Diagnostic only, never serialized. Accumulate bounded intervals on the EE/IOP
// owner thread. Energy includes DC; sum permits computing AC RMS afterwards.
struct PcmStats {
    std::uint64_t frames = 0, energy[2] = {}, nonzero[2] = {}, clipped[2] = {};
    std::int64_t sum[2] = {};
    std::uint32_t peak[2] = {};
    void add(const std::int16_t *pcm, std::size_t count) {
        frames += count;
        for (std::size_t n = 0; n < count; ++n) for (unsigned c = 0; c < 2; ++c) {
            const std::int64_t v = pcm[n * 2 + c];
            sum[c] += v;
            energy[c] += static_cast<std::uint64_t>(v * v);
            nonzero[c] += v != 0;
            clipped[c] += v == -32768 || v == 32767;
            peak[c] = std::max(peak[c], static_cast<std::uint32_t>(v < 0 ? -v : v));
        }
    }
};
struct SpuStats {
    PcmStats pcm;
    std::uint64_t batches = 0;
    // Voice exposure is sampled before each 32-sample render batch. A pending
    // key-on counts as active; zero envelope/pitch/volume are observations,
    // not a claim that an FMOD category is audible or missing.
    std::uint64_t voice_batches[2] = {}, zero_envelope[2] = {}, zero_pitch[2] = {}, zero_volume[2] = {};
    std::uint64_t adma_batches[2] = {}, input_frames[2] = {}, input_empty[2] = {};
    std::uint64_t pending_transfers[2] = {}, max_transfers[2] = {};
    std::uint64_t key_on[2] = {}, key_off[2] = {}, dma_bytes[2] = {}, adma_bytes[2] = {};
};
// Call only on the EE/IOP thread, or before/after it runs. These functions do
// not advance emulated time, touch registers, audio RAM, or the output stream.
void enable_spu_diagnostics(bool enabled);
SpuStats take_spu_diagnostics();
}
