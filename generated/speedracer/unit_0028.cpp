#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0028[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0,
    150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
};

void unit_0028(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A0000;
    case 2u: goto L_001A0004;
    case 3u: goto L_001A0034;
    case 4u: goto L_001A0088;
    case 5u: goto L_001A0098;
    case 6u: goto L_001A00C8;
    case 7u: goto L_001A00D8;
    case 8u: goto L_001A0108;
    case 9u: goto L_001A011C;
    case 10u: goto L_001A012C;
    case 11u: goto L_001A013C;
    case 12u: goto L_001A016C;
    case 13u: goto L_001A017C;
    case 14u: goto L_001A0270;
    case 15u: goto L_001A02A4;
    case 16u: goto L_001A02B4;
    case 17u: goto L_001A02E4;
    case 18u: goto L_001A02F4;
    case 19u: goto L_001A0344;
    case 20u: goto L_001A0354;
    case 21u: goto L_001A0384;
    case 22u: goto L_001A0394;
    case 23u: goto L_001A03B8;
    case 24u: goto L_001A03DC;
    case 25u: goto L_001A03EC;
    case 26u: goto L_001A041C;
    case 27u: goto L_001A042C;
    case 28u: goto L_001A046C;
    case 29u: goto L_001A047C;
    case 30u: goto L_001A04AC;
    case 31u: goto L_001A04BC;
    case 32u: goto L_001A0500;
    case 33u: goto L_001A0568;
    case 34u: goto L_001A05B4;
    case 35u: goto L_001A05DC;
    case 36u: goto L_001A0610;
    case 37u: goto L_001A0694;
    case 38u: goto L_001A0754;
    case 39u: goto L_001A0764;
    case 40u: goto L_001A0794;
    case 41u: goto L_001A07A4;
    case 42u: goto L_001A0800;
    case 43u: goto L_001A08B8;
    case 44u: goto L_001A08EC;
    case 45u: goto L_001A0904;
    case 46u: goto L_001A09B4;
    case 47u: goto L_001A09D0;
    case 48u: goto L_001A09FC;
    case 49u: goto L_001A0A14;
    case 50u: goto L_001A0A30;
    case 51u: goto L_001A0A70;
    case 52u: goto L_001A0AC0;
    case 53u: goto L_001A0B3C;
    case 54u: goto L_001A0B70;
    case 55u: goto L_001A0BA8;
    case 56u: goto L_001A0BE0;
    case 57u: goto L_001A0C44;
    case 58u: goto L_001A0C54;
    case 59u: goto L_001A0C8C;
    case 60u: goto L_001A0CF0;
    case 61u: goto L_001A0D00;
    case 62u: goto L_001A0D14;
    case 63u: goto L_001A0D9C;
    case 64u: goto L_001A0DAC;
    case 65u: goto L_001A0DBC;
    case 66u: goto L_001A0DE0;
    case 67u: goto L_001A0E20;
    case 68u: goto L_001A0EC8;
    case 69u: goto L_001A0F18;
    case 70u: goto L_001A0F50;
    case 71u: goto L_001A0FA0;
    case 72u: goto L_001A0FE0;
    case 73u: goto L_001A101C;
    case 74u: goto L_001A1050;
    case 75u: goto L_001A10B8;
    case 76u: goto L_001A10DC;
    case 77u: goto L_001A1170;
    case 78u: goto L_001A11FC;
    case 79u: goto L_001A120C;
    case 80u: goto L_001A123C;
    case 81u: goto L_001A124C;
    case 82u: goto L_001A129C;
    case 83u: goto L_001A12AC;
    case 84u: goto L_001A12DC;
    case 85u: goto L_001A12EC;
    case 86u: goto L_001A1358;
    case 87u: goto L_001A1490;
    case 88u: goto L_001A1604;
    case 89u: goto L_001A164C;
    case 90u: goto L_001A1674;
    case 91u: goto L_001A1730;
    case 92u: goto L_001A1870;
    case 93u: goto L_001A18C4;
    case 94u: goto L_001A194C;
    case 95u: goto L_001A1990;
    case 96u: goto L_001A19B4;
    case 97u: goto L_001A19F0;
    case 98u: goto L_001A1A00;
    case 99u: goto L_001A1AC0;
    case 100u: goto L_001A1AEC;
    case 101u: goto L_001A1B04;
    case 102u: goto L_001A1BA4;
    case 103u: goto L_001A1BBC;
    case 104u: goto L_001A1BD0;
    case 105u: goto L_001A1BE0;
    case 106u: goto L_001A1BF8;
    case 107u: goto L_001A1C1C;
    case 108u: goto L_001A1C50;
    case 109u: goto L_001A1D10;
    case 110u: goto L_001A1D3C;
    case 111u: goto L_001A1D54;
    case 112u: goto L_001A1DF4;
    case 113u: goto L_001A1E0C;
    case 114u: goto L_001A1E20;
    case 115u: goto L_001A1E30;
    case 116u: goto L_001A1E48;
    case 117u: goto L_001A1E6C;
    case 118u: goto L_001A1EA0;
    case 119u: goto L_001A1EC4;
    case 120u: goto L_001A1EE0;
    case 121u: goto L_001A1F70;
    case 122u: goto L_001A1F88;
    case 123u: goto L_001A204C;
    case 124u: goto L_001A2064;
    case 125u: goto L_001A2078;
    case 126u: goto L_001A2088;
    case 127u: goto L_001A20A0;
    case 128u: goto L_001A20C4;
    case 129u: goto L_001A2100;
    case 130u: goto L_001A2160;
    case 131u: goto L_001A21A0;
    case 132u: goto L_001A2234;
    case 133u: goto L_001A2294;
    case 134u: goto L_001A22C0;
    case 135u: goto L_001A22D0;
    case 136u: goto L_001A22F8;
    case 137u: goto L_001A2310;
    case 138u: goto L_001A2330;
    case 139u: goto L_001A23D4;
    case 140u: goto L_001A243C;
    case 141u: goto L_001A2464;
    case 142u: goto L_001A24A8;
    case 143u: goto L_001A2530;
    case 144u: goto L_001A2574;
    case 145u: goto L_001A2598;
    case 146u: goto L_001A25B8;
    case 147u: goto L_001A2618;
    case 148u: goto L_001A266C;
    case 149u: goto L_001A2674;
    case 150u: goto L_001A2680;
    case 151u: goto L_001A2698;
    case 152u: goto L_001A26AC;
    case 153u: goto L_001A26D8;
    case 154u: goto L_001A26EC;
    case 155u: goto L_001A2700;
    case 156u: goto L_001A270C;
    case 157u: goto L_001A2724;
    case 158u: goto L_001A27B0;
    case 159u: goto L_001A27C4;
    case 160u: goto L_001A27F8;
    case 161u: goto L_001A280C;
    case 162u: goto L_001A2850;
    case 163u: goto L_001A289C;
    case 164u: goto L_001A28BC;
    case 165u: goto L_001A2900;
    case 166u: goto L_001A2920;
    case 167u: goto L_001A29C0;
    case 168u: goto L_001A2AA0;
    case 169u: goto L_001A2AC0;
    case 170u: goto L_001A2B14;
    case 171u: goto L_001A2B50;
    case 172u: goto L_001A2B60;
    case 173u: goto L_001A2B7C;
    case 174u: goto L_001A2BF0;
    case 175u: goto L_001A2C18;
    case 176u: goto L_001A2C30;
    case 177u: goto L_001A2C48;
    case 178u: goto L_001A2D18;
    case 179u: goto L_001A2D24;
    case 180u: goto L_001A2DD4;
    case 181u: goto L_001A2E3C;
    case 182u: goto L_001A2E68;
    case 183u: goto L_001A2EA0;
    case 184u: goto L_001A2EDC;
    case 185u: goto L_001A2EFC;
    case 186u: goto L_001A2F10;
    case 187u: goto L_001A2F50;
    case 188u: goto L_001A2F74;
    case 189u: goto L_001A2FA0;
    case 190u: goto L_001A2FC0;
    case 191u: goto L_001A2FE0;
    case 192u: goto L_001A3000;
    case 193u: goto L_001A3010;
    case 194u: goto L_001A3020;
    case 195u: goto L_001A3030;
    case 196u: goto L_001A3040;
    case 197u: goto L_001A3078;
    case 198u: goto L_001A3084;
    case 199u: goto L_001A30C8;
    case 200u: goto L_001A30F4;
    case 201u: goto L_001A3120;
    case 202u: goto L_001A31A0;
    case 203u: goto L_001A31AC;
    case 204u: goto L_001A31F4;
    case 205u: goto L_001A3274;
    case 206u: goto L_001A32A0;
    case 207u: goto L_001A32D0;
    case 208u: goto L_001A32F0;
    case 209u: goto L_001A3334;
    case 210u: goto L_001A33DC;
    case 211u: goto L_001A33E8;
    case 212u: goto L_001A3410;
    case 213u: goto L_001A3440;
    case 214u: goto L_001A3468;
    case 215u: goto L_001A347C;
    case 216u: goto L_001A34C0;
    case 217u: goto L_001A3510;
    case 218u: goto L_001A356C;
    case 219u: goto L_001A3584;
    case 220u: goto L_001A359C;
    case 221u: goto L_001A3664;
    case 222u: goto L_001A36F4;
    case 223u: goto L_001A3788;
    case 224u: goto L_001A37B4;
    case 225u: goto L_001A37F0;
    case 226u: goto L_001A3814;
    case 227u: goto L_001A3834;
    case 228u: goto L_001A3844;
    case 229u: goto L_001A3860;
    case 230u: goto L_001A38AC;
    case 231u: goto L_001A38C0;
    case 232u: goto L_001A38E8;
    case 233u: goto L_001A3920;
    case 234u: goto L_001A396C;
    case 235u: goto L_001A398C;
    case 236u: goto L_001A39A0;
    case 237u: goto L_001A39C8;
    case 238u: goto L_001A3A00;
    case 239u: goto L_001A3A40;
    case 240u: goto L_001A3A60;
    case 241u: goto L_001A3A84;
    case 242u: goto L_001A3AA8;
    case 243u: goto L_001A3AC0;
    case 244u: goto L_001A3B00;
    case 245u: goto L_001A3B40;
    case 246u: goto L_001A3B70;
    case 247u: goto L_001A3B90;
    case 248u: goto L_001A3BA0;
    case 249u: goto L_001A3BB0;
    case 250u: goto L_001A3BC0;
    case 251u: goto L_001A3BD0;
    case 252u: goto L_001A3BE0;
    case 253u: goto L_001A3BF0;
    case 254u: goto L_001A3C10;
    case 255u: goto L_001A3C30;
    case 256u: goto L_001A3C50;
    case 257u: goto L_001A3C70;
    case 258u: goto L_001A3C9C;
    case 259u: goto L_001A3CC0;
    case 260u: goto L_001A3CE0;
    case 261u: goto L_001A3D10;
    case 262u: goto L_001A3D90;
    case 263u: goto L_001A3DCC;
    case 264u: goto L_001A3DF0;
    case 265u: goto L_001A3E38;
    case 266u: goto L_001A3E60;
    case 267u: goto L_001A3EBC;
    case 268u: goto L_001A3ECC;
    case 269u: goto L_001A3F00;
    case 270u: goto L_001A3F2C;
    case 271u: goto L_001A3F90;
    case 272u: goto L_001A3FC8;
    case 273u: goto L_001A3FE8;
    default: bad_entry(c, 0x001A0000u); return;
    }
