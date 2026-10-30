#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0005[4096] = {
    1, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0005(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00114000;
    case 2u: goto L_00114014;
    case 3u: goto L_00114018;
    case 4u: goto L_0011403C;
    case 5u: goto L_00114040;
    case 6u: goto L_00114080;
    case 7u: goto L_00114090;
    case 8u: goto L_001140A8;
    case 9u: goto L_001140C0;
    case 10u: goto L_001140F4;
    case 11u: goto L_001140FC;
    case 12u: goto L_0011412C;
    case 13u: goto L_00114160;
    case 14u: goto L_00114178;
    case 15u: goto L_0011419C;
    case 16u: goto L_001141D0;
    case 17u: goto L_00114218;
    case 18u: goto L_0011422C;
    case 19u: goto L_00114238;
    case 20u: goto L_00114244;
    case 21u: goto L_0011424C;
    case 22u: goto L_0011425C;
    case 23u: goto L_0011427C;
    case 24u: goto L_00114290;
    case 25u: goto L_0011429C;
    case 26u: goto L_001142A8;
    case 27u: goto L_001142B0;
    case 28u: goto L_001142C0;
    case 29u: goto L_001142CC;
    case 30u: goto L_001142D8;
    case 31u: goto L_001142E0;
    case 32u: goto L_001142F0;
    case 33u: goto L_0011431C;
    case 34u: goto L_00114330;
    case 35u: goto L_0011433C;
    case 36u: goto L_00114348;
    case 37u: goto L_00114350;
    case 38u: goto L_00114360;
    case 39u: goto L_00114380;
    case 40u: goto L_00114394;
    case 41u: goto L_001143A0;
    case 42u: goto L_001143AC;
    case 43u: goto L_001143B4;
    case 44u: goto L_001143C4;
    case 45u: goto L_001143D0;
    case 46u: goto L_001143DC;
    case 47u: goto L_001143E4;
    case 48u: goto L_001143F4;
    case 49u: goto L_00114434;
    case 50u: goto L_0011443C;
    case 51u: goto L_00114444;
    case 52u: goto L_00114460;
    case 53u: goto L_00114474;
    case 54u: goto L_00114480;
    case 55u: goto L_00114490;
    case 56u: goto L_001144D0;
    case 57u: goto L_001144E0;
    case 58u: goto L_001144F0;
    case 59u: goto L_00114510;
    case 60u: goto L_00114530;
    case 61u: goto L_00114560;
    case 62u: goto L_00114624;
    case 63u: goto L_00114660;
    case 64u: goto L_001146BC;
    case 65u: goto L_001146C4;
    case 66u: goto L_001146D0;
    case 67u: goto L_001146EC;
    case 68u: goto L_00114734;
    case 69u: goto L_00114770;
    case 70u: goto L_00114794;
    case 71u: goto L_0011481C;
    case 72u: goto L_00114840;
    case 73u: goto L_00114868;
    case 74u: goto L_00114880;
    case 75u: goto L_001148C0;
    case 76u: goto L_001148E0;
    case 77u: goto L_00114900;
    case 78u: goto L_0011492C;
    case 79u: goto L_00114980;
    case 80u: goto L_00114A00;
    case 81u: goto L_00114A80;
    case 82u: goto L_00114A90;
    case 83u: goto L_00114AA0;
    case 84u: goto L_00114AE0;
    case 85u: goto L_00114BF0;
    case 86u: goto L_00114C40;
    case 87u: goto L_00114C58;
    case 88u: goto L_00114C70;
    case 89u: goto L_00114CA0;
    case 90u: goto L_00114CD0;
    case 91u: goto L_00114CE0;
    case 92u: goto L_00114D24;
    case 93u: goto L_00114D70;
    case 94u: goto L_00114DD8;
    case 95u: goto L_00114EBC;
    case 96u: goto L_00115000;
    case 97u: goto L_0011507C;
    case 98u: goto L_00115080;
    case 99u: goto L_001150A0;
    case 100u: goto L_00115120;
    case 101u: goto L_00115154;
    case 102u: goto L_001151E4;
    case 103u: goto L_001151EC;
    case 104u: goto L_00115200;
    case 105u: goto L_00115238;
    case 106u: goto L_0011524C;
    case 107u: goto L_00115260;
    case 108u: goto L_00115284;
    case 109u: goto L_0011529C;
    case 110u: goto L_001152B4;
    case 111u: goto L_001152D8;
    case 112u: goto L_001152E4;
    case 113u: goto L_001152EC;
    case 114u: goto L_00115314;
    case 115u: goto L_00115330;
    case 116u: goto L_00115350;
    case 117u: goto L_001153B0;
    case 118u: goto L_001153B8;
    case 119u: goto L_00115410;
    case 120u: goto L_00115498;
    case 121u: goto L_0011553C;
    case 122u: goto L_00115600;
    case 123u: goto L_00115670;
    case 124u: goto L_00115700;
    case 125u: goto L_0011573C;
    case 126u: goto L_00115768;
    case 127u: goto L_001157F0;
    case 128u: goto L_0011583C;
    case 129u: goto L_00115874;
    case 130u: goto L_0011594C;
    case 131u: goto L_00115968;
    case 132u: goto L_00115980;
    case 133u: goto L_00115990;
    case 134u: goto L_001159E0;
    case 135u: goto L_00115A0C;
    case 136u: goto L_00115AE4;
    case 137u: goto L_00115B00;
    case 138u: goto L_00115B20;
    case 139u: goto L_00115B44;
    case 140u: goto L_00115B60;
    case 141u: goto L_00115B78;
    case 142u: goto L_00115B90;
    case 143u: goto L_00115BA0;
    case 144u: goto L_00115BC8;
    case 145u: goto L_00115CB0;
    case 146u: goto L_00115DD0;
    case 147u: goto L_00115E2C;
    case 148u: goto L_00115FB0;
    case 149u: goto L_00115FCC;
    case 150u: goto L_00116080;
    case 151u: goto L_001160AC;
    case 152u: goto L_00116360;
    case 153u: goto L_001163A0;
    case 154u: goto L_001163AC;
    case 155u: goto L_0011649C;
    case 156u: goto L_001164D4;
    case 157u: goto L_001164E8;
    case 158u: goto L_0011650C;
    case 159u: goto L_00116524;
    case 160u: goto L_00116528;
    case 161u: goto L_00116754;
    case 162u: goto L_0011676C;
    case 163u: goto L_00116770;
    case 164u: goto L_0011683C;
    case 165u: goto L_00116990;
    case 166u: goto L_001169C0;
    case 167u: goto L_001169E4;
    case 168u: goto L_00116A68;
    case 169u: goto L_00116CCC;
    case 170u: goto L_00116DF0;
    case 171u: goto L_00116E00;
    case 172u: goto L_00116E80;
    case 173u: goto L_00116ED0;
    case 174u: goto L_00116EF0;
    case 175u: goto L_00116F10;
    case 176u: goto L_00116F30;
    case 177u: goto L_00116F5C;
    case 178u: goto L_00116F6C;
    case 179u: goto L_00116F9C;
    case 180u: goto L_00116FC4;
    case 181u: goto L_00116FE0;
    case 182u: goto L_00117018;
    case 183u: goto L_00117030;
    case 184u: goto L_0011703C;
    case 185u: goto L_00117044;
    case 186u: goto L_00117074;
    case 187u: goto L_00117080;
    case 188u: goto L_00117094;
    case 189u: goto L_001170B4;
    case 190u: goto L_001170C0;
    case 191u: goto L_001170DC;
    case 192u: goto L_001170F0;
    case 193u: goto L_00117114;
    case 194u: goto L_0011713C;
    case 195u: goto L_00117150;
    case 196u: goto L_0011719C;
    case 197u: goto L_001171B0;
    case 198u: goto L_001171D0;
    case 199u: goto L_001171DC;
    case 200u: goto L_001171F0;
    case 201u: goto L_00117214;
    case 202u: goto L_00117228;
    case 203u: goto L_00117240;
    case 204u: goto L_00117250;
    case 205u: goto L_00117260;
    case 206u: goto L_00117270;
    case 207u: goto L_001172BC;
    case 208u: goto L_001172D0;
    case 209u: goto L_001172F0;
    case 210u: goto L_001172FC;
    case 211u: goto L_00117310;
    case 212u: goto L_00117334;
    case 213u: goto L_00117348;
    case 214u: goto L_00117360;
    case 215u: goto L_00117370;
    case 216u: goto L_00117390;
    case 217u: goto L_00117398;
    case 218u: goto L_001173B0;
    case 219u: goto L_001173C0;
    case 220u: goto L_001173D0;
    case 221u: goto L_00117414;
    case 222u: goto L_00117420;
    case 223u: goto L_00117428;
    case 224u: goto L_0011744C;
    case 225u: goto L_00117454;
    case 226u: goto L_0011746C;
    case 227u: goto L_00117480;
    case 228u: goto L_001174C8;
    case 229u: goto L_001174E8;
    case 230u: goto L_001174F0;
    case 231u: goto L_00117504;
    case 232u: goto L_00117520;
    case 233u: goto L_00117538;
    case 234u: goto L_00117554;
    case 235u: goto L_00117564;
    case 236u: goto L_0011757C;
    case 237u: goto L_00117598;
    case 238u: goto L_001175A8;
    case 239u: goto L_001175C0;
    case 240u: goto L_001175D8;
    case 241u: goto L_001175F4;
    case 242u: goto L_00117608;
    case 243u: goto L_00117624;
    case 244u: goto L_00117630;
    case 245u: goto L_0011763C;
    case 246u: goto L_00117648;
    case 247u: goto L_00117670;
    case 248u: goto L_00117680;
    case 249u: goto L_001176A8;
    case 250u: goto L_001176B8;
    case 251u: goto L_001176F0;
    case 252u: goto L_00117730;
    case 253u: goto L_00117740;
    case 254u: goto L_00117770;
    case 255u: goto L_00117780;
    case 256u: goto L_001177A0;
    case 257u: goto L_001177C0;
    case 258u: goto L_001177F0;
    case 259u: goto L_00117814;
    case 260u: goto L_00117838;
    case 261u: goto L_0011783C;
    case 262u: goto L_00117868;
    case 263u: goto L_00117880;
    case 264u: goto L_00117894;
    case 265u: goto L_001178F0;
    case 266u: goto L_00117900;
    case 267u: goto L_0011791C;
    case 268u: goto L_00117950;
    case 269u: goto L_0011796C;
    case 270u: goto L_00117980;
    case 271u: goto L_001179D8;
    case 272u: goto L_00117A18;
    case 273u: goto L_00117A6C;
    case 274u: goto L_00117A8C;
    case 275u: goto L_00117AA4;
    case 276u: goto L_00117AC0;
    case 277u: goto L_00117AD0;
    case 278u: goto L_00117AF4;
    case 279u: goto L_00117B0C;
    case 280u: goto L_00117B2C;
    case 281u: goto L_00117B78;
    case 282u: goto L_00117BC0;
    case 283u: goto L_00117C10;
    case 284u: goto L_00117C64;
    case 285u: goto L_00117C88;
    case 286u: goto L_00117C94;
    case 287u: goto L_00117CA8;
    case 288u: goto L_00117CBC;
    case 289u: goto L_00117D00;
    case 290u: goto L_00117D28;
    case 291u: goto L_00117D3C;
    case 292u: goto L_00117D58;
    case 293u: goto L_00117DE0;
    case 294u: goto L_00117E10;
    case 295u: goto L_00117E3C;
    case 296u: goto L_00117E44;
    case 297u: goto L_00117E54;
    case 298u: goto L_00117E80;
    case 299u: goto L_00117E90;
    case 300u: goto L_00117EC4;
    case 301u: goto L_00117EF0;
    case 302u: goto L_00117F00;
    case 303u: goto L_00117F10;
    case 304u: goto L_00117F20;
    case 305u: goto L_00117F44;
    case 306u: goto L_00117FAC;
    case 307u: goto L_00117FC0;
    case 308u: goto L_00117FCC;
    default: bad_entry(c, 0x00114000u); return;
    }
