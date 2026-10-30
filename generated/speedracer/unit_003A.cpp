#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003A[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116,
    0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0,
    133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0,
    0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154,
    0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0,
    165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182,
    0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 200,
    0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0,
    211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0,
    0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E8000;
    case 2u: goto L_001E8004;
    case 3u: goto L_001E802C;
    case 4u: goto L_001E8034;
    case 5u: goto L_001E8048;
    case 6u: goto L_001E8094;
    case 7u: goto L_001E80A8;
    case 8u: goto L_001E80B8;
    case 9u: goto L_001E8204;
    case 10u: goto L_001E82C0;
    case 11u: goto L_001E82F4;
    case 12u: goto L_001E8394;
    case 13u: goto L_001E8430;
    case 14u: goto L_001E858C;
    case 15u: goto L_001E85B8;
    case 16u: goto L_001E868C;
    case 17u: goto L_001E86C0;
    case 18u: goto L_001E8808;
    case 19u: goto L_001E8914;
    case 20u: goto L_001E8C48;
    case 21u: goto L_001E8C74;
    case 22u: goto L_001E8E4C;
    case 23u: goto L_001E8E50;
    case 24u: goto L_001E8ED0;
    case 25u: goto L_001E8ED4;
    case 26u: goto L_001E8F00;
    case 27u: goto L_001E8FB4;
    case 28u: goto L_001E910C;
    case 29u: goto L_001E924C;
    case 30u: goto L_001E9450;
    case 31u: goto L_001E95CC;
    case 32u: goto L_001E9708;
    case 33u: goto L_001E9810;
    case 34u: goto L_001E9880;
    case 35u: goto L_001E9A14;
    case 36u: goto L_001E9BE0;
    case 37u: goto L_001E9C34;
    case 38u: goto L_001E9C88;
    case 39u: goto L_001E9D08;
    case 40u: goto L_001E9D60;
    case 41u: goto L_001E9E40;
    case 42u: goto L_001E9E8C;
    case 43u: goto L_001E9EE4;
    case 44u: goto L_001E9F50;
    case 45u: goto L_001E9FC4;
    case 46u: goto L_001EA064;
    case 47u: goto L_001EA0E4;
    case 48u: goto L_001EA178;
    case 49u: goto L_001EA234;
    case 50u: goto L_001EA2D0;
    case 51u: goto L_001EA304;
    case 52u: goto L_001EA33C;
    case 53u: goto L_001EA3A8;
    case 54u: goto L_001EA3F0;
    case 55u: goto L_001EA430;
    case 56u: goto L_001EA464;
    case 57u: goto L_001EA4C8;
    case 58u: goto L_001EA58C;
    case 59u: goto L_001EA5D0;
    case 60u: goto L_001EA630;
    case 61u: goto L_001EA6E4;
    case 62u: goto L_001EA754;
    case 63u: goto L_001EA7B0;
    case 64u: goto L_001EA824;
    case 65u: goto L_001EA82C;
    case 66u: goto L_001EA8A8;
    case 67u: goto L_001EA8C4;
    case 68u: goto L_001EA920;
    case 69u: goto L_001EA9AC;
    case 70u: goto L_001EAA38;
    case 71u: goto L_001EAAC4;
    case 72u: goto L_001EAB60;
    case 73u: goto L_001EAB90;
    case 74u: goto L_001EAB9C;
    case 75u: goto L_001EABD8;
    case 76u: goto L_001EABFC;
    case 77u: goto L_001EAC14;
    case 78u: goto L_001EAC3C;
    case 79u: goto L_001EAC64;
    case 80u: goto L_001EAC94;
    case 81u: goto L_001EACB4;
    case 82u: goto L_001EACE4;
    case 83u: goto L_001EAD58;
    case 84u: goto L_001EADBC;
    case 85u: goto L_001EAE2C;
    case 86u: goto L_001EAEC8;
    case 87u: goto L_001EAEE4;
    case 88u: goto L_001EAF04;
    case 89u: goto L_001EAF28;
    case 90u: goto L_001EAF48;
    case 91u: goto L_001EAF68;
    case 92u: goto L_001EAF8C;
    case 93u: goto L_001EAFBC;
    case 94u: goto L_001EAFE4;
    case 95u: goto L_001EB008;
    case 96u: goto L_001EB02C;
    case 97u: goto L_001EB04C;
    case 98u: goto L_001EB080;
    case 99u: goto L_001EB0C0;
    case 100u: goto L_001EB110;
    case 101u: goto L_001EB1B4;
    case 102u: goto L_001EB420;
    case 103u: goto L_001EB5C8;
    case 104u: goto L_001EB5F4;
    case 105u: goto L_001EB638;
    case 106u: goto L_001EB648;
    case 107u: goto L_001EB650;
    case 108u: goto L_001EB65C;
    case 109u: goto L_001EB67C;
    case 110u: goto L_001EB6E4;
    case 111u: goto L_001EB794;
    case 112u: goto L_001EB7B8;
    case 113u: goto L_001EB7C4;
    case 114u: goto L_001EB7D4;
    case 115u: goto L_001EB7E4;
    case 116u: goto L_001EB7FC;
    case 117u: goto L_001EB808;
    case 118u: goto L_001EB818;
    case 119u: goto L_001EB828;
    case 120u: goto L_001EB848;
    case 121u: goto L_001EB850;
    case 122u: goto L_001EB85C;
    case 123u: goto L_001EB888;
    case 124u: goto L_001EB894;
    case 125u: goto L_001EB8A0;
    case 126u: goto L_001EB8AC;
    case 127u: goto L_001EB8B8;
    case 128u: goto L_001EB8C4;
    case 129u: goto L_001EB8D4;
    case 130u: goto L_001EB8DC;
    case 131u: goto L_001EB8E8;
    case 132u: goto L_001EB8F4;
    case 133u: goto L_001EB900;
    case 134u: goto L_001EB90C;
    case 135u: goto L_001EB918;
    case 136u: goto L_001EB924;
    case 137u: goto L_001EB934;
    case 138u: goto L_001EB93C;
    case 139u: goto L_001EB948;
    case 140u: goto L_001EB954;
    case 141u: goto L_001EB960;
    case 142u: goto L_001EB96C;
    case 143u: goto L_001EB978;
    case 144u: goto L_001EB984;
    case 145u: goto L_001EB994;
    case 146u: goto L_001EB99C;
    case 147u: goto L_001EB9A8;
    case 148u: goto L_001EB9B4;
    case 149u: goto L_001EB9C0;
    case 150u: goto L_001EB9CC;
    case 151u: goto L_001EB9D8;
    case 152u: goto L_001EB9E4;
    case 153u: goto L_001EB9F4;
    case 154u: goto L_001EB9FC;
    case 155u: goto L_001EBA08;
    case 156u: goto L_001EBA14;
    case 157u: goto L_001EBA20;
    case 158u: goto L_001EBA2C;
    case 159u: goto L_001EBA38;
    case 160u: goto L_001EBA44;
    case 161u: goto L_001EBA54;
    case 162u: goto L_001EBA5C;
    case 163u: goto L_001EBA68;
    case 164u: goto L_001EBA74;
    case 165u: goto L_001EBA80;
    case 166u: goto L_001EBA8C;
    case 167u: goto L_001EBA98;
    case 168u: goto L_001EBAA4;
    case 169u: goto L_001EBAB4;
    case 170u: goto L_001EBABC;
    case 171u: goto L_001EBAD8;
    case 172u: goto L_001EBCA4;
    case 173u: goto L_001EBCE8;
    case 174u: goto L_001EBD00;
    case 175u: goto L_001EBD0C;
    case 176u: goto L_001EBD1C;
    case 177u: goto L_001EBD2C;
    case 178u: goto L_001EBD40;
    case 179u: goto L_001EBD4C;
    case 180u: goto L_001EBD5C;
    case 181u: goto L_001EBD6C;
    case 182u: goto L_001EBD7C;
    case 183u: goto L_001EBD88;
    case 184u: goto L_001EBD94;
    case 185u: goto L_001EBDA0;
    case 186u: goto L_001EBDB0;
    case 187u: goto L_001EBDB8;
    case 188u: goto L_001EBDC4;
    case 189u: goto L_001EBDD0;
    case 190u: goto L_001EBDDC;
    case 191u: goto L_001EBDE8;
    case 192u: goto L_001EBDF8;
    case 193u: goto L_001EBE00;
    case 194u: goto L_001EBE34;
    case 195u: goto L_001EBE40;
    case 196u: goto L_001EBE4C;
    case 197u: goto L_001EBE58;
    case 198u: goto L_001EBE68;
    case 199u: goto L_001EBE70;
    case 200u: goto L_001EBE7C;
    case 201u: goto L_001EBE88;
    case 202u: goto L_001EBE94;
    case 203u: goto L_001EBEA0;
    case 204u: goto L_001EBEB0;
    case 205u: goto L_001EBEB8;
    case 206u: goto L_001EBEC4;
    case 207u: goto L_001EBED0;
    case 208u: goto L_001EBEDC;
    case 209u: goto L_001EBEE8;
    case 210u: goto L_001EBEF8;
    case 211u: goto L_001EBF00;
    case 212u: goto L_001EBF0C;
    case 213u: goto L_001EBF18;
    case 214u: goto L_001EBF24;
    case 215u: goto L_001EBF30;
    case 216u: goto L_001EBF40;
    case 217u: goto L_001EBF48;
    case 218u: goto L_001EBF54;
    case 219u: goto L_001EBF60;
    case 220u: goto L_001EBF6C;
    case 221u: goto L_001EBF78;
    case 222u: goto L_001EBF88;
    case 223u: goto L_001EBF90;
    case 224u: goto L_001EBF9C;
    case 225u: goto L_001EBFA8;
    case 226u: goto L_001EBFB4;
    case 227u: goto L_001EBFC0;
    case 228u: goto L_001EBFD0;
    case 229u: goto L_001EBFD8;
    default: bad_entry(c, 0x001E8000u); return;
    }
L_001E8000:
    set32(c.r[4], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001E8004:
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
L_001E802C:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 3u);
    c.budget -= 2;
L_001E8034:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[8].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7FB8u | kUnwind; return; } [[clang::musttail]] return unit_0039(c, 427u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E8048:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);  goto L_001E8090; }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E808C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E808C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001E808C:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E8090:
    set32(c.r[5], c.r[5].w[0] + 3u);
    c.budget -= 1;
L_001E8094:
    c.r[3].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8048u | kUnwind; return; } goto L_001E8048; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E80A8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E82AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E81F0; } }
L_001E80B8:
    c.r[10].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[11], c.r[7].w[0] << 8);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[13].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[12].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[9], c.r[10].w[0] << 8);
    c.r[7].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.budget -= 17;
    if (c.r[9].d[0] != c.r[7].d[0]) { set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[3].w[0] & 31u)));  goto L_001E8160; }
    c.r[7].d[0] = ld16((c.r[6].w[0] + 4u));
    c.r[9].d[0] = c.r[13].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_001E815C; } }
    c.r[7].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[9].d[0] = c.r[12].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_001E815C; } }
    c.r[7].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001E81E8; } }
L_001E815C:
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 1;
L_001E8160:
    c.r[7].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 34;
L_001E81E8:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 2;
L_001E81F0:
    c.r[7].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E80B8u | kUnwind; return; } goto L_001E80B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E8204:
    c.r[8].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[9], c.r[7].w[0] << 8);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 5u));
    set32(c.r[8], c.r[8].w[0] << 8);
    set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[10].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    c.r[9].d[0] = c.r[8].d[0] & 65535ull;
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[8], c.r[4].w[0] << 8);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 17;
    if (c.r[7].d[0] != c.r[4].d[0]) { c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);  goto L_001E82A8; }
    c.r[4].d[0] = ld16((c.r[6].w[0] + 4u));
    c.r[7].d[0] = c.r[10].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_001E82A4; } }
    c.r[4].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[7].d[0] = c.r[9].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_001E82A4; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 6u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 15;
L_001E82A4:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E82A8:
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 1;
L_001E82AC:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8204u | kUnwind; return; } goto L_001E8204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E82C0:
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_001E8408; } }
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { c.r[9].d[0] = c.r[5].d[0] + 0ull;  goto L_001E8388; }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_001E8384; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001E8384; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_001E8370; } }
L_001E82F4:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[3].d[0];  if (t) { goto L_001E8310; } }
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001E8364; } }
L_001E8310:
    c.budget -= 2;
    if (c.r[13].d[0] != 0ull) { c.r[12].d[0] = ld8((c.r[5].w[0]));  goto L_001E8324; }
    c.r[7].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001E8364; } }
L_001E8324:
    set32(c.r[7], c.r[3].w[0] - c.r[13].w[0]);
    c.r[8].d[0] = ld16((c.r[19].w[0] + 8u));
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[12], c.r[11].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    mmi::mult(c, 0, c.r[12].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    mmi::maddu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + 128u);
    c.r[8].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 8));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 16;