L_001A0000:
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.budget -= 1;
L_001A0004:
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A01FC; } }
L_001A0034:
    set32(c.r[3], c.r[18].w[0] + 276u);
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A01F8; } }
    set32(c.r[2], c.r[18].w[0] + 276u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0088u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A0088u) [[unlikely]] return; }
L_001A0088:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0098u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A0098u) [[unlikely]] return; }
L_001A0098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A00C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A00C8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00C8u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A00C8u) [[unlikely]] return; }
L_001A00C8:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A00D8u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A00D8u) [[unlikely]] return; }
L_001A00D8:
    set32(c.r[2], c.r[29].w[0] + 288u);
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 392u), c.f[0]);
    set32(c.r[2], c.r[18].w[0] + 276u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
L_001A0108:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_001A011C:
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A012Cu);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A012Cu) [[unlikely]] return; }
L_001A012C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A013Cu);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A013Cu) [[unlikely]] return; }
L_001A013C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A016C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A016C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A016Cu);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A016Cu) [[unlikely]] return; }
L_001A016C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A017Cu);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A017Cu) [[unlikely]] return; }
L_001A017C:
    set32(c.r[3], c.r[29].w[0] + 272u);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 384u));
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.budget -= 31;
L_001A01F8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001A01FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 272u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0034u | kUnwind; return; } goto L_001A0034; } }
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04D8; } }
L_001A0270:
    set32(c.r[2], c.r[18].w[0] + 276u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02A4u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A02A4u) [[unlikely]] return; }