L_00114000:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00114014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114014u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00114014u) [[unlikely]] return; }
L_00114014:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00114018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0011403C:
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_00114040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001140A8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00114094; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00114090; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00114090; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00114080:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00114090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114090u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00114090u) [[unlikely]] return; }
L_00114090:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00114094:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001140AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001140A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001140A8u) [[unlikely]] return; }
L_001140A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001140AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001140C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_0011410C; } }
L_001140F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001140FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x001140FCu) [[unlikely]] return; }
L_001140FC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_0011410C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0011410C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001140F4u | kUnwind; return; } goto L_001140F4; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_00114138; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011412Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0011412Cu) [[unlikely]] return; }
L_0011412C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_0011413C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_00114138:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0011413C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00114160:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0])));  goto L_001141A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0])));  if (t) { goto L_00114180; } }
L_00114178:
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 2;
L_00114180:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114178u | kUnwind; return; } goto L_00114178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001141BC; } }
L_0011419C:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_001141A0:
    set32(c.r[3], 0u - 2u);
    set32(c.r[5], ld32((c.r[6].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[6].d[0] != c.r[3].d[0]) { st32((c.r[4].w[0]), c.r[5].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011419Cu | kUnwind; return; } goto L_0011419C; }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001141BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001141D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001142F0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00114260; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0011421C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114218u);  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x00114218u) [[unlikely]] return; }
L_00114218:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0011421C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00114230; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011422Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x0011422Cu) [[unlikely]] return; }
L_0011422C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00114230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114238u);  if (depth < kMaxDepth) unit_0005(c, 57u, depth + 1u); else { c.pc = 0x001144E0u; return; } if (c.pc != 0x00114238u) [[unlikely]] return; }
L_00114238:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114244u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00114490u; return; } if (c.pc != 0x00114244u) [[unlikely]] return; }
L_00114244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011424Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 54u, depth + 1u); else { c.pc = 0x00114480u; return; } if (c.pc != 0x0011424Cu) [[unlikely]] return; }
L_0011424C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011425Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 52u, depth + 1u); else { c.pc = 0x00114460u; return; } if (c.pc != 0x0011425Cu) [[unlikely]] return; }
L_0011425C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00114260:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001142C4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00114280; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011427Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x0011427Cu) [[unlikely]] return; }
L_0011427C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00114280:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00114294; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x00114290u) [[unlikely]] return; }
L_00114290:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00114294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011429Cu);  if (depth < kMaxDepth) unit_0005(c, 57u, depth + 1u); else { c.pc = 0x001144E0u; return; } if (c.pc != 0x0011429Cu) [[unlikely]] return; }
L_0011429C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142A8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00114490u; return; } if (c.pc != 0x001142A8u) [[unlikely]] return; }
L_001142A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 54u, depth + 1u); else { c.pc = 0x00114480u; return; } if (c.pc != 0x001142B0u) [[unlikely]] return; }
L_001142B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 52u, depth + 1u); else { c.pc = 0x00114460u; return; } if (c.pc != 0x001142C0u) [[unlikely]] return; }
L_001142C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001142C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142CCu);  if (depth < kMaxDepth) unit_0005(c, 57u, depth + 1u); else { c.pc = 0x001144E0u; return; } if (c.pc != 0x001142CCu) [[unlikely]] return; }
L_001142CC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0005(c, 5u, depth + 1u); else { c.pc = 0x00114040u; return; } if (c.pc != 0x001142D8u) [[unlikely]] return; }
L_001142D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 54u, depth + 1u); else { c.pc = 0x00114480u; return; } if (c.pc != 0x001142E0u) [[unlikely]] return; }
L_001142E0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_001142F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001142F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001142F0u) [[unlikely]] return; }
L_001142F0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_001142F4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_001143F8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00114364; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00114320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011431Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x0011431Cu) [[unlikely]] return; }
L_0011431C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00114320:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00114334; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x00114330u) [[unlikely]] return; }
L_00114330:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00114334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011433Cu);  if (depth < kMaxDepth) unit_0005(c, 57u, depth + 1u); else { c.pc = 0x001144E0u; return; } if (c.pc != 0x0011433Cu) [[unlikely]] return; }
L_0011433C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114348u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00114490u; return; } if (c.pc != 0x00114348u) [[unlikely]] return; }
L_00114348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114350u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 54u, depth + 1u); else { c.pc = 0x00114480u; return; } if (c.pc != 0x00114350u) [[unlikely]] return; }
L_00114350:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114360u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 52u, depth + 1u); else { c.pc = 0x00114460u; return; } if (c.pc != 0x00114360u) [[unlikely]] return; }
L_00114360:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00114364:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001143C8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00114384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114380u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x00114380u) [[unlikely]] return; }
L_00114380:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00114384:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00114398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114394u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x00114394u) [[unlikely]] return; }
L_00114394:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00114398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143A0u);  if (depth < kMaxDepth) unit_0005(c, 57u, depth + 1u); else { c.pc = 0x001144E0u; return; } if (c.pc != 0x001143A0u) [[unlikely]] return; }
L_001143A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143ACu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 55u, depth + 1u); else { c.pc = 0x00114490u; return; } if (c.pc != 0x001143ACu) [[unlikely]] return; }
L_001143AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 54u, depth + 1u); else { c.pc = 0x00114480u; return; } if (c.pc != 0x001143B4u) [[unlikely]] return; }
L_001143B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0005(c, 52u, depth + 1u); else { c.pc = 0x00114460u; return; } if (c.pc != 0x001143C4u) [[unlikely]] return; }
L_001143C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001143C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143D0u);  if (depth < kMaxDepth) unit_0005(c, 57u, depth + 1u); else { c.pc = 0x001144E0u; return; } if (c.pc != 0x001143D0u) [[unlikely]] return; }
L_001143D0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0005(c, 5u, depth + 1u); else { c.pc = 0x00114040u; return; } if (c.pc != 0x001143DCu) [[unlikely]] return; }
L_001143DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 54u, depth + 1u); else { c.pc = 0x00114480u; return; } if (c.pc != 0x001143E4u) [[unlikely]] return; }
L_001143E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001143F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001143F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001143F4u) [[unlikely]] return; }
L_001143F4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_001143F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00114434; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00114434; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00114434; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00114434; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00114434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114434u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00114434u) [[unlikely]] return; }
L_00114434:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00114448; }
L_0011443C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114444u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00114444u) [[unlikely]] return; }
L_00114444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00114448:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00114460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00114474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114474u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00114474u) [[unlikely]] return; }
L_00114474:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00114480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00114490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001144D0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001144D4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001144D0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001144D0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001144D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001144D0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001144D0u) [[unlikely]] return; }
L_001144D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001144D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001144E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001144F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00114520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114510u);  if (depth < kMaxDepth) unit_0005(c, 16u, depth + 1u); else { c.pc = 0x001141D0u; return; } if (c.pc != 0x00114510u) [[unlikely]] return; }
L_00114510:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_00114520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00114530:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00114560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[5].w[0] + 8u)));  goto L_0011458C; }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_00114590; } }
L_0011458C:
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_00114590:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_001145A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_001145B0; } }
L_001145A8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_001145B0:
    st32((c.r[29].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  goto L_001145DC; }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_001145E0; } }
L_001145DC:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_001145E0:
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001145F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 28u);  if (t) { goto L_001145F8; } }
L_001145F4:
    set32(c.r[2], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_001145F8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00114610; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 24u);  if (t) { goto L_00114614; } }
L_00114610:
    set32(c.r[2], c.r[29].w[0] + 20u);
    c.budget -= 1;
L_00114614:
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114624u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x00114624u) [[unlikely]] return; }
L_00114624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00114654; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00114648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00114654; } }
L_00114648:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00114654; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00114654:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00114660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001146C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001146BCu); set32(c.r[5], c.r[5].w[0] - 13206u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001146BCu) [[unlikely]] return; }
L_001146BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001146C4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001146C4u) [[unlikely]] return; }
L_001146C4:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001146D0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x001146D0u) [[unlikely]] return; }
L_001146D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_001146F8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001146ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x001146ECu) [[unlikely]] return; }
L_001146EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_001146F8:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00114718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_0011471C; } }
L_00114718:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0011471C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114734u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x00114734u) [[unlikely]] return; }
L_00114734:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00114744; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00114744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00114770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0011492C; } }
L_00114794:
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[7].d[0];  if (t) { goto L_00114870; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_00114808; }
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00114804; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0011492C; } }
L_00114804:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_00114808:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_00114820; }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011481Cu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0005(c, 80u, depth + 1u); else { c.pc = 0x00114A00u; return; } if (c.pc != 0x0011481Cu) [[unlikely]] return; }
L_0011481C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00114820:
    set32(c.r[4], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 8;
L_00114840:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114868u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0005(c, 79u, depth + 1u); else { c.pc = 0x00114980u; return; } if (c.pc != 0x00114868u) [[unlikely]] return; }
L_00114868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_00114930; } }
L_00114870:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_001148CC; }
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00114880:
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001148C8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 12;
L_001148C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0011492C; } }
L_001148C8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_001148CC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_001148E4; }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001148E0u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0005(c, 79u, depth + 1u); else { c.pc = 0x00114980u; return; } if (c.pc != 0x001148E0u) [[unlikely]] return; }
L_001148E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001148E4:
    set32(c.r[4], 0u - 2u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
L_00114900:
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011492Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0005(c, 80u, depth + 1u); else { c.pc = 0x00114A00u; return; } if (c.pc != 0x0011492Cu) [[unlikely]] return; }
L_0011492C:
    set32(c.r[6], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_00114930:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[6].w[0] + 8u)));  goto L_00114960; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00114794u | kUnwind; return; } goto L_00114794; }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_00114960:
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00114980:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[7], ld32((c.r[4].w[0])));  if (t) { goto L_00114990; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_00114990:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 8u)));  goto L_001149B8; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 5;
L_001149B8:
    set32(c.r[6], 0u - 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 11;
    if (c.r[4].d[0] != c.r[3].d[0]) { st32((c.r[5].w[0] + 4u), c.r[7].w[0]);  goto L_001149E8; }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_001149E8:
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_00114A00:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[7], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00114A10; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_00114A10:
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 8u)));  goto L_00114A38; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 5;
L_00114A38:
    set32(c.r[6], 0u - 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 11;
    if (c.r[4].d[0] != c.r[3].d[0]) { st32((c.r[5].w[0] + 4u), c.r[7].w[0]);  goto L_00114A68; }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_00114A68:
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_00114A80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00113710u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 311u, depth); }
L_00114A90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00113D70u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 365u, depth); }
L_00114AA0:
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_00114AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.f[9] = 0u;
    st32((c.r[4].w[0] + 8u), 0u);
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[7] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[8] = fp::sub(c.f[1], c.f[4]);
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[6]);
    c.f[5] = fp::sub(c.f[2], c.f[6]);
    c.facc = fp::mul(c.f[7], c.f[0]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[3]));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[8], c.f[0]));
    c.facc = fp::mul(c.f[8], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[4]));
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 31844u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 38;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = c.f[9];  goto L_00114BA4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[9] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_00114BA8; } }
L_00114BA4:
    c.f[0] = c.f[9];
    c.budget -= 1;
