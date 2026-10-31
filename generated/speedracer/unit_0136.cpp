#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0136[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 19,
    0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29,
    0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0,
    78, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 87,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97,
    0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0136(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_005D8000;
    case 2u: goto L_005D801C;
    case 3u: goto L_005D8030;
    case 4u: goto L_005D804C;
    case 5u: goto L_005D8060;
    case 6u: goto L_005D807C;
    case 7u: goto L_005D8090;
    case 8u: goto L_005D80AC;
    case 9u: goto L_005D80C0;
    case 10u: goto L_005D80DC;
    case 11u: goto L_005D80F0;
    case 12u: goto L_005D810C;
    case 13u: goto L_005D8120;
    case 14u: goto L_005D813C;
    case 15u: goto L_005D8150;
    case 16u: goto L_005D8160;
    case 17u: goto L_005D8168;
    case 18u: goto L_005D8170;
    case 19u: goto L_005D817C;
    case 20u: goto L_005D8190;
    case 21u: goto L_005D81A0;
    case 22u: goto L_005D81A8;
    case 23u: goto L_005D81B0;
    case 24u: goto L_005D81BC;
    case 25u: goto L_005D81D0;
    case 26u: goto L_005D81E0;
    case 27u: goto L_005D81E8;
    case 28u: goto L_005D81F0;
    case 29u: goto L_005D81FC;
    case 30u: goto L_005D8210;
    case 31u: goto L_005D8220;
    case 32u: goto L_005D8228;
    case 33u: goto L_005D8230;
    case 34u: goto L_005D823C;
    case 35u: goto L_005D8250;
    case 36u: goto L_005D8260;
    case 37u: goto L_005D8268;
    case 38u: goto L_005D8270;
    case 39u: goto L_005D827C;
    case 40u: goto L_005D8290;
    case 41u: goto L_005D82A0;
    case 42u: goto L_005D82A8;
    case 43u: goto L_005D82B0;
    case 44u: goto L_005D82BC;
    case 45u: goto L_005D82D0;
    case 46u: goto L_005D82E0;
    case 47u: goto L_005D82E8;
    case 48u: goto L_005D82F0;
    case 49u: goto L_005D82FC;
    case 50u: goto L_005D8310;
    case 51u: goto L_005D8320;
    case 52u: goto L_005D8328;
    case 53u: goto L_005D8330;
    case 54u: goto L_005D833C;
    case 55u: goto L_005D8350;
    case 56u: goto L_005D8360;
    case 57u: goto L_005D8368;
    case 58u: goto L_005D8370;
    case 59u: goto L_005D837C;
    case 60u: goto L_005D8398;
    case 61u: goto L_005D83B0;
    case 62u: goto L_005D83C0;
    case 63u: goto L_005D83C8;
    case 64u: goto L_005D83D0;
    case 65u: goto L_005D83DC;
    case 66u: goto L_005D83F0;
    case 67u: goto L_005D8400;
    case 68u: goto L_005D8408;
    case 69u: goto L_005D8410;
    case 70u: goto L_005D841C;
    case 71u: goto L_005D8430;
    case 72u: goto L_005D8440;
    case 73u: goto L_005D8448;
    case 74u: goto L_005D8450;
    case 75u: goto L_005D845C;
    case 76u: goto L_005D8464;
    case 77u: goto L_005D8470;
    case 78u: goto L_005D8480;
    case 79u: goto L_005D8488;
    case 80u: goto L_005D8490;
    case 81u: goto L_005D849C;
    case 82u: goto L_005D84B8;
    case 83u: goto L_005D84D0;
    case 84u: goto L_005D84E0;
    case 85u: goto L_005D84E8;
    case 86u: goto L_005D84F0;
    case 87u: goto L_005D84FC;
    case 88u: goto L_005D8510;
    case 89u: goto L_005D8520;
    case 90u: goto L_005D8528;
    case 91u: goto L_005D8530;
    case 92u: goto L_005D853C;
    case 93u: goto L_005D8550;
    case 94u: goto L_005D8560;
    case 95u: goto L_005D8568;
    case 96u: goto L_005D8570;
    case 97u: goto L_005D857C;
    case 98u: goto L_005D8584;
    case 99u: goto L_005D8590;
    case 100u: goto L_005D85A0;
    case 101u: goto L_005D85A8;
    case 102u: goto L_005D85B0;
    case 103u: goto L_005D85BC;
    case 104u: goto L_005D85D0;
    case 105u: goto L_005D85E0;
    case 106u: goto L_005D85E8;
    case 107u: goto L_005D85F0;
    case 108u: goto L_005D85FC;
    case 109u: goto L_005D8618;
    case 110u: goto L_005D8630;
    case 111u: goto L_005D8640;
    case 112u: goto L_005D8648;
    case 113u: goto L_005D8650;
    case 114u: goto L_005D865C;
    case 115u: goto L_005D8670;
    case 116u: goto L_005D8680;
    case 117u: goto L_005D8688;
    case 118u: goto L_005D8690;
    case 119u: goto L_005D869C;
    case 120u: goto L_005D86B0;
    case 121u: goto L_005D86DC;
    case 122u: goto L_005D86F4;
    case 123u: goto L_005D8700;
    case 124u: goto L_005D8730;
    case 125u: goto L_005D8760;
    case 126u: goto L_005D8790;
    case 127u: goto L_005D87E0;
    case 128u: goto L_005D8810;
    case 129u: goto L_005D8840;
    case 130u: goto L_005D88A4;
    case 131u: goto L_005D88C0;
    case 132u: goto L_005D88CC;
    case 133u: goto L_005D88E0;
    default: bad_entry(c, 0x005D8000u); return;
    }