L_001A02A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02B4u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A02B4u) [[unlikely]] return; }
L_001A02B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A02E4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A02E4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02E4u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A02E4u) [[unlikely]] return; }
L_001A02E4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A02F4u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A02F4u) [[unlikely]] return; }
L_001A02F4:
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[2], c.r[18].w[0] + 276u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0344u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A0344u) [[unlikely]] return; }
L_001A0344:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0354u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A0354u) [[unlikely]] return; }
L_001A0354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0384; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A0384; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0384u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A0384u) [[unlikely]] return; }
L_001A0384:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0394u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A0394u) [[unlikely]] return; }
L_001A0394:
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A04D8; } }
L_001A03B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03DCu);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A03DCu) [[unlikely]] return; }
L_001A03DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A03ECu);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A03ECu) [[unlikely]] return; }
L_001A03EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A041C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A041C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A041Cu);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A041Cu) [[unlikely]] return; }
L_001A041C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A042Cu);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A042Cu) [[unlikely]] return; }
L_001A042C:
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A046Cu);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A046Cu) [[unlikely]] return; }
L_001A046C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A047Cu);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A047Cu) [[unlikely]] return; }
L_001A047C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A04AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A04AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04ACu);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A04ACu) [[unlikely]] return; }
L_001A04AC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A04BCu);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A04BCu) [[unlikely]] return; }
L_001A04BC:
    set32(c.r[3], c.r[29].w[0] + 192u);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_001A04D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 400u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0500:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A05C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 272u)));
    st32((c.r[29].w[0] + 172u), c.r[30].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A05B8; } }
L_001A0568:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[20], c.r[2].w[0] + 276u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[23], c.r[2].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A05B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[18], c.r[2].w[0] + 276u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05B4u);  if (depth < kMaxDepth) unit_0029(c, 180u, depth + 1u); else { c.pc = 0x001A6D80u; return; } if (c.pc != 0x001A05B4u) [[unlikely]] return; }
L_001A05B4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A05B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0568u | kUnwind; return; } goto L_001A0568; } }
L_001A05C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A05DCu);  if (depth < kMaxDepth) unit_0029(c, 202u, depth + 1u); else { c.pc = 0x001A72E0u; return; } if (c.pc != 0x001A05DCu) [[unlikely]] return; }
L_001A05DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0610:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 336u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[5].w[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 236u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 272u)));
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[29].w[0] + 332u), c.r[3].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 33;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0A74; } }
L_001A0694:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[3], c.r[3].w[0] + 276u);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0A70; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 276u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[22].w[0] + 120u)));
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[2], c.r[22].w[0] + 76u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0754u);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x001A0754u) [[unlikely]] return; }
L_001A0754:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0764u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x001A0764u) [[unlikely]] return; }
L_001A0764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0794; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 64u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A0794; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0794u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x001A0794u) [[unlikely]] return; }
L_001A0794:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A07A4u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x001A07A4u) [[unlikely]] return; }
L_001A07A4:
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A07F4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.budget -= 3;
L_001A07F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = 0u;
    c.budget -= 3;
L_001A0800:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A081C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.budget -= 3;
L_001A081C:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A0844; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 3;
L_001A0844:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A086C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.budget -= 3;
L_001A086C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A08C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A08B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A08B8u) [[unlikely]] return; }
L_001A08B8:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_001A08C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A0910; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A08EC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A08ECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A08ECu) [[unlikely]] return; }
L_001A08EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0904u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A0904u) [[unlikely]] return; }
L_001A0904:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
L_001A0910:
    set32(c.r[17], ld32((c.r[29].w[0] + 212u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 276u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[23], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[30], c.r[20].w[0] + 76u);
    set32(c.r[3], c.r[23].w[0] << 5);
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 248u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 36;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A09E0; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 196u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09B4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001A09B4u) [[unlikely]] return; }
L_001A09B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A09D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A09D0u) [[unlikely]] return; }
L_001A09D0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0A18; } }
L_001A09E0:
    set32(c.r[21], ld32((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A09FCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A09FCu) [[unlikely]] return; }
L_001A09FC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A14u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001A0A14u) [[unlikely]] return; }
L_001A0A14:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_001A0A18:
    set32(c.r[4], c.r[20].w[0] + 60u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0A30u) [[unlikely]] return; }
L_001A0A30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A0A70; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A0A70; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0A70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A0A70u) [[unlikely]] return; }
L_001A0A70:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001A0A74:
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A0694u | kUnwind; return; } goto L_001A0694; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0AC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 128u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[12]);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[19], c.r[3].w[0] + 276u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[22], c.r[3].w[0] + 0u);
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0B3C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[17], c.r[2].w[0] + 276u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[21], c.r[2].w[0] + 0u);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0B3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0B3Cu) [[unlikely]] return; }
L_001A0B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0B70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[17], c.r[2].w[0] + 56u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0BA8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A0BA8u) [[unlikely]] return; }
L_001A0BA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001A0BC0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0BC4; } }
L_001A0BC0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A0BC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0BE0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 19;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A0C30; } }
    set32(c.r[17], c.r[17].w[0] - 72u);
    c.budget -= 1;
L_001A0C30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A0DC8; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C44u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001A0C44u) [[unlikely]] return; }
L_001A0C44:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C54u);  if (depth < kMaxDepth) unit_000A(c, 313u, depth + 1u); else { c.pc = 0x0012A9B0u; return; } if (c.pc != 0x001A0C54u) [[unlikely]] return; }
L_001A0C54:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A0C70; } }
    set32(c.r[16], c.r[16].w[0] - 72u);
    c.budget -= 1;
L_001A0C70:
    st32((c.r[29].w[0] + 232u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0C8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0C8Cu) [[unlikely]] return; }