L_00114BA8:
    st32((c.r[4].w[0]), c.f[9]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00114BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00114C58; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00114C44; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00114C40; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00114C40; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00114C40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00114C40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114C40u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00114C40u) [[unlikely]] return; }
L_00114C40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00114C44:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00114C5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114C58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00114C58u) [[unlikely]] return; }
L_00114C58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00114C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00114C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00114CA8; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114CA0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00114CA0u) [[unlikely]] return; }
L_00114CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00114CD4; } }
L_00114CA8:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00114CD0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00114CD0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 91u, depth + 1u); else { c.pc = 0x00114CE0u; return; } if (c.pc != 0x00114CD0u) [[unlikely]] return; }
L_00114CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00114CD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00114CE0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00114CF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00114D64; } }
L_00114CF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00114D10; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00114D10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_00114D44; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00114D34; } }
L_00114D24:
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 4;
L_00114D34:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114D24u | kUnwind; return; } goto L_00114D24; } }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00114D44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_00114D54; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00114D54:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00114D64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00114D70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[6] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[14] = c.r[6].w[0];
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    set32(c.r[8], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = c.r[5].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[11] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[4].w[0];
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.f[10] = c.f[6];  if (t) { goto L_00114FA4; } }
L_00114DD8:
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[4].w[0] + 4u), c.f[6]);
    c.f[21] = ld32((c.r[4].w[0] + 44u));
    c.f[9] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[17] = ld32((c.r[4].w[0] + 52u));
    c.f[26] = fp::sub(c.f[21], c.f[9]);
    c.f[8] = ld32((c.r[4].w[0] + 20u));
    c.f[9] = ld32((c.r[4].w[0] + 28u));
    c.f[7] = ld32((c.r[4].w[0] + 24u));
    c.f[21] = fp::mul(c.f[8], c.f[26]);
    c.f[22] = fp::mul(c.f[7], c.f[26]);
    c.f[23] = fp::mul(c.f[9], c.f[26]);
    c.f[8] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[7] = ld32((c.r[4].w[0] + 68u));
    c.f[9] = fp::mul(c.f[8], c.f[26]);
    c.f[8] = fp::mul(c.f[7], c.f[26]);
    c.facc = fp::mul(c.f[14], c.f[0]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[14], c.f[17]));
    c.f[24] = fp::add(c.f[7], c.f[21]);
    c.f[25] = ld32((c.r[4].w[0] + 72u));
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[27] = fp::mul(c.f[12], c.f[17]);
    c.f[16] = ld32((c.r[4].w[0] + 56u));
    c.facc = fp::mul(c.f[14], c.f[1]);
    c.f[7] = fp::mul(c.f[25], c.f[26]);
    c.f[17] = fp::sub(c.facc, fp::mul(c.f[14], c.f[16]));
    c.f[17] = fp::add(c.f[17], c.f[22]);
    c.f[25] = fp::add(c.f[17], c.f[8]);
    c.f[15] = ld32((c.r[4].w[0] + 60u));
    c.facc = fp::mul(c.f[14], c.f[2]);
    c.f[24] = fp::add(c.f[24], c.f[9]);
    c.f[17] = fp::sub(c.facc, fp::mul(c.f[14], c.f[15]));
    c.f[17] = fp::add(c.f[17], c.f[23]);
    c.f[26] = fp::add(c.f[17], c.f[7]);
    c.f[17] = fp::mul(c.f[12], c.f[15]);
    c.f[15] = fp::mul(c.f[13], c.f[0]);
    c.facc = fp::add(c.f[15], c.f[27]);
    c.f[15] = fp::sub(c.facc, fp::mul(c.f[14], c.f[21]));
    c.f[15] = fp::sub(c.f[15], c.f[9]);
    c.f[16] = fp::mul(c.f[12], c.f[16]);
    c.f[9] = fp::mul(c.f[13], c.f[1]);
    c.facc = fp::add(c.f[9], c.f[16]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[14], c.f[22]));
    c.f[16] = fp::sub(c.f[9], c.f[8]);
    c.f[8] = fp::mul(c.f[13], c.f[2]);
    c.facc = fp::add(c.f[8], c.f[17]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[14], c.f[23]));
    c.f[17] = fp::sub(c.f[8], c.f[7]);
    c.f[5] = c.f[11];
    c.f[4] = c.f[10];
    c.f[3] = c.f[10];
    c.f[18] = c.f[0];
    c.f[19] = c.f[1];
    c.f[20] = c.f[2];
    c.budget -= 57;
L_00114EBC:
    c.f[8] = fp::mul(c.f[24], c.f[3]);
    c.f[7] = fp::mul(c.f[15], c.f[4]);
    c.facc = fp::add(c.f[8], c.f[7]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.f[9] = fp::add(c.f[7], c.f[18]);
    c.f[8] = fp::mul(c.f[25], c.f[3]);
    c.f[7] = fp::mul(c.f[16], c.f[4]);
    c.facc = fp::add(c.f[8], c.f[7]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[22], c.f[5]));
    c.f[8] = fp::add(c.f[7], c.f[19]);
    c.f[7] = fp::mul(c.f[26], c.f[3]);
    c.f[3] = fp::mul(c.f[17], c.f[4]);
    c.facc = fp::add(c.f[7], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[23], c.f[5]));
    c.f[7] = fp::add(c.f[3], c.f[20]);
    c.f[3] = fp::sub(c.f[9], c.f[0]);
    c.f[1] = fp::sub(c.f[8], c.f[1]);
    c.f[0] = fp::sub(c.f[7], c.f[2]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[3] = fp::sqrt(c.f[3]);
    c.r[4].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.f[5] = fp::add(c.f[5], c.f[11]);
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    c.f[6] = fp::add(c.f[6], c.f[3]);
    c.f[3] = fp::mul(c.f[4], c.f[5]);
    c.f[0] = c.f[9];
    c.f[1] = c.f[8];
    c.budget -= 32;
    { const bool t = c.r[4].d[0] != 0ull; c.f[2] = c.f[7];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00114EBCu | kUnwind; return; } goto L_00114EBC; } }
    c.f[1] = fp::mul(c.f[24], c.f[3]);
    c.f[0] = fp::mul(c.f[15], c.f[4]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.f[0] = fp::add(c.f[0], c.f[18]);
    c.f[9] = fp::sub(c.f[0], c.f[9]);
    c.f[2] = fp::mul(c.f[25], c.f[3]);
    c.f[0] = fp::mul(c.f[16], c.f[4]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[26], c.f[3]);
    c.f[0] = fp::mul(c.f[17], c.f[4]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[22], c.f[5]));
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[19]);
    c.f[1] = fp::sub(c.f[0], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[23], c.f[5]));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.f[0], c.f[7]);
    c.facc = fp::mul(c.f[9], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.f[0] = fp::sqrt(c.f[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 44u);
    c.f[6] = fp::add(c.f[6], c.f[0]);
    c.budget -= 26;
L_00114FA4:
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_00114FF0; }
    set32(c.r[4], c.r[4].w[0] + 44u);
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00114DD8u | kUnwind; return; } goto L_00114DD8; }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_00114FF0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.f[6]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00115014; } }
L_00115000:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] + 44u);
    fpu_div(c, 0u, c.f[0], c.f[6]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_00115014:
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_00115060; }
    set32(c.r[4], c.r[4].w[0] + 44u);
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115000u | kUnwind; return; } goto L_00115000; }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_00115060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.f[6]);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_001150AC; } }
L_0011507C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00115080:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[7], c.r[2].w[0] + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001150A0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x001150A0u) [[unlikely]] return; }
L_001150A0:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 44u);
    c.budget -= 3;
L_001150AC:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 15;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011507Cu | kUnwind; return; } goto L_0011507C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00115120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);  if (t) { goto L_0011515C; } }
L_00115154:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[8], c.r[2].w[0] + 44u);
    c.budget -= 2;
L_0011515C:
    c.r[2].d[0] = c.r[8].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[29].w[0] + 32u), c.f[12]);  goto L_00115180; }
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = c.r[8].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115154u | kUnwind; return; } goto L_00115154; }
    st32((c.r[29].w[0] + 32u), c.f[12]);
    c.budget -= 1;
L_00115180:
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[5].d[0] = c.r[8].d[0] << 32;
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[6], 0u + 1u);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001151E4u); set32(c.r[7], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0005(c, 116u, depth + 1u); else { c.pc = 0x00115350u; return; } if (c.pc != 0x001151E4u) [[unlikely]] return; }
L_001151E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001151ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 93u, depth + 1u); else { c.pc = 0x00114D70u; return; } if (c.pc != 0x001151ECu) [[unlikely]] return; }
L_001151EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00115200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00115260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115238u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00115238u) [[unlikely]] return; }
L_00115238:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00115250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011524Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011524Cu) [[unlikely]] return; }
L_0011524C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00115250:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_00115264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115260u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00115260u) [[unlikely]] return; }
L_00115260:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00115264:
    set32(c.r[16], c.r[19].w[0] + 16u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 12u), 0u);  if (t) { goto L_001152B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00115284u) [[unlikely]] return; }