L_005D8000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23040u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D801Cu); set32(c.r[6], c.r[6].w[0] - 856u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D801Cu) [[unlikely]] return; }
L_005D801C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8030u); set32(c.r[5], c.r[5].w[0] + 23431u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D8030u) [[unlikely]] return; }
L_005D8030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23056u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D804Cu); set32(c.r[6], c.r[6].w[0] - 840u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D804Cu) [[unlikely]] return; }
L_005D804C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8060u); set32(c.r[5], c.r[5].w[0] + 23451u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D8060u) [[unlikely]] return; }
L_005D8060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23072u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D807Cu); set32(c.r[6], c.r[6].w[0] - 824u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D807Cu) [[unlikely]] return; }
L_005D807C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8090u); set32(c.r[5], c.r[5].w[0] + 23477u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D8090u) [[unlikely]] return; }
L_005D8090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23088u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D80ACu); set32(c.r[6], c.r[6].w[0] - 808u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D80ACu) [[unlikely]] return; }
L_005D80AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D80C0u); set32(c.r[5], c.r[5].w[0] + 23503u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D80C0u) [[unlikely]] return; }
L_005D80C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23104u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D80DCu); set32(c.r[6], c.r[6].w[0] - 792u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D80DCu) [[unlikely]] return; }
L_005D80DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D80F0u); set32(c.r[5], c.r[5].w[0] + 23530u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D80F0u) [[unlikely]] return; }
L_005D80F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23120u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D810Cu); set32(c.r[6], c.r[6].w[0] - 776u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D810Cu) [[unlikely]] return; }
L_005D810C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 23136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8120u); set32(c.r[5], c.r[5].w[0] + 23556u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x005D8120u) [[unlikely]] return; }
L_005D8120:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 23136u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D813Cu); set32(c.r[6], c.r[6].w[0] - 760u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D813Cu) [[unlikely]] return; }
L_005D813C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8160u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8160u) [[unlikely]] return; }
L_005D8160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8168u); st32((c.r[28].w[0] - 22272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8168u) [[unlikely]] return; }
L_005D8168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8170u); st32((c.r[28].w[0] - 22276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8170u) [[unlikely]] return; }
L_005D8170:
    st32((c.r[28].w[0] - 22280u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D817Cu); set32(c.r[4], c.r[28].w[0] - 22284u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D817Cu) [[unlikely]] return; }
