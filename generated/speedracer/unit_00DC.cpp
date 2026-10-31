#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DC[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 0, 11, 0, 0, 12, 13, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00DC(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00470000;
    case 2u: goto L_0047000C;
    case 3u: goto L_00470018;
    case 4u: goto L_00470024;
    case 5u: goto L_0047002C;
    case 6u: goto L_00470030;
    case 7u: goto L_0047003C;
    case 8u: goto L_00470048;
    case 9u: goto L_00470050;
    case 10u: goto L_00470058;
    case 11u: goto L_00470064;
    case 12u: goto L_00470070;
    case 13u: goto L_00470074;
    case 14u: goto L_00470088;
    case 15u: goto L_004700B0;
    case 16u: goto L_004700E0;
    case 17u: goto L_004700F4;
    case 18u: goto L_0047010C;
    case 19u: goto L_00470130;
    case 20u: goto L_004701A0;
    case 21u: goto L_004701A8;
    case 22u: goto L_004701F4;
    case 23u: goto L_00470208;
    case 24u: goto L_00470214;
    case 25u: goto L_0047023C;
    case 26u: goto L_00470250;
    case 27u: goto L_0047025C;
    case 28u: goto L_00470290;
    case 29u: goto L_004702A4;
    case 30u: goto L_004702B0;
    case 31u: goto L_00470308;
    case 32u: goto L_00470318;
    case 33u: goto L_00470344;
    case 34u: goto L_00470370;
    case 35u: goto L_00470390;
    case 36u: goto L_004703A4;
    case 37u: goto L_004703B0;
    case 38u: goto L_004703D8;
    case 39u: goto L_004703EC;
    case 40u: goto L_004703F8;
    case 41u: goto L_0047041C;
    case 42u: goto L_00470430;
    case 43u: goto L_0047043C;
    case 44u: goto L_004704B4;
    case 45u: goto L_004704D0;
    case 46u: goto L_00470500;
    case 47u: goto L_00470524;
    case 48u: goto L_00470560;
    case 49u: goto L_004705A0;
    case 50u: goto L_004705D0;
    case 51u: goto L_004705F4;
    case 52u: goto L_0047063C;
    case 53u: goto L_0047067C;
    case 54u: goto L_004706B0;
    case 55u: goto L_004706F8;
    case 56u: goto L_00470718;
    case 57u: goto L_0047072C;
    case 58u: goto L_00470738;
    case 59u: goto L_004707B0;
    case 60u: goto L_004707CC;
    case 61u: goto L_004707F0;
    case 62u: goto L_00470800;
    case 63u: goto L_00470814;
    case 64u: goto L_00470830;
    case 65u: goto L_00470848;
    case 66u: goto L_00470860;
    case 67u: goto L_0047088C;
    case 68u: goto L_0047089C;
    case 69u: goto L_004708D0;
    case 70u: goto L_00470958;
    case 71u: goto L_004709FC;
    case 72u: goto L_00470A34;
    case 73u: goto L_00470A6C;
    case 74u: goto L_00470AD0;
    case 75u: goto L_00470B7C;
    case 76u: goto L_00470BD0;
    case 77u: goto L_00470C7C;
    case 78u: goto L_00470E98;
    case 79u: goto L_00470F50;
    case 80u: goto L_00470FAC;
    case 81u: goto L_00470FD8;
    case 82u: goto L_00471004;
    case 83u: goto L_00471018;
    case 84u: goto L_00471024;
    case 85u: goto L_00471030;
    case 86u: goto L_00471060;
    case 87u: goto L_0047111C;
    case 88u: goto L_0047123C;
    case 89u: goto L_00471284;
    case 90u: goto L_004712F8;
    case 91u: goto L_004713B0;
    case 92u: goto L_00471408;
    case 93u: goto L_00471474;
    case 94u: goto L_004714A0;
    case 95u: goto L_004714B0;
    case 96u: goto L_004714F4;
    case 97u: goto L_00471504;
    case 98u: goto L_00471554;
    case 99u: goto L_004715A0;
    case 100u: goto L_0047163C;
    case 101u: goto L_00471694;
    case 102u: goto L_00471738;
    case 103u: goto L_00471820;
    case 104u: goto L_00471934;
    case 105u: goto L_00471A54;
    case 106u: goto L_00471A64;
    case 107u: goto L_00471ABC;
    case 108u: goto L_00471B14;
    case 109u: goto L_00471B24;
    case 110u: goto L_00471B34;
    case 111u: goto L_00471B50;
    case 112u: goto L_00471C00;
    case 113u: goto L_00471C30;
    case 114u: goto L_00471C90;
    case 115u: goto L_00471E0C;
    case 116u: goto L_00471E30;
    case 117u: goto L_00471E40;
    case 118u: goto L_00471E50;
    case 119u: goto L_00471E6C;
    case 120u: goto L_00471F00;
    case 121u: goto L_00471F58;
    case 122u: goto L_00471F60;
    case 123u: goto L_00471F78;
    case 124u: goto L_00471F8C;
    case 125u: goto L_00471F9C;
    case 126u: goto L_00471FB0;
    case 127u: goto L_00472054;
    case 128u: goto L_00472070;
    case 129u: goto L_004720BC;
    case 130u: goto L_004720D8;
    case 131u: goto L_004721A0;
    case 132u: goto L_004721B0;
    case 133u: goto L_004721E8;
    case 134u: goto L_0047220C;
    case 135u: goto L_00472240;
    case 136u: goto L_00472364;
    case 137u: goto L_00472470;
    case 138u: goto L_004725B0;
    case 139u: goto L_004725F8;
    case 140u: goto L_00472618;
    case 141u: goto L_0047272C;
    case 142u: goto L_004727A4;
    case 143u: goto L_0047288C;
    case 144u: goto L_00472950;
    case 145u: goto L_004729C8;
    case 146u: goto L_004729D4;
    case 147u: goto L_004729E0;
    case 148u: goto L_00472A78;
    case 149u: goto L_00472A84;
    case 150u: goto L_00472C3C;
    case 151u: goto L_00472CC4;
    case 152u: goto L_00472CD4;
    case 153u: goto L_00472CE0;
    case 154u: goto L_00472D7C;
    case 155u: goto L_00472F20;
    case 156u: goto L_00472F4C;
    case 157u: goto L_00472F54;
    case 158u: goto L_0047301C;
    case 159u: goto L_00473044;
    case 160u: goto L_004730B0;
    case 161u: goto L_00473114;
    case 162u: goto L_0047313C;
    case 163u: goto L_00473160;
    case 164u: goto L_00473184;
    case 165u: goto L_004731A0;
    case 166u: goto L_0047320C;
    case 167u: goto L_0047323C;
    case 168u: goto L_00473420;
    case 169u: goto L_004734AC;
    case 170u: goto L_00473508;
    case 171u: goto L_00473514;
    case 172u: goto L_00473520;
    case 173u: goto L_00473530;
    case 174u: goto L_0047353C;
    case 175u: goto L_0047354C;
    case 176u: goto L_00473558;
    case 177u: goto L_00473574;
    case 178u: goto L_00473610;
    case 179u: goto L_00473774;
    case 180u: goto L_00473790;
    case 181u: goto L_004737A0;
    case 182u: goto L_004737BC;
    case 183u: goto L_00473818;
    case 184u: goto L_00473878;
    case 185u: goto L_00473944;
    case 186u: goto L_00473960;
    case 187u: goto L_00473970;
    case 188u: goto L_0047398C;
    case 189u: goto L_00473A48;
    case 190u: goto L_00473A5C;
    case 191u: goto L_00473AB0;
    case 192u: goto L_00473AC0;
    case 193u: goto L_00473AD0;
    case 194u: goto L_00473AE0;
    case 195u: goto L_00473B74;
    case 196u: goto L_00473B94;
    case 197u: goto L_00473D78;
    case 198u: goto L_00473E40;
    case 199u: goto L_00473E90;
    case 200u: goto L_00473EE0;
    default: bad_entry(c, 0x00470000u); return;
    }
L_00470000:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047000Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047000Cu) [[unlikely]] return; }
L_0047000C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470018u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00470018u) [[unlikely]] return; }
L_00470018:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470024u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00470024u) [[unlikely]] return; }
L_00470024:
    set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470030u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00DB(c, 271u, depth + 1u); else { c.pc = 0x0046FCF0u; return; } if (c.pc != 0x00470030u) [[unlikely]] return; }
    goto L_00470030;
L_0047002C:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_00470030:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047003Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047003Cu) [[unlikely]] return; }
L_0047003C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00470048u) [[unlikely]] return; }
L_00470048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470050u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00470050u) [[unlikely]] return; }
L_00470050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470058u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00470058u) [[unlikely]] return; }
L_00470058:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00470064u) [[unlikely]] return; }
L_00470064:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470070u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00470070u) [[unlikely]] return; }
L_00470070:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00470074:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FF88u | kUnwind; return; } [[clang::musttail]] return unit_00DB(c, 290u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470088u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00470088u) [[unlikely]] return; }
L_00470088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004700B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047010C; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004700E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004700E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004700E0u) [[unlikely]] return; }
L_004700E0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004700F8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004700F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004700F4u) [[unlikely]] return; }
L_004700F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004700F8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00470110; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047010Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047010Cu) [[unlikely]] return; }
L_0047010C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00470110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00470130:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004704D0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_004701AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004701A0u); set32(c.r[5], c.r[5].w[0] - 30064u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004701A0u) [[unlikely]] return; }
L_004701A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004701A8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004701A8u) [[unlikely]] return; }
L_004701A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004701AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_00470320; }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[20].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_004701E0; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_004701E0:
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[30], c.r[17].w[0] << 5);  goto L_00470284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00470228; } }
L_004701F4:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00470218; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470208u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00470208u) [[unlikely]] return; }
L_00470208:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470214u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00470214u) [[unlikely]] return; }
L_00470214:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00470218:
    set32(c.r[21], c.r[21].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00470228:
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004701F4u | kUnwind; return; } goto L_004701F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00470270; } }
L_0047023C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00470260; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470250u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00470250u) [[unlikely]] return; }
L_00470250:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047025Cu); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0047025Cu) [[unlikely]] return; }
L_0047025C:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00470260:
    set32(c.r[22], c.r[22].w[0] + 32u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_00470270:
    c.r[2].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047023Cu | kUnwind; return; } goto L_0047023C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047030C; } }
L_00470284:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[30].w[0]);  if (t) { goto L_004702C4; } }
L_00470290:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_004702B4; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004702A4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004702A4u) [[unlikely]] return; }
L_004702A4:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004702B0u); set32(c.r[5], c.r[22].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004702B0u) [[unlikely]] return; }
L_004702B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004702B4:
    set32(c.r[22], c.r[22].w[0] + 32u);
    set32(c.r[21], c.r[21].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_004702C4:
    c.r[2].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470290u | kUnwind; return; } goto L_00470290; } }
    set32(c.r[2], c.r[23].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[20].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);  goto L_004702FC; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004702F8; } }
    set32(c.r[16], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_004702F8:
    set32(c.r[5], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_004702FC:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470308u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 50u, depth + 1u); else { c.pc = 0x004705D0u; return; } if (c.pc != 0x00470308u) [[unlikely]] return; }
