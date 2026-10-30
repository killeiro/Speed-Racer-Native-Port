// SPDX-License-Identifier: MIT
#pragma once
#include <atomic>
#include <cstdint>
#include <filesystem>
#include <functional>
#include <stdexcept>
#include <string>

namespace speedracer::media {
enum class Phase { inspect, copy, verify_copy, verify_source, publish, complete };
using Progress = std::function<void(Phase, unsigned)>;
class Cancelled final : public std::runtime_error {
public:
    Cancelled() : std::runtime_error("Preparação cancelada.") {}
};
struct Result { std::uint64_t iso_bytes; std::string iso_sha256; };
// Only the audited USA executable is accepted. Destination must not exist.
// Never writes the source ISO, existing data directory, or memory cards.
Result prepare(const std::filesystem::path& source, const std::filesystem::path& destination,
               const Progress& progress = {}, const std::atomic_bool* cancel = nullptr);
}