L_005D817C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D81A0u) [[unlikely]] return; }
L_005D81A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81A8u); st32((c.r[28].w[0] - 22256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D81A8u) [[unlikely]] return; }
L_005D81A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81B0u); st32((c.r[28].w[0] - 22260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D81B0u) [[unlikely]] return; }
L_005D81B0:
    st32((c.r[28].w[0] - 22264u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81BCu); set32(c.r[4], c.r[28].w[0] - 22268u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D81BCu) [[unlikely]] return; }
L_005D81BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D81D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D81E0u) [[unlikely]] return; }
L_005D81E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81E8u); st32((c.r[28].w[0] - 22240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D81E8u) [[unlikely]] return; }
L_005D81E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81F0u); st32((c.r[28].w[0] - 22244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D81F0u) [[unlikely]] return; }
L_005D81F0:
    st32((c.r[28].w[0] - 22248u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D81FCu); set32(c.r[4], c.r[28].w[0] - 22252u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D81FCu) [[unlikely]] return; }
L_005D81FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8220u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8220u) [[unlikely]] return; }
L_005D8220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8228u); st32((c.r[28].w[0] - 22224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8228u) [[unlikely]] return; }
L_005D8228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8230u); st32((c.r[28].w[0] - 22228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8230u) [[unlikely]] return; }
L_005D8230:
    st32((c.r[28].w[0] - 22232u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D823Cu); set32(c.r[4], c.r[28].w[0] - 22236u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D823Cu) [[unlikely]] return; }
L_005D823C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8260u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8260u) [[unlikely]] return; }
L_005D8260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8268u); st32((c.r[28].w[0] - 22208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8268u) [[unlikely]] return; }
L_005D8268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8270u); st32((c.r[28].w[0] - 22212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8270u) [[unlikely]] return; }
L_005D8270:
    st32((c.r[28].w[0] - 22216u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D827Cu); set32(c.r[4], c.r[28].w[0] - 22220u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D827Cu) [[unlikely]] return; }
L_005D827C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D82A0u) [[unlikely]] return; }
L_005D82A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82A8u); st32((c.r[28].w[0] - 22192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D82A8u) [[unlikely]] return; }
L_005D82A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82B0u); st32((c.r[28].w[0] - 22196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D82B0u) [[unlikely]] return; }
L_005D82B0:
    st32((c.r[28].w[0] - 22200u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82BCu); set32(c.r[4], c.r[28].w[0] - 22204u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D82BCu) [[unlikely]] return; }
L_005D82BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D82D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D82E0u) [[unlikely]] return; }
L_005D82E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82E8u); st32((c.r[28].w[0] - 22176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D82E8u) [[unlikely]] return; }
L_005D82E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82F0u); st32((c.r[28].w[0] - 22180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D82F0u) [[unlikely]] return; }
L_005D82F0:
    st32((c.r[28].w[0] - 22184u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D82FCu); set32(c.r[4], c.r[28].w[0] - 22188u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D82FCu) [[unlikely]] return; }
L_005D82FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8320u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8320u) [[unlikely]] return; }
L_005D8320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8328u); st32((c.r[28].w[0] - 22156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8328u) [[unlikely]] return; }
L_005D8328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8330u); st32((c.r[28].w[0] - 22160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8330u) [[unlikely]] return; }
L_005D8330:
    st32((c.r[28].w[0] - 22164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D833Cu); set32(c.r[4], c.r[28].w[0] - 22168u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D833Cu) [[unlikely]] return; }
L_005D833C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8360u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8360u) [[unlikely]] return; }
L_005D8360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8368u); st32((c.r[28].w[0] - 22140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8368u) [[unlikely]] return; }
L_005D8368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8370u); st32((c.r[28].w[0] - 22144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8370u) [[unlikely]] return; }
L_005D8370:
    st32((c.r[28].w[0] - 22148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D837Cu); set32(c.r[4], c.r[28].w[0] - 22152u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D837Cu) [[unlikely]] return; }
L_005D837C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 26208u);
    set32(c.r[5], c.r[5].w[0] + 26224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8398u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D8398u) [[unlikely]] return; }