L_00115284:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_001152A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011529Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0011529Cu) [[unlikely]] return; }
L_0011529C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_001152A4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_001152BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001152B4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x001152B4u) [[unlikely]] return; }
L_001152B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001152B8:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_001152BC:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 32u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001152D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 133u, depth + 1u); else { c.pc = 0x00115990u; return; } if (c.pc != 0x001152D8u) [[unlikely]] return; }
L_001152D8:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001152E4u); set32(c.r[4], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x001152E4u) [[unlikely]] return; }
L_001152E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00115318; } }
L_001152EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[2].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115314u); set32(c.r[7], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_0005(c, 100u, depth + 1u); else { c.pc = 0x00115120u; return; } if (c.pc != 0x00115314u) [[unlikely]] return; }
L_00115314:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00115318:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001152ECu | kUnwind; return; } goto L_001152EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115330u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 93u, depth + 1u); else { c.pc = 0x00114D70u; return; } if (c.pc != 0x00115330u) [[unlikely]] return; }
L_00115330:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00115350:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00115968; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[20].w[0] + 8u)));  goto L_001153BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001153B0u); set32(c.r[5], c.r[5].w[0] - 13168u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001153B0u) [[unlikely]] return; }
L_001153B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001153B8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001153B8u) [[unlikely]] return; }
L_001153B8:
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001153BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_001156DC; }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], 0u + 44u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] - c.r[19].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] << 2);  goto L_00115520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00115484; } }
L_00115410:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_00115474; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[6].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[6].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 23;
L_00115474:
    set32(c.r[6], c.r[6].w[0] + 44u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00115484:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115410u | kUnwind; return; } goto L_00115410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0011550C; } }
L_00115498:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_001154FC; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[6].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[6].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 23;
L_001154FC:
    set32(c.r[5], c.r[5].w[0] + 44u);
    set32(c.r[6], c.r[6].w[0] + 44u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0011550C:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115498u | kUnwind; return; } goto L_00115498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00115668; } }
L_00115520:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_001155B0; } }
L_0011553C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_001155A0; }
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 16u));
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 20u));
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 24u));
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 28u));
    st32((c.r[7].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 32u));
    st32((c.r[7].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 36u));
    st32((c.r[7].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 40u));
    st32((c.r[7].w[0] + 40u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 23;
L_001155A0:
    set32(c.r[8], c.r[8].w[0] + 44u);
    set32(c.r[7], c.r[7].w[0] + 44u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_001155B0:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011553Cu | kUnwind; return; } goto L_0011553C; } }
    set32(c.r[5], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[5].w[0]);  goto L_0011565C; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001155F4; } }
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001155F4:
    set32(c.r[4], c.r[19].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011565C; } }
L_00115600:
    set32(c.r[3], c.r[3].w[0] - 44u);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[3].w[0] + 20u), c.f[2]);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[3].w[0] + 32u), c.f[2]);
    st32((c.r[3].w[0] + 36u), c.f[1]);
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.budget -= 23;
L_0011565C:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115600u | kUnwind; return; } goto L_00115600; }
L_00115668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001156CC; } }
L_00115670:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[19].w[0] + 8u), c.f[2]);
    st32((c.r[19].w[0] + 12u), c.f[1]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[19].w[0] + 20u), c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[1]);
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[19].w[0] + 32u), c.f[2]);
    st32((c.r[19].w[0] + 36u), c.f[1]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 44u);
    c.budget -= 23;
L_001156CC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[0] = ld32((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115670u | kUnwind; return; } goto L_00115670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0011596C; } }
L_001156DC:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_001156F8; }
L_001156F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00115714; } }
L_00115700:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00115714; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00115714:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115700u | kUnwind; return; } goto L_00115700; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011573Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0011573Cu) [[unlikely]] return; }
L_0011573C:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_001157DC; } }
L_00115768:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001157CC; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 23;
L_001157CC:
    set32(c.r[5], c.r[5].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_001157DC:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115768u | kUnwind; return; } goto L_00115768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00115864; } }
L_001157F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00115854; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 17;
L_0011583C:
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 6;
L_00115854:
    set32(c.r[2], c.r[2].w[0] + 44u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00115864:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001157F0u | kUnwind; return; } goto L_001157F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_001158EC; } }
L_00115874:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_001158D8; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 23;
L_001158D8:
    set32(c.r[5], c.r[5].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_001158EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115874u | kUnwind; return; } goto L_00115874; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00115944; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 17;
L_00115944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011594Cu);  if (depth < kMaxDepth) unit_0005(c, 142u, depth + 1u); else { c.pc = 0x00115B90u; return; } if (c.pc != 0x0011594Cu) [[unlikely]] return; }
L_0011594C:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00115968; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00115968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115968u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00115968u) [[unlikely]] return; }
L_00115968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0011596C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
L_00115980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00115990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00115B00; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001159E0u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x001159E0u) [[unlikely]] return; }
L_001159E0:
    st32((c.r[29].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00115A80; } }
L_00115A0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_00115A70; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[2].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 23;
L_00115A70:
    set32(c.r[5], c.r[5].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 44u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00115A80:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00115A0Cu | kUnwind; return; } goto L_00115A0C; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00115ADC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 17;
L_00115ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115AE4u);  if (depth < kMaxDepth) unit_0005(c, 142u, depth + 1u); else { c.pc = 0x00115B90u; return; } if (c.pc != 0x00115AE4u) [[unlikely]] return; }
L_00115AE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00115B04; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00115B00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B00u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00115B00u) [[unlikely]] return; }
L_00115B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00115B04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00115B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00115B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B44u);  if (depth < kMaxDepth) unit_0005(c, 142u, depth + 1u); else { c.pc = 0x00115B90u; return; } if (c.pc != 0x00115B44u) [[unlikely]] return; }
L_00115B44:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00115B64; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00115B60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B60u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00115B60u) [[unlikely]] return; }
L_00115B60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00115B64:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00115B7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115B78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00115B78u) [[unlikely]] return; }
L_00115B78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00115B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00115B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00115BA0:
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[3] = ld32((c.r[4].w[0] + 64u));
    c.f[7] = 0u;
    c.f[4] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = c.r[2].w[0];
    c.f[6] = c.f[7];
    c.f[5] = c.f[7];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[1];  if (t) { goto L_00115C68; } }
L_00115BC8:
    c.f[16] = fp::mul(c.f[7], c.f[7]);
    c.f[15] = fp::mul(c.f[16], c.f[7]);
    c.f[10] = ld32((c.r[4].w[0] + 24u));
    c.f[9] = ld32((c.r[4].w[0] + 36u));
    c.f[8] = ld32((c.r[4].w[0] + 48u));
    c.f[10] = fp::mul(c.f[10], c.f[15]);
    c.f[9] = fp::mul(c.f[9], c.f[16]);
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[10] = ld32((c.r[4].w[0] + 28u));
    c.f[9] = ld32((c.r[4].w[0] + 40u));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.f[14] = fp::add(c.f[8], c.f[1]);
    c.f[10] = fp::mul(c.f[10], c.f[15]);
    c.f[9] = fp::mul(c.f[9], c.f[16]);
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[8] = ld32((c.r[4].w[0] + 52u));
    c.f[9] = ld32((c.r[4].w[0] + 32u));
    c.f[10] = ld32((c.r[4].w[0] + 64u));
    c.f[11] = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.f[8] = ld32((c.r[4].w[0] + 44u));
    c.f[11] = fp::add(c.f[11], c.f[10]);
    c.f[9] = fp::mul(c.f[9], c.f[15]);
    c.f[8] = fp::mul(c.f[8], c.f[16]);
    c.facc = fp::add(c.f[9], c.f[8]);
    c.f[8] = fp::sub(c.f[14], c.f[2]);
    c.f[10] = ld32((c.r[4].w[0] + 56u));
    c.f[9] = ld32((c.r[4].w[0] + 68u));
    c.f[3] = fp::sub(c.f[11], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[10], c.f[7]));
    c.f[9] = fp::add(c.f[2], c.f[9]);
    c.f[2] = fp::sub(c.f[9], c.f[4]);
    c.f[5] = c.f[6];
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[8] = fp::sqrt(c.f[8]);
    c.f[6] = fp::add(c.f[6], c.f[8]);
    c.f[2] = c.f[14];
    c.f[3] = c.f[11];
    c.f[4] = c.f[9];
    c.budget -= 40;
L_00115C68:
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[12]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[7] = fp::add(c.f[7], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115BC8u | kUnwind; return; } goto L_00115BC8; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.f[3] = 0u;
    c.f[2] = fp::sub(c.f[6], c.f[5]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.facc = fp::add(c.f[3], c.f[5]);
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[13], c.f[2]));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 15;
    { c.f[12] = fp::min(c.f[1], c.f[0]);  goto L_001169C0; }
L_00115CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[6] = fp::mul(c.f[12], c.f[12]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::mul(c.f[6], c.f[12]);
    c.f[15] = ld32((c.r[4].w[0] + 24u));
    c.f[16] = ld32((c.r[4].w[0] + 28u));
    c.f[8] = fp::add(c.f[12], c.f[0]);
    c.f[7] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = fp::mul(c.f[15], c.f[4]);
    c.f[0] = fp::mul(c.f[7], c.f[6]);
    c.f[18] = ld32((c.r[4].w[0] + 40u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[20] = ld32((c.r[4].w[0] + 48u));
    c.f[5] = fp::mul(c.f[16], c.f[4]);
    c.f[17] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = fp::mul(c.f[18], c.f[6]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[12]));
    c.f[19] = ld32((c.r[4].w[0] + 44u));
    c.facc = fp::add(c.f[5], c.f[3]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[3] = fp::mul(c.f[19], c.f[6]);
    c.f[14] = ld32((c.r[4].w[0] + 60u));
    c.f[13] = ld32((c.r[4].w[0] + 64u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[4] = fp::mul(c.f[17], c.f[4]);
    c.f[6] = fp::mul(c.f[8], c.f[8]);
    c.f[11] = fp::add(c.f[5], c.f[13]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = ld32((c.r[4].w[0] + 56u));
    c.f[5] = fp::mul(c.f[7], c.f[6]);
    c.f[10] = ld32((c.r[4].w[0] + 68u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[12]));
    c.f[4] = fp::mul(c.f[18], c.f[6]);
    c.f[9] = fp::add(c.f[3], c.f[10]);
    c.f[3] = fp::mul(c.f[19], c.f[6]);
    c.f[7] = fp::mul(c.f[6], c.f[8]);
    c.f[6] = fp::mul(c.f[15], c.f[7]);
    c.facc = fp::add(c.f[6], c.f[5]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[20], c.f[8]));
    c.f[0] = fp::add(c.f[0], c.f[14]);
    c.f[5] = fp::add(c.f[5], c.f[14]);
    c.f[6] = fp::sub(c.f[5], c.f[0]);
    c.f[5] = fp::mul(c.f[16], c.f[7]);
    c.facc = fp::add(c.f[5], c.f[4]);
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[4] = fp::mul(c.f[17], c.f[7]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[8]));
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[3] = fp::add(c.f[1], c.f[13]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[8]));
    c.f[2] = fp::sub(c.f[3], c.f[11]);
    c.f[1] = fp::add(c.f[1], c.f[10]);
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = fp::sub(c.f[4], c.f[11]);
    c.f[1] = fp::sub(c.f[1], c.f[9]);
    c.f[0] = fp::sub(c.f[3], c.f[9]);
    c.facc = fp::mul(c.f[5], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_div(c, 0u, c.f[3], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 71;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00115DD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_00115DFC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32640u));  goto L_00115F9C; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00115DFC:
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[7], c.r[6].w[0] + 44u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 44u);  if (t) { goto L_00115E30; } }
L_00115E2C:
    set32(c.r[7], c.r[7].w[0] + 44u);
    c.budget -= 1;
L_00115E30:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[7].w[0] - 44u);  goto L_00115E4C; }
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], c.r[8].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00115E2Cu | kUnwind; return; } goto L_00115E2C; }
    set32(c.r[3], c.r[7].w[0] - 44u);
    c.budget -= 1;
