// SPDX-License-Identifier: MIT
#pragma once
#include "ps2/host_path.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <cstring>
#include <memory>
#include <mutex>
#include <stdexcept>
#include <vector>

namespace ps2::disc {
// Indexed, uncompressed blocks keep random sector/audio reads inexpensive.
// Offset zero represents an all-zero block. Distribution compression is external.
class DataPack final {
public:
    static constexpr std::uint32_t block_bytes = 256 * 1024;
    static constexpr std::array<unsigned char, 8> magic{'S','R','D','A','T','A','1',0};
    static std::shared_ptr<DataPack> open(const std::string& path) {
        auto pack = std::shared_ptr<DataPack>(new DataPack);
        pack->file_ = host_path::open(path.c_str(), "rb");
        pack->need(pack->file_ != nullptr, "cannot open file");
        pack->load();
        return pack;
    }
    ~DataPack() { if (file_) std::fclose(file_); }
    DataPack(const DataPack&) = delete;
    DataPack& operator=(const DataPack&) = delete;
    std::uint64_t size() const { return virtual_bytes_; }
    std::size_t read(std::uint64_t at, void* output, std::size_t bytes) {
        if (at >= virtual_bytes_ || !bytes) return 0;
        bytes = static_cast<std::size_t>(std::min<std::uint64_t>(bytes, virtual_bytes_ - at));
        auto* out = static_cast<unsigned char*>(output);
        std::lock_guard lock(mutex_);
        std::size_t done = 0;
        while (done < bytes) {
            const auto index = static_cast<std::size_t>(at / block_bytes);
            const auto within = static_cast<std::size_t>(at % block_bytes);
            const auto n = std::min<std::size_t>(bytes - done, block_bytes - within);
            if (!offsets_[index]) std::memset(out + done, 0, n);
            else {
                if (!seek(offsets_[index] + within)) break;
                const auto got = std::fread(out + done, 1, n, file_);
                done += got; at += got;
                if (got != n) break;
                continue;
            }
            done += n; at += n;
        }
        return done;
    }
private:
    DataPack() = default;
    std::FILE* file_ = nullptr;
    std::uint64_t virtual_bytes_ = 0;
    std::vector<std::uint64_t> offsets_;
    std::mutex mutex_;
    static void need(bool ok, const char* why) {
        if (!ok) throw std::runtime_error(std::string("Invalid Speed Racer data pack: ") + why);
    }
    static std::uint32_t u32(const unsigned char* p) {
        return std::uint32_t(p[0]) | (std::uint32_t(p[1]) << 8) |
            (std::uint32_t(p[2]) << 16) | (std::uint32_t(p[3]) << 24);
    }
    static std::uint64_t u64(const unsigned char* p) {
        return std::uint64_t(u32(p)) | (std::uint64_t(u32(p + 4)) << 32);
    }
    bool seek(std::uint64_t offset) {
#ifdef _WIN32
        return _fseeki64(file_, static_cast<long long>(offset), SEEK_SET) == 0;
#else
        return fseeko(file_, static_cast<off_t>(offset), SEEK_SET) == 0;
#endif
    }
    void load() {
#ifdef _WIN32
        need(_fseeki64(file_, 0, SEEK_END) == 0, "size seek failed");
        const auto length = _ftelli64(file_);
#else
        need(fseeko(file_, 0, SEEK_END) == 0, "size seek failed");
        const auto length = ftello(file_);
#endif
        need(length >= 64 && seek(0), "truncated header");
        const auto physical_bytes = static_cast<std::uint64_t>(length);
        std::array<unsigned char, 64> header{};
        need(std::fread(header.data(), 1, header.size(), file_) == header.size(), "header read failed");
        need(std::memcmp(header.data(), magic.data(), magic.size()) == 0, "signature mismatch");
        need(u32(header.data() + 8) == 1 && u32(header.data() + 12) == block_bytes, "unsupported format");
        virtual_bytes_ = u64(header.data() + 16);
        need(virtual_bytes_ >= 18 * 2048 && virtual_bytes_ <= (std::uint64_t{16} << 30) &&
            virtual_bytes_ % 2048 == 0, "invalid virtual size");
        const auto count = u32(header.data() + 24);
        need(count == (virtual_bytes_ + block_bytes - 1) / block_bytes && u32(header.data() + 28) == 0,
            "invalid block count or flags");
        std::uint64_t next = 64 + std::uint64_t(count) * 8;
        need(next <= physical_bytes, "truncated block table");
        offsets_.resize(count);
        for (std::uint32_t i = 0; i < count; ++i) {
            unsigned char record[8];
            need(std::fread(record, 1, sizeof record, file_) == sizeof record, "table read failed");
            const auto offset = u64(record);
            if (offset) {
                const auto n = std::min<std::uint64_t>(block_bytes, virtual_bytes_ - std::uint64_t(i) * block_bytes);
                need(offset == next && n <= physical_bytes - next, "noncanonical or out-of-range block");
                next += n;
            }
            offsets_[i] = offset;
        }
        need(next == physical_bytes, "unexpected trailing data");
    }
};
}