L_00470308:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0047030C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470318u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 46u, depth + 1u); else { c.pc = 0x00470500u; return; } if (c.pc != 0x00470318u) [[unlikely]] return; }
L_00470318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_004704D4; } }
L_00470320:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], 0u + 1u);  goto L_0047033C; }
L_0047033C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00470358; } }
L_00470344:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_00470358; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_00470358:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470344u | kUnwind; return; } goto L_00470344; }
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470370u); set32(c.r[4], c.r[20].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00470370u) [[unlikely]] return; }
L_00470370:
    st32((c.r[29].w[0] + 164u), c.r[20].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_004703C4; } }
L_00470390:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_004703B4; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004703A4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004703A4u) [[unlikely]] return; }
L_004703A4:
    set32(c.r[4], c.r[22].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004703B0u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004703B0u) [[unlikely]] return; }
L_004703B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004703B4:
    set32(c.r[21], c.r[21].w[0] + 32u);
    set32(c.r[22], c.r[22].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_004703C4:
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470390u | kUnwind; return; } goto L_00470390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047040C; } }
L_004703D8:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_004703FC; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004703ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004703ECu) [[unlikely]] return; }
L_004703EC:
    set32(c.r[4], c.r[22].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004703F8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004703F8u) [[unlikely]] return; }
L_004703F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004703FC:
    set32(c.r[22], c.r[22].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0047040C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004703D8u | kUnwind; return; } goto L_004703D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;  if (t) { goto L_00470454; } }
L_0047041C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_00470440; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470430u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00470430u) [[unlikely]] return; }
L_00470430:
    set32(c.r[4], c.r[22].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047043Cu); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0047043Cu) [[unlikely]] return; }
L_0047043C:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00470440:
    set32(c.r[21], c.r[21].w[0] + 32u);
    set32(c.r[22], c.r[22].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00470454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047041Cu | kUnwind; return; } goto L_0047041C; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_004704AC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_004704AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004704B4u);  if (depth < kMaxDepth) unit_00DC(c, 66u, depth + 1u); else { c.pc = 0x00470860u; return; } if (c.pc != 0x004704B4u) [[unlikely]] return; }
L_004704B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004704D0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004704D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004704D0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004704D0u) [[unlikely]] return; }
L_004704D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004704D4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00470500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004705A8; } }
L_00470524:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[16].w[0] + 1u);  goto L_00470534; }
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00470534:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_0047054C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_00470554; } }
L_0047054C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00470554:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 130u, depth + 1u); else { c.pc = 0x00105270u; return; } if (c.pc != 0x00470560u) [[unlikely]] return; }
L_00470560:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[16].w[0] + 17u);  goto L_00470574; }
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00470574:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));  goto L_0047058C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_00470594; } }
L_0047058C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00470594:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004705A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 130u, depth + 1u); else { c.pc = 0x00105270u; return; } if (c.pc != 0x004705A0u) [[unlikely]] return; }
L_004705A0:
    set32(c.r[18], c.r[18].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_004705A8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470524u | kUnwind; return; } goto L_00470524; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004705D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0047067C; } }
L_004705F4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 32u);  if (t) { goto L_0047060C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_00470610; } }
L_0047060C:
    set32(c.r[7], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00470610:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_00470628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_00470630; } }
L_00470628:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00470630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047063Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 130u, depth + 1u); else { c.pc = 0x00105270u; return; } if (c.pc != 0x0047063Cu) [[unlikely]] return; }
L_0047063C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 17u);  goto L_00470650; }
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00470650:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));  goto L_00470668; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00470670; } }
L_00470668:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00470670:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047067Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 130u, depth + 1u); else { c.pc = 0x00105270u; return; } if (c.pc != 0x0047067Cu) [[unlikely]] return; }
L_0047067C:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004705F4u | kUnwind; return; } goto L_004705F4; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004706B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004707CC; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[16].w[0] << 5);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004706F8u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004706F8u) [[unlikely]] return; }
L_004706F8:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0047074C; } }
L_00470718:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_0047073C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047072Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0047072Cu) [[unlikely]] return; }
L_0047072C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470738u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00470738u) [[unlikely]] return; }
L_00470738:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047073C:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_0047074C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470718u | kUnwind; return; } goto L_00470718; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_004707A8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_004707A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004707B0u);  if (depth < kMaxDepth) unit_00DC(c, 66u, depth + 1u); else { c.pc = 0x00470860u; return; } if (c.pc != 0x004707B0u) [[unlikely]] return; }
L_004707B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004707D0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004707CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004707CCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004707CCu) [[unlikely]] return; }
L_004707CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004707D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004707F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
L_00470800:
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00470848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470814u);  if (depth < kMaxDepth) unit_00DC(c, 66u, depth + 1u); else { c.pc = 0x00470860u; return; } if (c.pc != 0x00470814u) [[unlikely]] return; }
L_00470814:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00470834; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00470830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470830u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00470830u) [[unlikely]] return; }
L_00470830:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00470834:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047084C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470848u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00470848u) [[unlikely]] return; }
L_00470848:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047084C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00470860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0047089C; } }
L_0047088C:
    set32(c.r[17], c.r[17].w[0] - 32u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047089Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 15u, depth + 1u); else { c.pc = 0x004700B0u; return; } if (c.pc != 0x0047089Cu) [[unlikely]] return; }
L_0047089C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047088Cu | kUnwind; return; } goto L_0047088C; } }
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004708D0:
    set32(c.r[29], c.r[29].w[0] - 672u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 668u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 300u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 296u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 34;
    { const bool t = c.r[3].d[0] == 0ull; c.f[25] = c.f[12];  if (t) { goto L_00470974; } }
L_00470958:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470958u | kUnwind; return; } goto L_00470958; } }
L_00470974:
    st32((c.r[29].w[0] + 352u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 364u), 0u);
    c.f[1] = ld32((c.r[20].w[0]));
    st32((c.r[29].w[0] + 352u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 364u), c.f[0]);  if (t) { goto L_004709B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004709B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004709D4; } }
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004709D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004709D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 656u);  goto L_00470A64; }
    set32(c.r[5], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[6], ld32((c.r[29].w[0] + 296u)));
    c.f[12] = c.f[25];
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004709FCu); c.r[9].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 113u, depth + 1u); else { c.pc = 0x00471C30u; return; } if (c.pc != 0x004709FCu) [[unlikely]] return; }
L_004709FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004717B4; }
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 352u);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470A34u); st32((c.r[18].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470A34u) [[unlikely]] return; }
L_00470A34:
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[0] = fp::sub(c.f[25], c.f[0]);
    st32((c.r[23].w[0]), c.f[0]);
    st32((c.r[23].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 4u), c.f[0]);  if (t) { goto L_004717B4; } }
L_00470A64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00470A88; } }
L_00470A6C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470A6Cu | kUnwind; return; } goto L_00470A6C; } }
L_00470A88:
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[29].w[0] + 656u), c.f[3]);
    st32((c.r[29].w[0] + 660u), c.f[2]);
    c.f[23] = fp::min(c.f[1], c.f[0]);
    c.f[22] = fp::max(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = ld32((c.r[29].w[0] + 364u));
    c.f[0] = fp::min(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = fp::max(c.f[2], c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 624u);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 360u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470AD0u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470AD0u) [[unlikely]] return; }
L_00470AD0:
    c.f[4] = ld32((c.r[29].w[0] + 628u));
    c.f[3] = ld32((c.r[29].w[0] + 624u));
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[1] = 0u;
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00470B00; }
    st32((c.r[29].w[0] + 628u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 624u), c.f[1]);  if (t) { goto L_00470B20; } }
L_00470B00:
    c.f[1] = c.r[2].w[0];
    fpu_rsqrt(c, 2u, c.f[1], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 624u), c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 628u), c.f[0]);
    c.budget -= 8;
L_00470B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 336u), 0u);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 340u), 0u);
    set32(c.r[30], 0u + 4u);
    st32((c.r[29].w[0] + 344u), 0u);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 584u), 0u);
    st32((c.r[29].w[0] + 588u), 0u);
    st32((c.r[29].w[0] + 576u), 0u);
    st32((c.r[29].w[0] + 580u), 0u);
    st32((c.r[29].w[0] + 568u), 0u);
    st32((c.r[29].w[0] + 572u), 0u);
    st32((c.r[29].w[0] + 636u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 31952u));
    c.f[24] = fp::mul(c.f[25], c.f[25]);
    c.f[0] = ld32((c.r[2].w[0] + 31956u));
    st32((c.r[29].w[0] + 608u), c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 612u), c.f[0]);  if (t) { goto L_00471794; } }
L_00470B7C:
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] - 48u));
    c.f[2] = ld32((c.r[16].w[0] - 44u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 336u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    c.f[31] = fp::min(c.f[3], c.f[1]);
    c.f[30] = fp::max(c.f[3], c.f[1]);
    c.f[28] = fp::min(c.f[2], c.f[0]);
    c.f[0] = fp::max(c.f[2], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 560u);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 344u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470BD0u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470BD0u) [[unlikely]] return; }
L_00470BD0:
    c.f[4] = ld32((c.r[29].w[0] + 564u));
    c.f[3] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[1] = 0u;
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00470C00; }
    st32((c.r[29].w[0] + 564u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 560u), c.f[1]);  if (t) { goto L_00470C20; } }
L_00470C00:
    c.f[1] = c.r[2].w[0];
    fpu_rsqrt(c, 2u, c.f[1], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 560u), c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    c.budget -= 8;
L_00470C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 21u, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 632u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    c.f[3] = ld32((c.r[29].w[0] + 564u));
    c.f[4] = ld32((c.r[29].w[0] + 564u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 624u));
    c.f[0] = 0u;
    c.f[29] = ld32((c.r[29].w[0] + 560u));
    c.f[26] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[26]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[27] = c.f[4] ^ fp::kSign;  if (t) { goto L_00470C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00470CC8; } }
L_00470C6C:
    set32(c.r[4], c.r[29].w[0] + 376u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470C7Cu); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470C7Cu) [[unlikely]] return; }
L_00470C7C:
    c.f[1] = ld32((c.r[29].w[0] + 376u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    c.f[6] = ld32((c.r[29].w[0] + 380u));
    c.f[4] = ld32((c.r[29].w[0] + 624u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    fpu_div(c, 4u, c.f[4], c.f[26]);
    c.f[5] = 0u;
    c.f[3] = ld32((c.r[29].w[0] + 560u));
    c.facc = fp::add(c.f[5], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.facc = fp::add(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 568u), c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    st32((c.r[29].w[0] + 572u), c.f[0]);
    c.budget -= 19;
L_00470CC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 504u);  goto L_00470FA0; }
    c.f[0] = ld32((c.r[29].w[0] + 568u));
    c.f[2] = ld32((c.r[29].w[0] + 568u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[30]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00470CFC; } }
    c.f[1] = ld32((c.r[29].w[0] + 572u));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00470CFC; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00470CFC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00470D10; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00470D28; } }
L_00470D10:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00470D28:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00470F9C; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00470D4C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00470D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470D6C; } }
    c.f[1] = ld32((c.r[29].w[0] + 572u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00470D6C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00470D6C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00470D80; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00470D98; } }