L_001E8364:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_001E8370:
    c.r[7].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[13].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E82F4u | kUnwind; return; } goto L_001E82F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E8384:
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001E8388:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 255u);  if (t) { goto L_001E83F4; } }
L_001E8394:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_001E83A8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E83E8; } }
L_001E83A8:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[19].w[0] + 8u));  goto L_001E83BC; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E83E8; } }
L_001E83BC:
    set32(c.r[3], c.r[7].w[0] - c.r[8].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::maddu(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_001E83E8:
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 3;
L_001E83F4:
    c.r[3].d[0] = c.r[10].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[8].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8394u | kUnwind; return; } goto L_001E8394; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E8408:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[18].d[0] = c.r[5].d[0] + 0ull;  goto L_001E8580; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E857C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E857C; } }
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull | 65535ull;  if (t) { goto L_001E8568; } }
L_001E8430:
    c.r[11].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[12], c.r[12].w[0] << 8);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[11].d[0] != c.r[6].d[0];  if (t) { goto L_001E847C; } }
    c.r[12].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[11].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[13], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[8].w[0] + c.r[13].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld16((c.r[11].w[0]));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { goto L_001E855C; } }
L_001E847C:
    c.budget -= 2;
    if (c.r[11].d[0] != 0ull) { c.r[12].d[0] = ld8((c.r[5].w[0] + 1u));  goto L_001E849C; }
    c.r[11].d[0] = ld16((c.r[20].w[0] + 8u));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_001E855C; } }
L_001E849C:
    c.r[15].d[0] = c.r[11].d[0] << 32;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[17].d[0] = ld8((c.r[5].w[0]));
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[11].d[0] = c.r[6].d[0] - c.r[11].d[0];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[13].d[0] = ld16((c.r[19].w[0] + 8u));
    set32(c.r[22], c.r[18].w[0] << 2);
    c.r[12].d[0] = c.r[11].d[0] << 32;
    set32(c.r[18], c.r[17].w[0] << 1);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    set32(c.r[17], c.r[4].w[0] + c.r[22].w[0]);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    c.r[18].d[0] = ld16((c.r[17].w[0]));
    mmi::multu(c, 0, c.r[15].w[0], c.r[18].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[18].w[0], c.r[14].w[0]);
    c.r[14].d[0] = c.lo.d[1];
    mmi::mult(c, 1, c.r[13].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] << 32;
    c.r[15].d[0] = c.hi.d[0];
    mmi::multu(c, 0, c.r[12].w[0], c.r[13].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[15], c.r[15], c.r[17]);
    c.r[12].d[0] = c.hi.d[0];
    c.r[14].d[0] = c.r[14].d[0] + c.r[15].d[0];
    mmi::pextlw(c.r[12], c.r[12], c.r[13]);
    c.r[11].d[0] = c.r[11].d[0] + c.r[12].d[0];
    c.r[11].d[0] = c.r[14].d[0] + c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[12].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[11].d[0] = c.r[12].d[0] >> 16;
    c.r[11].d[0] = c.r[12].d[0] + c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] >> 16;
    c.r[13].d[0] = c.r[11].d[0] & 65535ull;
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 8));
    set32(c.r[13], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld16((c.r[11].w[0]));
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 48;
L_001E855C:
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 3;
L_001E8568:
    c.r[11].d[0] = c.r[10].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[11].d[0] != 0ull) { c.r[12].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8430u | kUnwind; return; } goto L_001E8430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E857C:
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001E8580:
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_001E8678; } }
L_001E858C:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E85C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E85B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001E85B8u) [[unlikely]] return; }
L_001E85B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[22].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E8670; } }
L_001E85C0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[18].w[0]));  goto L_001E85E0; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E866C; } }
L_001E85E0:
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] - c.r[5].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[9], c.r[4].w[0] << 8);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 8u));
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[9].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    mmi::mult(c, 1, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.hi.d[0];
    mmi::multu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[7], c.r[7], c.r[8]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] + c.r[7].d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[6].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[4].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[4].d[0] >> 16;
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 16;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 35;
L_001E866C:
    c.r[22].d[0] = c.r[22].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E8670:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 2;
L_001E8678:
    c.r[3].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[18].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E858Cu | kUnwind; return; } goto L_001E858C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E868C:
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] != c.r[6].d[0];  if (t) { goto L_001E88EC; } }
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { c.r[7].d[0] = c.r[5].d[0] + 0ull;  goto L_001E87FC; }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_001E87F8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001E87F8; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_001E87E4; } }
L_001E86C0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_001E86FC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E87D8; } }
L_001E86FC:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[12].d[0] = ld16((c.r[19].w[0] + 2u));  goto L_001E8720; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E87D8; } }
L_001E8720:
    set32(c.r[3], c.r[4].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[13].d[0] = ld8((c.r[5].w[0]));
    mmi::mult(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[13], c.r[11].w[0] + c.r[13].w[0]);
    c.r[12].d[0] = ld8((c.r[13].w[0]));
    mmi::maddu(c, 0, c.r[12].w[0], c.r[6].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + 128u);
    c.r[13].d[0] = c.r[12].d[0] & 65535ull;
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 8));
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[12], c.r[10].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[13].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[12].d[0] = ld16((c.r[19].w[0] + 4u));
    set32(c.r[13], c.r[11].w[0] + c.r[13].w[0]);
    c.r[13].d[0] = ld8((c.r[13].w[0]));
    mmi::mult(c, 1, c.r[13].w[0], c.r[6].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    mmi::maddu(c, 1, c.r[12].w[0], c.r[3].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    set32(c.r[12], c.r[12].w[0] + 128u);
    c.r[13].d[0] = c.r[12].d[0] & 65535ull;
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 8));
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[12], c.r[10].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[13].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[12].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[13], c.r[11].w[0] + c.r[13].w[0]);
    c.r[13].d[0] = ld8((c.r[13].w[0]));
    mmi::mult(c, 0, c.r[13].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::maddu(c, 0, c.r[12].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 46;
L_001E87D8:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 3;
L_001E87E4:
    c.r[3].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E86C0u | kUnwind; return; } goto L_001E86C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E87F8:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001E87FC:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_001E88D8; } }
L_001E8808:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_001E882C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E88CC; } }
L_001E882C:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[10].d[0] = ld8((c.r[5].w[0]));  goto L_001E8850; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E88CC; } }
L_001E8850:
    set32(c.r[3], c.r[4].w[0] - c.r[6].w[0]);
    c.r[9].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[10].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::maddu(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[9].w[0] + 128u);
    c.r[10].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 4u));
    mmi::mult(c, 1, c.r[10].w[0], c.r[6].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    mmi::maddu(c, 1, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    set32(c.r[9], c.r[9].w[0] + 128u);
    c.r[10].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 6u));
    mmi::mult(c, 0, c.r[10].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::maddu(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 128u);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 31;
L_001E88CC:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 3;
L_001E88D8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8808u | kUnwind; return; } goto L_001E8808; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E88EC:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[19].d[0] = c.r[5].d[0] + 0ull;  goto L_001E8C3C; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E8C38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001E8C38; } }
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull | 65535ull;  if (t) { goto L_001E8C24; } }
L_001E8914:
    c.r[6].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[9], c.r[9].w[0] << 8);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[12].d[0];  if (t) { goto L_001E89C0; } }
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[13].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[13].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[13].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 37;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 5u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_001E8C18; } }
L_001E89C0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[18].d[0] = ld8((c.r[5].w[0] + 1u));  goto L_001E8A08; }
    c.r[6].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[13].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[13].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[13].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001E8C18; } }
L_001E8A08:
    c.r[9].d[0] = c.r[12].d[0] - c.r[6].d[0];
    c.r[17].d[0] = ld8((c.r[5].w[0]));
    c.r[11].d[0] = c.r[9].d[0] << 32;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[15].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[9].d[0] = c.r[6].d[0] << 32;
    set32(c.r[18], c.r[18].w[0] << 2);
    set32(c.r[22], c.r[17].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[18].w[0]);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[17].w[0])));
    mmi::multu(c, 0, c.r[11].w[0], c.r[15].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);
    c.r[24].d[0] = ld16((c.r[17].w[0]));
    mmi::mult(c, 1, c.r[15].w[0], c.r[10].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[17].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[17], c.r[17], c.r[18]);
    mmi::multu(c, 0, c.r[9].w[0], c.r[24].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[22].d[0] = c.r[15].d[0] + c.r[17].d[0];
    mmi::mult(c, 1, c.r[24].w[0], c.r[6].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[17].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[17], c.r[17], c.r[18]);
    c.r[15].d[0] = c.r[15].d[0] + c.r[17].d[0];
    c.r[15].d[0] = c.r[15].d[0] + c.r[22].d[0];
    c.r[15].d[0] = c.r[15].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[17].d[0] = c.r[15].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[15].d[0] = c.r[17].d[0] >> 16;
    c.r[15].d[0] = c.r[17].d[0] + c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] >> 16;
    c.r[18].d[0] = c.r[15].d[0] & 65535ull;
    c.r[15].d[0] = c.r[15].d[0] & 255ull;
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 8));
    set32(c.r[18], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[15].w[0] << 1);
    set32(c.r[15], c.r[7].w[0] + c.r[18].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = ld16((c.r[15].w[0]));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 8));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[18].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[15].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[17].d[0] = ld16((c.r[19].w[0] + 4u));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[22], c.r[18].w[0] << 2);
    set32(c.r[18], c.r[15].w[0] << 1);
    set32(c.r[15], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + c.r[18].w[0]);
    c.r[15].d[0] = ld16((c.r[15].w[0]));
    mmi::multu(c, 0, c.r[9].w[0], c.r[15].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    c.r[22].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[15].w[0], c.r[6].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    mmi::pextlw(c.r[22], c.r[22], c.r[24]);
    c.r[18].d[0] = c.r[15].d[0] << 32;
    c.r[22].d[0] = c.r[18].d[0] + c.r[22].d[0];
    mmi::mult(c, 1, c.r[17].w[0], c.r[10].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    mmi::multu(c, 0, c.r[11].w[0], c.r[17].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[17].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[17], c.r[17], c.r[18]);
    c.r[15].d[0] = c.r[15].d[0] + c.r[17].d[0];
    c.r[15].d[0] = c.r[22].d[0] + c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[17].d[0] = c.r[15].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[15].d[0] = c.r[17].d[0] >> 16;
    c.r[15].d[0] = c.r[17].d[0] + c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] >> 16;
    c.r[18].d[0] = c.r[15].d[0] & 65535ull;
    c.r[15].d[0] = c.r[15].d[0] & 255ull;
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 8));
    set32(c.r[18], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[15].w[0] << 1);
    set32(c.r[15], c.r[7].w[0] + c.r[18].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = ld16((c.r[15].w[0]));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 8));
    st8((c.r[13].w[0] + 2u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[18].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[17].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[15].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[22], c.r[18].w[0] << 2);
    set32(c.r[18], c.r[17].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[22].w[0]);
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    c.r[18].d[0] = ld16((c.r[17].w[0]));
    mmi::multu(c, 0, c.r[9].w[0], c.r[18].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[18].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    c.r[9].d[0] = c.r[6].d[0] << 32;
    mmi::mult(c, 1, c.r[15].w[0], c.r[10].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    c.r[10].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    mmi::pextlw(c.r[10], c.r[10], c.r[17]);
    c.r[17].d[0] = c.r[9].d[0] + c.r[10].d[0];
    mmi::multu(c, 0, c.r[11].w[0], c.r[15].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[9], c.r[9], c.r[10]);
    c.r[6].d[0] = c.r[6].d[0] + c.r[9].d[0];
    c.r[6].d[0] = c.r[17].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[9].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = c.r[9].d[0] >> 16;
    c.r[6].d[0] = c.r[9].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 16;
    c.r[10].d[0] = c.r[6].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[13].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[13].w[0] + 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 132;
L_001E8C18:
    c.r[14].d[0] = c.r[14].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[13], c.r[13].w[0] + 6u);
    c.budget -= 3;
L_001E8C24:
    c.r[6].d[0] = c.r[14].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[5].w[0] + 6u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8914u | kUnwind; return; } goto L_001E8914; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E8E4C; } }
L_001E8C38:
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001E8C3C:
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001E8E40; } }
L_001E8C48:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E8C7C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E8C74u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001E8C74u) [[unlikely]] return; }
L_001E8C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001E8E38; } }
L_001E8C7C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[11].d[0] = c.r[3].d[0] - c.r[5].d[0];  goto L_001E8CC4; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E8E34; } }
L_001E8CC4:
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = ld8((c.r[19].w[0] + 4u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 3u));
    set32(c.r[8], c.r[3].w[0] << 8);
    c.r[10].d[0] = ld16((c.r[20].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[9], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[11].d[0] << 32;
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[9].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[5].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    mmi::pextlw(c.r[12], c.r[12], c.r[13]);
    c.r[11].d[0] = c.r[9].d[0] << 32;
    c.r[12].d[0] = c.r[11].d[0] + c.r[12].d[0];
    mmi::mult(c, 1, c.r[10].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    mmi::multu(c, 0, c.r[4].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[10].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[10], c.r[10], c.r[11]);
    c.r[9].d[0] = c.r[9].d[0] + c.r[10].d[0];
    c.r[9].d[0] = c.r[12].d[0] + c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[10].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[9].d[0] = c.r[10].d[0] >> 16;
    c.r[9].d[0] = c.r[10].d[0] + c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] >> 16;
    c.r[10].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 4u));
    mmi::multu(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[11].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    mmi::pextlw(c.r[11], c.r[11], c.r[12]);
    c.r[10].d[0] = c.r[9].d[0] << 32;
    c.r[11].d[0] = c.r[10].d[0] + c.r[11].d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[5].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[8].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[8], c.r[8], c.r[10]);
    c.r[8].d[0] = c.r[9].d[0] + c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] + c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[9].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = c.r[9].d[0] >> 16;
    c.r[8].d[0] = c.r[9].d[0] + c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] >> 16;
    c.r[9].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 6u));
    mmi::multu(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.r[3].d[0] << 32;
    mmi::mult(c, 1, c.r[7].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::pextlw(c.r[5], c.r[5], c.r[8]);
    c.r[8].d[0] = c.r[4].d[0] + c.r[5].d[0];
    mmi::multu(c, 0, c.r[6].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(32767ll);
    c.r[4].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[4].d[0] >> 16;
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 16;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 92;
L_001E8E34:
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E8E38:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] + 6u);
    c.budget -= 2;
L_001E8E40:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[19].w[0] + 6u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8C48u | kUnwind; return; } goto L_001E8C48; }
L_001E8E4C:
    c.r[4].d[0] = ld8((c.r[21].w[0] + 16u));
    c.budget -= 1;
