// SPDX-License-Identifier: MIT
#pragma once
#include "ps2/card_file.hpp"
#include <cstddef>
#include <filesystem>
#include <memory>
#include <vector>

namespace speedracer::saves {
inline constexpr std::size_t kCardBytes = 8650752;
struct ImportResult { bool imported = false; std::filesystem::path backup; };
class PreparedImport final {
public:
    PreparedImport(const std::filesystem::path& source, const std::filesystem::path& target);
    const std::filesystem::path& source() const { return source_owner_->target(); }
    const std::filesystem::path& target() const { return target_owner_->target(); }
    bool has_existing() const { return existing_; }
    ImportResult commit(bool replace_authorized = false);
private:
    std::unique_ptr<ps2::card_file::Lease> source_owner_, target_owner_;
    std::vector<unsigned char> incoming_, previous_;
    bool existing_ = false, completed_ = false;
};
}