L_00470D80:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00470D98:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00470F9C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[31]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00470DBC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00470DBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470DD8; } }
    c.f[0] = ld32((c.r[29].w[0] + 572u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[28]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00470DD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00470DD8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00470DEC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00470E04; } }
L_00470DEC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00470E04:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00470F9C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[23]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00470E28; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00470E28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470E48; } }
    c.f[1] = ld32((c.r[29].w[0] + 572u));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00470E48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00470E48:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00470E5C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00470E74; } }
L_00470E5C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_00470E74:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00470F9C; } }
    set32(c.r[4], c.r[29].w[0] + 520u);
    set32(c.r[5], c.r[29].w[0] + 568u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470E98u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470E98u) [[unlikely]] return; }
L_00470E98:
    c.f[2] = ld32((c.r[29].w[0] + 524u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[29].w[0] + 520u));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[2], c.f[2]);
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[3] = fp::mul(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00470ED4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_00470ED4:
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[3].w[0] << 2);
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 656u));
    set32(c.r[7], c.r[18].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 660u));
    set32(c.r[2], c.r[3].w[0] << 1);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[29].w[0]);
    st32((c.r[3].w[0] + 608u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 572u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 668u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[7].w[0]), c.f[27]);
    set32(c.r[5], c.r[29].w[0] + 568u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470F50u); st32((c.r[7].w[0] + 4u), c.f[29]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470F50u) [[unlikely]] return; }
L_00470F50:
    c.f[1] = ld32((c.r[29].w[0] + 632u));
    set32(c.r[3], c.r[22].w[0] + c.r[17].w[0]);
    c.f[5] = ld32((c.r[29].w[0] + 516u));
    set32(c.r[2], c.r[23].w[0] + c.r[17].w[0]);
    c.f[3] = ld32((c.r[29].w[0] + 512u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_div(c, 1u, c.f[3], c.f[1]);
    c.f[4] = ld32((c.r[16].w[0] - 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[2] = 0u;
    c.facc = fp::add(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[25]);  if (t) { goto L_00471790; } }
L_00470F9C:
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 1;
L_00470FA0:
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470FACu); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470FACu) [[unlikely]] return; }
L_00470FAC:
    c.f[1] = ld32((c.r[29].w[0] + 508u));
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    set32(c.r[5], c.r[29].w[0] + 360u);
    c.f[3] = ld32((c.r[29].w[0] + 504u));
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.f[2] = ld32((c.r[29].w[0] + 560u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470FD8u); st32((c.r[29].w[0] + 320u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00470FD8u) [[unlikely]] return; }
L_00470FD8:
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.f[3] = ld32((c.r[29].w[0] + 496u));
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.f[2] = ld32((c.r[29].w[0] + 560u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471004u); st32((c.r[29].w[0] + 324u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471004u) [[unlikely]] return; }
L_00471004:
    c.f[1] = ld32((c.r[29].w[0] + 492u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    set32(c.r[5], c.r[29].w[0] + 344u);
    c.f[3] = ld32((c.r[29].w[0] + 488u));
    c.budget -= 5;
L_00471018:
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.f[2] = ld32((c.r[29].w[0] + 624u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.budget -= 3;
L_00471024:
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471030u); st32((c.r[29].w[0] + 328u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471030u) [[unlikely]] return; }
L_00471030:
    c.f[1] = ld32((c.r[29].w[0] + 484u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    set32(c.r[3], 0u + 1u);
    c.f[3] = ld32((c.r[29].w[0] + 480u));
    set32(c.r[4], 0u - 1u);
    c.f[2] = ld32((c.r[29].w[0] + 624u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[1] = 0u;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    c.budget -= 12;
L_00471060:
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 320u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));  goto L_0047107C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 304u), c.r[4].w[0]);  if (t) { goto L_004710B4; } }
L_0047107C:
    c.budget -= 2;
    if (c.r[6].sd[0] >= 0) { set32(c.r[2], c.r[2].w[0] << 2);  goto L_00471090; }
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 3;
L_00471090:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 632u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);  goto L_004710B0; }
    set32(c.r[2], c.r[5].w[0] + c.r[29].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_004710B4; } }
L_004710B0:
    st32((c.r[2].w[0] + 304u), 0u);
    c.budget -= 1;
L_004710B4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00471060u | kUnwind; return; } goto L_00471060; }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[28] = ld32((c.r[29].w[0] + 636u));  goto L_00471460; }
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047145C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047145C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047145C; } }
    c.f[0] = ld32((c.r[29].w[0] + 632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[17], 0u - 1u);
    c.f[2] = ld32((c.r[28].w[0] - 32640u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[3] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[29].w[0] + 636u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 10;
L_0047111C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[4].w[0] << 2);  goto L_0047112C; }
    c.f[3] = c.f[1];
    set32(c.r[2], c.r[4].w[0] << 2);
    c.budget -= 2;
L_0047112C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 320u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00471154; }
    c.f[2] = c.f[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_00471154:
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047111Cu | kUnwind; return; } goto L_0047111C; } }
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  goto L_004711CC; }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 320u));
    set32(c.r[3], c.r[3].w[0] + 352u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 576u), c.f[3]);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 580u), c.f[2]);  if (t) { goto L_004711B8; } }
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 584u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 588u), c.f[0]);  if (t) { goto L_0047122C; } }
L_004711B8:
    c.f[1] = ld32((c.r[29].w[0] + 344u));
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    st32((c.r[29].w[0] + 584u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 588u), c.f[0]);  if (t) { goto L_0047122C; } }
L_004711CC:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 312u));
    set32(c.r[3], c.r[3].w[0] + 336u);
    c.f[3] = ld32((c.r[3].w[0] - 16u));
    c.f[2] = ld32((c.r[3].w[0] - 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 584u), c.f[3]);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 588u), c.f[2]);  if (t) { goto L_00471218; } }
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    c.r[17].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[29].w[0] + 576u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 580u), c.f[0]);  if (t) { goto L_0047122C; } }
L_00471218:
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    set32(c.r[17], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    st32((c.r[29].w[0] + 576u), c.f[1]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    c.budget -= 5;
L_0047122C:
    set32(c.r[4], c.r[29].w[0] + 472u);
    set32(c.r[5], c.r[29].w[0] + 584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047123Cu); set32(c.r[6], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x0047123Cu) [[unlikely]] return; }
L_0047123C:
    c.f[1] = ld32((c.r[29].w[0] + 476u));
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[28] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[28]) < fp::key(c.f[24]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_00471794; }
    set32(c.r[21], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 608u);
    c.f[26] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[28]) <= fp::key(c.f[26]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (t) { goto L_00471790; } }
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471284u); set32(c.r[6], c.r[29].w[0] + 584u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471284u) [[unlikely]] return; }
L_00471284:
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    c.f[2] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[1], c.f[29]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[27]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004712B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004712C8; } }
L_004712B0:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004712C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004712C0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_004712C8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[28]) == fp::key(c.f[26]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004712EC; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471790; } }
L_004712EC:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004712F8u); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E54D0u; return; } if (c.pc != 0x004712F8u) [[unlikely]] return; }
L_004712F8:
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    set32(c.r[5], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 468u));
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    c.f[1] = 0u;
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_0047133C; } }
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[1]);  if (t) { goto L_00471360; } }
L_0047133C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_rsqrt(c, 1u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 9;
L_00471360:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 548u));
    set32(c.r[4], c.r[29].w[0] + 456u);
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.f[2] = ld32((c.r[29].w[0] + 544u));
    set32(c.r[3], c.r[23].w[0] + c.r[21].w[0]);
    c.facc = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.f[0] = fp::sub(c.f[0], c.f[25]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 588u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004713B0u); st32((c.r[2].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x004713B0u) [[unlikely]] return; }
L_004713B0:
    c.f[3] = ld32((c.r[29].w[0] + 460u));
    set32(c.r[2], c.r[17].w[0] << 1);
    c.f[2] = ld32((c.r[29].w[0] + 456u));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.facc = fp::mul(c.f[3], c.f[3]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[5], c.r[29].w[0] + 584u);
    c.f[2] = fp::sqrt(c.f[2]);
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.f[1] = ld32((c.r[29].w[0] + 656u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 660u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471408u); st32((c.r[2].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471408u) [[unlikely]] return; }
L_00471408:
    c.f[3] = ld32((c.r[29].w[0] + 452u));
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    set32(c.r[4], c.r[22].w[0] + c.r[21].w[0]);
    c.f[2] = ld32((c.r[16].w[0] - 24u));
    set32(c.r[3], 0u + 1u);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.f[0] = 0u;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sqrt(c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[2].w[0]), c.f[28]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st8((c.r[2].w[0] + 668u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_00471790; } }
L_0047145C:
    c.f[28] = ld32((c.r[29].w[0] + 636u));
    c.budget -= 1;
L_00471460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.f[30] = fp::mul(c.f[0], c.f[28]);
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
L_00471474:
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 304u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00471784; }
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.f[26] = ld32((c.r[3].w[0] + 320u));  goto L_004714E4; }
    c.f[12] = ld32((c.r[3].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004714A0u); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E54D0u; return; } if (c.pc != 0x004714A0u) [[unlikely]] return; }
L_004714A0:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004714B0u); set32(c.r[6], c.r[29].w[0] + 440u);  if (depth < kMaxDepth) unit_00B9(c, 176u, depth + 1u); else { c.pc = 0x003E54A0u; return; } if (c.pc != 0x004714B0u) [[unlikely]] return; }
L_004714B0:
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    set32(c.r[2], c.r[17].w[0] << 3);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 352u);
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 584u), c.f[1]);
    st32((c.r[29].w[0] + 588u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 576u), c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 580u), c.f[0]);  if (t) { goto L_00471544; } }
L_004714E4:
    set32(c.r[4], c.r[29].w[0] + 424u);
    set32(c.r[5], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004714F4u); c.f[12] = c.f[26];  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E54D0u; return; } if (c.pc != 0x004714F4u) [[unlikely]] return; }
L_004714F4:
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471504u); set32(c.r[6], c.r[29].w[0] + 424u);  if (depth < kMaxDepth) unit_00B9(c, 176u, depth + 1u); else { c.pc = 0x003E54A0u; return; } if (c.pc != 0x00471504u) [[unlikely]] return; }
L_00471504:
    c.f[1] = ld32((c.r[29].w[0] + 416u));
    set32(c.r[2], c.r[17].w[0] << 3);
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 336u);
    st32((c.r[29].w[0] + 576u), c.f[1]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] - 16u));
    c.f[0] = ld32((c.r[2].w[0] - 12u));
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[30]));
    st32((c.r[29].w[0] + 584u), c.f[1]);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 588u), c.f[0]);  if (t) { goto L_00471540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00471544; } }
L_00471540:
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_00471544:
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[5], c.r[29].w[0] + 584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471554u); set32(c.r[6], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471554u) [[unlikely]] return; }
L_00471554:
    c.f[1] = ld32((c.r[29].w[0] + 412u));
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[31] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[31]) < fp::key(c.f[24]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471780; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 608u);
    c.f[26] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[31]) <= fp::key(c.f[26]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (t) { goto L_00471780; } }
    set32(c.r[4], c.r[29].w[0] + 536u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004715A0u); set32(c.r[6], c.r[29].w[0] + 584u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x004715A0u) [[unlikely]] return; }