L_001E8E50:
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E8ED0; } }
    c.r[3].d[0] = c.r[4].d[0] & 251ull;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    st8((c.r[21].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = ld8((c.r[21].w[0] + 18u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[21].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld8((c.r[21].w[0] + 18u));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 17u));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st8((c.r[21].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 19u));
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::multu(c, 1, c.r[5].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.hi.d[1];
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[21].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 29;
L_001E8ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001E8ED4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001E8F00:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & 2ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E9BB0; } }
    set32(c.r[3], 0u + 2u);
    c.r[17].d[0] = ld16((c.r[4].w[0] + 796u));
    c.r[16].d[0] = ld16((c.r[4].w[0] + 798u));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[18].d[0] = ld16((c.r[4].w[0] + 794u));  if (t) { goto L_001E9564; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 600u)));  goto L_001E91FC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[11].d[0] = c.r[18].d[0] << 32;  goto L_001E90D8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E90D4; } }
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[9].d[0] = c.r[18].d[0] << 32;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[7]);
    c.r[23].d[0] = c.r[17].d[0] << 32;
    c.r[20].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[12].d[0] = c.r[6].d[0] + 0ull;
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 32);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);  if (t) { goto L_001E90C0; } }
L_001E8FB4:
    c.r[10].d[0] = ld8((c.r[12].w[0]));
    c.r[8].d[0] = ld8((c.r[12].w[0] + 1u));
    c.r[7].d[0] = ld8((c.r[12].w[0] + 2u));
    set32(c.r[10], c.r[14].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[14].w[0] + c.r[8].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[7], c.r[14].w[0] + c.r[7].w[0]);
    c.r[14].d[0] = ld8((c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 11;
    { const bool t = c.r[10].d[0] != c.r[14].d[0]; set32(c.r[12], c.r[12].w[0] + 3u);  if (t) { goto L_001E8FEC; } }
    c.r[7].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[7].d[0]) { c.r[7].d[0] = ld8((c.r[12].w[0] - 1u));  goto L_001E90B4; }
L_001E8FEC:
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[7].d[0] = c.r[8].d[0] & 255ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[21].d[0] = c.r[7].d[0] << 32;
    c.r[24].d[0] = c.r[14].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);
    mmi::mult(c, 1, c.r[7].w[0], c.r[9].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    mmi::multu(c, 1, c.r[23].w[0], c.r[24].w[0]);
    c.r[22].d[0] = c.lo.d[1];
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);
    c.r[14].d[0] = c.hi.d[1];
    mmi::multu(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[22], c.r[14], c.r[22]);
    set32(c.r[25], ld32((c.r[4].w[0] + 584u)));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[14]);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    mmi::mult(c, 1, c.r[24].w[0], c.r[14].w[0]);
    c.r[14].d[0] = c.lo.d[1];
    c.r[24].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[15].w[0], c.r[20].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[8], c.r[24], c.r[8]);
    c.r[7].d[0] = c.r[7].d[0] + c.r[10].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] + c.r[8].d[0];
    mmi::mult(c, 0, c.r[30].w[0], c.r[23].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[8].d[0] + c.r[14].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] + c.r[22].d[0];
    mmi::multu(c, 0, c.r[20].w[0], c.r[21].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[7].d[0] + c.r[8].d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[7], c.r[7], c.r[10]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[10]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[15].d[0] + c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[7].d[0] = c.r[10].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] + c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 15;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[7], c.r[25].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 50;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { goto L_001E90BC; } }
L_001E90B4:
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_001E90BC:
    c.r[13].d[0] = c.r[13].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E90C0:
    c.r[7].d[0] = c.r[13].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[14], ld32((c.r[4].w[0] + 588u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E8FB4u | kUnwind; return; } goto L_001E8FB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[5].w[0] + 16u));  if (t) { goto L_001E9568; } }
L_001E90D4:
    c.r[11].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_001E90D8:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[20].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[15].d[0] = c.r[6].d[0] + 0ull;
    c.r[14].d[0] = c.r[6].d[0] + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[7]);  if (t) { goto L_001E91E8; } }
L_001E910C:
    c.r[10].d[0] = ld8((c.r[15].w[0] + 1u));
    c.r[9].d[0] = ld8((c.r[15].w[0] + 2u));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[10].d[0]; set32(c.r[15], c.r[15].w[0] + 3u);  if (t) { goto L_001E9128; } }
    c.r[7].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[12].d[0] == c.r[7].d[0]) { c.r[7].d[0] = ld8((c.r[15].w[0] - 1u));  goto L_001E91DC; }
L_001E9128:
    c.r[12].d[0] = c.r[12].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.r[21].d[0] = c.r[9].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[7].d[0] = c.r[10].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[9].w[0], c.r[11].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    mmi::multu(c, 1, c.r[3].w[0], c.r[7].w[0]);
    c.r[24].d[0] = c.lo.d[1];
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);
    c.r[23].d[0] = c.hi.d[1];
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::multu(c, 0, c.r[11].w[0], c.r[12].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[7].w[0], c.r[30].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    mmi::pextlw(c.r[23], c.r[23], c.r[24]);
    c.r[24].d[0] = c.hi.d[0];
    c.r[25].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);
    mmi::mult(c, 0, c.r[12].w[0], c.r[8].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    mmi::pextlw(c.r[10], c.r[24], c.r[10]);
    c.r[9].d[0] = c.r[9].d[0] + c.r[12].d[0];
    mmi::mult(c, 1, c.r[25].w[0], c.r[20].w[0]);
    c.r[24].d[0] = c.lo.d[1];
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] + c.r[10].d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[10].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] + c.r[23].d[0];
    mmi::multu(c, 0, c.r[20].w[0], c.r[21].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[9].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[7], c.r[7], c.r[10]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[10]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[24].d[0] + c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[7].d[0] = c.r[10].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] + c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 15;
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 45;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] + 1u);  if (t) { goto L_001E91E4; } }
L_001E91DC:
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 2;
L_001E91E4:
    c.r[13].d[0] = c.r[13].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E91E8:
    c.r[7].d[0] = c.r[13].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[12].d[0] = ld8((c.r[15].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E910Cu | kUnwind; return; } goto L_001E910C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9564; } }
L_001E91FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_001E9420; }
    set32(c.r[3], ld32((c.r[4].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E941C; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[15].d[0] = c.r[18].d[0] << 32;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[11].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[7]);  if (t) { goto L_001E9408; } }
L_001E924C:
    c.r[10].d[0] = ld8((c.r[22].w[0] + 2u));
    c.r[8].d[0] = ld8((c.r[22].w[0] + 1u));
    set32(c.r[9], c.r[7].w[0] << 8);
    c.r[7].d[0] = ld8((c.r[22].w[0] + 3u));
    set32(c.r[10], c.r[10].w[0] << 8);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[9].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[7].d[0];
    c.r[7].d[0] = ld8((c.r[22].w[0] + 5u));
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[7].d[0] = c.r[9].d[0] | c.r[7].d[0];
    set32(c.r[22], c.r[22].w[0] + 6u);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] != c.r[10].d[0]; c.r[12].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_001E92A0; } }
    c.r[7].d[0] = c.r[12].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[7].d[0]) { set32(c.r[25], ld32((c.r[4].w[0] + 568u)));  goto L_001E92A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[8].d[0] & 65535ull;  if (t) { goto L_001E93F4; } }
L_001E92A0:
    set32(c.r[25], ld32((c.r[4].w[0] + 568u)));
    c.budget -= 1;
L_001E92A4:
    c.r[9].d[0] = c.r[12].d[0] & 65535ull;
    c.r[7].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    c.r[12].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[23], ld32((c.r[4].w[0] + 600u)));
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[25].w[0] & 31u)));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 8));
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[14], c.r[8].w[0] << 1);
    set32(c.r[12], c.r[23].w[0] + c.r[12].w[0]);
    c.r[8].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[13], ld32((c.r[12].w[0])));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> (c.r[25].w[0] & 31u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    set32(c.r[8], c.r[23].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[9].w[0] << 1);
    set32(c.r[12], c.r[10].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    set32(c.r[10], ld32((c.r[8].w[0])));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[25].w[0] & 31u)));
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 596u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[23].w[0] + c.r[8].w[0]);
    c.r[10].d[0] = ld16((c.r[10].w[0]));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[7]);
    set32(c.r[7], c.r[13].w[0] + c.r[14].w[0]);
    c.r[12].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[24].d[0] = c.r[12].d[0] << 32;
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);
    mmi::multu(c, 0, c.r[15].w[0], c.r[24].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[10].d[0] << 32;
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 1, c.r[10].w[0], c.r[15].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    mmi::multu(c, 1, c.r[11].w[0], c.r[8].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[10].d[0] = c.hi.d[1];
    mmi::pextlw(c.r[10], c.r[10], c.r[13]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[13]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[8].w[0], c.r[13].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    c.r[13].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[23].w[0], c.r[3].w[0]);
    c.r[23].d[0] = c.lo.d[1];
    mmi::pextlw(c.r[13], c.r[13], c.r[14]);
    mmi::mult(c, 0, c.r[24].w[0], c.r[30].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[11].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[12].d[0] + c.r[14].d[0];
    c.r[12].d[0] = c.r[12].d[0] << 32;
    c.r[12].d[0] = c.r[12].d[0] + c.r[13].d[0];
    c.r[8].d[0] = c.r[9].d[0] + c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] + c.r[10].d[0];
    mmi::multu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[9].d[0] = c.r[12].d[0] + c.r[8].d[0];
    c.r[8].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[8], c.r[8], c.r[10]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[10]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[10].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[23].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] + c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] + c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 15;
    c.r[9].d[0] = c.r[7].d[0] & 65535ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[25].w[0] & 31u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] << 1);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[7]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[7].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 84;
L_001E93F4:
    c.r[20].d[0] = c.r[20].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 8));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.budget -= 5;
L_001E9408:
    c.r[7].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[22].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E924Cu | kUnwind; return; } goto L_001E924C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9564; } }
L_001E941C:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_001E9420:
    c.r[20].d[0] = c.r[17].d[0] << 32;
    c.r[11].d[0] = c.r[16].d[0] << 32;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[25].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { goto L_001E9558; } }
L_001E9450:
    c.r[13].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[14], c.r[12].w[0] << 8);
    c.r[12].d[0] = ld8((c.r[10].w[0] + 3u));
    set32(c.r[13], c.r[13].w[0] << 8);
    c.r[7].d[0] = c.r[14].d[0] | c.r[7].d[0];
    c.r[14].d[0] = ld8((c.r[10].w[0] + 4u));
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    c.r[13].d[0] = ld8((c.r[10].w[0] + 5u));
    c.r[12].d[0] = c.r[12].d[0] & 65535ull;
    set32(c.r[14], c.r[14].w[0] << 8);
    c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];
    set32(c.r[10], c.r[10].w[0] + 6u);
    c.budget -= 16;
    { const bool t = c.r[7].d[0] != c.r[12].d[0]; c.r[14].d[0] = c.r[13].d[0] & 65535ull;  if (t) { goto L_001E949C; } }
    c.r[13].d[0] = c.r[14].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[13].d[0]) { c.r[13].d[0] = c.r[12].d[0] << 32;  goto L_001E94A4; }
L_001E949C:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[13].d[0] = c.r[12].d[0] << 32;
    c.budget -= 2;
L_001E94A4:
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[12].d[0] = c.r[14].d[0] & 65535ull;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[12].d[0] = c.r[12].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    mmi::mult(c, 1, c.r[14].w[0], c.r[3].w[0]);
    c.r[22].d[0] = c.lo.d[1];
    mmi::multu(c, 1, c.r[20].w[0], c.r[13].w[0]);
    c.r[24].d[0] = c.lo.d[1];
    mmi::multu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[15].d[0] = c.hi.d[1];
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    mmi::pextlw(c.r[15], c.r[15], c.r[24]);
    c.r[24].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[13].w[0], c.r[25].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[7].w[0], c.r[21].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    mmi::pextlw(c.r[23], c.r[24], c.r[23]);
    mmi::mult(c, 0, c.r[14].w[0], c.r[20].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[22].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] + c.r[23].d[0];
    mmi::mult(c, 1, c.r[24].w[0], c.r[11].w[0]);
    c.r[24].d[0] = c.lo.d[1];
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[13].d[0] = c.r[14].d[0] + c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 32;
    c.r[13].d[0] = c.r[13].d[0] + c.r[15].d[0];
    mmi::multu(c, 0, c.r[11].w[0], c.r[12].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[13].d[0] = c.r[7].d[0] + c.r[13].d[0];
    c.r[7].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[12].w[0], c.r[30].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[7], c.r[7], c.r[14]);
    c.r[12].d[0] = c.r[24].d[0] + c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] << 32;
    c.r[7].d[0] = c.r[12].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] + c.r[13].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 15;
    c.r[12].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 45;