L_00115E4C:
    set32(c.r[5], c.r[8].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[7].w[0] - 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[13] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] - 40u));
    c.f[11] = c.r[3].w[0];
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[4] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[7].w[0] - 44u));
    c.f[8] = ld32((c.r[7].w[0] - 32u));
    c.f[2] = ld32((c.r[7].w[0] - 24u));
    c.f[9] = fp::sub(c.f[4], c.f[3]);
    c.f[6] = fp::mul(c.f[2], c.f[9]);
    c.f[3] = ld32((c.r[7].w[0] - 16u));
    c.f[1] = ld32((c.r[7].w[0] - 20u));
    c.f[2] = ld32((c.r[7].w[0] + 20u));
    c.f[4] = fp::mul(c.f[3], c.f[9]);
    c.f[5] = fp::mul(c.f[1], c.f[9]);
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.f[7] = ld32((c.r[7].w[0] + 12u));
    c.f[3] = fp::mul(c.f[2], c.f[9]);
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[7] = fp::add(c.f[7], c.f[5]);
    c.f[2] = fp::mul(c.f[1], c.f[9]);
    c.f[1] = ld32((c.r[7].w[0] + 28u));
    c.f[10] = fp::add(c.f[7], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[9]);
    c.f[9] = ld32((c.r[7].w[0] - 28u));
    c.f[8] = ld32((c.r[7].w[0] + 16u));
    c.f[7] = ld32((c.r[7].w[0] - 36u));
    c.facc = fp::mul(c.f[0], c.f[9]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.f[7] = fp::add(c.f[8], c.f[4]);
    c.f[8] = fp::add(c.f[7], c.f[1]);
    c.f[7] = ld32((c.r[7].w[0] + 8u));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[7] = fp::add(c.f[7], c.f[6]);
    c.f[7] = fp::add(c.f[7], c.f[3]);
    st32((c.r[4].w[0] + 24u), c.f[7]);
    st32((c.r[4].w[0] + 28u), c.f[10]);
    st32((c.r[4].w[0] + 32u), c.f[8]);
    c.f[9] = ld32((c.r[7].w[0] - 32u));
    c.f[8] = ld32((c.r[7].w[0] + 12u));
    c.f[7] = ld32((c.r[7].w[0] - 28u));
    c.f[9] = fp::mul(c.f[13], c.f[9]);
    c.f[8] = fp::mul(c.f[11], c.f[8]);
    c.facc = fp::add(c.f[9], c.f[8]);
    c.f[9] = fp::mul(c.f[13], c.f[7]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[10] = fp::sub(c.f[7], c.f[2]);
    c.f[8] = ld32((c.r[7].w[0] + 16u));
    c.f[7] = ld32((c.r[7].w[0] - 36u));
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.f[8] = fp::mul(c.f[11], c.f[8]);
    c.facc = fp::add(c.f[9], c.f[8]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[7] = fp::mul(c.f[13], c.f[7]);
    c.f[2] = fp::mul(c.f[11], c.f[2]);
    c.facc = fp::add(c.f[7], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = fp::sub(c.f[8], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[10]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[6]);
    st32((c.r[4].w[0] + 52u), c.f[5]);
    st32((c.r[4].w[0] + 56u), c.f[4]);
    c.f[0] = ld32((c.r[7].w[0] - 36u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] - 32u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] - 28u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 84;
L_00115F9C:
    st32((c.r[4].w[0] + 16u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.f[0]);  c.pc = t; return; }
L_00115FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00115FCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 166u, depth + 1u); else { c.pc = 0x001169C0u; return; } if (c.pc != 0x00115FCCu) [[unlikely]] return; }
L_00115FCC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[4] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.f[3] = fp::sub(c.f[3], c.f[5]);
    fpu_div(c, 8u, c.f[4], c.f[3]);
    c.f[7] = fp::mul(c.f[8], c.f[8]);
    c.f[6] = fp::mul(c.f[7], c.f[8]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[8]));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[5] = fp::add(c.f[3], c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[8]));
    c.f[3] = fp::mul(c.f[0], c.f[6]);
    c.f[4] = fp::add(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[8]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[5]);
    st32((c.r[16].w[0] + 8u), c.f[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00116080:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001160ACu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 166u, depth + 1u); else { c.pc = 0x001169C0u; return; } if (c.pc != 0x001160ACu) [[unlikely]] return; }
L_001160AC:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.f[8] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_00116154; } }
    c.f[4] = ld32((c.r[19].w[0] + 28u));
    c.f[3] = ld32((c.r[19].w[0] + 40u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[4] = fp::mul(c.f[4], c.f[8]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 44u));
    c.f[4] = ld32((c.r[19].w[0] + 64u));
    c.f[3] = fp::mul(c.f[3], c.f[8]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[7] = fp::add(c.f[5], c.f[4]);
    c.f[4] = ld32((c.r[19].w[0] + 56u));
    c.f[2] = ld32((c.r[19].w[0] + 24u));
    c.f[3] = ld32((c.r[19].w[0] + 68u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[5] = fp::mul(c.f[2], c.f[8]);
    c.f[6] = fp::add(c.f[4], c.f[3]);
    c.f[4] = ld32((c.r[19].w[0] + 36u));
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.f[2] = ld32((c.r[19].w[0] + 60u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.facc = fp::add(c.f[5], c.f[4]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[18].w[0] + 4u), c.f[7]);
    st32((c.r[18].w[0] + 8u), c.f[6]);
    c.budget -= 30;
L_00116154:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00116244; } }
    c.f[4] = ld32((c.r[19].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = ld32((c.r[19].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[8] = c.r[4].w[0];
    c.f[7] = c.r[3].w[0];
    c.f[4] = fp::mul(c.f[8], c.f[4]);
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[3] = fp::mul(c.f[7], c.f[3]);
    c.f[4] = ld32((c.r[19].w[0] + 28u));
    c.f[2] = ld32((c.r[19].w[0] + 56u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[4] = fp::mul(c.f[8], c.f[4]);
    c.f[6] = fp::add(c.f[3], c.f[2]);
    c.f[3] = ld32((c.r[19].w[0] + 40u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[4] = ld32((c.r[19].w[0] + 24u));
    c.f[3] = fp::mul(c.f[7], c.f[3]);
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[4] = fp::mul(c.f[8], c.f[4]);
    c.f[5] = fp::add(c.f[3], c.f[2]);
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = fp::mul(c.f[7], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[6]);
    st32((c.r[29].w[0] + 100u), c.f[5]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 40;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00116228; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 4u, c.f[0], c.f[4]);
    c.f[3] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[4]);  if (t) { goto L_00116238; } }
L_00116228:
    c.f[3] = 0u;
    c.f[2] = c.f[3];
    c.f[0] = c.f[3];
    c.budget -= 4;
L_00116238:
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_00116244:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00116348; }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.f[5] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[9] = ld32((c.r[3].w[0] + 40u));
    c.f[8] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[9]);
    c.f[2] = fp::sub(c.f[2], c.f[8]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[7] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::add(c.f[9], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[7]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::add(c.f[8], c.f[2]);
    c.f[3] = fp::add(c.f[7], c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[0]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[6], c.f[0]));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[3]));
    c.facc = fp::mul(c.f[7], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[0], c.f[5]));
    c.facc = fp::mul(c.f[0], c.f[6]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[8], c.f[4]));
    c.facc = fp::mul(c.f[8], c.f[5]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[6]));
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 44;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00116328; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_00116338; } }
L_00116328:
    c.f[2] = 0u;
    c.f[1] = c.f[2];
    c.f[0] = c.f[2];
    c.budget -= 4;
L_00116338:
    st32((c.r[16].w[0]), c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 4;
L_00116348:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00116360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0011649C; } }
    c.f[20] = ld32((c.r[28].w[0] - 32640u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[22] = 0u;
    c.f[21] = c.f[22];
    c.budget -= 5;
L_001163A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001163ACu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0005(c, 146u, depth + 1u); else { c.pc = 0x00115DD0u; return; } if (c.pc != 0x001163ACu) [[unlikely]] return; }
L_001163AC:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.f[4] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[5] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    fpu_div(c, 0u, c.f[4], c.f[0]);
    c.f[7] = fp::mul(c.f[0], c.f[0]);
    c.f[6] = fp::mul(c.f[7], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[7]);
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[3] = ld32((c.r[18].w[0] + 60u));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[3] = ld32((c.r[18].w[0] + 40u));
    c.f[4] = fp::mul(c.f[1], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[7]);
    c.facc = fp::add(c.f[4], c.f[3]);
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 64u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[4] = fp::add(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 44u));
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[7]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[3] = ld32((c.r[18].w[0] + 56u));
    c.f[2] = ld32((c.r[18].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 49;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3C800000u);  goto L_0011647C; }
    c.f[20] = c.f[0];
    c.f[21] = c.f[22];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C800000u);
    c.budget -= 3;
L_0011647C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = c.r[16].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[22] = fp::add(c.f[22], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001163A0u | kUnwind; return; } goto L_001163A0; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011649Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 146u, depth + 1u); else { c.pc = 0x00115DD0u; return; } if (c.pc != 0x0011649Cu) [[unlikely]] return; }
L_0011649C:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[13] = c.r[2].w[0];
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001164D4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x001164D4u) [[unlikely]] return; }
L_001164D4:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001164E8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 145u, depth + 1u); else { c.pc = 0x00115CB0u; return; } if (c.pc != 0x001164E8u) [[unlikely]] return; }
L_001164E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00116504; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00116504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00116724; } }
L_0011650C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116524u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 145u, depth + 1u); else { c.pc = 0x00115CB0u; return; } if (c.pc != 0x00116524u) [[unlikely]] return; }
L_00116524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F600000u);
    c.budget -= 1;