L_005D8398:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D83B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D83C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D83C0u) [[unlikely]] return; }
L_005D83C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D83C8u); st32((c.r[28].w[0] - 22124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D83C8u) [[unlikely]] return; }
L_005D83C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D83D0u); st32((c.r[28].w[0] - 22128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D83D0u) [[unlikely]] return; }
L_005D83D0:
    st32((c.r[28].w[0] - 22132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D83DCu); set32(c.r[4], c.r[28].w[0] - 22136u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D83DCu) [[unlikely]] return; }
L_005D83DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D83F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8400u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8400u) [[unlikely]] return; }
L_005D8400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8408u); st32((c.r[28].w[0] - 22108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8408u) [[unlikely]] return; }
L_005D8408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8410u); st32((c.r[28].w[0] - 22112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8410u) [[unlikely]] return; }
L_005D8410:
    st32((c.r[28].w[0] - 22116u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D841Cu); set32(c.r[4], c.r[28].w[0] - 22120u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D841Cu) [[unlikely]] return; }
L_005D841C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8440u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8440u) [[unlikely]] return; }
L_005D8440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8448u); st32((c.r[28].w[0] - 22088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8448u) [[unlikely]] return; }
L_005D8448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8450u); st32((c.r[28].w[0] - 22092u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8450u) [[unlikely]] return; }
L_005D8450:
    st32((c.r[28].w[0] - 22096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D845Cu); set32(c.r[4], c.r[28].w[0] - 22100u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D845Cu) [[unlikely]] return; }
L_005D845C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8464u); set32(c.r[4], c.r[28].w[0] - 22104u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D8464u) [[unlikely]] return; }
L_005D8464:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8480u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8480u) [[unlikely]] return; }
L_005D8480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8488u); st32((c.r[28].w[0] - 22072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8488u) [[unlikely]] return; }
L_005D8488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8490u); st32((c.r[28].w[0] - 22076u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8490u) [[unlikely]] return; }
L_005D8490:
    st32((c.r[28].w[0] - 22080u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D849Cu); set32(c.r[4], c.r[28].w[0] - 22084u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D849Cu) [[unlikely]] return; }
L_005D849C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 26616u);
    set32(c.r[5], c.r[5].w[0] + 26624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D84B8u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D84B8u) [[unlikely]] return; }
L_005D84B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D84D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D84E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D84E0u) [[unlikely]] return; }
L_005D84E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D84E8u); st32((c.r[28].w[0] - 22056u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D84E8u) [[unlikely]] return; }
L_005D84E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D84F0u); st32((c.r[28].w[0] - 22060u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D84F0u) [[unlikely]] return; }
L_005D84F0:
    st32((c.r[28].w[0] - 22064u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D84FCu); set32(c.r[4], c.r[28].w[0] - 22068u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D84FCu) [[unlikely]] return; }
L_005D84FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8520u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8520u) [[unlikely]] return; }
L_005D8520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8528u); st32((c.r[28].w[0] - 22036u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8528u) [[unlikely]] return; }
L_005D8528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8530u); st32((c.r[28].w[0] - 22040u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8530u) [[unlikely]] return; }
L_005D8530:
    st32((c.r[28].w[0] - 22044u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D853Cu); set32(c.r[4], c.r[28].w[0] - 22048u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D853Cu) [[unlikely]] return; }
L_005D853C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8560u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8560u) [[unlikely]] return; }
L_005D8560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8568u); st32((c.r[28].w[0] - 22016u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8568u) [[unlikely]] return; }
L_005D8568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8570u); st32((c.r[28].w[0] - 22020u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8570u) [[unlikely]] return; }
L_005D8570:
    st32((c.r[28].w[0] - 22024u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D857Cu); set32(c.r[4], c.r[28].w[0] - 22028u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D857Cu) [[unlikely]] return; }
L_005D857C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8584u); set32(c.r[4], c.r[28].w[0] - 22032u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D8584u) [[unlikely]] return; }
L_005D8584:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D85A0u) [[unlikely]] return; }
L_005D85A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85A8u); st32((c.r[28].w[0] - 22000u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D85A8u) [[unlikely]] return; }
L_005D85A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85B0u); st32((c.r[28].w[0] - 22004u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D85B0u) [[unlikely]] return; }
L_005D85B0:
    st32((c.r[28].w[0] - 22008u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85BCu); set32(c.r[4], c.r[28].w[0] - 22012u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D85BCu) [[unlikely]] return; }