L_001E9558:
    c.r[7].d[0] = c.r[8].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[12].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9450u | kUnwind; return; } goto L_001E9450; }
L_001E9564:
    c.r[7].d[0] = ld8((c.r[5].w[0] + 16u));
    c.budget -= 1;
L_001E9568:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[7].d[0] != c.r[3].d[0]) { c.r[4].d[0] = ld8((c.r[5].w[0] + 18u));  goto L_001E9B3C; }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 600u)));  goto L_001E97CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 584u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] << 32;  goto L_001E96E8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E96E4; } }
    c.r[15].d[0] = c.r[18].d[0] << 32;
    c.r[11].d[0] = c.r[17].d[0] << 32;
    c.r[7].d[0] = c.r[16].d[0] << 32;
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { goto L_001E96D0; } }
L_001E95CC:
    c.r[13].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[8].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[13], c.r[16].w[0] + c.r[13].w[0]);
    c.r[14].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[10], c.r[16].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[16].w[0] + c.r[8].w[0]);
    c.r[13].d[0] = ld8((c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 11;
    if (c.r[10].d[0] != c.r[13].d[0]) { c.r[2].d[0] = c.r[2].d[0] | 1ull;  goto L_001E9608; }
    c.r[8].d[0] = c.r[14].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[8].d[0]) { c.r[16].d[0] = c.r[10].d[0] << 32;  goto L_001E960C; }
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 1;
L_001E9608:
    c.r[16].d[0] = c.r[10].d[0] << 32;
    c.budget -= 1;
L_001E960C:
    c.r[8].d[0] = c.r[14].d[0] & 255ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[18].d[0] = c.r[13].d[0] << 32;
    mmi::multu(c, 0, c.r[15].w[0], c.r[16].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    mmi::mult(c, 1, c.r[10].w[0], c.r[15].w[0]);
    c.r[13].d[0] = c.lo.d[1];
    mmi::multu(c, 1, c.r[11].w[0], c.r[18].w[0]);
    c.r[17].d[0] = c.lo.d[1];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[10].d[0] = c.hi.d[1];
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[23].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[18].w[0], c.r[9].w[0]);
    c.r[18].d[0] = c.lo.d[1];
    mmi::pextlw(c.r[14], c.r[23], c.r[14]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[12].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::pextlw(c.r[10], c.r[10], c.r[17]);
    c.r[13].d[0] = c.r[13].d[0] + c.r[23].d[0];
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[13].d[0] = c.r[13].d[0] << 32;
    mmi::mult(c, 1, c.r[16].w[0], c.r[7].w[0]);
    c.r[16].d[0] = c.lo.d[1];
    c.r[14].d[0] = c.r[13].d[0] + c.r[14].d[0];
    set32(c.r[17], ld32((c.r[4].w[0] + 584u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[11].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[20].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[13].d[0] = c.r[13].d[0] + c.r[18].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 32;
    c.r[10].d[0] = c.r[13].d[0] + c.r[10].d[0];
    mmi::multu(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[14].d[0] + c.r[10].d[0];
    c.r[10].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[10], c.r[10], c.r[13]);
    c.r[8].d[0] = c.r[16].d[0] + c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] + c.r[10].d[0];
    c.r[8].d[0] = c.r[8].d[0] + c.r[14].d[0];
    c.r[8].d[0] = c.r[8].d[0] >> 15;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[8], c.r[17].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0]));
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[6].w[0] + 3u));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.budget -= 49;
L_001E96D0:
    c.r[8].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[16], ld32((c.r[4].w[0] + 588u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E95CCu | kUnwind; return; } goto L_001E95CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B38; } }
L_001E96E4:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_001E96E8:
    c.r[13].d[0] = c.r[16].d[0] << 32;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { goto L_001E97B8; } }
L_001E9708:
    c.r[11].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[12].d[0]; c.r[14].d[0] = ld8((c.r[6].w[0] + 2u));  if (t) { goto L_001E9720; } }
    c.r[9].d[0] = c.r[14].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[9].d[0]) { c.r[11].d[0] = c.r[11].d[0] << 32;  goto L_001E9728; }
L_001E9720:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[11].d[0] = c.r[11].d[0] << 32;
    c.budget -= 2;
L_001E9728:
    c.r[9].d[0] = c.r[12].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[11].d[0] = c.r[11].d[0] + c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[9].d[0] = c.r[14].d[0] & 255ull;
    c.r[17].d[0] = c.r[11].d[0] << 32;
    c.r[14].d[0] = c.r[9].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    mmi::mult(c, 1, c.r[9].w[0], c.r[4].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    mmi::multu(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::multu(c, 1, c.r[13].w[0], c.r[14].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[9].d[0] = c.hi.d[1];
    mmi::pextlw(c.r[12], c.r[9], c.r[12]);
    mmi::mult(c, 1, c.r[14].w[0], c.r[10].w[0]);
    c.r[9].d[0] = c.lo.d[1];
    c.r[14].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[16], c.r[14], c.r[16]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[13].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[15].d[0] + c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[14].d[0] = c.r[14].d[0] + c.r[16].d[0];
    c.r[9].d[0] = c.r[11].d[0] + c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] + c.r[12].d[0];
    c.r[9].d[0] = c.r[14].d[0] + c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] >> 8;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[6].w[0] + 3u));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.budget -= 36;
L_001E97B8:
    c.r[9].d[0] = c.r[7].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9708u | kUnwind; return; } goto L_001E9708; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B38; } }
L_001E97CC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[11].d[0] = c.r[18].d[0] << 32;  goto L_001E99E8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 596u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E99E4; } }
    c.r[20].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[13].d[0] = c.r[16].d[0] << 32;
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { goto L_001E99D0; } }
L_001E9810:
    c.r[10].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[14], c.r[7].w[0] << 8);
    c.r[7].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[10], c.r[10].w[0] << 8);
    c.r[12].d[0] = c.r[14].d[0] | c.r[12].d[0];
    c.r[14].d[0] = ld8((c.r[6].w[0] + 4u));
    c.r[12].d[0] = c.r[12].d[0] & 65535ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[7].d[0];
    c.r[7].d[0] = ld8((c.r[6].w[0] + 5u));
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[14], c.r[14].w[0] << 8);
    c.r[7].d[0] = c.r[14].d[0] | c.r[7].d[0];
    c.budget -= 15;
    { const bool t = c.r[12].d[0] != c.r[10].d[0]; c.r[14].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_001E9860; } }
    c.r[7].d[0] = c.r[14].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[12].d[0] != c.r[7].d[0]) { c.r[7].d[0] = c.r[14].d[0] & 65535ull;  goto L_001E9864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[12].d[0] & 65535ull;  if (t) { goto L_001E99A8; } }
L_001E9860:
    c.r[7].d[0] = c.r[14].d[0] & 65535ull;
    c.budget -= 1;
L_001E9864:
    c.r[22].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    c.r[18].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[16], c.r[7].w[0] << 1);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    set32(c.r[7], ld32((c.r[4].w[0] + 568u)));
    set32(c.r[14], c.r[12].w[0] << 1);
    c.budget -= 7;
L_001E9880:
    c.r[12].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[15], ld32((c.r[4].w[0] + 600u)));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[22].w[0]) >> (c.r[7].w[0] & 31u)));
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[7].w[0] & 31u)));
    set32(c.r[22], c.r[22].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[23], c.r[15].w[0] + c.r[22].w[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> (c.r[7].w[0] & 31u)));
    set32(c.r[22], c.r[15].w[0] + c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[23].w[0])));
    set32(c.r[22], ld32((c.r[22].w[0])));
    set32(c.r[24], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[23], c.r[10].w[0] << 1);
    set32(c.r[12], c.r[18].w[0] << 2);
    set32(c.r[14], c.r[22].w[0] + c.r[23].w[0]);
    c.r[18].d[0] = ld16((c.r[24].w[0]));
    set32(c.r[12], c.r[15].w[0] + c.r[12].w[0]);
    c.r[15].d[0] = ld16((c.r[14].w[0]));
    set32(c.r[10], ld32((c.r[4].w[0] + 596u)));
    c.r[24].d[0] = c.r[18].d[0] << 32;
    c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);
    set32(c.r[14], ld32((c.r[12].w[0])));
    mmi::multu(c, 0, c.r[3].w[0], c.r[24].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[12].d[0] = c.r[15].d[0] << 32;
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[25].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[15].w[0], c.r[3].w[0]);
    c.r[22].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[24].w[0], c.r[21].w[0]);
    c.r[24].d[0] = c.lo.d[0];
    mmi::multu(c, 1, c.r[20].w[0], c.r[12].w[0]);
    c.r[18].d[0] = c.lo.d[1];
    c.r[15].d[0] = c.hi.d[1];
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    mmi::pextlw(c.r[18], c.r[15], c.r[18]);
    c.r[14].d[0] = ld16((c.r[14].w[0]));
    mmi::mult(c, 0, c.r[16].w[0], c.r[20].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[12].w[0], c.r[17].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[22].d[0] = c.r[22].d[0] + c.r[24].d[0];
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[22].d[0] = c.r[22].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[15].d[0] = c.r[16].d[0] + c.r[15].d[0];
    mmi::mult(c, 1, c.r[12].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] + c.r[18].d[0];
    mmi::multu(c, 0, c.r[13].w[0], c.r[14].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[23], c.r[25], c.r[23]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[22].d[0] = c.r[22].d[0] + c.r[23].d[0];
    mmi::mult(c, 0, c.r[14].w[0], c.r[11].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    c.r[15].d[0] = c.r[22].d[0] + c.r[15].d[0];
    mmi::pextlw(c.r[16], c.r[16], c.r[18]);
    c.r[12].d[0] = c.r[12].d[0] + c.r[14].d[0];
    c.r[12].d[0] = c.r[12].d[0] << 32;
    c.r[12].d[0] = c.r[12].d[0] + c.r[16].d[0];
    c.r[12].d[0] = c.r[12].d[0] + c.r[15].d[0];
    c.r[12].d[0] = c.r[12].d[0] >> 15;
    c.r[14].d[0] = c.r[12].d[0] & 65535ull;
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[7].w[0] & 31u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 8));
    set32(c.r[14], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[10].w[0] + c.r[14].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld16((c.r[7].w[0]));
    c.r[10].d[0] = c.r[12].d[0] & 65535ull;
    c.budget -= 74;
L_001E99A8:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[7].d[0] = ld8((c.r[6].w[0] + 6u));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[6].w[0] + 7u));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 10;
L_001E99D0:
    c.r[7].d[0] = c.r[8].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[6].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9810u | kUnwind; return; } goto L_001E9810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9B38; } }
L_001E99E4:
    c.r[11].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_001E99E8:
    c.r[8].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[14].d[0] = c.r[6].d[0] + 0ull;
    c.r[13].d[0] = 0ull + 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (t) { goto L_001E9B2C; } }
L_001E9A14:
    c.r[16].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 5u));
    set32(c.r[15], c.r[12].w[0] << 8);
    c.r[12].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[16], c.r[16].w[0] << 8);
    c.r[10].d[0] = c.r[15].d[0] | c.r[10].d[0];
    c.r[15].d[0] = ld8((c.r[6].w[0]));
    c.r[16].d[0] = c.r[16].d[0] | c.r[12].d[0];
    c.r[12].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[15], c.r[15].w[0] << 8);
    c.r[12].d[0] = c.r[15].d[0] | c.r[12].d[0];
    c.r[15].d[0] = c.r[12].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = c.r[15].d[0] != c.r[16].d[0]; c.r[10].d[0] = c.r[10].d[0] & 65535ull;  if (t) { goto L_001E9A5C; } }
    c.r[12].d[0] = c.r[10].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[15].d[0] == c.r[12].d[0]) { c.r[12].d[0] = c.r[15].d[0] << 32;  goto L_001E9A64; }
L_001E9A5C:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[12].d[0] = c.r[15].d[0] << 32;
    c.budget -= 2;
L_001E9A64:
    c.r[20].d[0] = c.r[16].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[15].d[0] = c.r[10].d[0] & 65535ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    mmi::mult(c, 1, c.r[10].w[0], c.r[11].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    c.r[16].d[0] = c.r[15].d[0] << 32;
    mmi::multu(c, 1, c.r[8].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.lo.d[1];
    mmi::multu(c, 0, c.r[11].w[0], c.r[12].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.r[15].d[0] = c.hi.d[1];
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    mmi::pextlw(c.r[18], c.r[15], c.r[18]);
    mmi::mult(c, 1, c.r[20].w[0], c.r[7].w[0]);
    c.r[15].d[0] = c.lo.d[1];
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[20].d[0] = c.hi.d[0];
    c.r[13].d[0] = c.r[13].d[0] + static_cast<std::uint64_t>(1ll);
    mmi::pextlw(c.r[21], c.r[20], c.r[21]);
    mmi::mult(c, 0, c.r[12].w[0], c.r[9].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[10].d[0] + c.r[20].d[0];
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[10].d[0] = c.r[10].d[0] << 32;
    mmi::mult(c, 1, c.r[12].w[0], c.r[4].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    c.r[20].d[0] = c.r[10].d[0] + c.r[21].d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[8].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[10].d[0] + c.r[15].d[0];
    mmi::multu(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] + c.r[18].d[0];
    c.r[17].d[0] = c.r[20].d[0] + c.r[10].d[0];
    c.r[10].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[15], c.r[10], c.r[15]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[12].d[0] + c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] + c.r[15].d[0];
    c.r[10].d[0] = c.r[10].d[0] + c.r[17].d[0];
    c.r[10].d[0] = c.r[10].d[0] >> 15;
    c.r[12].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[14].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 6u));
    st8((c.r[14].w[0] + 2u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 7u));
    st8((c.r[14].w[0] + 3u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[14], c.r[14].w[0] + 4u);
    c.budget -= 50;
L_001E9B2C:
    c.r[10].d[0] = c.r[13].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[10].d[0] != 0ull) { c.r[12].d[0] = ld8((c.r[6].w[0] + 4u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9A14u | kUnwind; return; } goto L_001E9A14; }
L_001E9B38:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 18u));
    c.budget -= 1;
L_001E9B3C:
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] - 2u);
    st8((c.r[5].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] & 253ull;
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 18u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 17u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st8((c.r[5].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 19u));
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 1, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.hi.d[1];
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[5].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 29;
L_001E9BB0:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_001E9BE0:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[6].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001E9E2C; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[6].d[0] = c.r[7].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001E9E2C; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[6], 0u + 4u);  goto L_001E9CD4; }
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[6].d[0]) { c.r[6].d[0] = c.r[3].d[0] << 32;  goto L_001E9C68; }
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[6], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);  if (t) { goto L_001E9C54; } }
L_001E9C34:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[6].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[6].w[0] - 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 3u);
    c.budget -= 8;