L_001A0C8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0CCC; } }
    set32(c.r[2], c.r[29].w[0] + 161u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0CD4; } }
L_001A0CCC:
    set32(c.r[22], c.r[29].w[0] + 168u);
    set32(c.r[20], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_001A0CD4:
    st32((c.r[29].w[0] + 224u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0CF0u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001A0CF0u) [[unlikely]] return; }
L_001A0CF0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D00u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A0D00u) [[unlikely]] return; }
L_001A0D00:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 30914u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D14u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001A0D14u) [[unlikely]] return; }
L_001A0D14:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], c.r[2].w[0] + 56u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 216u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 254u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A0D74; } }
    st32((c.r[29].w[0] + 212u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0D84; } }
L_001A0D74:
    st32((c.r[29].w[0] + 204u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[21], c.r[2].w[0] + 8u);
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 4;
L_001A0D84:
    c.r[30].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 244u), c.r[30].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0D9Cu);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001A0D9Cu) [[unlikely]] return; }
L_001A0D9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DACu);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x001A0DACu) [[unlikely]] return; }
L_001A0DAC:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DBCu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A0DBCu) [[unlikely]] return; }
L_001A0DBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A0DE0; } }
L_001A0DC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[23], c.r[2].w[0] + 56u);
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0DE0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x001A0DE0u) [[unlikely]] return; }
L_001A0DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0E20:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[23], c.r[3].w[0] + 276u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0EC8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[21], c.r[3].w[0] + 276u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A0EC8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0EC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0EC8u) [[unlikely]] return; }
L_001A0EC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[19], c.r[3].w[0] + 276u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[30], c.r[3].w[0] + c.r[4].w[0]);
    c.r[18].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A0F18; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A0F08; } }
    set32(c.r[16], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_001A0F08:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0F18u);  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x001A0F18u) [[unlikely]] return; }
L_001A0F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[17], c.r[2].w[0] + 276u);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A0FA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A0FE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A0FE0u) [[unlikely]] return; }
L_001A0FE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A101C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A101Cu);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x001A101Cu) [[unlikely]] return; }
L_001A101C:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1050:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[19], c.r[3].w[0] + 276u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A10E8; } }
L_001A10B8:
    set32(c.r[18], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A10DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A10DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A10DCu) [[unlikely]] return; }
L_001A10DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 3;
L_001A10E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[17], c.r[3].w[0] + 276u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 272u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[30], c.r[3].w[0] + c.r[4].w[0]);
    c.r[23].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 188u)));
    c.r[3].d[0] = c.r[21].d[0] ^ c.r[22].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[20].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A10B8u | kUnwind; return; } goto L_001A10B8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1170:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A11B0; } }
    set32(c.r[18], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A11B4; } }
L_001A11B0:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001A11B4:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A11D4; } }
    set32(c.r[17], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A11D8; } }
L_001A11D4:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_001A11D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A11FCu);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A11FCu) [[unlikely]] return; }
L_001A11FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A120Cu);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A120Cu) [[unlikely]] return; }
L_001A120C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A123C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A123C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A123Cu);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A123Cu) [[unlikely]] return; }
L_001A123C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A124Cu);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A124Cu) [[unlikely]] return; }
L_001A124C:
    set32(c.r[2], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[19].w[0] + 104u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[19].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A129Cu);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A129Cu) [[unlikely]] return; }
L_001A129C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A12ACu);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A12ACu) [[unlikely]] return; }
L_001A12AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A12DC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A12DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A12DCu);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A12DCu) [[unlikely]] return; }
L_001A12DC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A12ECu);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A12ECu) [[unlikely]] return; }
L_001A12EC:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 116u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + 276u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 27;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1428; } }
L_001A1358:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A141C; } }
    set32(c.r[5], c.r[3].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_001A1388; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    mmi::pminw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1394; } }
L_001A1388:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 112u)));
    mmi::pmaxw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 3;
L_001A1394:
    st32((c.r[19].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_001A13B4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 116u)));
    mmi::pmaxw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A13C0; } }
L_001A13B4:
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 116u)));
    mmi::pminw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 3;
L_001A13C0:
    st32((c.r[19].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001A13E0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    mmi::pminw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A13EC; } }
L_001A13E0:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    mmi::pmaxw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 3;
L_001A13EC:
    st32((c.r[19].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_001A140C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    mmi::pmaxw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1418; } }
L_001A140C:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    mmi::pminw(c.r[3], c.r[4], c.r[3]);
    c.budget -= 3;
L_001A1418:
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 1;
L_001A141C:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    c.budget -= 3;
L_001A1428:
    set32(c.r[5], c.r[19].w[0] + 276u);
    set32(c.r[3], ld32((c.r[19].w[0] + 272u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A1358u | kUnwind; return; } goto L_001A1358; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1490:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A14F8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A14F8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A15DC; } }
L_001A14F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A152C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A152C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A15DC; } }
L_001A152C:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A15A0; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A158C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A158C; } }
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_001A158C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001A15A0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A15DC; } }
L_001A15A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A15D4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A15D4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A15DC; } }
L_001A15D4:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_001A15DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001A15F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16F4; } }
L_001A15F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1604u);  if (depth < kMaxDepth) unit_0029(c, 111u, depth + 1u); else { c.pc = 0x001A5C50u; return; } if (c.pc != 0x001A1604u) [[unlikely]] return; }
L_001A1604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1618; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16F4; } }
L_001A1618:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[21], c.r[2].w[0] + 276u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1694; } }
L_001A164C:
    set32(c.r[20], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A1688; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1674u) [[unlikely]] return; }
L_001A1674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1688; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A16F4; } }
L_001A1688:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 3;
L_001A1694:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[19], c.r[2].w[0] + 276u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 272u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 200u)));
    c.r[2].d[0] = c.r[23].d[0] ^ c.r[30].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A164Cu | kUnwind; return; } goto L_001A164C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A16F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1774; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1774; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1850; } }
L_001A1774:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A17A8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A17A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1850; } }
L_001A17A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1818; } }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1804; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1804; } }
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_001A1804:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001A1818; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1850; } }
L_001A1818:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A184C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A184C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1850; } }
L_001A184C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A1850:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1870:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30972u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A18C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A18C4u) [[unlikely]] return; }
L_001A18C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A1990; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A18E8; } }
    set32(c.r[20], c.r[20].w[0] - 72u);
    c.budget -= 1;