L_004715A0:
    c.f[1] = ld32((c.r[29].w[0] + 540u));
    c.f[2] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[1], c.f[29]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[27]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004715CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004715E4; } }
L_004715CC:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004715DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004715DC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_004715E4:
    fpu_compare(c, fp::key(c.f[31]) == fp::key(c.f[26]));
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[26] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00471608; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471780; } }
L_00471608:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    st32((c.r[2].w[0]), c.f[31]);
    set32(c.r[2], c.r[21].w[0] << 3);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 588u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047163Cu); st32((c.r[2].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x0047163Cu) [[unlikely]] return; }
L_0047163C:
    c.f[3] = ld32((c.r[29].w[0] + 404u));
    set32(c.r[2], c.r[21].w[0] << 1);
    c.f[2] = ld32((c.r[29].w[0] + 400u));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.facc = fp::mul(c.f[3], c.f[3]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[5], c.r[29].w[0] + 536u);
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 656u));
    c.f[0] = 0u;
    c.f[12] = c.f[26];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 660u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[28]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471694u); st32((c.r[2].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E54D0u; return; } if (c.pc != 0x00471694u) [[unlikely]] return; }
L_00471694:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.f[1] = 0u;
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 396u));
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_004716D8; } }
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[1]);  if (t) { goto L_004716FC; } }
L_004716D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_rsqrt(c, 1u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 9;
L_004716FC:
    c.f[0] = ld32((c.r[3].w[0]));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[29].w[0] + 540u));
    set32(c.r[5], c.r[29].w[0] + 584u);
    c.f[2] = ld32((c.r[4].w[0]));
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.f[3] = ld32((c.r[29].w[0] + 536u));
    set32(c.r[2], c.r[23].w[0] + c.r[2].w[0]);
    c.facc = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[0] = fp::sub(c.f[0], c.f[25]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471738u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471738u) [[unlikely]] return; }
L_00471738:
    c.f[4] = ld32((c.r[29].w[0] + 388u));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[16].w[0] - 24u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    set32(c.r[4], c.r[22].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[2], c.r[21].w[0] + c.r[29].w[0]);
    c.f[2] = 0u;
    st8((c.r[2].w[0] + 668u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sqrt(c.f[3]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 18;
L_00471780:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00471784:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00471474u | kUnwind; return; } goto L_00471474; }
L_00471790:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_00471794:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[30].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470B7Cu | kUnwind; return; } goto L_00470B7C; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 668u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 669u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_004717B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 672u);  c.pc = t; return; }
L_00471820:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 280u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 32;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004718AC; } }
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.budget -= 3;
L_004718AC:
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 284u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[20].w[0]));  goto L_004718D0; }
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[4] = ld32((c.r[20].w[0]));
    c.budget -= 4;
L_004718D0:
    c.f[3] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = fp::min(c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.f[27] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::max(c.f[4], c.f[3]);
    c.f[26] = fp::add(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[5] = fp::min(c.f[2], c.f[0]);
    c.f[25] = fp::sub(c.f[5], c.f[1]);
    c.f[5] = fp::max(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 272u), 0u);
    c.f[24] = fp::add(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 276u), 0u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[17], 0u + 4u);
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[4]);
    fpu_div(c, 23u, c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[21] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.f[22] = fp::sub(c.facc, fp::mul(c.f[23], c.f[4]));  if (t) { goto L_00471B90; } }
L_00471934:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[22].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] - 44u));
    c.f[2] = ld32((c.r[16].w[0] - 48u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 268u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 264u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 256u), c.f[1]);  if (t) { goto L_00471974; } }
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.budget -= 3;
L_00471974:
    c.f[4] = ld32((c.r[29].w[0] + 268u));
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 264u));  goto L_00471998; }
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 4;
L_00471998:
    c.f[3] = ld32((c.r[29].w[0] + 256u));
    c.f[8] = fp::min(c.f[0], c.f[3]);
    c.f[7] = fp::max(c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 260u));
    c.f[6] = fp::min(c.f[4], c.f[2]);
    c.f[5] = fp::max(c.f[4], c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[20], c.f[3]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[22]);
    c.f[0] = fp::sub(c.f[23], c.f[20]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[7]));
    st32((c.r[29].w[0] + 272u), c.f[1]);
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 276u), c.f[0]);  if (t) { goto L_00471B8C; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[8]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00471B90; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471B8C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471B8C; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[26]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471B8C; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[27]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471B8C; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471B8C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471B8C; } }
    set32(c.r[4], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471A54u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471A54u) [[unlikely]] return; }
L_00471A54:
    set32(c.r[5], c.r[29].w[0] + 248u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471A64u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 112u, depth + 1u); else { c.pc = 0x00471C00u; return; } if (c.pc != 0x00471A64u) [[unlikely]] return; }
L_00471A64:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 252u), c.f[1]);  if (t) { goto L_00471B8C; } }
    c.f[21] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 280u);
    c.f[1] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[19].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471ABCu); st32((c.r[18].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471ABCu) [[unlikely]] return; }
L_00471ABC:
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.f[4] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 240u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[0] = 0u;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 232u);  goto L_00471B08; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[4], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 9;
L_00471B08:
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471B14u); set32(c.r[6], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471B14u) [[unlikely]] return; }
L_00471B14:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471B24u); set32(c.r[6], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471B24u) [[unlikely]] return; }
L_00471B24:
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471B34u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00DC(c, 112u, depth + 1u); else { c.pc = 0x00471C00u; return; } if (c.pc != 0x00471B34u) [[unlikely]] return; }
L_00471B34:
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471B50u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00DC(c, 112u, depth + 1u); else { c.pc = 0x00471C00u; return; } if (c.pc != 0x00471B50u) [[unlikely]] return; }
L_00471B50:
    c.f[2] = ld32((c.r[16].w[0] - 24u));
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[4] = ld32((c.r[29].w[0] + 192u));
    c.f[3] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[4], c.f[3]);
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 216u), c.f[4]);
    st32((c.r[29].w[0] + 220u), c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 15;
L_00471B8C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00471B90:
    set32(c.r[2], c.r[23].w[0] - 3u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00471934u | kUnwind; return; } goto L_00471934; }
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00471C00:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[2]);  c.pc = t; return; }
L_00471C30:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 4u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[12], c.f[12]);  if (t) { goto L_00471EAC; } }
L_00471C90:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] - 44u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] - 48u));
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[1]));
    st32((c.r[29].w[0] + 212u), c.f[3]);
    st32((c.r[29].w[0] + 208u), c.f[2]);
    st32((c.r[29].w[0] + 204u), c.f[1]);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 200u), c.f[0]);  if (t) { goto L_00471CD0; } }
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.budget -= 3;
L_00471CD0:
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[7] = ld32((c.r[29].w[0] + 200u));
    c.f[11] = fp::min(c.f[2], c.f[7]);
    c.f[10] = fp::max(c.f[2], c.f[7]);
    c.f[5] = ld32((c.r[29].w[0] + 204u));
    c.f[9] = fp::min(c.f[3], c.f[5]);
    c.f[8] = fp::max(c.f[3], c.f[5]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[7]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471D70; } }
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471D70; } }
    c.f[3] = fp::sub(c.f[5], c.f[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::sub(c.f[7], c.f[2]);
    fpu_div(c, 6u, c.f[3], c.f[2]);
    c.f[1] = c.r[4].w[0];
    fpu_div(c, 3u, c.f[1], c.f[6]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[6]);
    c.f[4] = 0u;
    c.facc = fp::add(c.f[4], c.f[5]);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[2] = ld32((c.r[20].w[0]));
    c.facc = fp::add(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[6], c.f[0]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.facc = fp::add(c.f[4], c.f[5]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.f[3] = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));  if (t) { goto L_00471D80; } }
L_00471D70:
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[7]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[20].w[0]));  goto L_00471D80; }
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    c.budget -= 1;
L_00471D80:
    c.f[0] = fp::max(c.f[2], c.f[11]);
    c.f[4] = fp::min(c.f[0], c.f[10]);
    c.f[0] = fp::max(c.f[3], c.f[9]);
    c.f[2] = fp::min(c.f[0], c.f[8]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[10]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00471EAC; }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471EA8; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[8]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471EA8; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471EA8; } }
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471EA8; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471EA8; } }
    st32((c.r[19].w[0]), c.f[4]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[21] = c.f[0];
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471E0Cu); set32(c.r[6], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471E0Cu) [[unlikely]] return; }
L_00471E0C:
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[4], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 200u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471E30u); st32((c.r[18].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471E30u) [[unlikely]] return; }
L_00471E30:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471E40u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00471E40u) [[unlikely]] return; }
L_00471E40:
    set32(c.r[4], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471E50u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00DC(c, 112u, depth + 1u); else { c.pc = 0x00471C00u; return; } if (c.pc != 0x00471E50u) [[unlikely]] return; }
L_00471E50:
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471E6Cu); c.f[22] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00DC(c, 112u, depth + 1u); else { c.pc = 0x00471C00u; return; } if (c.pc != 0x00471E6Cu) [[unlikely]] return; }
L_00471E6C:
    c.f[2] = ld32((c.r[16].w[0] - 24u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[4], c.f[3]);
    fpu_div(c, 0u, c.f[22], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 168u), c.f[4]);
    st32((c.r[29].w[0] + 172u), c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[23].w[0]), c.f[0]);
    c.budget -= 15;
L_00471EA8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00471EAC:
    set32(c.r[3], c.r[22].w[0] - 3u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00471C90u | kUnwind; return; } goto L_00471C90; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00471F00:
    set32(c.r[29], c.r[29].w[0] - 384u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[21].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00471F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x00471F58u) [[unlikely]] return; }
L_00471F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x00471F60u) [[unlikely]] return; }
L_00471F60:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F78u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x00471F78u) [[unlikely]] return; }
L_00471F78:
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    c.f[21] = ld32((c.r[29].w[0] + 260u));
    c.f[22] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x00471F8Cu) [[unlikely]] return; }
L_00471F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00471FA8; } }
L_00471F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F9Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x00471F9Cu) [[unlikely]] return; }
L_00471F9C:
    c.f[20] = ld32((c.r[2].w[0]));
    c.f[21] = ld32((c.r[2].w[0] + 4u));
    c.f[22] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 3;