L_001E9C54:
    c.r[5].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9C34u | kUnwind; return; } goto L_001E9C34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[4].w[0] + 18u));  if (t) { goto L_001E9DB8; } }
L_001E9C68:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);  if (t) { goto L_001E9CC0; } }
L_001E9C88:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] - 1u));
    st8((c.r[6].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[6].w[0] - 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] - 1u));
    st8((c.r[6].w[0] - 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[6].w[0] - 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[7].w[0] - 1u));
    st8((c.r[6].w[0] - 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] - 2u);
    set32(c.r[6], c.r[6].w[0] - 6u);
    c.budget -= 14;
L_001E9CC0:
    c.r[5].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9C88u | kUnwind; return; } goto L_001E9C88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9DB4; } }
L_001E9CD4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_001E9DB4; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[6].d[0]) { c.r[6].d[0] = c.r[3].d[0] << 32;  goto L_001E9D44; }
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);  if (t) { goto L_001E9D30; } }
L_001E9D08:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 1u));
    st8((c.r[6].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 1u));
    st8((c.r[6].w[0] - 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 1u));
    st8((c.r[6].w[0] - 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] - 2u);
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 10;
L_001E9D30:
    c.r[5].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9D08u | kUnwind; return; } goto L_001E9D08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E9DB4; } }
L_001E9D44:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[5].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);  if (t) { goto L_001E9DA8; } }
L_001E9D60:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 1u));
    st8((c.r[6].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 2u));
    st8((c.r[6].w[0] - 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 3u));
    st8((c.r[6].w[0] - 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 2u));
    st8((c.r[6].w[0] - 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 3u));
    st8((c.r[6].w[0] - 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 2u));
    st8((c.r[6].w[0] - 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] - 3u));
    st8((c.r[6].w[0] - 7u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 8u);
    c.budget -= 18;
L_001E9DA8:
    c.r[5].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9D60u | kUnwind; return; } goto L_001E9D60; }
L_001E9DB4:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 18u));
    c.budget -= 1;
L_001E9DB8:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] | 2ull;
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 17u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 1, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.hi.d[1];
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 29;
L_001E9E2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E9E40:
    c.r[10].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[6].d[0] >> 8;
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; c.r[8].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001EA01C; } }
    c.r[10].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[10].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 16u);  goto L_001E9F24; }
    c.r[3].d[0] = c.r[7].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[9].d[0] << 32;  goto L_001E9ED0; }
    c.r[3].d[0] = c.r[9].d[0] << 32;
    set32(c.r[10], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_001E9EA4; } }
L_001E9E8C:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[5], c.r[7].w[0] - 1u);
    set32(c.r[7], c.r[5].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[5].w[0] - 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001E9EA4:
    c.r[3].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[7].w[0] - 1u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9E8Cu | kUnwind; return; } goto L_001E9E8C; }
    st8((c.r[7].w[0] - 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = c.r[9].d[0] << 1;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001EA2C8; } }
L_001E9ED0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[10], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[10].w[0] + c.r[3].w[0]);  if (t) { goto L_001E9EFC; } }
L_001E9EE4:
    set32(c.r[3], c.r[8].w[0] - 1u);
    c.r[5].d[0] = ld8((c.r[10].w[0]));
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[8].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] - 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], c.r[3].w[0] - 1u);
    c.budget -= 6;
L_001E9EFC:
    c.r[3].d[0] = c.r[7].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[10], c.r[10].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9EE4u | kUnwind; return; } goto L_001E9EE4; }
    set32(c.r[5], 0u + 2u);
    c.r[3].d[0] = c.r[9].d[0] << 1;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 16u);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001EA2C8; } }
L_001E9F24:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_001EA2C8; } }
    c.r[3].d[0] = c.r[7].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[9].d[0] << 32;  goto L_001E9FB0; }
    c.r[3].d[0] = c.r[9].d[0] << 32;
    set32(c.r[11], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[13], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[13].w[0] + c.r[3].w[0]);  if (t) { goto L_001E9F80; } }
L_001E9F50:
    st8((c.r[12].w[0] - 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[10].w[0] - 1u);
    st8((c.r[12].w[0] - 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[7], c.r[13].w[0] - 1u);
    c.r[3].d[0] = ld8((c.r[13].w[0] - 1u));
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[12].w[0] - 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[13], c.r[7].w[0] - 1u);
    c.r[3].d[0] = ld8((c.r[7].w[0] - 1u));
    set32(c.r[12], c.r[5].w[0] - 1u);
    st8((c.r[10].w[0] - 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_001E9F80:
    c.r[3].d[0] = c.r[11].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[10], c.r[12].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9F50u | kUnwind; return; } goto L_001E9F50; }
    st8((c.r[12].w[0] - 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], 0u + 2u);
    st8((c.r[12].w[0] - 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[9].d[0] << 2;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 32u);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001EA2C8; } }
L_001E9FB0:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[12], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[12].w[0] + c.r[3].w[0]);  if (t) { goto L_001E9FF4; } }
L_001E9FC4:
    set32(c.r[7], c.r[12].w[0] - 1u);
    set32(c.r[3], c.r[11].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[11].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = ld8((c.r[7].w[0] - 1u));
    set32(c.r[12], c.r[7].w[0] - 1u);
    st8((c.r[11].w[0] - 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[11].w[0] - 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[11].w[0] - 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[11], c.r[3].w[0] - 1u);
    c.budget -= 12;
L_001E9FF4:
    c.r[3].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[12].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E9FC4u | kUnwind; return; } goto L_001E9FC4; }
    set32(c.r[5], 0u + 2u);
    c.r[3].d[0] = c.r[9].d[0] << 2;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 32u);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001EA2C8; } }
L_001EA01C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_001EA2C8; } }
    c.r[10].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[10].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 16u);  goto L_001EA144; }
    c.r[3].d[0] = c.r[7].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = c.r[9].d[0] << 32;  goto L_001EA0C8; }
    c.r[7].d[0] = c.r[9].d[0] << 32;
    set32(c.r[12], 0u + 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[14], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[14].w[0] + c.r[7].w[0]);  if (t) { goto L_001EA09C; } }
L_001EA064:
    set32(c.r[11], c.r[13].w[0] - 1u);
    c.r[8].d[0] = ld8((c.r[14].w[0] - 1u));
    set32(c.r[3], c.r[11].w[0] - 1u);
    set32(c.r[10], c.r[14].w[0] - 1u);
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[7], c.r[10].w[0] - 1u);
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[13].w[0] - 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].d[0] = ld8((c.r[14].w[0] - 2u));
    st8((c.r[13].w[0] - 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[14], c.r[7].w[0] - 1u);
    c.r[3].d[0] = ld8((c.r[10].w[0] - 2u));
    set32(c.r[13], c.r[5].w[0] - 1u);
    st8((c.r[11].w[0] - 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001EA09C:
    c.r[3].d[0] = c.r[12].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[13].w[0] - 1u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA064u | kUnwind; return; } goto L_001EA064; }
    st8((c.r[13].w[0] - 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], 0u + 4u);
    c.r[3].d[0] = c.r[9].d[0] << 2;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001EA2C8; } }
L_001EA0C8:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[12], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[12].w[0] + c.r[7].w[0]);  if (t) { goto L_001EA11C; } }
L_001EA0E4:
    set32(c.r[8], c.r[12].w[0] - 1u);
    set32(c.r[3], c.r[11].w[0] - 1u);
    set32(c.r[7], c.r[8].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[11].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = ld8((c.r[12].w[0] - 2u));
    st8((c.r[11].w[0] - 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[12], c.r[7].w[0] - 1u);
    c.r[5].d[0] = ld8((c.r[8].w[0] - 2u));
    st8((c.r[11].w[0] - 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[11].w[0] - 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[11], c.r[3].w[0] - 1u);
    c.budget -= 14;
L_001EA11C:
    c.r[3].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[12].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA0E4u | kUnwind; return; } goto L_001EA0E4; }
    set32(c.r[5], 0u + 4u);
    c.r[3].d[0] = c.r[9].d[0] << 2;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 32u);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001EA2C8; } }
L_001EA144:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_001EA2C8; } }
    c.r[3].d[0] = c.r[7].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[11].d[0] = c.r[9].d[0] << 32;  goto L_001EA218; }
    c.r[10].d[0] = c.r[9].d[0] << 32;
    set32(c.r[7], 0u + 1u);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    set32(c.r[3], c.r[10].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[11], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);  if (t) { goto L_001EA1E8; } }
L_001EA178:
    set32(c.r[5], c.r[10].w[0] - 1u);
    st8((c.r[10].w[0] - 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[14].d[0] = ld8((c.r[11].w[0] - 1u));
    set32(c.r[12], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[11].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[13], c.r[3].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    st8((c.r[10].w[0] - 3u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.r[14].d[0] = ld8((c.r[11].w[0] - 2u));
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[10].w[0] - 4u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[11].w[0] - 3u));
    st8((c.r[10].w[0] - 5u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[11].w[0] - 4u));
    st8((c.r[10].w[0] - 6u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[11].d[0] = ld8((c.r[11].w[0] - 5u));
    st8((c.r[10].w[0] - 7u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] - 5u));
    set32(c.r[11], c.r[13].w[0] - 1u);
    set32(c.r[10], c.r[12].w[0] - 1u);
    st8((c.r[5].w[0] - 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 28;
L_001EA1E8:
    c.r[3].d[0] = c.r[7].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[10].w[0] - 1u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA178u | kUnwind; return; } goto L_001EA178; }
    st8((c.r[10].w[0] - 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], 0u + 4u);
    st8((c.r[10].w[0] - 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = c.r[9].d[0] << 3;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 64u);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001EA2C8; } }
L_001EA218:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    set32(c.r[3], c.r[11].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[10].w[0] + c.r[11].w[0]);  if (t) { goto L_001EA2A4; } }
L_001EA234:
    c.r[14].d[0] = ld8((c.r[10].w[0] - 1u));
    set32(c.r[11], c.r[3].w[0] - 1u);
    set32(c.r[13], c.r[5].w[0] - 1u);
    set32(c.r[12], c.r[11].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[11], c.r[13].w[0] - 1u);
    st8((c.r[5].w[0] - 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[13].d[0] = ld8((c.r[10].w[0] - 2u));
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    st8((c.r[5].w[0] - 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.r[13].d[0] = ld8((c.r[10].w[0] - 3u));
    set32(c.r[11], c.r[11].w[0] - 1u);
    st8((c.r[5].w[0] - 3u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[10].w[0] - 4u));
    st8((c.r[5].w[0] - 4u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[10].d[0] = ld8((c.r[10].w[0] - 5u));
    st8((c.r[5].w[0] - 5u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] - 5u));
    set32(c.r[10], c.r[12].w[0] - 1u);
    st8((c.r[5].w[0] - 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] - 7u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] - 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[11].w[0] - 1u);
    c.budget -= 28;
L_001EA2A4:
    c.r[3].d[0] = c.r[7].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[10].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA234u | kUnwind; return; } goto L_001EA234; }
    set32(c.r[5], 0u + 4u);
    c.r[3].d[0] = c.r[9].d[0] << 3;
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 64u);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 6;
L_001EA2C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA2D0:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001EA374; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  goto L_001EA32C; }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_001EA318; } }
L_001EA304:
    set32(c.r[5], c.r[8].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    st8((c.r[8].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[5].w[0] - 3u);
    c.budget -= 5;
L_001EA318:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[8].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA304u | kUnwind; return; } goto L_001EA304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA420; } }
L_001EA32C:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_001EA360; } }
L_001EA33C:
    set32(c.r[5], c.r[8].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    st8((c.r[8].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0] - 2u));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    st8((c.r[8].w[0] - 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[5].w[0] - 6u);
    c.budget -= 9;
L_001EA360:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[8].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA33Cu | kUnwind; return; } goto L_001EA33C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA420; } }
L_001EA374:
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_001EA420; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  goto L_001EA3E0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 255u);
    set32(c.r[10], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_001EA3CC; } }