L_001A18E8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A194C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A190C; } }
    set32(c.r[19], c.r[19].w[0] - 72u);
    c.budget -= 1;
L_001A190C:
    st32((c.r[29].w[0] + 160u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A194C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 120u)));
    c.r[18].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A1938; } }
    set32(c.r[18], c.r[18].w[0] - 72u);
    c.budget -= 1;
L_001A1938:
    c.r[23].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A194Cu);  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x001A194Cu) [[unlikely]] return; }
L_001A194C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1990; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 120u)));
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A1970; } }
    set32(c.r[17], c.r[17].w[0] - 72u);
    c.budget -= 1;
L_001A1970:
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_001A1990; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1990u);  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x001A1990u) [[unlikely]] return; }
L_001A1990:
    set32(c.r[16], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A19A0; } }
    set32(c.r[16], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_001A19A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A19B4u);  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x001A19B4u) [[unlikely]] return; }
L_001A19B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A19F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1A00:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 272u)));
    st32((c.r[29].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1AC0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 276u);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 0u);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[3], ld32((c.r[30].w[0])));
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1AC0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[23], c.r[2].w[0] + 276u);
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1AC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1AC0u) [[unlikely]] return; }
L_001A1AC0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 272u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1C1C; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1AECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1AECu) [[unlikely]] return; }
L_001A1AEC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1B04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1B04u) [[unlikely]] return; }
L_001A1B04:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1B44; } }
    set32(c.r[2], c.r[29].w[0] + 161u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1B4C; } }
L_001A1B44:
    set32(c.r[21], c.r[29].w[0] + 168u);
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.budget -= 2;
L_001A1B4C:
    st32((c.r[29].w[0] + 212u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 254u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1B90; } }
    set32(c.r[2], c.r[29].w[0] + 177u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1B98; } }
L_001A1B90:
    set32(c.r[20], c.r[29].w[0] + 184u);
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_001A1B98:
    st32((c.r[29].w[0] + 204u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BA4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001A1BA4u) [[unlikely]] return; }
L_001A1BA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BBCu);  if (depth < kMaxDepth) unit_0026(c, 107u, depth + 1u); else { c.pc = 0x00199570u; return; } if (c.pc != 0x001A1BBCu) [[unlikely]] return; }
L_001A1BBC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BD0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A1BD0u) [[unlikely]] return; }
L_001A1BD0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BE0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A1BE0u) [[unlikely]] return; }
L_001A1BE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1BF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1BF8u) [[unlikely]] return; }
L_001A1BF8:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A1C1C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1C1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1C1Cu) [[unlikely]] return; }
L_001A1C1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1C50:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 272u)));
    st32((c.r[29].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A1D10; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] + 276u);
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 0u);
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[3], ld32((c.r[30].w[0])));
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A1D10; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[23], c.r[2].w[0] + 276u);
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1D10u) [[unlikely]] return; }
L_001A1D10:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 272u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A1E6C; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1D3Cu) [[unlikely]] return; }
L_001A1D3C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1D54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1D54u) [[unlikely]] return; }
L_001A1D54:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1D94; } }
    set32(c.r[2], c.r[29].w[0] + 161u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1D9C; } }
L_001A1D94:
    set32(c.r[21], c.r[29].w[0] + 168u);
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.budget -= 2;
L_001A1D9C:
    st32((c.r[29].w[0] + 212u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 254u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1DE0; } }
    set32(c.r[2], c.r[29].w[0] + 177u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1DE8; } }
L_001A1DE0:
    set32(c.r[20], c.r[29].w[0] + 184u);
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_001A1DE8:
    st32((c.r[29].w[0] + 204u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1DF4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001A1DF4u) [[unlikely]] return; }
L_001A1DF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E0Cu);  if (depth < kMaxDepth) unit_0026(c, 107u, depth + 1u); else { c.pc = 0x00199570u; return; } if (c.pc != 0x001A1E0Cu) [[unlikely]] return; }
L_001A1E0C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E20u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A1E20u) [[unlikely]] return; }
L_001A1E20:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E30u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A1E30u) [[unlikely]] return; }
L_001A1E30:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1E48u) [[unlikely]] return; }
L_001A1E48:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A1E6C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1E6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1E6Cu) [[unlikely]] return; }
L_001A1E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 28808u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1EC4u);  if (depth < kMaxDepth) unit_0027(c, 58u, depth + 1u); else { c.pc = 0x0019CEF0u; return; } if (c.pc != 0x001A1EC4u) [[unlikely]] return; }
L_001A1EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A1EE0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[4].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 224u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A20C4; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1F70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1F70u) [[unlikely]] return; }
L_001A1F70:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A1F88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A1F88u) [[unlikely]] return; }
L_001A1F88:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1FC8; } }
    set32(c.r[2], c.r[29].w[0] + 161u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1FD0; } }
L_001A1FC8:
    set32(c.r[22], c.r[29].w[0] + 168u);
    set32(c.r[19], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_001A1FD0:
    st32((c.r[29].w[0] + 196u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A1FF8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A1FFC; } }
L_001A1FF8:
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001A1FFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 206u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2038; } }
    set32(c.r[30], c.r[29].w[0] + 177u);
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2040; } }
L_001A2038:
    set32(c.r[21], c.r[29].w[0] + 184u);
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.budget -= 2;
L_001A2040:
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A204Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001A204Cu) [[unlikely]] return; }
L_001A204C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2064u);  if (depth < kMaxDepth) unit_0026(c, 107u, depth + 1u); else { c.pc = 0x00199570u; return; } if (c.pc != 0x001A2064u) [[unlikely]] return; }
L_001A2064:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2078u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A2078u) [[unlikely]] return; }
L_001A2078:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2088u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A2088u) [[unlikely]] return; }
L_001A2088:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A20A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A20A0u) [[unlikely]] return; }
L_001A20A0:
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A20C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A20C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A20C4u) [[unlikely]] return; }
L_001A20C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[4].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A2150; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 16u));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001A2150:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 16u));
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 192u));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A21A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 96u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[4].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A2294; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 112u));
    set32(c.r[6], ld32((c.r[29].w[0] + 96u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2234; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2234u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A2234u) [[unlikely]] return; }
L_001A2234:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 120u)));
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A224C; } }
    set32(c.r[17], c.r[17].w[0] - 72u);
    c.budget -= 1;