L_00471FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 17u, depth + 1u); else { c.pc = 0x003706F0u; return; } if (c.pc != 0x00471FB0u) [[unlikely]] return; }
L_00471FB0:
    c.f[9] = ld32((c.r[20].w[0] + 260u));
    c.f[12] = ld32((c.r[20].w[0] + 212u));
    c.f[13] = 0u;
    c.f[11] = ld32((c.r[20].w[0] + 228u));
    c.f[23] = c.f[0];
    c.f[10] = ld32((c.r[20].w[0] + 244u));
    c.f[8] = ld32((c.r[20].w[0] + 216u));
    c.f[7] = ld32((c.r[20].w[0] + 232u));
    c.f[6] = ld32((c.r[20].w[0] + 248u));
    c.f[5] = ld32((c.r[20].w[0] + 264u));
    c.f[4] = ld32((c.r[20].w[0] + 220u));
    c.f[3] = ld32((c.r[20].w[0] + 236u));
    c.f[2] = ld32((c.r[20].w[0] + 252u));
    c.f[1] = ld32((c.r[20].w[0] + 268u));
    c.facc = fp::add(c.f[13], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[12]));
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[11]));
    c.f[9] = fp::add(c.facc, fp::mul(c.f[22], c.f[10]));
    c.facc = fp::add(c.f[13], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[8]));
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[7]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[22], c.f[6]));
    c.facc = fp::add(c.f[13], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[4]));
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[22], c.f[2]));
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 368u), c.f[9]);
    st32((c.r[29].w[0] + 364u), 0u);
    st32((c.r[29].w[0] + 372u), c.f[5]);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 356u), 0u);
    c.f[22] = ld32((c.r[28].w[0] - 32640u));
    set32(c.r[5], ld32((c.r[20].w[0] + 292u)));
    c.f[12] = c.f[0];
    set32(c.r[6], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[7], c.r[29].w[0] + 360u);
    set32(c.r[8], c.r[29].w[0] + 352u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472054u); set32(c.r[9], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_00DC(c, 113u, depth + 1u); else { c.pc = 0x00471C30u; return; } if (c.pc != 0x00472054u) [[unlikely]] return; }
L_00472054:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 336u), 0u);  goto L_00472084; }
    set32(c.r[4], c.r[29].w[0] + 344u);
    set32(c.r[5], c.r[29].w[0] + 360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472070u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x00472070u) [[unlikely]] return; }
L_00472070:
    c.f[1] = ld32((c.r[29].w[0] + 348u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[22] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    st32((c.r[29].w[0] + 336u), 0u);
    c.budget -= 5;
L_00472084:
    c.f[21] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[29].w[0] + 340u), 0u);
    st32((c.r[29].w[0] + 328u), 0u);
    st32((c.r[29].w[0] + 332u), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 296u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004720C0; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 316u)));
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.f[12] = c.f[23];
    set32(c.r[7], c.r[29].w[0] + 336u);
    set32(c.r[8], c.r[29].w[0] + 328u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004720BCu); set32(c.r[9], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_00DC(c, 113u, depth + 1u); else { c.pc = 0x00471C30u; return; } if (c.pc != 0x004720BCu) [[unlikely]] return; }
L_004720BC:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004720C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004720E8; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004720D8u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x004720D8u) [[unlikely]] return; }
L_004720D8:
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[21] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.budget -= 4;
L_004720E8:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0047211C; } }
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[29].w[0] + 364u), c.f[1]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[29].w[0] + 360u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.budget -= 10;
L_0047211C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.f[1] = ld32((c.r[29].w[0] + 364u));  goto L_00472130; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00472210; }
    c.f[1] = ld32((c.r[29].w[0] + 364u));
    c.budget -= 1;
L_00472130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[29].w[0] + 296u), 0u);
    c.f[3] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[29].w[0] + 308u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[29].w[0] + 312u), c.f[20]);
    c.f[2] = 0u;
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 304u), c.f[4]);
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[4], c.r[29].w[0] + 280u);
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 360u);
    set32(c.r[6], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 212u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 216u), 0u);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004721A0u); st32((c.r[29].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x004721A0u) [[unlikely]] return; }
L_004721A0:
    set32(c.r[5], c.r[29].w[0] + 280u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004721B0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 112u, depth + 1u); else { c.pc = 0x00471C00u; return; } if (c.pc != 0x004721B0u) [[unlikely]] return; }
L_004721B0:
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    set32(c.r[7], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 284u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004721E8u); c.f[12] = fp::sub(c.f[23], c.f[0]);  if (depth < kMaxDepth) unit_00DC(c, 135u, depth + 1u); else { c.pc = 0x00472240u; return; } if (c.pc != 0x004721E8u) [[unlikely]] return; }
L_004721E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047220C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0047220C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 328u)));
    c.f[12] = ld32((c.r[29].w[0] + 380u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047220Cu); set32(c.r[6], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047220Cu) [[unlikely]] return; }
L_0047220C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00472210:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_00472240:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[15] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 92u), c.f[12]);
    c.f[8] = ld32((c.r[4].w[0] + 196u));
    c.f[14] = ld32((c.r[6].w[0]));
    c.f[11] = ld32((c.r[4].w[0] + 148u));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.f[10] = ld32((c.r[4].w[0] + 164u));
    c.f[12] = ld32((c.r[6].w[0] + 8u));
    c.f[9] = ld32((c.r[4].w[0] + 180u));
    c.f[7] = ld32((c.r[4].w[0] + 152u));
    c.f[6] = ld32((c.r[4].w[0] + 168u));
    c.f[5] = ld32((c.r[4].w[0] + 184u));
    c.f[4] = ld32((c.r[4].w[0] + 200u));
    c.f[3] = ld32((c.r[4].w[0] + 156u));
    c.f[2] = ld32((c.r[4].w[0] + 172u));
    c.f[1] = ld32((c.r[4].w[0] + 188u));
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.facc = fp::add(c.f[15], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[10]));
    c.f[22] = fp::add(c.facc, fp::mul(c.f[12], c.f[9]));
    c.facc = fp::add(c.f[15], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[6]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[12], c.f[5]));
    c.facc = fp::add(c.f[15], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[2]));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 428u));
    c.budget -= 43;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_00472354; }
    c.f[2] = ld32((c.r[18].w[0] + 348u));
    c.f[1] = ld32((c.r[18].w[0] + 352u));
    c.f[0] = ld32((c.r[18].w[0] + 356u));
    c.facc = fp::mul(c.f[22], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    c.f[0] = ld32((c.r[18].w[0] + 360u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[15]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[18].w[0] + 332u));  goto L_00472320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00472444; } }
L_00472320:
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = ld32((c.r[18].w[0] + 340u));
    c.facc = fp::mul(c.f[22], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    c.f[0] = ld32((c.r[18].w[0] + 344u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[15]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00472350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00472444; } }
L_00472350:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00472354:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472364u); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00DC(c, 137u, depth + 1u); else { c.pc = 0x00472470u; return; } if (c.pc != 0x00472364u) [[unlikely]] return; }
L_00472364:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[9] = ld32((c.r[16].w[0] + 4u));  goto L_00472374; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00472444; } }
L_00472374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 168u));
    c.f[8] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 152u));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[7] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[2]));
    c.f[3] = ld32((c.r[18].w[0] + 184u));
    c.f[1] = ld32((c.r[18].w[0] + 172u));
    c.f[4] = ld32((c.r[18].w[0] + 156u));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[7], c.f[3]));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[5] = ld32((c.r[18].w[0] + 188u));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[1] = ld32((c.r[18].w[0] + 164u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    c.f[2] = ld32((c.r[18].w[0] + 148u));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[3] = ld32((c.r[18].w[0] + 180u));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[2]));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[3]));
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[6]);
    st32((c.r[16].w[0] + 8u), c.f[4]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    set32(c.r[2], 0u + 1u);
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[22]);
    st32((c.r[17].w[0] + 52u), c.f[21]);
    st32((c.r[17].w[0] + 56u), c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.budget -= 52;
L_00472444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00472470:
    c.f[10] = ld32((c.r[5].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[4].w[0] + 380u));
    c.f[11] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[4].w[0] + 364u));
    c.facc = fp::mul(c.f[10], c.f[3]);
    c.f[9] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[4]));
    c.f[5] = ld32((c.r[4].w[0] + 396u));
    c.f[2] = ld32((c.r[4].w[0] + 412u));
    c.f[4] = ld32((c.r[4].w[0] + 368u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[9], c.f[5]));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[8] = fp::sub(c.f[2], c.f[11]);
    c.f[3] = ld32((c.r[4].w[0] + 384u));
    c.f[5] = ld32((c.r[4].w[0] + 400u));
    c.f[2] = ld32((c.r[4].w[0] + 416u));
    c.facc = fp::mul(c.f[10], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[4]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[9], c.f[5]));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[7] = fp::sub(c.f[2], c.f[10]);
    c.f[3] = ld32((c.r[4].w[0] + 388u));
    c.f[5] = ld32((c.r[4].w[0] + 372u));
    c.f[6] = ld32((c.r[4].w[0] + 404u));
    c.facc = fp::mul(c.f[10], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[5]));
    c.f[2] = ld32((c.r[4].w[0] + 420u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[9], c.f[6]));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.f[2], c.f[9]);
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::mul(c.f[3], c.f[6]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[4], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[8]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::mul(c.f[2], c.f[7]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[3], c.f[8]));
    c.facc = fp::mul(c.f[7], c.f[3]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[8], c.f[3]));
    st32((c.r[6].w[0]), c.f[2]);
    c.facc = fp::mul(c.f[8], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[7], c.f[5]));
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 8u), c.f[2]);
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[2], 0u + 1u);
    fpu_rsqrt(c, 2u, c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[6].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 75;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0]), c.f[1]);  if (t) { goto L_004725A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004725A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_004725B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004725F8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_009C(c, 41u, depth + 1u); else { c.pc = 0x00371970u; return; } if (c.pc != 0x004725F8u) [[unlikely]] return; }
L_004725F8:
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    c.f[24] = ld32((c.r[29].w[0] + 116u));
    c.f[25] = ld32((c.r[29].w[0] + 120u));
    c.f[21] = ld32((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 100u));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472618u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x00371B00u; return; } if (c.pc != 0x00472618u) [[unlikely]] return; }