L_00116528:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00116540; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00116540:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00116568; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011650Cu | kUnwind; return; } goto L_0011650C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00116568:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00116580; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00116580:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[3].d[0] & 255ull;  goto L_001165A4; }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_001165A4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_00116728; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + 44u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 44u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[18].w[0] + 16u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[9] = ld32((c.r[3].w[0] + 12u));
    c.f[3] = ld32((c.r[3].w[0] + 20u));
    c.f[10] = fp::sub(c.f[5], c.f[4]);
    c.f[7] = fp::mul(c.f[3], c.f[10]);
    c.f[4] = ld32((c.r[3].w[0] + 28u));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[3] = ld32((c.r[2].w[0] + 20u));
    c.f[5] = fp::mul(c.f[4], c.f[10]);
    c.f[6] = fp::mul(c.f[2], c.f[10]);
    c.facc = fp::mul(c.f[1], c.f[9]);
    c.f[8] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::mul(c.f[3], c.f[10]);
    c.f[2] = ld32((c.r[2].w[0] + 24u));
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[1], c.f[8]));
    c.f[8] = fp::add(c.f[8], c.f[6]);
    c.f[3] = fp::mul(c.f[2], c.f[10]);
    c.f[2] = ld32((c.r[2].w[0] + 28u));
    c.f[11] = fp::add(c.f[8], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[10]);
    c.f[10] = ld32((c.r[3].w[0] + 16u));
    c.f[9] = ld32((c.r[2].w[0] + 16u));
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    c.facc = fp::mul(c.f[1], c.f[10]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[1], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[8] = fp::add(c.f[9], c.f[5]);
    c.f[9] = fp::add(c.f[8], c.f[2]);
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[1], c.f[8]));
    c.f[8] = fp::add(c.f[8], c.f[7]);
    c.f[8] = fp::add(c.f[8], c.f[4]);
    st32((c.r[18].w[0] + 24u), c.f[8]);
    st32((c.r[18].w[0] + 28u), c.f[11]);
    st32((c.r[18].w[0] + 32u), c.f[9]);
    c.f[10] = ld32((c.r[3].w[0] + 12u));
    c.f[9] = ld32((c.r[2].w[0] + 12u));
    c.f[8] = ld32((c.r[3].w[0] + 16u));
    c.f[10] = fp::mul(c.f[13], c.f[10]);
    c.f[9] = fp::mul(c.f[12], c.f[9]);
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[10] = fp::mul(c.f[13], c.f[8]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[1], c.f[6]));
    c.f[11] = fp::sub(c.f[8], c.f[3]);
    c.f[9] = ld32((c.r[2].w[0] + 16u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    c.f[9] = fp::mul(c.f[12], c.f[9]);
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[8] = fp::mul(c.f[13], c.f[8]);
    c.f[3] = fp::mul(c.f[12], c.f[3]);
    c.facc = fp::add(c.f[8], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    st32((c.r[18].w[0] + 36u), c.f[1]);
    c.f[2] = fp::sub(c.f[9], c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[11]);
    st32((c.r[18].w[0] + 44u), c.f[2]);
    st32((c.r[18].w[0] + 48u), c.f[7]);
    st32((c.r[18].w[0] + 52u), c.f[6]);
    st32((c.r[18].w[0] + 56u), c.f[5]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[18].w[0] + 60u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[18].w[0] + 68u), c.f[1]);
    c.budget -= 94;
L_00116724:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00116728:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F600000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116528u | kUnwind; return; } goto L_00116528; }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0011674C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011674C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00116958; } }
L_00116754:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011676Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 145u, depth + 1u); else { c.pc = 0x00115CB0u; return; } if (c.pc != 0x0011676Cu) [[unlikely]] return; }
L_0011676C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.budget -= 1;
L_00116770:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00116788; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00116788:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001167A8; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116754u | kUnwind; return; } goto L_00116754; }
L_001167A8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001167C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001167C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[2].d[0] & 255ull;  goto L_001167D8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_001167D8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  goto L_0011695C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[12] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - 44u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 44u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[18].w[0] + 16u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[2]);
    c.budget -= 23;
L_0011683C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[9] = ld32((c.r[3].w[0] + 12u));
    c.f[3] = ld32((c.r[3].w[0] + 20u));
    c.f[10] = fp::sub(c.f[5], c.f[4]);
    c.f[7] = fp::mul(c.f[3], c.f[10]);
    c.f[4] = ld32((c.r[3].w[0] + 28u));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[3] = ld32((c.r[2].w[0] + 20u));
    c.f[5] = fp::mul(c.f[4], c.f[10]);
    c.f[6] = fp::mul(c.f[2], c.f[10]);
    c.facc = fp::mul(c.f[1], c.f[9]);
    c.f[8] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::mul(c.f[3], c.f[10]);
    c.f[2] = ld32((c.r[2].w[0] + 24u));
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[1], c.f[8]));
    c.f[8] = fp::add(c.f[8], c.f[6]);
    c.f[3] = fp::mul(c.f[2], c.f[10]);
    c.f[2] = ld32((c.r[2].w[0] + 28u));
    c.f[11] = fp::add(c.f[8], c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[10]);
    c.f[10] = ld32((c.r[3].w[0] + 16u));
    c.f[9] = ld32((c.r[2].w[0] + 16u));
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    c.facc = fp::mul(c.f[1], c.f[10]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[1], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[8] = fp::add(c.f[9], c.f[5]);
    c.f[9] = fp::add(c.f[8], c.f[2]);
    c.f[8] = ld32((c.r[2].w[0] + 8u));
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[1], c.f[8]));
    c.f[8] = fp::add(c.f[8], c.f[7]);
    c.f[8] = fp::add(c.f[8], c.f[4]);
    st32((c.r[18].w[0] + 24u), c.f[8]);
    st32((c.r[18].w[0] + 28u), c.f[11]);
    st32((c.r[18].w[0] + 32u), c.f[9]);
    c.f[10] = ld32((c.r[3].w[0] + 12u));
    c.f[9] = ld32((c.r[2].w[0] + 12u));
    c.f[8] = ld32((c.r[3].w[0] + 16u));
    c.f[10] = fp::mul(c.f[13], c.f[10]);
    c.f[9] = fp::mul(c.f[12], c.f[9]);
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[10] = fp::mul(c.f[13], c.f[8]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[1], c.f[6]));
    c.f[11] = fp::sub(c.f[8], c.f[3]);
    c.f[9] = ld32((c.r[2].w[0] + 16u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    c.f[9] = fp::mul(c.f[12], c.f[9]);
    c.facc = fp::add(c.f[10], c.f[9]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[8] = fp::mul(c.f[13], c.f[8]);
    c.f[3] = fp::mul(c.f[12], c.f[3]);
    c.facc = fp::add(c.f[8], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    st32((c.r[18].w[0] + 36u), c.f[1]);
    c.f[2] = fp::sub(c.f[9], c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[11]);
    st32((c.r[18].w[0] + 44u), c.f[2]);
    st32((c.r[18].w[0] + 48u), c.f[7]);
    st32((c.r[18].w[0] + 52u), c.f[6]);
    st32((c.r[18].w[0] + 56u), c.f[5]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[18].w[0] + 60u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[18].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[18].w[0] + 68u), c.f[1]);
    c.budget -= 71;
L_00116958:
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0011695C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3E000000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116770u | kUnwind; return; } goto L_00116770; }
    c.f[1] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::min(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116990u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 143u, depth + 1u); else { c.pc = 0x00115BA0u; return; } if (c.pc != 0x00116990u) [[unlikely]] return; }
L_00116990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001169C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00116A3C; } }
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + 16u);  if (t) { goto L_001169E4; } }
L_001169E4:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[5], c.r[8].w[0] << 2);  goto L_00116A0C; }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[8], c.r[8].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001169E4u | kUnwind; return; } goto L_001169E4; }
    set32(c.r[5], c.r[8].w[0] << 2);
    c.budget -= 1;
L_00116A0C:
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 44u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[8].w[0]);  if (t) { goto L_00116AC4; } }
L_00116A3C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00116AC4; } }
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[9], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[7], c.r[8].w[0] + 16u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] - 1u);  if (t) { goto L_00116A68; } }
L_00116A68:
    c.r[1].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[9].w[0] << 2);  goto L_00116A94; }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[9], c.r[9].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116A68u | kUnwind; return; } goto L_00116A68; }
    set32(c.r[3], c.r[9].w[0] << 2);
    c.budget -= 1;
L_00116A94:
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[9].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] - 44u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_00116AC4:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 20u));  goto L_00116C1C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[13] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[11] = c.r[3].w[0];
    st32((c.r[4].w[0] + 16u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 20u), c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[8] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[5].w[0] + 20u));
    c.f[9] = fp::sub(c.f[4], c.f[3]);
    c.f[6] = fp::mul(c.f[2], c.f[9]);
    c.f[3] = ld32((c.r[5].w[0] + 28u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[2] = ld32((c.r[3].w[0] + 20u));
    c.f[4] = fp::mul(c.f[3], c.f[9]);
    c.f[5] = fp::mul(c.f[1], c.f[9]);
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.f[7] = ld32((c.r[3].w[0] + 12u));
    c.f[3] = fp::mul(c.f[2], c.f[9]);
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[7] = fp::add(c.f[7], c.f[5]);
    c.f[2] = fp::mul(c.f[1], c.f[9]);
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    c.f[10] = fp::add(c.f[7], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[9]);
    c.f[9] = ld32((c.r[5].w[0] + 16u));
    c.f[8] = ld32((c.r[3].w[0] + 16u));
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[0], c.f[9]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[0], c.f[8]));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.f[7] = fp::add(c.f[8], c.f[4]);
    c.f[8] = fp::add(c.f[7], c.f[1]);
    c.f[7] = ld32((c.r[3].w[0] + 8u));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[0], c.f[7]));
    c.f[7] = fp::add(c.f[7], c.f[6]);
    c.f[7] = fp::add(c.f[7], c.f[3]);
    st32((c.r[4].w[0] + 24u), c.f[7]);
    st32((c.r[4].w[0] + 28u), c.f[10]);
    st32((c.r[4].w[0] + 32u), c.f[8]);
    c.f[9] = ld32((c.r[5].w[0] + 12u));
    c.f[8] = ld32((c.r[3].w[0] + 12u));
    c.f[7] = ld32((c.r[5].w[0] + 16u));
    c.f[9] = fp::mul(c.f[13], c.f[9]);
    c.f[8] = fp::mul(c.f[11], c.f[8]);
    c.facc = fp::add(c.f[9], c.f[8]);
    c.f[9] = fp::mul(c.f[13], c.f[7]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[10] = fp::sub(c.f[7], c.f[2]);
    c.f[8] = ld32((c.r[3].w[0] + 16u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[8] = fp::mul(c.f[11], c.f[8]);
    c.facc = fp::add(c.f[9], c.f[8]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[7] = fp::mul(c.f[13], c.f[7]);
    c.f[2] = fp::mul(c.f[11], c.f[2]);
    c.facc = fp::add(c.f[7], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[6]));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = fp::sub(c.f[8], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[10]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[6]);
    st32((c.r[4].w[0] + 52u), c.f[5]);
    st32((c.r[4].w[0] + 56u), c.f[4]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.budget -= 84;
L_00116C1C:
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00116DE8; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  goto L_00116C60; }
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_00116DE8; } }
L_00116C60:
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], ld32((c.r[4].w[0])));  goto L_00116C88; }
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_00116DE8; } }
L_00116C88:
    c.f[8] = 0u;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    set32(c.r[5], 0u + 1u);
    c.f[2] = ld32((c.r[7].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 64u));
    c.f[4] = ld32((c.r[4].w[0] + 68u));
    c.f[7] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = c.r[6].w[0];
    c.f[9] = c.r[3].w[0];
    c.f[6] = c.f[8];
    c.f[5] = c.f[8];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[1];  if (t) { goto L_00116D6C; } }