L_005D85BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D85D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D85E0u) [[unlikely]] return; }
L_005D85E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85E8u); st32((c.r[28].w[0] - 21984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D85E8u) [[unlikely]] return; }
L_005D85E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85F0u); st32((c.r[28].w[0] - 21988u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D85F0u) [[unlikely]] return; }
L_005D85F0:
    st32((c.r[28].w[0] - 21992u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D85FCu); set32(c.r[4], c.r[28].w[0] - 21996u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D85FCu) [[unlikely]] return; }
L_005D85FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 27464u);
    set32(c.r[5], c.r[5].w[0] - 27456u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8618u); set32(c.r[6], c.r[6].w[0] + 23832u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D8618u) [[unlikely]] return; }
L_005D8618:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8640u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8640u) [[unlikely]] return; }
L_005D8640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8648u); st32((c.r[28].w[0] - 21968u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8648u) [[unlikely]] return; }
L_005D8648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8650u); st32((c.r[28].w[0] - 21972u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8650u) [[unlikely]] return; }
L_005D8650:
    st32((c.r[28].w[0] - 21976u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D865Cu); set32(c.r[4], c.r[28].w[0] - 21980u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D865Cu) [[unlikely]] return; }
L_005D865C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8680u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D8680u) [[unlikely]] return; }
L_005D8680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8688u); st32((c.r[28].w[0] - 21952u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D8688u) [[unlikely]] return; }
L_005D8688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D8690u); st32((c.r[28].w[0] - 21956u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D8690u) [[unlikely]] return; }
L_005D8690:
    st32((c.r[28].w[0] - 21960u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D869Cu); set32(c.r[4], c.r[28].w[0] - 21964u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D869Cu) [[unlikely]] return; }
L_005D869C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D86B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 22048u);
    set32(c.r[5], c.r[5].w[0] + 9168u);
    set32(c.r[6], c.r[6].w[0] + 9072u);
    set32(c.r[7], 0u + 19008u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D86DCu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D86DCu) [[unlikely]] return; }
L_005D86DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D86F4u); set32(c.r[6], c.r[6].w[0] + 22032u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D86F4u) [[unlikely]] return; }
L_005D86F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D8700:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 13584u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 13584u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 13588u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 13592u), 0u);  c.pc = t; return; }
L_005D8730:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 13732u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 13732u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 13736u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 13740u), 0u);  c.pc = t; return; }
L_005D8760:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 16400u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 16400u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 16404u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16408u), 0u);  c.pc = t; return; }
L_005D8790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 16464u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 16464u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 16468u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 16472u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 16512u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 16516u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16520u), 0u);  c.pc = t; return; }
L_005D87E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 16640u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 16640u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 16644u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16648u), 0u);  c.pc = t; return; }
L_005D8810:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 16688u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 16688u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 16692u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16696u), 0u);  c.pc = t; return; }
L_005D8840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16768u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16704u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 20384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16708u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16724u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16720u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16728u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16712u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16732u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 16736u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D88A4u); st32((c.r[2].w[0] + 16740u), 0u);  if (depth < kMaxDepth) unit_010F(c, 25u, depth + 1u); else { c.pc = 0x0053C270u; return; } if (c.pc != 0x005D88A4u) [[unlikely]] return; }
L_005D88A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 16768u);
    set32(c.r[5], c.r[5].w[0] - 15968u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D88C0u); set32(c.r[6], c.r[6].w[0] + 16744u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D88C0u) [[unlikely]] return; }
L_005D88C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D88CCu); set32(c.r[4], c.r[4].w[0] + 20384u);  if (depth < kMaxDepth) unit_010B(c, 80u, depth + 1u); else { c.pc = 0x0052D3D0u; return; } if (c.pc != 0x005D88CCu) [[unlikely]] return; }
L_005D88CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D88E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[5].w[0] + 20720u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 20720u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 20724u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 20728u), 0u);
    set32(c.r[4], c.r[4].w[0] + 20752u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 20752u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 20756u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20760u), 0u);  c.pc = t; return; }
}

}