L_00472618:
    c.f[11] = ld32((c.r[17].w[0] + 260u));
    c.f[14] = ld32((c.r[17].w[0] + 212u));
    c.f[15] = 0u;
    c.f[13] = ld32((c.r[17].w[0] + 228u));
    c.f[12] = ld32((c.r[17].w[0] + 244u));
    c.f[10] = ld32((c.r[17].w[0] + 216u));
    c.f[9] = ld32((c.r[17].w[0] + 232u));
    c.f[8] = ld32((c.r[17].w[0] + 248u));
    c.f[7] = ld32((c.r[17].w[0] + 264u));
    c.f[6] = ld32((c.r[17].w[0] + 220u));
    c.f[5] = ld32((c.r[17].w[0] + 236u));
    c.f[4] = ld32((c.r[17].w[0] + 252u));
    c.f[3] = ld32((c.r[17].w[0] + 268u));
    c.facc = fp::add(c.f[15], c.f[11]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[14]));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[13]));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[25], c.f[12]));
    c.facc = fp::add(c.f[15], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[10]));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[9]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[25], c.f[8]));
    c.facc = fp::add(c.f[15], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[6]));
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[5]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[25], c.f[4]));
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    st32((c.r[29].w[0] + 204u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[2]);
    c.f[2] = fp::add(c.f[20], c.f[1]);
    c.f[1] = fp::mul(c.f[22], c.f[0]);
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    c.f[1] = fp::add(c.f[24], c.f[1]);
    c.f[0] = fp::add(c.f[25], c.f[0]);
    st32((c.r[29].w[0] + 200u), c.f[16]);
    st32((c.r[29].w[0] + 192u), c.f[16]);
    c.facc = fp::add(c.f[15], c.f[11]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[14]));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[13]));
    c.f[11] = fp::add(c.facc, fp::mul(c.f[0], c.f[12]));
    c.facc = fp::add(c.f[15], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[10]));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[9]));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::add(c.f[15], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    st32((c.r[29].w[0] + 176u), 0u);
    c.facc = fp::mul(c.f[22], c.f[9]);
    st32((c.r[29].w[0] + 180u), 0u);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[10]));
    st32((c.r[29].w[0] + 168u), 0u);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[23], c.f[8]));
    st32((c.r[29].w[0] + 172u), 0u);
    c.facc = fp::mul(c.f[22], c.f[5]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[6]));
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 184u), c.f[11]);
    set32(c.r[8], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 188u), c.f[7]);
    set32(c.r[9], c.r[29].w[0] + 168u);
    set32(c.r[6], ld32((c.r[17].w[0] + 292u)));
    c.f[21] = ld32((c.r[28].w[0] - 32640u));
    set32(c.r[7], ld32((c.r[17].w[0] + 284u)));
    c.f[22] = fp::add(c.facc, fp::mul(c.f[23], c.f[4]));
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047272Cu); set32(c.r[10], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_00DC(c, 103u, depth + 1u); else { c.pc = 0x00471820u; return; } if (c.pc != 0x0047272Cu) [[unlikely]] return; }
L_0047272C:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { st32((c.r[29].w[0] + 160u), 0u);  goto L_0047276C; }
    c.f[4] = ld32((c.r[29].w[0] + 176u));
    fpu_div(c, 0u, c.f[22], c.f[20]);
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 13;
L_0047276C:
    c.f[23] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    set32(c.r[6], ld32((c.r[17].w[0] + 296u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004727A8; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 316u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[8], c.r[29].w[0] + 160u);
    set32(c.r[9], c.r[29].w[0] + 152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004727A4u); set32(c.r[10], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_00DC(c, 103u, depth + 1u); else { c.pc = 0x00471820u; return; } if (c.pc != 0x004727A4u) [[unlikely]] return; }
L_004727A4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004727A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004727E4; } }
    fpu_div(c, 0u, c.f[22], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[23] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.budget -= 13;
L_004727E4:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0047281C; } }
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[21] = c.f[23];
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.budget -= 11;
L_0047281C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[3] = ld32((c.r[29].w[0] + 168u));  goto L_00472830; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00472924; }
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 1;
L_00472830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 144u), 0u);
    c.f[2] = 0u;
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 136u), c.f[3]);
    st32((c.r[29].w[0] + 140u), c.f[1]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 200u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    set32(c.r[7], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 212u), 0u);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 140u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047288Cu); st32((c.r[29].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_00DC(c, 137u, depth + 1u); else { c.pc = 0x00472470u; return; } if (c.pc != 0x0047288Cu) [[unlikely]] return; }
L_0047288C:
    c.f[9] = ld32((c.r[29].w[0] + 140u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[7] = ld32((c.r[29].w[0] + 136u));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 180u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[8] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[17].w[0] + 168u));
    c.f[4] = ld32((c.r[17].w[0] + 152u));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[8], c.f[3]));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[5] = ld32((c.r[17].w[0] + 184u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[1] = ld32((c.r[17].w[0] + 172u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[2] = ld32((c.r[17].w[0] + 156u));
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 188u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[8], c.f[3]));
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    c.f[0] = fp::sqrt(c.f[21]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.f[3] = fp::mul(c.f[6], c.f[5]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[2] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[16].w[0] + 4u), c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 38;
L_00472924:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00472950:
    set32(c.r[29], c.r[29].w[0] - 672u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.f[31]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[30]);
    st32((c.r[29].w[0] + 100u), c.f[29]);
    st32((c.r[29].w[0] + 96u), c.f[28]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[22]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00472CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004729C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x004729C8u) [[unlikely]] return; }
L_004729C8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004729D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x004729D4u) [[unlikely]] return; }
L_004729D4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004729E0u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x004729E0u) [[unlikely]] return; }
L_004729E0:
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 608u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 612u), 0u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 616u), 0u);
    st32((c.r[29].w[0] + 560u), c.f[2]);
    st32((c.r[29].w[0] + 572u), 0u);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    st32((c.r[29].w[0] + 588u), 0u);
    st32((c.r[29].w[0] + 568u), c.f[1]);
    st32((c.r[29].w[0] + 604u), 0u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 576u), c.f[2]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    st32((c.r[29].w[0] + 584u), c.f[1]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    c.f[2] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 596u), c.f[0]);
    st32((c.r[29].w[0] + 620u), c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 236u), c.f[0]);
    st32((c.r[29].w[0] + 600u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    set32(c.r[20], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472A78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x00472A78u) [[unlikely]] return; }
L_00472A78:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472A84u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 194u, depth + 1u); else { c.pc = 0x0033B0B0u; return; } if (c.pc != 0x00472A84u) [[unlikely]] return; }
L_00472A84:
    c.f[27] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[26] = ld32((c.r[2].w[0] + 16u));
    c.f[25] = ld32((c.r[2].w[0] + 32u));
    c.f[24] = ld32((c.r[2].w[0] + 4u));
    c.f[17] = ld32((c.r[29].w[0] + 564u));
    c.f[23] = ld32((c.r[2].w[0] + 20u));
    c.f[22] = ld32((c.r[2].w[0] + 36u));
    c.f[21] = ld32((c.r[2].w[0] + 8u));
    c.f[20] = ld32((c.r[2].w[0] + 24u));
    c.f[11] = ld32((c.r[2].w[0] + 40u));
    c.f[18] = ld32((c.r[29].w[0] + 560u));
    c.facc = fp::mul(c.f[17], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[16] = ld32((c.r[29].w[0] + 568u));
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[27]));
    c.f[10] = ld32((c.r[20].w[0]));
    c.f[15] = ld32((c.r[29].w[0] + 572u));
    st32((c.r[29].w[0] + 232u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[21]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[10]));
    c.facc = fp::mul(c.f[17], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[26]));
    c.f[9] = ld32((c.r[20].w[0] + 4u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[20]));
    c.f[8] = ld32((c.r[20].w[0] + 8u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.facc = fp::mul(c.f[17], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[25]));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[11]));
    c.f[28] = 0u;
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[8]));
    c.facc = fp::mul(c.f[17], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[28]));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[28]));
    c.f[16] = ld32((c.r[29].w[0] + 232u));
    c.f[31] = ld32((c.r[29].w[0] + 580u));
    c.f[30] = ld32((c.r[29].w[0] + 576u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[16]));
    c.facc = fp::mul(c.f[31], c.f[24]);
    c.f[29] = ld32((c.r[29].w[0] + 584u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[27]));
    c.f[19] = ld32((c.r[29].w[0] + 588u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[21]));
    c.f[3] = ld32((c.r[29].w[0] + 596u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[10]));
    c.facc = fp::mul(c.f[31], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[20]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[25]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[11]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[8]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[28]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[28]));
    c.f[29] = ld32((c.r[29].w[0] + 232u));
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    c.f[1] = ld32((c.r[29].w[0] + 600u));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[29]));
    c.facc = fp::mul(c.f[3], c.f[24]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[27]));
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[21]));
    c.f[7] = ld32((c.r[29].w[0] + 612u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[0], c.f[10]));
    c.facc = fp::mul(c.f[3], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[26]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[0], c.f[9]));
    c.facc = fp::mul(c.f[3], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[25]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[11]));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[3], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[28]));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[28]));
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[6] = ld32((c.r[29].w[0] + 608u));
    c.f[5] = ld32((c.r[29].w[0] + 616u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.facc = fp::mul(c.f[7], c.f[24]);
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[27]));
    c.f[4] = ld32((c.r[29].w[0] + 620u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[21]));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[10]));
    c.facc = fp::mul(c.f[7], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[20]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[9]));
    c.facc = fp::mul(c.f[7], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[25]));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[11]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[8]));
    c.facc = fp::mul(c.f[7], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[28]));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[28]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.budget -= 110;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472C3Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x00472C3Cu) [[unlikely]] return; }
L_00472C3C:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[29].w[0] + 568u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[29].w[0] + 560u), c.f[2]);
    st32((c.r[29].w[0] + 564u), c.f[1]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 252u));
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[29].w[0] + 572u), c.f[2]);
    st32((c.r[29].w[0] + 576u), c.f[1]);
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[29].w[0] + 584u), c.f[2]);
    st32((c.r[29].w[0] + 588u), c.f[1]);
    st32((c.r[29].w[0] + 604u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 276u));
    c.f[1] = ld32((c.r[29].w[0] + 280u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 596u), c.f[2]);
    st32((c.r[29].w[0] + 600u), c.f[1]);
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472CC4u); st32((c.r[29].w[0] + 620u), c.f[0]);  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x00472CC4u) [[unlikely]] return; }
L_00472CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00472D6C; } }
L_00472CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472CD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 192u, depth + 1u); else { c.pc = 0x00327570u; return; } if (c.pc != 0x00472CD4u) [[unlikely]] return; }
L_00472CD4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472CE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 190u, depth + 1u); else { c.pc = 0x00327520u; return; } if (c.pc != 0x00472CE0u) [[unlikely]] return; }
L_00472CE0:
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 608u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 612u), 0u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 616u), 0u);
    st32((c.r[29].w[0] + 560u), c.f[2]);
    st32((c.r[29].w[0] + 572u), 0u);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    st32((c.r[29].w[0] + 588u), 0u);
    st32((c.r[29].w[0] + 568u), c.f[1]);
    st32((c.r[29].w[0] + 604u), 0u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 576u), c.f[2]);
    st32((c.r[29].w[0] + 580u), c.f[0]);
    st32((c.r[29].w[0] + 584u), c.f[1]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 592u), c.f[2]);
    c.f[2] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 596u), c.f[0]);
    st32((c.r[29].w[0] + 620u), c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 236u), c.f[0]);
    st32((c.r[29].w[0] + 600u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 612u), c.f[1]);
    st32((c.r[29].w[0] + 616u), c.f[0]);
    c.budget -= 35;