L_00116CCC:
    c.f[17] = fp::mul(c.f[5], c.f[5]);
    c.f[16] = fp::mul(c.f[17], c.f[5]);
    c.f[13] = ld32((c.r[4].w[0] + 24u));
    c.f[11] = ld32((c.r[4].w[0] + 36u));
    c.f[10] = ld32((c.r[4].w[0] + 48u));
    c.f[13] = fp::mul(c.f[13], c.f[16]);
    c.f[11] = fp::mul(c.f[11], c.f[17]);
    c.facc = fp::add(c.f[13], c.f[11]);
    c.f[13] = ld32((c.r[4].w[0] + 28u));
    c.f[11] = ld32((c.r[4].w[0] + 40u));
    c.f[10] = fp::add(c.facc, fp::mul(c.f[10], c.f[5]));
    c.f[15] = fp::add(c.f[10], c.f[1]);
    c.f[13] = fp::mul(c.f[13], c.f[16]);
    c.f[11] = fp::mul(c.f[11], c.f[17]);
    c.facc = fp::add(c.f[13], c.f[11]);
    c.f[10] = ld32((c.r[4].w[0] + 52u));
    c.f[11] = ld32((c.r[4].w[0] + 32u));
    c.f[13] = ld32((c.r[4].w[0] + 64u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[10], c.f[5]));
    c.f[10] = ld32((c.r[4].w[0] + 44u));
    c.f[14] = fp::add(c.f[14], c.f[13]);
    c.f[11] = fp::mul(c.f[11], c.f[16]);
    c.f[10] = fp::mul(c.f[10], c.f[17]);
    c.facc = fp::add(c.f[11], c.f[10]);
    c.f[10] = fp::sub(c.f[15], c.f[2]);
    c.f[13] = ld32((c.r[4].w[0] + 56u));
    c.f[11] = ld32((c.r[4].w[0] + 68u));
    c.f[3] = fp::sub(c.f[14], c.f[3]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[13], c.f[5]));
    c.f[11] = fp::add(c.f[2], c.f[11]);
    c.f[2] = fp::sub(c.f[11], c.f[4]);
    c.f[8] = c.f[6];
    c.facc = fp::mul(c.f[10], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[10] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[10] = fp::sqrt(c.f[10]);
    c.f[6] = fp::add(c.f[6], c.f[10]);
    c.f[2] = c.f[15];
    c.f[3] = c.f[14];
    c.f[4] = c.f[11];
    c.budget -= 40;
L_00116D6C:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00116D7C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00116D7C:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00116D94; } }
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[7]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = fp::add(c.f[5], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116CCCu | kUnwind; return; } goto L_00116CCC; }
L_00116D94:
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[7]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::sub(c.f[7], c.f[8]);  goto L_00116DA8; }
    c.f[6] = c.f[7];
    c.f[1] = fp::sub(c.f[7], c.f[8]);
    c.budget -= 2;
L_00116DA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = fp::sub(c.f[6], c.f[8]);
    fpu_div(c, 4u, c.f[1], c.f[0]);
    c.f[3] = c.r[3].w[0];
    c.f[9] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[2] = fp::sub(c.f[5], c.f[3]);
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[0] = fp::sub(c.f[0], c.f[9]);
    c.facc = fp::add(c.f[1], c.f[9]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[12]);
    c.budget -= 16;
L_00116DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00116DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00116E00:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 44u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), 0u);  c.pc = t; return; }
L_00116E80:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 68u), 0u);  c.pc = t; return; }
L_00116ED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 13568u);
    set32(c.r[5], c.r[5].w[0] - 12960u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0007(c, 125u, depth); }
L_00116EF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 13136u);
    set32(c.r[5], c.r[5].w[0] - 12938u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0007(c, 125u, depth); }
L_00116F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 13104u);
    set32(c.r[5], c.r[5].w[0] - 12906u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0007(c, 125u, depth); }
L_00116F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 13040u);
    set32(c.r[5], c.r[5].w[0] - 12856u);
    set32(c.r[6], c.r[6].w[0] - 12992u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116F5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00116F5Cu) [[unlikely]] return; }
L_00116F5C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116F6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00116F6Cu) [[unlikely]] return; }
L_00116F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00116F8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] - 27536u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00116F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116F9Cu); set32(c.r[4], c.r[4].w[0] - 12830u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x00116F9Cu) [[unlikely]] return; }
L_00116F9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12799u);
    set32(c.r[6], c.r[6].w[0] - 12830u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00116FC4u); set32(c.r[9], c.r[9].w[0] - 12789u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x00116FC4u) [[unlikely]] return; }
L_00116FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00116FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0011701C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27504u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00117018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117018u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00117018u) [[unlikely]] return; }
L_00117018:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0011701C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00117030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 3;
L_0011703C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117044u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00117044u) [[unlikely]] return; }
L_00117044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00117064; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 27504u);
    set32(c.r[3], c.r[3].w[0] - 27568u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00117064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117074u); set32(c.r[4], c.r[4].w[0] - 12750u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C670u; return; } if (c.pc != 0x00117074u) [[unlikely]] return; }
L_00117074:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00117080:
    set32(c.r[4], c.r[4].w[0] - 12992u);
    set32(c.r[5], c.r[5].w[0] - 12727u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117094u); set32(c.r[7], c.r[7].w[0] - 12690u);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00117094u) [[unlikely]] return; }
L_00117094:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 13016u);
    set32(c.r[5], c.r[5].w[0] - 12675u);
    set32(c.r[6], c.r[6].w[0] - 12992u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001170B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x001170B4u) [[unlikely]] return; }
L_001170B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_001170C0:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] - 12799u);
    set32(c.r[6], c.r[6].w[0] - 12750u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001170DCu); set32(c.r[9], c.r[9].w[0] - 12658u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x001170DCu) [[unlikely]] return; }
L_001170DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001170F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 12976u);
    set32(c.r[5], c.r[5].w[0] - 12628u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117114u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00117114u) [[unlikely]] return; }
L_00117114:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] - 12612u);
    set32(c.r[6], c.r[6].w[0] - 12602u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011713Cu); set32(c.r[9], c.r[9].w[0] - 12598u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x0011713Cu) [[unlikely]] return; }
L_0011713C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00117150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001171A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27568u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00117184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00117184:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011719C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011719Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0011719Cu) [[unlikely]] return; }
L_0011719C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001171A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001171B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001171D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 403u, depth + 1u); else { c.pc = 0x0011FFB0u; return; } if (c.pc != 0x001171D0u) [[unlikely]] return; }
L_001171D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001171DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013AB70u; return; } if (c.pc != 0x001171DCu) [[unlikely]] return; }
L_001171DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001171F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117214u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0013A9F0u; return; } if (c.pc != 0x00117214u) [[unlikely]] return; }
L_00117214:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117228u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 394u, depth + 1u); else { c.pc = 0x0011FE90u; return; } if (c.pc != 0x00117228u) [[unlikely]] return; }
L_00117228:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00117240:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[6].d[0] + 0ull;  [[clang::musttail]] return unit_000E(c, 278u, depth); }
L_00117250:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00114000u < 16384u) { entry = entries_0005[(t - 0x00114000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00117260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00117270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001172C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27536u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001172A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27504u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001172A4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001172BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001172BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001172BCu) [[unlikely]] return; }
L_001172BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001172C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001172D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001172F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 403u, depth + 1u); else { c.pc = 0x0011FFB0u; return; } if (c.pc != 0x001172F0u) [[unlikely]] return; }
L_001172F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001172FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 3u, depth + 1u); else { c.pc = 0x0014C050u; return; } if (c.pc != 0x001172FCu) [[unlikely]] return; }
L_001172FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00117310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117334u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 526u, depth + 1u); else { c.pc = 0x0014BFD0u; return; } if (c.pc != 0x00117334u) [[unlikely]] return; }
L_00117334:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117348u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 394u, depth + 1u); else { c.pc = 0x0011FE90u; return; } if (c.pc != 0x00117348u) [[unlikely]] return; }
L_00117348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00117360:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[6].d[0] + 0ull;  [[clang::musttail]] return unit_0012(c, 525u, depth); }
L_00117370:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 12496u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117390u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x00117390u) [[unlikely]] return; }
L_00117390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117398u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00117398u) [[unlikely]] return; }
L_00117398:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001173B0u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001173B0u) [[unlikely]] return; }
L_001173B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (t) { goto L_00117428; } }
L_001173C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001173D0u); set32(c.r[6], c.r[6].w[0] - 12472u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00117480u; return; } if (c.pc != 0x001173D0u) [[unlikely]] return; }
L_001173D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 36u)));  goto L_001173F8; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_001173F8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 40u)));  goto L_00117404; }
    set32(c.r[5], c.r[29].w[0] + 33u);
    c.budget -= 1;
L_00117404:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00117414u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00117414u) [[unlikely]] return; }
L_00117414:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00117420u) [[unlikely]] return; }
L_00117420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117428u); set32(c.r[4], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x00117428u) [[unlikely]] return; }
L_00117428:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001173C0u | kUnwind; return; } goto L_001173C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011744Cu); set32(c.r[5], c.r[5].w[0] - 12469u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0011744Cu) [[unlikely]] return; }
L_0011744C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117454u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00117454u) [[unlikely]] return; }
L_00117454:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011746Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011746Cu) [[unlikely]] return; }
L_0011746C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00117480:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 124u), c.r[18].w[0]);  if (t) { goto L_001174B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001174E0; } }
L_001174B8:
    set32(c.r[5], c.r[2].w[0] + 36u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001174C8u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0005(c, 307u, depth + 1u); else { c.pc = 0x00117FC0u; return; } if (c.pc != 0x001174C8u) [[unlikely]] return; }