L_001EA3A8:
    set32(c.r[6], c.r[10].w[0] - 1u);
    set32(c.r[5], c.r[9].w[0] - 1u);
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[7].w[0] - c.r[4].w[0]);
    set32(c.r[10], c.r[6].w[0] - 1u);
    st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[6].w[0] - 1u));
    set32(c.r[9], c.r[5].w[0] - 1u);
    st8((c.r[5].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_001EA3CC:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[10].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA3A8u | kUnwind; return; } goto L_001EA3A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA420; } }
L_001EA3E0:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_001EA414; } }
L_001EA3F0:
    set32(c.r[5], c.r[8].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    st8((c.r[8].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0] - 2u));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    st8((c.r[8].w[0] - 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[5].w[0] - 2u);
    c.budget -= 9;
L_001EA414:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[8].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA3F0u | kUnwind; return; } goto L_001EA3F0; }
L_001EA420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA430:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[6].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001EA55C; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_001EA4B8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_001EA4A4; } }
L_001EA464:
    set32(c.r[8], c.r[11].w[0] - 1u);
    c.r[4].d[0] = ld8((c.r[11].w[0] - 2u));
    set32(c.r[3], c.r[8].w[0] - 1u);
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[9].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[10].w[0] - 1u);
    st8((c.r[10].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = ld8((c.r[11].w[0] - 3u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[10].w[0] - 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[11], c.r[5].w[0] - 1u);
    c.r[4].d[0] = ld8((c.r[8].w[0] - 3u));
    st8((c.r[10].w[0] - 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[10].w[0] - 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[3].w[0] - 1u);
    c.budget -= 16;
L_001EA4A4:
    c.r[3].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[11].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA464u | kUnwind; return; } goto L_001EA464; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA61C; } }
L_001EA4B8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_001EA548; } }
L_001EA4C8:
    c.r[4].d[0] = ld8((c.r[9].w[0] - 1u));
    set32(c.r[10], c.r[5].w[0] - 1u);
    c.r[3].d[0] = ld8((c.r[9].w[0] - 2u));
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[13].d[0] = ld8((c.r[9].w[0] - 3u));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[12], c.r[8].w[0] - 1u);
    set32(c.r[11], c.r[10].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], c.r[12].w[0] - 1u);
    st8((c.r[8].w[0] - 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0] - 4u));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[11], c.r[11].w[0] - 1u);
    st8((c.r[8].w[0] - 2u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[12].d[0] = ld8((c.r[9].w[0] - 5u));
    set32(c.r[10], c.r[10].w[0] - 1u);
    st8((c.r[8].w[0] - 3u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0] - 6u));
    st8((c.r[8].w[0] - 4u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[9].d[0] = ld8((c.r[9].w[0] - 7u));
    st8((c.r[8].w[0] - 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[5].d[0] = ld8((c.r[5].w[0] - 7u));
    set32(c.r[9], c.r[11].w[0] - 1u);
    st8((c.r[8].w[0] - 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] - 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] - 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[10].w[0] - 1u);
    c.budget -= 32;
L_001EA548:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[9].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA4C8u | kUnwind; return; } goto L_001EA4C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA61C; } }
L_001EA55C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_001EA61C; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_001EA5C0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_001EA5AC; } }
L_001EA58C:
    set32(c.r[7], c.r[10].w[0] - 1u);
    c.r[4].d[0] = ld8((c.r[10].w[0] - 2u));
    set32(c.r[3], c.r[9].w[0] - 1u);
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[10], c.r[7].w[0] - 1u);
    st8((c.r[9].w[0] - 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[9], c.r[3].w[0] - 1u);
    c.budget -= 8;
L_001EA5AC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[10].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA58Cu | kUnwind; return; } goto L_001EA58C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA61C; } }
L_001EA5C0:
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_001EA610; } }
L_001EA5D0:
    set32(c.r[9], c.r[12].w[0] - 1u);
    c.r[7].d[0] = ld8((c.r[12].w[0] - 2u));
    set32(c.r[3], c.r[9].w[0] - 1u);
    c.r[4].d[0] = ld8((c.r[12].w[0] - 3u));
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[11].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[11].w[0] - 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = ld8((c.r[9].w[0] - 3u));
    set32(c.r[12], c.r[5].w[0] - 1u);
    st8((c.r[11].w[0] - 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[11].w[0] - 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[11].w[0] - 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[11], c.r[3].w[0] - 1u);
    c.budget -= 16;
L_001EA610:
    c.r[3].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[8].d[0] = ld8((c.r[12].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA5D0u | kUnwind; return; } goto L_001EA5D0; }
L_001EA61C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EA630:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[10], 0u + 3u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 11;
    if (c.r[13].d[0] == c.r[10].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_001EA904; }
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[7].d[0] = c.r[13].d[0] & 2ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001EA6A0; } }
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[12].d[0] = ld8((c.r[6].w[0]));
    c.r[11].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[12], c.r[7].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[7].w[0] - c.r[11].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[12].w[0]);
    set32(c.r[10], c.r[7].w[0] - c.r[10].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[11].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.r[10].w[0]);  if (t) { goto L_001EA6B4; } }
L_001EA6A0:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[10].d[0] = ld8((c.r[6].w[0] + 3u));
    set32(c.r[10], c.r[7].w[0] - c.r[10].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[10].w[0]);
    c.budget -= 5;
L_001EA6B4:
    c.r[10].d[0] = c.r[13].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[10].d[0] == 0ull) { c.r[12].d[0] = 0ull + 0ull;  goto L_001EA6DC; }
    c.r[10].d[0] = ld8((c.r[6].w[0] + 4u));
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[10], c.r[7].w[0] - c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[6].w[0] + 96u), c.r[10].w[0]);
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_001EA6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001EA700; } }
L_001EA6E4:
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[11], c.r[6].w[0] + 96u);
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.budget -= 5;
    if (c.r[6].sd[0] > 0) { c.r[8].d[0] = c.r[10].d[0] + 0ull;  goto L_001EA6FC; }
    st32((c.r[11].w[0]), 0u);
    c.budget -= 1;
L_001EA6FC:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_001EA700:
    c.r[6].d[0] = c.r[12].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[12].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA6E4u | kUnwind; return; } goto L_001EA6E4; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001EA900; } }
    set32(c.r[6], 0u + 16u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { c.r[7].d[0] = c.r[3].d[0] << 32;  goto L_001EA868; }
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { c.r[19].d[0] = c.r[5].d[0] + 0ull;  goto L_001EA7E4; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[7].d[0] = ld64((c.r[4].w[0] + 8u));  goto L_001EA784; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[4].d[0] = ld64((c.r[4].w[0] + 8u));  goto L_001EA74C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA900; } }
L_001EA74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001EA770; } }
L_001EA754:
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[3].w[0] >> 1);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 85ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
L_001EA770:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA754u | kUnwind; return; } goto L_001EA754; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA900; } }
L_001EA784:
    set32(c.r[3], 0u + 15u);
    set32(c.r[6], ld32((c.r[29].w[0] + 96u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 240u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[6].w[0] & 31u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[6].w[0] & 31u)));
    c.r[4].d[0] = c.r[4].d[0] & 240ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_001EA7D0; } }
L_001EA7B0:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] >> (c.r[4].w[0] & 31u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 8;
L_001EA7D0:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[29].w[0] + 96u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA7B0u | kUnwind; return; } goto L_001EA7B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA900; } }
L_001EA7E4:
    c.r[17].d[0] = c.r[9].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] + c.r[5].d[0];  if (t) { goto L_001EA854; } }
L_001EA824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA82Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x001EA82Cu) [[unlikely]] return; }
L_001EA82C:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[3], c.r[3].w[0] >> (c.r[4].w[0] & 31u));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 10;
L_001EA854:
    c.r[3].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA824u | kUnwind; return; } goto L_001EA824; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EA900; } }
L_001EA868:
    c.r[18].d[0] = c.r[9].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::multu(c, 0, c.r[18].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    mmi::mult(c, 1, c.r[3].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] + c.r[5].d[0];  if (t) { goto L_001EA8F4; } }
L_001EA8A8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EA8C4u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x001EA8C4u) [[unlikely]] return; }
L_001EA8C4:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 96u));
    set32(c.r[3], c.r[16].w[0] >> (c.r[3].w[0] & 31u));
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.budget -= 12;
L_001EA8F4:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[20].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA8A8u | kUnwind; return; } goto L_001EA8A8; }
L_001EA900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001EA904:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EA920:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[1].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EAB4C; } }
    set32(c.r[8], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[8].d[0]; c.r[3].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001EAA74; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[7], 0u - 1u);  goto L_001EA9E8; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[7], 0u - 1u);  goto L_001EA95C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_001EAAFC; } }
L_001EA95C:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[7], c.r[0], c.r[7]);
    c.r[7].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] >> 3;
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    set32(c.r[8], c.r[6].w[0] - 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    set32(c.r[9], c.r[5].w[0] + c.r[7].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[6].d[0] & 7ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[6], 0u + 7u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (t) { goto L_001EA9D4; } }
L_001EA9AC:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[7].w[0] & 31u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001EA9C8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 1u);  if (t) { goto L_001EA9CC; } }
L_001EA9C8:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001EA9CC:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001EA9D4:
    c.r[5].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[9].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EA9ACu | kUnwind; return; } goto L_001EA9AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAAF8; } }
L_001EA9E8:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[7], c.r[0], c.r[7]);
    c.r[7].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] >> 2;
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    set32(c.r[9], c.r[6].w[0] - 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(3ll);
    set32(c.r[10], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 3ull;
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] - c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 1;
    set32(c.r[6], 0u + 6u);
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_001EAA60; } }
L_001EAA38:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0]; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001EAA54; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_001EAA58; } }
L_001EAA54:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(2ll);
    c.budget -= 1;
L_001EAA58:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001EAA60:
    c.r[5].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAA38u | kUnwind; return; } goto L_001EAA38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAAF8; } }
L_001EAA74:
    set32(c.r[7], 0u - 1u);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[7], c.r[0], c.r[7]);
    c.r[7].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] >> 1;
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    set32(c.r[9], c.r[6].w[0] - 1u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[5].d[0] - c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 2;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (t) { goto L_001EAAEC; } }
L_001EAAC4:
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[6].w[0] & 31u)));
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[8].d[0]; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_001EAAE0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_001EAAE4; } }
L_001EAAE0:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_001EAAE4:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001EAAEC:
    c.r[5].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAAC4u | kUnwind; return; } goto L_001EAAC4; }
L_001EAAF8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_001EAAFC:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 3);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 20;
L_001EAB4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001EAB60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 428u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EAB9C; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 504u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = ld64((c.r[16].w[0] + 416u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB90u); set32(c.r[5], c.r[5].w[0] - 20208u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001EAB90u) [[unlikely]] return; }
L_001EAB90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAB9Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EAB9Cu) [[unlikely]] return; }
L_001EAB9C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAC18; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 464u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[16].w[0] + 494u));  goto L_001EABE0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.r[8].d[0] = ld16((c.r[16].w[0] + 494u));
    set32(c.r[6], ld32((c.r[16].w[0] + 488u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 616u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABD8u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0039(c, 399u, depth + 1u); else { c.pc = 0x001E7200u; return; } if (c.pc != 0x001EABD8u) [[unlikely]] return; }
L_001EABD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAC14; } }
L_001EABE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 428u)));  goto L_001EAC04; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[6], c.r[16].w[0] + 620u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EABFCu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0039(c, 391u, depth + 1u); else { c.pc = 0x001E6C10u; return; } if (c.pc != 0x001EABFCu) [[unlikely]] return; }
L_001EABFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EAC14; } }
L_001EAC04:
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC14u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0039(c, 391u, depth + 1u); else { c.pc = 0x001E6C10u; return; } if (c.pc != 0x001EAC14u) [[unlikely]] return; }
L_001EAC14:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAC18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAC40; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC3Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 393u, depth + 1u); else { c.pc = 0x001F3010u; return; } if (c.pc != 0x001EAC3Cu) [[unlikely]] return; }
L_001EAC3C:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAC40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EACB8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC64u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 26u, depth + 1u); else { c.pc = 0x001E8F00u; return; } if (c.pc != 0x001EAC64u) [[unlikely]] return; }
L_001EAC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EACB4; } }
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAC98; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAC94u); set32(c.r[5], c.r[5].w[0] - 20171u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EAC94u) [[unlikely]] return; }
L_001EAC94:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAC98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EACB4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EACB4u); set32(c.r[5], c.r[5].w[0] - 20171u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EACB4u) [[unlikely]] return; }
L_001EACB4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EACB8:
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EACE8; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 248u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EACE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EACE4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 36u, depth + 1u); else { c.pc = 0x001E9BE0u; return; } if (c.pc != 0x001EACE4u) [[unlikely]] return; }
L_001EACE4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EACE8:
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAD5C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 494u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 592u)));  goto L_001EAD14; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 506u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAD58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 1;
L_001EAD14:
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[6], c.r[16].w[0] + 620u);
    set32(c.r[7], c.r[16].w[0] + 524u);
    set32(c.r[8], c.r[16].w[0] + 534u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 596u)));
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 600u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 568u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 584u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 588u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAD58u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7A60u; return; } if (c.pc != 0x001EAD58u) [[unlikely]] return; }
L_001EAD58:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAD5C:
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EADC0; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[16].w[0] + 506u));  goto L_001EAD94; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 494u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EADBC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 506u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EADBC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 506u));
    c.budget -= 1;