L_00472D6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 668u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472D7Cu); set32(c.r[6], c.r[29].w[0] + 664u);  if (depth < kMaxDepth) unit_009A(c, 60u, depth + 1u); else { c.pc = 0x00369DC0u; return; } if (c.pc != 0x00472D7Cu) [[unlikely]] return; }
L_00472D7C:
    c.f[0] = ld32((c.r[29].w[0] + 664u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 528u), 0u);
    c.f[5] = ld32((c.r[29].w[0] + 592u));
    st32((c.r[29].w[0] + 532u), 0u);
    c.f[6] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 536u), 0u);
    st32((c.r[29].w[0] + 540u), 0u);
    st32((c.r[29].w[0] + 544u), 0u);
    st32((c.r[29].w[0] + 548u), 0u);
    c.f[4] = ld32((c.r[29].w[0] + 596u));
    c.f[3] = ld32((c.r[29].w[0] + 600u));
    c.f[5] = fp::mul(c.f[5], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 608u));
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.f[1] = ld32((c.r[29].w[0] + 612u));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 616u));
    c.f[18] = fp::add(c.f[2], c.f[5]);
    c.f[15] = fp::sub(c.f[2], c.f[5]);
    c.f[17] = fp::add(c.f[1], c.f[4]);
    c.f[14] = fp::sub(c.f[1], c.f[4]);
    c.f[16] = fp::add(c.f[0], c.f[3]);
    c.f[13] = fp::sub(c.f[0], c.f[3]);
    c.f[8] = ld32((c.r[19].w[0] + 260u));
    c.f[11] = ld32((c.r[19].w[0] + 212u));
    c.f[12] = 0u;
    c.f[10] = ld32((c.r[19].w[0] + 228u));
    c.f[9] = ld32((c.r[19].w[0] + 244u));
    c.f[7] = ld32((c.r[19].w[0] + 216u));
    c.f[6] = ld32((c.r[19].w[0] + 232u));
    c.f[5] = ld32((c.r[19].w[0] + 248u));
    c.f[4] = ld32((c.r[19].w[0] + 264u));
    c.f[3] = ld32((c.r[19].w[0] + 220u));
    c.f[2] = ld32((c.r[19].w[0] + 236u));
    c.f[1] = ld32((c.r[19].w[0] + 252u));
    c.f[0] = ld32((c.r[19].w[0] + 268u));
    c.facc = fp::add(c.f[12], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[10]));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[16], c.f[9]));
    c.facc = fp::add(c.f[12], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[6]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[16], c.f[5]));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[2]));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[16], c.f[1]));
    st32((c.r[29].w[0] + 528u), c.f[20]);
    st32((c.r[29].w[0] + 532u), c.f[19]);
    st32((c.r[29].w[0] + 536u), c.f[16]);
    c.facc = fp::add(c.f[12], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[13], c.f[9]));
    c.facc = fp::add(c.f[12], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[13], c.f[5]));
    c.facc = fp::add(c.f[12], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[13], c.f[1]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] + 31936u));
    st32((c.r[29].w[0] + 496u), 0u);
    st32((c.r[29].w[0] + 548u), c.f[0]);
    st32((c.r[29].w[0] + 500u), 0u);
    st32((c.r[29].w[0] + 540u), c.f[8]);
    st32((c.r[29].w[0] + 504u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 508u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 31940u));
    st32((c.r[29].w[0] + 512u), 0u);
    st32((c.r[29].w[0] + 432u), c.f[1]);
    st32((c.r[29].w[0] + 516u), 0u);
    st32((c.r[29].w[0] + 544u), c.f[4]);
    st32((c.r[29].w[0] + 520u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 524u), 0u);
    c.f[1] = ld32((c.r[2].w[0] + 31944u));
    st32((c.r[29].w[0] + 464u), 0u);
    st32((c.r[29].w[0] + 436u), c.f[0]);
    st32((c.r[29].w[0] + 468u), 0u);
    st32((c.r[29].w[0] + 472u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 668u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 476u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 31948u));
    st32((c.r[29].w[0] + 480u), 0u);
    st32((c.r[29].w[0] + 440u), c.f[1]);
    st32((c.r[29].w[0] + 484u), 0u);
    st32((c.r[29].w[0] + 488u), 0u);
    set32(c.r[9], c.r[29].w[0] + 432u);
    st32((c.r[29].w[0] + 444u), c.f[0]);
    st32((c.r[29].w[0] + 492u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 292u)));
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[6], ld32((c.r[19].w[0] + 284u)));
    set32(c.r[7], c.r[29].w[0] + 496u);
    set32(c.r[8], c.r[29].w[0] + 464u);
    c.budget -= 105;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472F20u); set32(c.r[10], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_00DC(c, 69u, depth + 1u); else { c.pc = 0x004708D0u; return; } if (c.pc != 0x00472F20u) [[unlikely]] return; }
L_00472F20:
    set32(c.r[5], ld32((c.r[19].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00472F50; }
    c.f[12] = ld32((c.r[29].w[0] + 668u));
    set32(c.r[6], ld32((c.r[19].w[0] + 316u)));
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[7], c.r[29].w[0] + 512u);
    set32(c.r[8], c.r[29].w[0] + 480u);
    set32(c.r[9], c.r[29].w[0] + 440u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472F4Cu); set32(c.r[10], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_00DC(c, 69u, depth + 1u); else { c.pc = 0x004708D0u; return; } if (c.pc != 0x00472F4Cu) [[unlikely]] return; }
L_00472F4C:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00472F50:
    set32(c.r[18], c.r[20].w[0] << 2);
    c.budget -= 1;
L_00472F54:
    set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);
    c.f[12] = ld32((c.r[3].w[0] + 432u));
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00473048; }
    set32(c.r[3], c.r[20].w[0] << 3);
    c.r[4].d[0] = c.r[20].d[0] & 1ull;
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 496u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 648u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[20].sd[0] >= 0; st32((c.r[29].w[0] + 652u), c.f[0]);  if (t) { goto L_00472F9C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);  goto L_00472FA0; }
    set32(c.r[4], c.r[4].w[0] - 2u);
    c.budget -= 1;
L_00472F9C:
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_00472FA0:
    st32((c.r[29].w[0] + 640u), 0u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 464u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 536u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = 0u;
    st32((c.r[29].w[0] + 656u), c.f[0]);
    st32((c.r[29].w[0] + 632u), c.f[3]);
    st32((c.r[29].w[0] + 636u), c.f[1]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], c.r[29].w[0] + 648u);
    set32(c.r[7], c.r[29].w[0] + 632u);
    st32((c.r[29].w[0] + 388u), c.r[21].w[0]);
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 392u), 0u);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 632u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 636u), c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047301Cu); st32((c.r[29].w[0] + 640u), c.f[0]);  if (depth < kMaxDepth) unit_00DC(c, 135u, depth + 1u); else { c.pc = 0x00472240u; return; } if (c.pc != 0x0047301Cu) [[unlikely]] return; }
L_0047301C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00473044; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00473044; } }
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 328u)));
    c.f[12] = ld32((c.r[2].w[0] + 448u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00473044u); set32(c.r[6], c.r[29].w[0] + 304u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00473044u) [[unlikely]] return; }
L_00473044:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00473048:
    c.r[3].d[0] = c.r[20].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00472F54u | kUnwind; return; } goto L_00472F54; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 672u);  c.pc = t; return; }
L_004730B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 306u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00473184; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 276u)));
    st32((c.r[19].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 308u)));
    st32((c.r[19].w[0] + 296u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 292u)));
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 7u);
    c.budget -= 10;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[18].d[0] + 0ull;  goto L_00473118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473114u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 146u, depth + 1u); else { c.pc = 0x0032B080u; return; } if (c.pc != 0x00473114u) [[unlikely]] return; }
L_00473114:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00473118:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00473144; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047313Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 138u, depth + 1u); else { c.pc = 0x004725B0u; return; } if (c.pc != 0x0047313Cu) [[unlikely]] return; }
L_0047313C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00473188; } }
L_00473144:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_00473168; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473160u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 120u, depth + 1u); else { c.pc = 0x00471F00u; return; } if (c.pc != 0x00473160u) [[unlikely]] return; }
L_00473160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00473184; } }
L_00473168:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00473184; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473184u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 144u, depth + 1u); else { c.pc = 0x00472950u; return; } if (c.pc != 0x00473184u) [[unlikely]] return; }
L_00473184:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00473188:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004731A0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 108u), c.f[31]);
    st32((c.r[29].w[0] + 104u), c.f[30]);
    st32((c.r[29].w[0] + 100u), c.f[29]);
    st32((c.r[29].w[0] + 96u), c.f[28]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[22]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 326u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00473E40; } }
    st8((c.r[16].w[0] + 325u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 148u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047320Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x0047320Cu) [[unlikely]] return; }
L_0047320C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_004734A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047323Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00DC(c, 199u, depth + 1u); else { c.pc = 0x00473E90u; return; } if (c.pc != 0x0047323Cu) [[unlikely]] return; }
L_0047323C:
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.f[4] = ld32((c.r[16].w[0] + 164u));
    c.f[18] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[29].w[0] + 188u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 456u));
    c.f[3] = ld32((c.r[16].w[0] + 148u));
    c.f[17] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 460u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.f[2] = ld32((c.r[16].w[0] + 180u));
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.f[16] = ld32((c.r[29].w[0] + 424u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[3]));
    c.f[15] = ld32((c.r[29].w[0] + 428u));
    c.f[1] = ld32((c.r[16].w[0] + 196u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[2]));
    c.f[8] = ld32((c.r[16].w[0] + 168u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[1]));
    c.f[7] = ld32((c.r[16].w[0] + 152u));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[16].w[0] + 184u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[7]));
    c.f[5] = ld32((c.r[16].w[0] + 200u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[6]));
    c.f[20] = ld32((c.r[16].w[0] + 172u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[5]));
    c.f[11] = ld32((c.r[16].w[0] + 156u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[16].w[0] + 188u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[11]));
    c.f[9] = ld32((c.r[16].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[28] = ld32((c.r[16].w[0] + 176u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.f[26] = ld32((c.r[16].w[0] + 160u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[16].w[0] + 192u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[26]));
    c.f[22] = ld32((c.r[16].w[0] + 208u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 436u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 432u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[3]));
    c.f[19] = ld32((c.r[29].w[0] + 444u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[1]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[29] = ld32((c.r[29].w[0] + 188u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 468u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 184u));
    c.f[25] = ld32((c.r[29].w[0] + 464u));
    c.f[23] = ld32((c.r[29].w[0] + 472u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[29] = ld32((c.r[29].w[0] + 180u));
    c.f[21] = ld32((c.r[29].w[0] + 476u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[1]));
    st32((c.r[29].w[0]), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 188u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[7]));
    c.f[29] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 180u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 188u));
    c.facc = fp::mul(c.f[0], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[11]));
    c.f[29] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 180u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[0], c.f[28]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.facc = fp::mul(c.f[27], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 121;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473420u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x00473420u) [[unlikely]] return; }
L_00473420:
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 492u));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 500u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 504u));
    st32((c.r[16].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 508u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 516u));
    st32((c.r[16].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 524u));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    st32((c.r[16].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[16].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 540u));
    st32((c.r[16].w[0] + 208u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 33;
L_004734A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004734ACu);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004734ACu) [[unlikely]] return; }
L_004734AC:
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[4], c.r[16].w[0] + 148u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 180u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    st32((c.r[29].w[0] + 204u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 184u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st32((c.r[29].w[0] + 220u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 172u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 188u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473508u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_00C9(c, 147u, depth + 1u); else { c.pc = 0x00425110u; return; } if (c.pc != 0x00473508u) [[unlikely]] return; }
L_00473508:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473514u); set32(c.r[4], c.r[16].w[0] + 148u);  if (depth < kMaxDepth) unit_00C9(c, 150u, depth + 1u); else { c.pc = 0x00425140u; return; } if (c.pc != 0x00473514u) [[unlikely]] return; }
L_00473514:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473520u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 17u, depth + 1u); else { c.pc = 0x00420560u; return; } if (c.pc != 0x00473520u) [[unlikely]] return; }
L_00473520:
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[16].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473530u); st32((c.r[29].w[0] + 240u), c.f[0]);  if (depth < kMaxDepth) unit_00C9(c, 149u, depth + 1u); else { c.pc = 0x00425130u; return; } if (c.pc != 0x00473530u) [[unlikely]] return; }
L_00473530:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047353Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 17u, depth + 1u); else { c.pc = 0x00420560u; return; } if (c.pc != 0x0047353Cu) [[unlikely]] return; }
L_0047353C:
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[16].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047354Cu); st32((c.r[29].w[0] + 244u), c.f[0]);  if (depth < kMaxDepth) unit_00C9(c, 148u, depth + 1u); else { c.pc = 0x00425120u; return; } if (c.pc != 0x0047354Cu) [[unlikely]] return; }
L_0047354C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473558u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 17u, depth + 1u); else { c.pc = 0x00420560u; return; } if (c.pc != 0x00473558u) [[unlikely]] return; }
L_00473558:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473574u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x00473574u) [[unlikely]] return; }
L_00473574:
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[6], c.r[16].w[0] + 120u);
    set32(c.r[7], c.r[16].w[0] + 124u);
    st32((c.r[16].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[16].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    st32((c.r[16].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[16].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    st32((c.r[16].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    st32((c.r[16].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    st32((c.r[16].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    st32((c.r[16].w[0] + 252u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    st32((c.r[16].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[16].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[16].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[16].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[16].w[0] + 272u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473610u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x00473610u) [[unlikely]] return; }
L_00473610:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 120u)));  goto L_00473650; }
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), c.f[0]);  if (t) { goto L_00473664; } }
L_00473650:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 5;
L_00473664:
    c.f[2] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.f[20] = 0u;
    c.f[3] = ld32((c.r[16].w[0] + 28u));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[20]);
    c.f[4] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::sub(c.f[3], c.f[2]);  goto L_00473698; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 308u), 0u);  if (t) { goto L_004736A4; } }
L_00473698:
    fpu_div(c, 20u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 308u), 0u);
    c.budget -= 3;