L_001A224C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A2294; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 120u)));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A226C; } }
    set32(c.r[16], c.r[16].w[0] - 72u);
    c.budget -= 1;
L_001A226C:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[5].d[0] = c.r[2].d[0] >> 63;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2294u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A2294u) [[unlikely]] return; }
L_001A2294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A22C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A22D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A22F8u);  if (depth < kMaxDepth) unit_001B(c, 340u, depth + 1u); else { c.pc = 0x0016FD30u; return; } if (c.pc != 0x001A22F8u) [[unlikely]] return; }
L_001A22F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2330:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 304u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 320u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A28BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17104u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17080u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17048u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17036u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17012u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A23D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A23D4u) [[unlikely]] return; }
L_001A23D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2464; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 6;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001A23F8; } }
    set32(c.r[23], c.r[23].w[0] - 72u);
    c.budget -= 1;
L_001A23F8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001A2444; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_001A241C; } }
    set32(c.r[22], c.r[22].w[0] - 72u);
    c.budget -= 1;
L_001A241C:
    st32((c.r[29].w[0] + 276u), c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 236u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A243Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A243Cu) [[unlikely]] return; }
L_001A243C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2464; } }
L_001A2444:
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 30917u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2464u);  if (depth < kMaxDepth) unit_0027(c, 88u, depth + 1u); else { c.pc = 0x0019D720u; return; } if (c.pc != 0x001A2464u) [[unlikely]] return; }
L_001A2464:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001A2480; } }
    set32(c.r[21], c.r[21].w[0] - 72u);
    c.budget -= 1;
L_001A2480:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001A2598; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30972u)));
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A24A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A24A8u) [[unlikely]] return; }
L_001A24A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2574; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A24CC; } }
    set32(c.r[20], c.r[20].w[0] - 72u);
    c.budget -= 1;
L_001A24CC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A2530; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A24F0; } }
    set32(c.r[19], c.r[19].w[0] - 72u);
    c.budget -= 1;
L_001A24F0:
    st32((c.r[29].w[0] + 252u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2530; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A251C; } }
    set32(c.r[18], c.r[18].w[0] - 72u);
    c.budget -= 1;
L_001A251C:
    st32((c.r[29].w[0] + 244u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2530u);  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x001A2530u) [[unlikely]] return; }
L_001A2530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2574; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A2554; } }
    set32(c.r[17], c.r[17].w[0] - 72u);
    c.budget -= 1;
L_001A2554:
    st32((c.r[29].w[0] + 236u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2574; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2574u);  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x001A2574u) [[unlikely]] return; }
L_001A2574:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A2584; } }
    set32(c.r[16], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_001A2584:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2598u);  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x001A2598u) [[unlikely]] return; }
L_001A2598:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 272u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A261C; } }
L_001A25B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 276u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[3], c.r[30].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2618; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2618u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A2618u) [[unlikely]] return; }
L_001A2618:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_001A261C:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A25B8u | kUnwind; return; } goto L_001A25B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[2].w[0] + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A266Cu);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x001A266Cu) [[unlikely]] return; }
L_001A266C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2700; } }
L_001A2674:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2680u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x001A2680u) [[unlikely]] return; }
L_001A2680:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2698u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A2698u) [[unlikely]] return; }
L_001A2698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A26F4; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26ACu);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x001A26ACu) [[unlikely]] return; }
L_001A26AC:
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A26D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A26D8u) [[unlikely]] return; }
L_001A26D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A26ECu);  if (depth < kMaxDepth) unit_0028(c, 167u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x001A26ECu) [[unlikely]] return; }
L_001A26EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2700; } }
L_001A26F4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2700u);  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A2920u; return; } if (c.pc != 0x001A2700u) [[unlikely]] return; }
L_001A2700:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A270Cu);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x001A270Cu) [[unlikely]] return; }
L_001A270C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2674u | kUnwind; return; } goto L_001A2674; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2724u);  if (depth < kMaxDepth) unit_0011(c, 198u, depth + 1u); else { c.pc = 0x00145A60u; return; } if (c.pc != 0x001A2724u) [[unlikely]] return; }
L_001A2724:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 264u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A27B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 264u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A27B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 264u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A27B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 264u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A27B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 276u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A27B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 276u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A27B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27B0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001A27B0u) [[unlikely]] return; }
L_001A27B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[2].w[0] + 204u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27C4u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x001A27C4u) [[unlikely]] return; }
L_001A27C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 132u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A27F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16880u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[2].w[0] + 132u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A27F8u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x001A27F8u) [[unlikely]] return; }
L_001A27F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A280Cu);  if (depth < kMaxDepth) unit_002A(c, 28u, depth + 1u); else { c.pc = 0x001A83E0u; return; } if (c.pc != 0x001A280Cu) [[unlikely]] return; }
L_001A280C:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 52u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2850; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26440u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 56u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2850; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], c.r[2].w[0] + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2850u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A2850u) [[unlikely]] return; }
L_001A2850:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2870; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26416u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 4;
L_001A2870:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A289C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17136u);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A289Cu);  if (depth < kMaxDepth) unit_0026(c, 145u, depth + 1u); else { c.pc = 0x00199BA0u; return; } if (c.pc != 0x001A289Cu) [[unlikely]] return; }
L_001A289C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A28BC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A28BCu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001A28BCu) [[unlikely]] return; }
L_001A28BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2900:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 12u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2954; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2968; } }
L_001A2954:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 5;
L_001A2968:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A2988; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 4;
L_001A2988:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A29A8; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 2;
L_001A29A8:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A29C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2A18; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
L_001A2A18:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2A30; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 3;
L_001A2A30:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001A2A4C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 3;
L_001A2A4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A2A68; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_001A2A68:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2AC0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[7].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B14u);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x00199E90u; return; } if (c.pc != 0x001A2B14u) [[unlikely]] return; }
L_001A2B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17136u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26416u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[30], c.r[2].w[0] + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26440u);
    st32((c.r[30].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[30].w[0] + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B50u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001A2B50u) [[unlikely]] return; }