L_001EAD94:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001EADBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[6], ld32((c.r[16].w[0] + 580u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 592u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 568u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EADBCu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0039(c, 405u, depth + 1u); else { c.pc = 0x001E75A0u; return; } if (c.pc != 0x001EADBCu) [[unlikely]] return; }
L_001EADBC:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EADC0:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAEA4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[3], 0u + 16u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 465u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[10], c.r[5].w[0] + 1u);  if (t) { goto L_001EAEA0; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 448u));
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 466u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + c.r[5].d[0];  if (t) { goto L_001EAE3C; } }
L_001EAE2C:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 2u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 4;
L_001EAE3C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EAE2Cu | kUnwind; return; } goto L_001EAE2C; }
    set32(c.r[3], 0u + 8u);
    st8((c.r[16].w[0] + 465u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 466u));
    set32(c.r[3], c.r[3].w[0] << 3);
    st8((c.r[16].w[0] + 467u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 448u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 466u));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    st64((c.r[16].w[0] + 456u), c.r[3].d[0]);
    c.budget -= 22;
L_001EAEA0:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAEA4:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAEE8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[6], ld32((c.r[16].w[0] + 728u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 732u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEC8u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0039(c, 387u, depth + 1u); else { c.pc = 0x001E69E0u; return; } if (c.pc != 0x001EAEC8u) [[unlikely]] return; }
L_001EAEC8:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 456u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EAEE4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAEE4u); set32(c.r[5], c.r[5].w[0] - 20132u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EAEE4u) [[unlikely]] return; }
L_001EAEE4:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAEE8:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAF08; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF04u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 406u, depth + 1u); else { c.pc = 0x001F33D0u; return; } if (c.pc != 0x001EAF04u) [[unlikely]] return; }
L_001EAF04:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAF08:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAF2C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    set32(c.r[6], c.r[16].w[0] + 609u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF28u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 60u, depth + 1u); else { c.pc = 0x001EA630u; return; } if (c.pc != 0x001EAF28u) [[unlikely]] return; }
L_001EAF28:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAF2C:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAF4C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF48u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x001EA920u; return; } if (c.pc != 0x001EAF48u) [[unlikely]] return; }
L_001EAF48:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAF4C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAF6C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF68u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 388u, depth + 1u); else { c.pc = 0x001F2ED0u; return; } if (c.pc != 0x001EAF68u) [[unlikely]] return; }
L_001EAF68:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAF6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAF90; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAF8Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 402u, depth + 1u); else { c.pc = 0x001F32C0u; return; } if (c.pc != 0x001EAF8Cu) [[unlikely]] return; }
L_001EAF8C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAF90:
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAFC0; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 248u));
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EAFBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFBCu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 36u, depth + 1u); else { c.pc = 0x001E9BE0u; return; } if (c.pc != 0x001EAFBCu) [[unlikely]] return; }
L_001EAFBC:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAFC0:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EAFE8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.r[6].d[0] = ld16((c.r[16].w[0] + 514u));
    c.r[7].d[0] = ld64((c.r[16].w[0] + 256u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EAFE4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 41u, depth + 1u); else { c.pc = 0x001E9E40u; return; } if (c.pc != 0x001EAFE4u) [[unlikely]] return; }
L_001EAFE4:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EAFE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EB00C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB008u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 50u, depth + 1u); else { c.pc = 0x001EA2D0u; return; } if (c.pc != 0x001EB008u) [[unlikely]] return; }
L_001EB008:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EB00C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EB030; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB02Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003A(c, 55u, depth + 1u); else { c.pc = 0x001EA430u; return; } if (c.pc != 0x001EB02Cu) [[unlikely]] return; }
L_001EB02C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EB030:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EB050; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[4], c.r[16].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB04Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 404u, depth + 1u); else { c.pc = 0x001F3350u; return; } if (c.pc != 0x001EB04Cu) [[unlikely]] return; }
L_001EB04C:
    c.r[4].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EB050:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001EB104; }
    set32(c.r[3], ld32((c.r[16].w[0] + 232u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 244u));  goto L_001EB084; }
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 448u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB080u); set32(c.r[6], c.r[2].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EB080u) [[unlikely]] return; }
L_001EB080:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 244u));
    c.budget -= 1;
L_001EB084:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 245u));  goto L_001EB094; }
    st8((c.r[16].w[0] + 465u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 245u));
    c.budget -= 2;
L_001EB094:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[16].w[0] + 465u));  goto L_001EB0A4; }
    st8((c.r[16].w[0] + 466u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 465u));
    c.budget -= 2;
L_001EB0A4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 466u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[16].w[0] + 467u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 467u));
    c.r[3].d[0] = ld64((c.r[16].w[0] + 448u));
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 7;
L_001EB0C0:
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::multu(c, 1, c.r[5].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.hi.d[1];
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[16].w[0] + 456u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 17;
L_001EB104:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EB110:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB18C; }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 41u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[4].w[0] + 494u));  goto L_001EB15C; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 494u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_001EB148; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EB14C; } }
L_001EB148:
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001EB14C:
    set32(c.r[3], 0u + 8u);
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 38u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001EB188; } }
L_001EB15C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 40u));  goto L_001EB170; }
    c.r[3].d[0] = c.r[6].d[0] | 4ull;
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 40u));
    c.budget -= 3;
L_001EB170:
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st16((c.r[5].w[0] + 38u), static_cast<std::uint16_t>(0u));  goto L_001EB188; }
    set32(c.r[3], 0u + 8u);
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 38u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_001EB188:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 1;
L_001EB18C:
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB1D4; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));
    set32(c.r[8], c.r[4].w[0] + 524u);
    set32(c.r[7], c.r[5].w[0] + 106u);
    set32(c.r[6], 0u + 5u);
    c.r[3].d[0] = c.r[3].d[0] & 251ull;
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 38u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_001EB1B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB1B4u | kUnwind; return; } goto L_001EB1B4; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 1;
L_001EB1D4:
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB1F4; }
    c.f[0] = ld32((c.r[4].w[0] + 572u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 808u));
    st64((c.r[5].w[0] + 328u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 5;
L_001EB1F4:
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB21C; }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 40u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001EB218; } }
    set32(c.r[3], 0u + 8u);
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001EB218:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 1;
L_001EB21C:
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB26C; }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 41u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 728u)));  goto L_001EB248; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001EB268; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 728u)));
    c.budget -= 1;
L_001EB248:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB268; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 40u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001EB268; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001EB268:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 1;
L_001EB26C:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB294; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 40u));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB290; } }
    set32(c.r[3], 0u + 8u);
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001EB290:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 1;
L_001EB294:
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB2B0; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 4;
L_001EB2B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));  goto L_001EB2D0; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));
    c.r[3].d[0] = c.r[3].d[0] & 253ull;
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));
    c.budget -= 4;
L_001EB2D0:
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[3].d[0] = c.r[3].d[0] & 2ull;  goto L_001EB2E8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EB2FC; } }
L_001EB2E8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001EB2F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001EB2FC; } }
L_001EB2F8:
    st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001EB2FC:
    c.r[6].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));  goto L_001EB320; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));
    c.r[3].d[0] = c.r[3].d[0] & 251ull;
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 41u));
    c.budget -= 4;
L_001EB320:
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB33C; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 45u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 4;
L_001EB33C:
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = ld64((c.r[4].w[0] + 264u));  goto L_001EB370; }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 41u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[5].w[0] + 45u));  goto L_001EB364; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001EB36C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 45u));
    c.budget -= 1;
L_001EB364:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001EB36C:
    c.r[6].d[0] = ld64((c.r[4].w[0] + 264u));
    c.budget -= 1;
L_001EB370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0] + 45u));  goto L_001EB3B4; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 244u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 40u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[4].w[0] + 245u));  goto L_001EB39C; }
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 245u));
    c.budget -= 2;
L_001EB39C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 45u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EB3B0; } }
    st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001EB3B0:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 45u));
    c.budget -= 1;
L_001EB3B4:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 40u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[5].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 46u));
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[8].d[0] = c.r[4].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::multu(c, 1, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[6].d[0] = c.hi.d[1];
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[5].w[0] + 24u), c.r[3].d[0]);  c.pc = t; return; }
L_001EB420:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[16].d[0] = ld8((c.r[4].w[0] + 506u));
    c.r[3].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001EB5E8; } }
    c.r[3].d[0] = c.r[6].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[20].w[0] + 524u);  goto L_001EB5EC; }
    c.r[3].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  goto L_001EB53C; }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 507u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[20].w[0] + 532u));  goto L_001EB52C; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001EB528; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[6].d[0] = ld16((c.r[20].w[0] + 532u));  goto L_001EB508; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[6].d[0] = ld16((c.r[20].w[0] + 532u));  goto L_001EB4E0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[6].d[0] = ld16((c.r[20].w[0] + 532u));  goto L_001EB4C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EB5E8; } }
L_001EB4C0:
    set32(c.r[3], c.r[6].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st16((c.r[20].w[0] + 532u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 532u));
    st16((c.r[20].w[0] + 530u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 526u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EB5E8; } }
L_001EB4E0:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[20].w[0] + 532u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 532u));
    st16((c.r[20].w[0] + 530u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 526u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EB5E8; } }
L_001EB508:
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[20].w[0] + 532u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 532u));
    st16((c.r[20].w[0] + 530u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 526u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EB5E8; } }
L_001EB528:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 532u));
    c.budget -= 1;
L_001EB52C:
    st16((c.r[20].w[0] + 530u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 526u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001EB5E8; } }
L_001EB53C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001EB5E8; } }
    c.r[8].d[0] = ld8((c.r[20].w[0] + 524u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 488u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    st16((c.r[20].w[0] + 526u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 524u));
    set32(c.r[8], ld32((c.r[20].w[0] + 488u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    st16((c.r[20].w[0] + 528u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 524u));
    set32(c.r[8], ld32((c.r[20].w[0] + 488u)));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2u));
    st16((c.r[20].w[0] + 530u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld64((c.r[20].w[0] + 264u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB5E8; } }
    c.r[3].d[0] = c.r[6].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EB5E8; } }
    c.r[8].d[0] = ld16((c.r[20].w[0] + 494u));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 255u);  if (t) { goto L_001EB5DC; } }
L_001EB5C8:
    set32(c.r[7], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001EB5DC:
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 616u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB5C8u | kUnwind; return; } goto L_001EB5C8; }
L_001EB5E8:
    set32(c.r[8], c.r[20].w[0] + 524u);
    c.budget -= 1;
L_001EB5EC:
    set32(c.r[7], c.r[20].w[0] + 534u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 2;
L_001EB5F4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB5F4u | kUnwind; return; } goto L_001EB5F4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { c.r[4].d[0] = ld64((c.r[20].w[0] + 264u));  goto L_001EB6C8; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 494u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EB6C4; } }
    c.f[1] = ld32((c.r[20].w[0] + 576u));
    c.f[0] = ld32((c.r[20].w[0] + 572u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB638u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EB638u) [[unlikely]] return; }
L_001EB638:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB648u); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x001EB648u) [[unlikely]] return; }
L_001EB648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB650u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x001EB650u) [[unlikely]] return; }
L_001EB650:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32720u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB65Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001EB65Cu) [[unlikely]] return; }
L_001EB65C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EB6C4; } }
    c.r[6].d[0] = ld16((c.r[20].w[0] + 494u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 255u);  if (t) { goto L_001EB69C; } }
L_001EB67C:
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001EB69C; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001EB698; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_001EB698:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001EB69C:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 616u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EB67Cu | kUnwind; return; } goto L_001EB67C; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001EB6C4; } }
    c.r[4].d[0] = ld64((c.r[20].w[0] + 264u));
    set32(c.r[3], 0u - 8193u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st64((c.r[20].w[0] + 264u), c.r[3].d[0]);
    c.budget -= 5;
L_001EB6C4:
    c.r[4].d[0] = ld64((c.r[20].w[0] + 264u));
    c.budget -= 1;
L_001EB6C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 128ull;  [[clang::musttail]] return unit_003B(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB6E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 282u, depth + 1u); else { c.pc = 0x001E6060u; return; } if (c.pc != 0x001EB6E4u) [[unlikely]] return; }
L_001EB6E4:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  [[clang::musttail]] return unit_003B(c, 1u, depth); }
    set32(c.r[7], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[7].d[0]) { c.r[4].d[0] = ld8((c.r[20].w[0] + 507u));  goto L_001EBC8C; }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 516u));
    set32(c.r[3], 0u + 2u);
    c.r[23].d[0] = ld16((c.r[20].w[0] + 492u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[21], ld32((c.r[20].w[0] + 488u)));  if (t) { goto L_001EB768; } }
    c.r[11].d[0] = ld16((c.r[20].w[0] + 526u));
    set32(c.r[5], ld32((c.r[20].w[0] + 580u)));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 528u));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 530u));
    set32(c.r[4], c.r[5].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 588u)));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[5].w[0] + c.r[9].w[0]);
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[29].w[0] + 173u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[3].w[0] + c.r[11].w[0]);
    c.r[17].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[18].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001EBAC0; } }
L_001EB768:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[7].d[0]) { c.f[20] = ld32((c.r[20].w[0] + 520u));  goto L_001EB7EC; }
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.f[20] = ld32((c.r[20].w[0] + 572u));  goto L_001EB7A8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[20].w[0] + 576u));  goto L_001EB78C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  if (t) { goto L_001EB830; } }
L_001EB78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB794u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EB794u) [[unlikely]] return; }
L_001EB794:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001EB83C; } }
L_001EB7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7B8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EB7B8u) [[unlikely]] return; }
L_001EB7B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7C4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB7C4u) [[unlikely]] return; }
L_001EB7C4:
    c.f[0] = ld32((c.r[20].w[0] + 576u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7D4u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EB7D4u) [[unlikely]] return; }
