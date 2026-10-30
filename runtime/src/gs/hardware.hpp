#pragma once
#include <cstdint>
#include <vector>

namespace ps2::gs::hardware {
inline constexpr unsigned kPrivBytes = 0x2000;
bool selected();
bool failed();
bool attach(int kind, std::uint64_t window);
void gif(unsigned path, const std::uint8_t* data, std::uint32_t qwords);
void present(const std::uint8_t* priv, unsigned field);
bool image(std::vector<std::uint32_t>& pixels, std::uint32_t& width, std::uint32_t& height);
void read_fifo(std::uint8_t* data, std::uint32_t qwords);
void reset();
void soft_reset();
void write_csr(std::uint32_t value);
void resize(std::uint32_t width, std::uint32_t height);
void sync();
void close();
void stats();
}