L_001174C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 16u)));  goto L_001174E0; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001174E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001174E8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001174E8u) [[unlikely]] return; }
L_001174E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001174F0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001174F0u) [[unlikely]] return; }
L_001174F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 12444u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117504u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00117504u) [[unlikely]] return; }
L_00117504:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00117518; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00117518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117520u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00117520u) [[unlikely]] return; }
L_00117520:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 12429u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117538u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00117538u) [[unlikely]] return; }
L_00117538:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0011754C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0011754C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117554u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00117554u) [[unlikely]] return; }
L_00117554:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00117564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00117564u) [[unlikely]] return; }
L_00117564:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 12411u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011757Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0011757Cu) [[unlikely]] return; }
L_0011757C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00117590; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00117590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117598u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00117598u) [[unlikely]] return; }
L_00117598:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001175A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001175A8u) [[unlikely]] return; }
L_001175A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001175F4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001175C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001175C0u) [[unlikely]] return; }
L_001175C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 12389u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001175D8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x001175D8u) [[unlikely]] return; }
L_001175D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_001175EC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_001175EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001175F4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001175F4u) [[unlikely]] return; }
L_001175F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117608u); set32(c.r[5], c.r[5].w[0] - 12367u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00117608u) [[unlikely]] return; }
L_00117608:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0011761C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0011761C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117624u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00117624u) [[unlikely]] return; }
L_00117624:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117630u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00117630u) [[unlikely]] return; }
L_00117630:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011763Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0011763Cu) [[unlikely]] return; }
L_0011763C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00117648u) [[unlikely]] return; }
L_00117648:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00117670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 12512u);  c.pc = t; return; }
L_00117680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001176A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001176A8u) [[unlikely]] return; }
L_001176A8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001176B8u); set32(c.r[6], 0u + 31u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x001176B8u) [[unlikely]] return; }
L_001176B8:
    set32(c.r[8], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], ld32((c.r[8].w[0] + 60u)));
    set32(c.r[4], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] << 3);
    st32((c.r[8].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[3].w[0] + 64u);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
L_001176F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001176F0u | kUnwind; return; } goto L_001176F0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[8].w[0] + 32u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00117730:
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 368u), c.r[4].w[0]);  c.pc = t; return; }
L_00117740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_001177C0; } }
L_00117770:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00117780u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00117780u) [[unlikely]] return; }
L_00117780:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_00117794; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_001177B8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_00117794:
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[17].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001177A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001177A0u) [[unlikely]] return; }
L_001177A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001177B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_001177D8; } }
L_001177B4:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_001177B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001177C0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x001177C0u) [[unlikely]] return; }
L_001177C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117770u | kUnwind; return; } goto L_00117770; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001177D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001177F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001178B8; } }
L_00117814:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] << 3);  goto L_00117844; }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117838u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00117838u) [[unlikely]] return; }
L_00117838:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001178B8; }
    goto L_00117840;
L_0011783C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00117840:
    set32(c.r[3], c.r[16].w[0] << 3);
    c.budget -= 1;
L_00117844:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00117868u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00117868u) [[unlikely]] return; }
L_00117868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001178B4; } }
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[2].w[0] + 36u);  goto L_00117888; }
L_00117880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001178AC; } }
L_00117888:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117894u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0005(c, 307u, depth + 1u); else { c.pc = 0x00117FC0u; return; } if (c.pc != 0x00117894u) [[unlikely]] return; }
L_00117894:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_001178AC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001178AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001178D4; } }
L_001178B4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001178B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117814u | kUnwind; return; } goto L_00117814; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_001178D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001178F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_0011790C; } }
    goto L_00117904;
L_00117900:
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 1;
L_00117904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00117938; } }
L_0011790C:
    set32(c.r[5], c.r[2].w[0] + 36u);
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011791Cu); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0005(c, 307u, depth + 1u); else { c.pc = 0x00117FC0u; return; } if (c.pc != 0x0011791Cu) [[unlikely]] return; }
L_0011791C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_00117938; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00117938; } }
L_00117938:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00117950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 28u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011796Cu); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0005(c, 294u, depth + 1u); else { c.pc = 0x00117E10u; return; } if (c.pc != 0x0011796Cu) [[unlikely]] return; }
L_0011796C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00117980:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00117AA8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_001179B8; }
    set32(c.r[16], ld32((c.r[3].w[0] + 368u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_001179B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_001179C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001179F0; } }
L_001179C8:
    set32(c.r[5], c.r[3].w[0] + 36u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001179D8u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0005(c, 307u, depth + 1u); else { c.pc = 0x00117FC0u; return; } if (c.pc != 0x001179D8u) [[unlikely]] return; }
L_001179D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 16u)));  goto L_001179F0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001179F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[16], c.r[16].w[0] << 4);  goto L_00117A10; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_00117A90; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00117A8C; } }
    set32(c.r[16], c.r[16].w[0] << 4);
    c.budget -= 1;
L_00117A10:
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 2;
L_00117A18:
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));  goto L_00117A58; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 3;
L_00117A58:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[18], c.r[2].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117A6Cu); set32(c.r[5], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0005(c, 307u, depth + 1u); else { c.pc = 0x00117FC0u; return; } if (c.pc != 0x00117A6Cu) [[unlikely]] return; }
L_00117A6C:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117A18u | kUnwind; return; } goto L_00117A18; }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117A8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 138u, depth + 1u); else { c.pc = 0x001354D0u; return; } if (c.pc != 0x00117A8Cu) [[unlikely]] return; }
L_00117A8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00117A90:
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117AA4u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0005(c, 304u, depth + 1u); else { c.pc = 0x00117F20u; return; } if (c.pc != 0x00117AA4u) [[unlikely]] return; }
L_00117AA4:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00117AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00117AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00117AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 376u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117AF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00117AF4u) [[unlikely]] return; }
L_00117AF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));  goto L_00117B10; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117B0Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 283u, depth + 1u); else { c.pc = 0x00117C10u; return; } if (c.pc != 0x00117B0Cu) [[unlikely]] return; }
L_00117B0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 1;
L_00117B10:
    set32(c.r[2], ld32((c.r[3].w[0] + 360u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));  goto L_00117B30; }
    set32(c.r[4], c.r[3].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117B2Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0006(c, 6u, depth + 1u); else { c.pc = 0x00118050u; return; } if (c.pc != 0x00117B2Cu) [[unlikely]] return; }
L_00117B2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 1;
L_00117B30:
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 360u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));  goto L_00117B7C; }
    set32(c.r[4], c.r[3].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117B78u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0006(c, 6u, depth + 1u); else { c.pc = 0x00118050u; return; } if (c.pc != 0x00117B78u) [[unlikely]] return; }
L_00117B78:
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 1;
L_00117B7C:
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = 0ull | 49152ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    st32((c.r[2].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 364u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 360u)));
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));  goto L_00117BC4; }
    set32(c.r[4], c.r[3].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117BC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 6u, depth + 1u); else { c.pc = 0x00118050u; return; } if (c.pc != 0x00117BC0u) [[unlikely]] return; }
L_00117BC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    c.budget -= 1;
L_00117BC4:
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29224u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00117C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 12351u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[2], 0u + 20u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117C64u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0005(c, 289u, depth + 1u); else { c.pc = 0x00117D00u; return; } if (c.pc != 0x00117C64u) [[unlikely]] return; }
L_00117C64:
    set32(c.r[2], c.r[29].w[0] + 76u);
    set32(c.r[3], c.r[18].w[0] + 4u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 36u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117C88u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 3u, depth + 1u); else { c.pc = 0x00118020u; return; } if (c.pc != 0x00117C88u) [[unlikely]] return; }
L_00117C88:
    set32(c.r[16], c.r[18].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117C94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00117C94u) [[unlikely]] return; }
L_00117C94:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00117CAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117CA8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00117CA8u) [[unlikely]] return; }
L_00117CA8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00117CAC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00117CC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117CBCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00117CBCu) [[unlikely]] return; }
L_00117CBC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00117CC0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[28].w[0] - 29224u), c.r[18].w[0]);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 372u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 368u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00117D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D28u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00117D28u) [[unlikely]] return; }
L_00117D28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117D3Cu); mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00117D3Cu) [[unlikely]] return; }
L_00117D3C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[7], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_00117D9C; } }
L_00117D58:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[7].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 24u)));  goto L_00117D7C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_00117D98; } }
L_00117D7C:
    set32(c.r[3], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
L_00117D98:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00117D9C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117D58u | kUnwind; return; } goto L_00117D58; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_00117DE4; }
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[9], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[8], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117DE0u); set32(c.r[6], c.r[6].w[0] - 12576u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00117DE0u) [[unlikely]] return; }
L_00117DE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_00117DE4:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00117E10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + 12u);  if (t) { goto L_00117E64; } }
L_00117E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 303u, depth + 1u); else { c.pc = 0x00117F10u; return; } if (c.pc != 0x00117E44u) [[unlikely]] return; }
L_00117E44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E54u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 302u, depth + 1u); else { c.pc = 0x00117F00u; return; } if (c.pc != 0x00117E54u) [[unlikely]] return; }
L_00117E54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 4u)));  goto L_00117E64; }
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_00117E64:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00117E3Cu | kUnwind; return; } goto L_00117E3C; } }
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[16].w[0] + 12u);  goto L_00117E9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 303u, depth + 1u); else { c.pc = 0x00117F10u; return; } if (c.pc != 0x00117E80u) [[unlikely]] return; }
L_00117E80:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117E90u); set32(c.r[6], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 301u, depth + 1u); else { c.pc = 0x00117EF0u; return; } if (c.pc != 0x00117E90u) [[unlikely]] return; }
L_00117E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00117E9C; } }
    set32(c.r[17], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_00117E9C:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[29].w[0] + 88u), c.r[3].w[0]);  goto L_00117EB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00117EC8; } }
L_00117EB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117EC4u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0006(c, 22u, depth + 1u); else { c.pc = 0x00118310u; return; } if (c.pc != 0x00117EC4u) [[unlikely]] return; }
L_00117EC4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00117EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00117EF0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00117F00:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00117F10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_00117F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], c.r[4].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00117F70; } }
L_00117F44:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00117F60; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00117F70; } }
L_00117F60:
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00117F70:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117F44u | kUnwind; return; } goto L_00117F44; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_00117F98; }
    set32(c.r[3], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] + 12u);  goto L_00117FB0; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_00117F98:
    set32(c.r[8], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00117FACu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0006(c, 11u, depth + 1u); else { c.pc = 0x001180E0u; return; } if (c.pc != 0x00117FACu) [[unlikely]] return; }
L_00117FAC:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_00117FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00117FC0:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_00117FE4; } }
L_00117FCC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_00117FE4; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_00117FE4:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117FCCu | kUnwind; return; } goto L_00117FCC; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  [[clang::musttail]] return unit_0006(c, 2u, depth); }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.budget -= 2;
    [[clang::musttail]] return unit_0006(c, 1u, depth);
}

}