L_001A2B50:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B60u);  if (depth < kMaxDepth) unit_002A(c, 30u, depth + 1u); else { c.pc = 0x001A8460u; return; } if (c.pc != 0x001A2B60u) [[unlikely]] return; }
L_001A2B60:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[23], c.r[2].w[0] + 132u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2B7Cu);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x001A2B7Cu) [[unlikely]] return; }
L_001A2B7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16880u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17104u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17080u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17048u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17036u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17012u);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[2].w[0] + 204u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2BF0u);  if (depth < kMaxDepth) unit_000D(c, 9u, depth + 1u); else { c.pc = 0x00134090u; return; } if (c.pc != 0x001A2BF0u) [[unlikely]] return; }
L_001A2BF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 264u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[16], 0u - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A2C4C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C18u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x001A2C18u) [[unlikely]] return; }
L_001A2C18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A2C34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C30u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001A2C30u) [[unlikely]] return; }
L_001A2C30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A2C34:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A2C4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2C48u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x001A2C48u) [[unlikely]] return; }
L_001A2C48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A2C4C:
    st32((c.r[29].w[0] + 184u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 192u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 192u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0] + 196u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] + 264u);
    set32(c.r[6], c.r[28].w[0] - 30860u);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2D18u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x00114C70u; return; } if (c.pc != 0x001A2D18u) [[unlikely]] return; }
L_001A2D18:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2D58; } }
L_001A2D24:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 276u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[2].w[0]), 0u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 13;
L_001A2D58:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2D24u | kUnwind; return; } goto L_001A2D24; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[3].d[0] = c.r[2].d[0] >> 63;
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A2E3C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2DD4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2DD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A2DD4u) [[unlikely]] return; }
L_001A2DD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A2DF0; } }
    set32(c.r[20], c.r[20].w[0] - 72u);
    c.budget -= 1;
L_001A2DF0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001A2E3C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001A2E14; } }
    set32(c.r[19], c.r[19].w[0] - 72u);
    c.budget -= 1;
L_001A2E14:
    st32((c.r[29].w[0] + 160u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[5].d[0] = c.r[2].d[0] >> 63;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A2E3Cu) [[unlikely]] return; }
L_001A2E3C:
    set32(c.r[18], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A2E4C; } }
    set32(c.r[18], c.r[18].w[0] + 132u);
    c.budget -= 1;
L_001A2E4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], c.r[2].w[0] + 72u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2E68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A2E68u) [[unlikely]] return; }
L_001A2E68:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2EA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A2EFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16880u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2EDCu);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x001A2EDCu) [[unlikely]] return; }
L_001A2EDC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A2EFC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2EFCu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001A2EFCu) [[unlikely]] return; }
L_001A2EFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A2F3C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2F40; } }
L_001A2F3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A2F40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 30944u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A2F74u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001A2F74u) [[unlikely]] return; }
L_001A2F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A2F88; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A2F8C; } }
L_001A2F88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A2F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A2FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3000:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2330u | kUnwind; return; } goto L_001A2330; }
L_001A3010:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2330u | kUnwind; return; } goto L_001A2330; }
L_001A3020:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2330u | kUnwind; return; } goto L_001A2330; }
L_001A3030:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2330u | kUnwind; return; } goto L_001A2330; }
L_001A3040:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 128u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3278; } }
L_001A3078:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3124; } }
L_001A3084:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A30F8; } }
L_001A30C8:
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A30F4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A30F4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001A30F4u) [[unlikely]] return; }
L_001A30F4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001A30F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A30C8u | kUnwind; return; } goto L_001A30C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3120; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3120u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001A3120u) [[unlikely]] return; }
L_001A3120:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001A3124:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 200u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3084u | kUnwind; return; } goto L_001A3084; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A31A0; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 204u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31A0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001A31A0u) [[unlikely]] return; }
L_001A31A0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A31F8; } }
L_001A31AC:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 196u)));
    set32(c.r[22], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[22].w[0] + 64u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A31F4; } }
    set32(c.r[4], ld32((c.r[22].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A31F4u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001A31F4u) [[unlikely]] return; }
L_001A31F4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001A31F8:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A31ACu | kUnwind; return; } goto L_001A31AC; } }
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A3274; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3274u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001A3274u) [[unlikely]] return; }
L_001A3274:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A3278:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3078u | kUnwind; return; } goto L_001A3078; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A32A0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A32A0u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001A32A0u) [[unlikely]] return; }
L_001A32A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A32D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 30656u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A32F0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[6].w[0] - 5872u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 17;
L_001A3334:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3334u | kUnwind; return; } goto L_001A3334; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 223u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 223u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A33A8; } }
    set32(c.r[30], ld32((c.r[29].w[0] + 240u)));
    c.r[3].d[0] = ld8((c.r[30].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.r[23].d[0] = c.r[3].d[0] & 255ull;
    c.r[18].d[0] = c.r[23].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A33B4; } }
L_001A33A8:
    set32(c.r[22], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[19], c.r[22].w[0] + 4u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
L_001A33B4:
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001A3470; } }
    st32((c.r[29].w[0] + 216u), 0u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 240u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 216u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A33DCu);  if (depth < kMaxDepth) unit_000F(c, 294u, depth + 1u); else { c.pc = 0x0013EE80u; return; } if (c.pc != 0x001A33DCu) [[unlikely]] return; }
L_001A33DC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A344C; } }
L_001A33E8:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 5840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3410u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A3410u) [[unlikely]] return; }
L_001A3410:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001A3448; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3440u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A3440u) [[unlikely]] return; }
L_001A3440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A34D8; } }
L_001A3448:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A344C:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A33E8u | kUnwind; return; } goto L_001A33E8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3468u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A3468u) [[unlikely]] return; }
L_001A3468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A34D8; } }
L_001A3470:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A34CC; } }
L_001A347C:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A34C8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 5840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A34C0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001A34C0u) [[unlikely]] return; }
L_001A34C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A34D8; } }
L_001A34C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001A34CC:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A347Cu | kUnwind; return; } goto L_001A347C; } }
L_001A34D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3510:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    set32(c.r[30], c.r[29].w[0] + 160u);
    set32(c.r[16], 0u - 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 20;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A35A0; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A356Cu);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x001A356Cu) [[unlikely]] return; }