L_001EB7D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7E4u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB7E4u) [[unlikely]] return; }
L_001EB7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EB83C; } }
L_001EB7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB7FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EB7FCu) [[unlikely]] return; }
L_001EB7FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB808u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB808u) [[unlikely]] return; }
L_001EB808:
    c.f[0] = ld32((c.r[20].w[0] + 576u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB818u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EB818u) [[unlikely]] return; }
L_001EB818:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB828u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB828u) [[unlikely]] return; }
L_001EB828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EB83C; } }
L_001EB830:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_001EB83C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB848u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x001EB848u) [[unlikely]] return; }
L_001EB848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB850u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x001EB850u) [[unlikely]] return; }
L_001EB850:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32720u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB85Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x001EB85Cu) [[unlikely]] return; }
L_001EB85C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = ld16((c.r[20].w[0] + 526u));  goto L_001EB880; }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 526u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 528u));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 530u));
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 173u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001EB9A0; } }
L_001EB880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB888u);  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EB888u) [[unlikely]] return; }
L_001EB888:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB894u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB894u) [[unlikely]] return; }
L_001EB894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB8A0u) [[unlikely]] return; }
L_001EB8A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EB8ACu) [[unlikely]] return; }
L_001EB8AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8B8u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB8B8u) [[unlikely]] return; }
L_001EB8B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EB8C4u) [[unlikely]] return; }
L_001EB8C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8D4u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EB8D4u) [[unlikely]] return; }
L_001EB8D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EB8DCu) [[unlikely]] return; }
L_001EB8DC:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 528u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8E8u); st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EB8E8u) [[unlikely]] return; }
L_001EB8E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB8F4u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB8F4u) [[unlikely]] return; }
L_001EB8F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB900u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB900u) [[unlikely]] return; }
L_001EB900:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB90Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EB90Cu) [[unlikely]] return; }
L_001EB90C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB918u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB918u) [[unlikely]] return; }
L_001EB918:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB924u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EB924u) [[unlikely]] return; }
L_001EB924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB934u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EB934u) [[unlikely]] return; }
L_001EB934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB93Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EB93Cu) [[unlikely]] return; }
L_001EB93C:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 530u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB948u); st8((c.r[29].w[0] + 173u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EB948u) [[unlikely]] return; }
L_001EB948:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB954u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB954u) [[unlikely]] return; }
L_001EB954:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB960u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB960u) [[unlikely]] return; }
L_001EB960:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB96Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EB96Cu) [[unlikely]] return; }
L_001EB96C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB978u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB978u) [[unlikely]] return; }
L_001EB978:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB984u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EB984u) [[unlikely]] return; }
L_001EB984:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB994u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EB994u) [[unlikely]] return; }
L_001EB994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB99Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EB99Cu) [[unlikely]] return; }
L_001EB99C:
    st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EB9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9A8u); c.r[4].d[0] = ld16((c.r[20].w[0] + 526u));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EB9A8u) [[unlikely]] return; }
L_001EB9A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9B4u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB9B4u) [[unlikely]] return; }
L_001EB9B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EB9C0u) [[unlikely]] return; }
L_001EB9C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EB9CCu) [[unlikely]] return; }
L_001EB9CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9D8u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EB9D8u) [[unlikely]] return; }
L_001EB9D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EB9E4u) [[unlikely]] return; }
L_001EB9E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9F4u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EB9F4u) [[unlikely]] return; }
L_001EB9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EB9FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EB9FCu) [[unlikely]] return; }
L_001EB9FC:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 528u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA08u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBA08u) [[unlikely]] return; }
L_001EBA08:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA14u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EBA14u) [[unlikely]] return; }
L_001EBA14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA20u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBA20u) [[unlikely]] return; }
L_001EBA20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA2Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBA2Cu) [[unlikely]] return; }
L_001EBA2C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA38u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EBA38u) [[unlikely]] return; }
L_001EBA38:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBA44u) [[unlikely]] return; }
L_001EBA44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA54u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBA54u) [[unlikely]] return; }
L_001EBA54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBA5Cu) [[unlikely]] return; }
L_001EBA5C:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 530u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA68u); c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBA68u) [[unlikely]] return; }
L_001EBA68:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA74u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EBA74u) [[unlikely]] return; }
L_001EBA74:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA80u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBA80u) [[unlikely]] return; }
L_001EBA80:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBA8Cu) [[unlikely]] return; }
L_001EBA8C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBA98u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001EBA98u) [[unlikely]] return; }
L_001EBA98:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBAA4u) [[unlikely]] return; }
L_001EBAA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBAB4u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBAB4u) [[unlikely]] return; }
L_001EBAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBABCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBABCu) [[unlikely]] return; }
L_001EBABC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001EBAC0:
    c.r[7].d[0] = c.r[17].d[0] & 255ull;
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_001EBC78; } }
L_001EBAD8:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[9], c.r[8].w[0] << 1);  goto L_001EBC30; }
    set32(c.r[3], ld32((c.r[20].w[0] + 616u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[12].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[12].d[0] == c.r[4].d[0];  if (t) { goto L_001EBC2C; } }
    c.budget -= 2;
    if (c.r[12].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 1);  goto L_001EBB28; }
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[10].d[0] = ld8((c.r[29].w[0] + 172u));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = ld8((c.r[29].w[0] + 173u));
    set32(c.r[11], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 174u));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EBC74; } }
L_001EBB28:
    set32(c.r[9], c.r[4].w[0] - c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[20].w[0] + 588u)));
    c.r[11].d[0] = ld8((c.r[3].w[0]));
    mmi::mult(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[9], ld32((c.r[20].w[0] + 584u)));
    mmi::maddu(c, 0, c.r[10].w[0], c.r[12].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + 128u);
    c.r[11].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[20].w[0] + 616u)));
    c.r[11].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[10], ld32((c.r[20].w[0] + 588u)));
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 584u)));
    c.r[11].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[4].w[0] - c.r[12].w[0]);
    mmi::mult(c, 1, c.r[11].w[0], c.r[12].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    mmi::maddu(c, 1, c.r[6].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    set32(c.r[10], c.r[10].w[0] + 128u);
    c.r[11].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[9], ld32((c.r[20].w[0] + 616u)));
    c.r[11].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[10], ld32((c.r[20].w[0] + 588u)));
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 584u)));
    c.r[11].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[10], c.r[4].w[0] - c.r[12].w[0]);
    mmi::mult(c, 0, c.r[11].w[0], c.r[12].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    mmi::maddu(c, 0, c.r[5].w[0], c.r[10].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + 128u);
    c.r[11].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    c.r[10].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0]));
    c.budget -= 65;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_001EBC74; } }
L_001EBC2C:
    set32(c.r[9], c.r[8].w[0] << 1);
    c.budget -= 1;
L_001EBC30:
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[21].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 2u));
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
L_001EBC74:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001EBC78:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[20].w[0] + 494u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EBAD8u | kUnwind; return; } goto L_001EBAD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld64((c.r[20].w[0] + 264u));  if (t) { [[clang::musttail]] return unit_003B(c, 6u, depth); } }
L_001EBC8C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[4].w[0] & 63u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCA4u); c.r[4].d[0] = c.r[3].d[0] + c.r[2].d[0];  if (depth < kMaxDepth) unit_00AF(c, 226u, depth + 1u); else { c.pc = 0x003BDE00u; return; } if (c.pc != 0x001EBCA4u) [[unlikely]] return; }
L_001EBCA4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[20].w[0] + 516u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[18].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001EBD34; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[20] = ld32((c.r[20].w[0] + 572u));  goto L_001EBCF8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[20].w[0] + 576u));  goto L_001EBCE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld16((c.r[20].w[0] + 532u));  if (t) { goto L_001EBD74; } }
L_001EBCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBCE8u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EBCE8u) [[unlikely]] return; }
L_001EBCE8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_001EBD70; } }
L_001EBCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD00u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EBD00u) [[unlikely]] return; }
L_001EBD00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD0Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBD0Cu) [[unlikely]] return; }
L_001EBD0C:
    c.f[0] = ld32((c.r[20].w[0] + 576u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD1Cu); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EBD1Cu) [[unlikely]] return; }
L_001EBD1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD2Cu); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBD2Cu) [[unlikely]] return; }
L_001EBD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001EBD70; } }
L_001EBD34:
    c.f[20] = ld32((c.r[20].w[0] + 520u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD40u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EBD40u) [[unlikely]] return; }
L_001EBD40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD4Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBD4Cu) [[unlikely]] return; }
L_001EBD4C:
    c.f[0] = ld32((c.r[20].w[0] + 576u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD5Cu); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EBD5Cu) [[unlikely]] return; }
L_001EBD5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD6Cu); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBD6Cu) [[unlikely]] return; }
L_001EBD6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EBD70:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 532u));
    c.budget -= 1;
L_001EBD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD7Cu);  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBD7Cu) [[unlikely]] return; }
L_001EBD7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD88u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBD88u) [[unlikely]] return; }
L_001EBD88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBD94u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBD94u) [[unlikely]] return; }
L_001EBD94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBDA0u) [[unlikely]] return; }
L_001EBDA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDB0u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBDB0u) [[unlikely]] return; }
L_001EBDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBDB8u) [[unlikely]] return; }
L_001EBDB8:
    st16((c.r[20].w[0] + 542u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDC4u); c.r[4].d[0] = ld16((c.r[20].w[0] + 532u));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBDC4u) [[unlikely]] return; }
L_001EBDC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDD0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBDD0u) [[unlikely]] return; }
L_001EBDD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBDDCu) [[unlikely]] return; }
L_001EBDDC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBDE8u) [[unlikely]] return; }
L_001EBDE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBDF8u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBDF8u) [[unlikely]] return; }
L_001EBDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBE00u) [[unlikely]] return; }
L_001EBE00:
    st16((c.r[20].w[0] + 532u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 526u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 528u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBE2C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 530u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001EBE2C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 532u));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[20].w[0] + 542u));  goto L_001EBFE0; }
L_001EBE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE34u);  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBE34u) [[unlikely]] return; }
L_001EBE34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE40u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBE40u) [[unlikely]] return; }
L_001EBE40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBE4Cu) [[unlikely]] return; }
L_001EBE4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBE58u) [[unlikely]] return; }
L_001EBE58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE68u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBE68u) [[unlikely]] return; }
L_001EBE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE70u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBE70u) [[unlikely]] return; }
L_001EBE70:
    st16((c.r[20].w[0] + 536u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE7Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 528u));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBE7Cu) [[unlikely]] return; }
L_001EBE7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE88u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBE88u) [[unlikely]] return; }
L_001EBE88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBE94u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBE94u) [[unlikely]] return; }
L_001EBE94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEA0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBEA0u) [[unlikely]] return; }
L_001EBEA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEB0u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBEB0u) [[unlikely]] return; }
L_001EBEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBEB8u) [[unlikely]] return; }
L_001EBEB8:
    st16((c.r[20].w[0] + 538u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEC4u); c.r[4].d[0] = ld16((c.r[20].w[0] + 530u));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBEC4u) [[unlikely]] return; }
L_001EBEC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBED0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBED0u) [[unlikely]] return; }
L_001EBED0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBEDCu) [[unlikely]] return; }
L_001EBEDC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBEE8u) [[unlikely]] return; }
L_001EBEE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBEF8u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBEF8u) [[unlikely]] return; }
L_001EBEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF00u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBF00u) [[unlikely]] return; }
L_001EBF00:
    st16((c.r[20].w[0] + 540u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF0Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 526u));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBF0Cu) [[unlikely]] return; }
L_001EBF0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBF18u) [[unlikely]] return; }
L_001EBF18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBF24u) [[unlikely]] return; }
L_001EBF24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBF30u) [[unlikely]] return; }
L_001EBF30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF40u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBF40u) [[unlikely]] return; }
L_001EBF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBF48u) [[unlikely]] return; }
L_001EBF48:
    st16((c.r[20].w[0] + 526u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF54u); c.r[4].d[0] = ld16((c.r[20].w[0] + 528u));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBF54u) [[unlikely]] return; }
L_001EBF54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF60u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBF60u) [[unlikely]] return; }
L_001EBF60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF6Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBF6Cu) [[unlikely]] return; }
L_001EBF6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF78u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBF78u) [[unlikely]] return; }
L_001EBF78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF88u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBF88u) [[unlikely]] return; }
L_001EBF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF90u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBF90u) [[unlikely]] return; }
L_001EBF90:
    st16((c.r[20].w[0] + 528u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBF9Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 530u));  if (depth < kMaxDepth) unit_00AF(c, 222u, depth + 1u); else { c.pc = 0x003BDDB0u; return; } if (c.pc != 0x001EBF9Cu) [[unlikely]] return; }
L_001EBF9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFA8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001EBFA8u) [[unlikely]] return; }
L_001EBFA8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001EBFB4u) [[unlikely]] return; }
L_001EBFB4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001EBFC0u) [[unlikely]] return; }
L_001EBFC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFD0u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001EBFD0u) [[unlikely]] return; }
L_001EBFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EBFD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001EBFD8u) [[unlikely]] return; }
L_001EBFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 530u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_003B(c, 5u, depth); } }
L_001EBFE0:
    st16((c.r[20].w[0] + 540u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 538u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 536u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 532u));
    st16((c.r[20].w[0] + 530u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 526u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_003B(c, 5u, depth); } }
    [[clang::musttail]] return unit_003B(c, 1u, depth);
}

}