L_004736A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_00473884; }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00473880; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_00473728; }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_004736E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_004736F0; } }
L_004736E4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_004736F0:
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  goto L_00473714; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00473720; } }
L_00473714:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 316u), c.r[2].w[0]);  if (t) { goto L_00473880; } }
L_00473728:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  goto L_0047373C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00473748; } }
L_0047373C:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473748:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00473760; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_0047376C; } }
L_00473760:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_0047376C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473774u);  if (depth < kMaxDepth) unit_00D2(c, 28u, depth + 1u); else { c.pc = 0x00448890u; return; } if (c.pc != 0x00473774u) [[unlikely]] return; }
L_00473774:
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 312u)));  goto L_004737C0; }
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473790u); set32(c.r[4], ld32((c.r[16].w[0] + 312u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00473790u) [[unlikely]] return; }
L_00473790:
    set32(c.r[5], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004737A0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x004737A0u) [[unlikely]] return; }
L_004737A0:
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004737BCu); set32(c.r[6], c.r[6].w[0] - 29952u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004737BCu) [[unlikely]] return; }
L_004737BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 312u)));
    c.budget -= 1;
L_004737C0:
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_004737E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[2].w[0])));  if (t) { goto L_004737F0; } }
L_004737E4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_004737F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00473808; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0])));  if (t) { goto L_00473814; } }
L_00473808:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473814:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_00473818:
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00473834; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0])));  if (t) { goto L_00473840; } }
L_00473834:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473840:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00473858; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00473864; } }
L_00473858:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473864:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[9], c.r[16].w[0] + 308u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473878u); set32(c.r[10], c.r[16].w[0] + 316u);  if (depth < kMaxDepth) unit_00D2(c, 29u, depth + 1u); else { c.pc = 0x004488B0u; return; } if (c.pc != 0x00473878u) [[unlikely]] return; }
L_00473878:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 325u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00473880:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 1;
L_00473884:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_004738F8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_004738B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_004738BC; } }
L_004738B0:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_004738BC:
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 6;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  goto L_004738E0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_004738EC; } }
L_004738E0:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_004738EC:
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 324u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00473A50; } }
L_004738F8:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[3].w[0] + 8u)));  goto L_0047390C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00473918; } }
L_0047390C:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473918:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00473930; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_0047393C; } }
L_00473930:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_0047393C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473944u);  if (depth < kMaxDepth) unit_00D2(c, 28u, depth + 1u); else { c.pc = 0x00448890u; return; } if (c.pc != 0x00473944u) [[unlikely]] return; }
L_00473944:
    set32(c.r[3], ld32((c.r[16].w[0] + 288u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 280u)));  goto L_00473990; }
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473960u); set32(c.r[4], ld32((c.r[16].w[0] + 280u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00473960u) [[unlikely]] return; }
L_00473960:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473970u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x00473970u) [[unlikely]] return; }
L_00473970:
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047398Cu); set32(c.r[6], c.r[6].w[0] - 29895u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0047398Cu) [[unlikely]] return; }
L_0047398C:
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 1;
L_00473990:
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_004739B4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[2].w[0])));  if (t) { goto L_004739C0; } }
L_004739B4:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_004739C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_004739D8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0])));  if (t) { goto L_004739E4; } }
L_004739D8:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_004739E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00473A04; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0])));  if (t) { goto L_00473A10; } }
L_00473A04:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473A10:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_00473A28; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00473A34; } }
L_00473A28:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 3;
L_00473A34:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = c.f[20];
    set32(c.r[9], c.r[16].w[0] + 276u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473A48u); set32(c.r[10], c.r[16].w[0] + 284u);  if (depth < kMaxDepth) unit_00D2(c, 29u, depth + 1u); else { c.pc = 0x004488B0u; return; } if (c.pc != 0x00473A48u) [[unlikely]] return; }
L_00473A48:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00473A50:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473A5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x00473A5Cu) [[unlikely]] return; }
L_00473A5C:
    st32((c.r[16].w[0] + 136u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473AB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00473AB0u) [[unlikely]] return; }
L_00473AB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473AC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00473AC0u) [[unlikely]] return; }
L_00473AC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473AD0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00473AD0u) [[unlikely]] return; }
L_00473AD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473AE0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00473AE0u) [[unlikely]] return; }
L_00473AE0:
    st8((c.r[16].w[0] + 326u), static_cast<std::uint8_t>(0u));
    c.f[4] = ld32((c.r[28].w[0] - 32640u));
    c.f[3] = ld32((c.r[16].w[0] + 180u));
    set32(c.r[2], 0u + 6u);
    c.f[2] = ld32((c.r[16].w[0] + 184u));
    c.f[1] = ld32((c.r[16].w[0] + 188u));
    st32((c.r[29].w[0] + 336u), c.f[3]);
    st32((c.r[29].w[0] + 320u), c.f[3]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[29].w[0] + 328u), c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[16].w[0] + 332u), c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[16].w[0] + 336u), c.f[2]);
    c.f[3] = ld32((c.r[29].w[0] + 320u));
    st32((c.r[16].w[0] + 340u), c.f[1]);
    st32((c.r[16].w[0] + 344u), c.f[4]);
    c.f[2] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[16].w[0] + 348u), c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    st32((c.r[16].w[0] + 352u), c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0] + 356u), c.f[1]);
    c.f[13] = ld32((c.r[28].w[0] - 29900u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 612u), 0u);
    st32((c.r[29].w[0] + 616u), 0u);
    st32((c.r[29].w[0] + 620u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473B74u); set32(c.r[6], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x00473B74u) [[unlikely]] return; }
L_00473B74:
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473B94u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x00473B94u) [[unlikely]] return; }
L_00473B94:
    c.f[1] = ld32((c.r[29].w[0] + 576u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[4] = ld32((c.r[16].w[0] + 228u));
    c.f[18] = ld32((c.r[29].w[0] + 548u));
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 584u));
    c.f[3] = ld32((c.r[16].w[0] + 212u));
    c.f[15] = ld32((c.r[29].w[0] + 544u));
    st32((c.r[29].w[0] + 172u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 588u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.f[17] = ld32((c.r[29].w[0] + 552u));
    st32((c.r[29].w[0] + 168u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 244u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[3]));
    c.f[16] = ld32((c.r[29].w[0] + 556u));
    c.f[1] = ld32((c.r[16].w[0] + 260u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[2]));
    c.f[8] = ld32((c.r[16].w[0] + 232u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[16], c.f[1]));
    c.f[7] = ld32((c.r[16].w[0] + 216u));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[16].w[0] + 248u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[7]));
    c.f[5] = ld32((c.r[16].w[0] + 264u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[6]));
    c.f[20] = ld32((c.r[16].w[0] + 236u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[16], c.f[5]));
    c.f[11] = ld32((c.r[16].w[0] + 220u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[16].w[0] + 252u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[11]));
    c.f[9] = ld32((c.r[16].w[0] + 268u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[10]));
    c.f[28] = ld32((c.r[16].w[0] + 240u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[16], c.f[9]));
    c.f[26] = ld32((c.r[16].w[0] + 224u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[16].w[0] + 256u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[26]));
    c.f[22] = ld32((c.r[16].w[0] + 272u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 564u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[16], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 560u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 568u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[3]));
    c.f[19] = ld32((c.r[29].w[0] + 572u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[1]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[29] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 596u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.f[25] = ld32((c.r[29].w[0] + 592u));
    c.f[23] = ld32((c.r[29].w[0] + 600u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[21] = ld32((c.r[29].w[0] + 604u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[1]));
    st32((c.r[29].w[0]), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[7]));
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 176u));
    c.facc = fp::mul(c.f[0], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[11]));
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[0], c.f[28]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.facc = fp::mul(c.f[27], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 121;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473D78u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x00473D78u) [[unlikely]] return; }
L_00473D78:
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[16].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[16].w[0] + 380u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[16].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[16].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[16].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[16].w[0] + 396u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[16].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[16].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[16].w[0] + 408u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[16].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[16].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[16].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 316u));
    st32((c.r[16].w[0] + 424u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.budget -= 38;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 608u);  goto L_00473E38; }
    c.f[0] = ld32((c.r[16].w[0] + 364u));
    c.f[2] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = ld32((c.r[16].w[0] + 372u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[16].w[0] + 368u), c.f[2]);
    st32((c.r[16].w[0] + 372u), c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.budget -= 10;
L_00473E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473E40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 150u, depth + 1u); else { c.pc = 0x004020D0u; return; } if (c.pc != 0x00473E40u) [[unlikely]] return; }
L_00473E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_00473E90:
    st32((c.r[4].w[0]), c.f[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.f[13]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.f[14]);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_00473EE0:
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00473F04; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00473F04:
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[8].d[0] == 0ull) { c.r[3].d[0] = c.r[8].d[0] & 255ull;  goto L_00473F3C; }
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00473F34; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00473F34:
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 2;
L_00473F3C:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  goto L_00473F70; }
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00473F68; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00473F68:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00473F70:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 306u));  goto L_00473F98; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00473F94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00DD(c, 3u, depth); } }
L_00473F94:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 306u));
    c.budget -= 1;
L_00473F98:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_00473FAC; }
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 326u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_00DD(c, 3u, depth); } }
L_00473FAC:
    st8((c.r[4].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24252u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 20u)));  goto L_00473FC4; }
    st32((c.r[28].w[0] - 24252u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 2;
L_00473FC4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00473FDC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { st32((c.r[4].w[0] + 24u), c.r[6].w[0]);  goto L_00473FE4; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00473FDC:
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.budget -= 2;
L_00473FE4:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 7;
    [[clang::musttail]] return unit_00DD(c, 1u, depth);
}

}