L_001A356C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A3588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3584u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x001A3584u) [[unlikely]] return; }
L_001A3584:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A3588:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A35A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A359Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x001A359Cu) [[unlikely]] return; }
L_001A359C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A35A0:
    st32((c.r[29].w[0] + 284u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[30].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[20], c.r[2].w[0] + 20u);
    st32((c.r[29].w[0] + 280u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 303u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 303u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A362C; } }
    st32((c.r[29].w[0] + 276u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3644; } }
L_001A362C:
    st32((c.r[29].w[0] + 268u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_001A3644:
    st32((c.r[29].w[0] + 260u), c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3664u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x001A3664u) [[unlikely]] return; }
L_001A3664:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[29].w[0] + 248u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 302u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 302u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A36C4; } }
    st32((c.r[29].w[0] + 244u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A36DC; } }
L_001A36C4:
    st32((c.r[29].w[0] + 236u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_001A36DC:
    st32((c.r[29].w[0] + 228u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A36F4u);  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003B6890u; return; } if (c.pc != 0x001A36F4u) [[unlikely]] return; }
L_001A36F4:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[29].w[0] + 216u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 301u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 301u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3758; } }
    st32((c.r[29].w[0] + 212u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3770; } }
L_001A3758:
    st32((c.r[29].w[0] + 204u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_001A3770:
    st32((c.r[29].w[0] + 196u), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3788u);  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003B6890u; return; } if (c.pc != 0x001A3788u) [[unlikely]] return; }
L_001A3788:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A37B4u);  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x001A37B4u) [[unlikely]] return; }
L_001A37B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A37F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 30532u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3814u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A3814u) [[unlikely]] return; }
L_001A3814:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], c.r[2].w[0] + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3834u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x001A3834u) [[unlikely]] return; }
L_001A3834:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3844u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A3844u) [[unlikely]] return; }
L_001A3844:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001A3894; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A38B0; } }
L_001A3894:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 28u);
    set32(c.r[5], c.r[2].w[0] + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38ACu);  if (depth < kMaxDepth) unit_0028(c, 208u, depth + 1u); else { c.pc = 0x001A32F0u; return; } if (c.pc != 0x001A38ACu) [[unlikely]] return; }
L_001A38AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 1;
L_001A38B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A38C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 30524u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A38E8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A38E8u) [[unlikely]] return; }
L_001A38E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001A3900; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3904; } }
L_001A3900:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A398C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16864u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16852u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A396Cu);  if (depth < kMaxDepth) unit_002C(c, 128u, depth + 1u); else { c.pc = 0x001B2590u; return; } if (c.pc != 0x001A396Cu) [[unlikely]] return; }
L_001A396C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A398C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A398Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001A398Cu) [[unlikely]] return; }
L_001A398C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A39A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 30516u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A39C8u);  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B2660u; return; } if (c.pc != 0x001A39C8u) [[unlikely]] return; }
L_001A39C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16864u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16852u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30856u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A3A30; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3A40; } }
L_001A3A30:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A40u);  if (depth < kMaxDepth) unit_002C(c, 133u, depth + 1u); else { c.pc = 0x001B26F0u; return; } if (c.pc != 0x001A3A40u) [[unlikely]] return; }
L_001A3A40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 30688u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3A84u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001A3A84u) [[unlikely]] return; }
L_001A3A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3A98; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3AA8; } }
L_001A3A98:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3AA8u);  if (depth < kMaxDepth) unit_002C(c, 134u, depth + 1u); else { c.pc = 0x001B2730u; return; } if (c.pc != 0x001A3AA8u) [[unlikely]] return; }
L_001A3AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30840u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001A3AE8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3AEC; } }
L_001A3AE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3AEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3B00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30856u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001A3B30; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3B58; } }
L_001A3B30:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3B40u);  if (depth < kMaxDepth) unit_002C(c, 137u, depth + 1u); else { c.pc = 0x001B27C0u; return; } if (c.pc != 0x001A3B40u) [[unlikely]] return; }
L_001A3B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3B54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3B58; } }
L_001A3B54:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001A3B58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30856u)));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3B90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3A60u | kUnwind; return; } goto L_001A3A60; }
L_001A3BA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3A00u | kUnwind; return; } goto L_001A3A00; }
L_001A3BB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3AC0u | kUnwind; return; } goto L_001A3AC0; }
L_001A3BC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3B00u | kUnwind; return; } goto L_001A3B00; }
L_001A3BD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3B70u | kUnwind; return; } goto L_001A3B70; }
L_001A3BE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A3920u | kUnwind; return; } goto L_001A3920; }
L_001A3BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 30392u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 81u));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3C70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[28].w[0] - 28808u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3C9Cu);  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x001A3C9Cu) [[unlikely]] return; }
L_001A3C9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001A3CC0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3CC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A3CC0u) [[unlikely]] return; }
L_001A3CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[3].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3D10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 83u));
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A3D98; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 76u)));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 83u));
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A3D90; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 83u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3D90u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x001A3D90u) [[unlikely]] return; }
L_001A3D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3DCC; } }
L_001A3D98:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 80u));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st8((c.r[2].w[0] + 83u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 83u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3DCCu);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x001A3DCCu) [[unlikely]] return; }
L_001A3DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3DF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 76u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3E38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A3E38u) [[unlikely]] return; }
L_001A3E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3ECC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3E60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A3E60u) [[unlikely]] return; }
L_001A3E60:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A3E98; } }
    set32(c.r[20], c.r[29].w[0] + 145u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3EA0; } }
L_001A3E98:
    set32(c.r[17], c.r[29].w[0] + 152u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_001A3EA0:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[28].w[0] - 28808u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3EBCu);  if (depth < kMaxDepth) unit_0027(c, 88u, depth + 1u); else { c.pc = 0x0019D720u; return; } if (c.pc != 0x001A3EBCu) [[unlikely]] return; }
L_001A3EBC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3ECCu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A3ECCu) [[unlikely]] return; }
L_001A3ECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A3F00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A3F2Cu) [[unlikely]] return; }
L_001A3F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 83u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A3F98; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 83u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A3FC8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 83u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3F90u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x001A3F90u) [[unlikely]] return; }
L_001A3F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A3FC8; } }
L_001A3F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st8((c.r[2].w[0] + 83u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 83u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3FC8u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x001A3FC8u) [[unlikely]] return; }
L_001A3FC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A3FE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A3FE8u) [[unlikely]] return; }
L_001A3FE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    [[clang::musttail]] return unit_0029(c, 1u, depth);
}

}
