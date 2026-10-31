#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F8[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54,
    0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0,
    0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190,
    0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0,
    0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213,
    0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00F8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004E0000;
    case 2u: goto L_004E001C;
    case 3u: goto L_004E0020;
    case 4u: goto L_004E012C;
    case 5u: goto L_004E01C0;
    case 6u: goto L_004E01E4;
    case 7u: goto L_004E0214;
    case 8u: goto L_004E0230;
    case 9u: goto L_004E02A8;
    case 10u: goto L_004E0310;
    case 11u: goto L_004E0318;
    case 12u: goto L_004E0328;
    case 13u: goto L_004E0334;
    case 14u: goto L_004E0354;
    case 15u: goto L_004E040C;
    case 16u: goto L_004E0450;
    case 17u: goto L_004E05A0;
    case 18u: goto L_004E05B0;
    case 19u: goto L_004E064C;
    case 20u: goto L_004E0660;
    case 21u: goto L_004E073C;
    case 22u: goto L_004E0800;
    case 23u: goto L_004E0840;
    case 24u: goto L_004E0860;
    case 25u: goto L_004E0898;
    case 26u: goto L_004E08FC;
    case 27u: goto L_004E0910;
    case 28u: goto L_004E0A00;
    case 29u: goto L_004E0A60;
    case 30u: goto L_004E0A70;
    case 31u: goto L_004E0C60;
    case 32u: goto L_004E0CD0;
    case 33u: goto L_004E0CF0;
    case 34u: goto L_004E0DDC;
    case 35u: goto L_004E0E70;
    case 36u: goto L_004E0E90;
    case 37u: goto L_004E0FA4;
    case 38u: goto L_004E0FD0;
    case 39u: goto L_004E0FF0;
    case 40u: goto L_004E1024;
    case 41u: goto L_004E1180;
    case 42u: goto L_004E11C4;
    case 43u: goto L_004E1254;
    case 44u: goto L_004E1270;
    case 45u: goto L_004E133C;
    case 46u: goto L_004E1350;
    case 47u: goto L_004E13AC;
    case 48u: goto L_004E13B4;
    case 49u: goto L_004E13C4;
    case 50u: goto L_004E13CC;
    case 51u: goto L_004E13DC;
    case 52u: goto L_004E13E4;
    case 53u: goto L_004E13F4;
    case 54u: goto L_004E13FC;
    case 55u: goto L_004E140C;
    case 56u: goto L_004E1414;
    case 57u: goto L_004E1424;
    case 58u: goto L_004E142C;
    case 59u: goto L_004E144C;
    case 60u: goto L_004E1458;
    case 61u: goto L_004E1484;
    case 62u: goto L_004E14AC;
    case 63u: goto L_004E14CC;
    case 64u: goto L_004E152C;
    case 65u: goto L_004E15AC;
    case 66u: goto L_004E16D8;
    case 67u: goto L_004E1724;
    case 68u: goto L_004E175C;
    case 69u: goto L_004E1854;
    case 70u: goto L_004E188C;
    case 71u: goto L_004E18A0;
    case 72u: goto L_004E18B8;
    case 73u: goto L_004E1950;
    case 74u: goto L_004E196C;
    case 75u: goto L_004E197C;
    case 76u: goto L_004E1988;
    case 77u: goto L_004E1A30;
    case 78u: goto L_004E1A70;
    case 79u: goto L_004E1B1C;
    case 80u: goto L_004E1B90;
    case 81u: goto L_004E1BA0;
    case 82u: goto L_004E1C70;
    case 83u: goto L_004E1C98;
    case 84u: goto L_004E1CA4;
    case 85u: goto L_004E1CC4;
    case 86u: goto L_004E1CD8;
    case 87u: goto L_004E1CEC;
    case 88u: goto L_004E1D24;
    case 89u: goto L_004E1D50;
    case 90u: goto L_004E1D6C;
    case 91u: goto L_004E1DB4;
    case 92u: goto L_004E1DC4;
    case 93u: goto L_004E1DF4;
    case 94u: goto L_004E1E28;
    case 95u: goto L_004E1E4C;
    case 96u: goto L_004E1E58;
    case 97u: goto L_004E1E84;
    case 98u: goto L_004E1EA4;
    case 99u: goto L_004E1EF0;
    case 100u: goto L_004E1F10;
    case 101u: goto L_004E1F48;
    case 102u: goto L_004E1F68;
    case 103u: goto L_004E1FA4;
    case 104u: goto L_004E1FBC;
    case 105u: goto L_004E204C;
    case 106u: goto L_004E2078;
    case 107u: goto L_004E2094;
    case 108u: goto L_004E20E0;
    case 109u: goto L_004E2164;
    case 110u: goto L_004E2198;
    case 111u: goto L_004E21BC;
    case 112u: goto L_004E2208;
    case 113u: goto L_004E22D4;
    case 114u: goto L_004E22E0;
    case 115u: goto L_004E2320;
    case 116u: goto L_004E23F0;
    case 117u: goto L_004E241C;
    case 118u: goto L_004E2428;
    case 119u: goto L_004E246C;
    case 120u: goto L_004E2478;
    case 121u: goto L_004E2498;
    case 122u: goto L_004E24B0;
    case 123u: goto L_004E24E0;
    case 124u: goto L_004E24FC;
    case 125u: goto L_004E250C;
    case 126u: goto L_004E2518;
    case 127u: goto L_004E25BC;
    case 128u: goto L_004E25D4;
    case 129u: goto L_004E25EC;
    case 130u: goto L_004E25F8;
    case 131u: goto L_004E2604;
    case 132u: goto L_004E2614;
    case 133u: goto L_004E262C;
    case 134u: goto L_004E2644;
    case 135u: goto L_004E2650;
    case 136u: goto L_004E2678;
    case 137u: goto L_004E2684;
    case 138u: goto L_004E2690;
    case 139u: goto L_004E269C;
    case 140u: goto L_004E26D8;
    case 141u: goto L_004E273C;
    case 142u: goto L_004E2748;
    case 143u: goto L_004E2754;
    case 144u: goto L_004E2760;
    case 145u: goto L_004E2814;
    case 146u: goto L_004E2860;
    case 147u: goto L_004E2870;
    case 148u: goto L_004E287C;
    case 149u: goto L_004E28A0;
    case 150u: goto L_004E28AC;
    case 151u: goto L_004E28C4;
    case 152u: goto L_004E28D0;
    case 153u: goto L_004E2920;
    case 154u: goto L_004E294C;
    case 155u: goto L_004E2990;
    case 156u: goto L_004E2A28;
    case 157u: goto L_004E2A38;
    case 158u: goto L_004E2A44;
    case 159u: goto L_004E2A50;
    case 160u: goto L_004E2B44;
    case 161u: goto L_004E2B50;
    case 162u: goto L_004E2B5C;
    case 163u: goto L_004E2BE0;
    case 164u: goto L_004E2BEC;
    case 165u: goto L_004E2BF8;
    case 166u: goto L_004E2C18;
    case 167u: goto L_004E2C2C;
    case 168u: goto L_004E2C48;
    case 169u: goto L_004E2C54;
    case 170u: goto L_004E2C68;
    case 171u: goto L_004E2C74;
    case 172u: goto L_004E2C9C;
    case 173u: goto L_004E2CA8;
    case 174u: goto L_004E2CB8;
    case 175u: goto L_004E2CC8;
    case 176u: goto L_004E2CD0;
    case 177u: goto L_004E2CDC;
    case 178u: goto L_004E2CE8;
    case 179u: goto L_004E2D54;
    case 180u: goto L_004E2D84;
    case 181u: goto L_004E2D98;
    case 182u: goto L_004E2DAC;
    case 183u: goto L_004E2DCC;
    case 184u: goto L_004E2DD4;
    case 185u: goto L_004E2DE0;
    case 186u: goto L_004E2DE8;
    case 187u: goto L_004E2DF8;
    case 188u: goto L_004E2E24;
    case 189u: goto L_004E2E74;
    case 190u: goto L_004E2E7C;
    case 191u: goto L_004E2E88;
    case 192u: goto L_004E2E90;
    case 193u: goto L_004E2EA0;
    case 194u: goto L_004E2ECC;
    case 195u: goto L_004E2F1C;
    case 196u: goto L_004E2F24;
    case 197u: goto L_004E2F34;
    case 198u: goto L_004E2F5C;
    case 199u: goto L_004E2F80;
    case 200u: goto L_004E2FE0;
    case 201u: goto L_004E2FEC;
    case 202u: goto L_004E2FF4;
    case 203u: goto L_004E3004;
    case 204u: goto L_004E300C;
    case 205u: goto L_004E301C;
    case 206u: goto L_004E3024;
    case 207u: goto L_004E3034;
    case 208u: goto L_004E303C;
    case 209u: goto L_004E304C;
    case 210u: goto L_004E3054;
    case 211u: goto L_004E3064;
    case 212u: goto L_004E306C;
    case 213u: goto L_004E307C;
    case 214u: goto L_004E3084;
    case 215u: goto L_004E3094;
    case 216u: goto L_004E309C;
    case 217u: goto L_004E30AC;
    case 218u: goto L_004E30B4;
    case 219u: goto L_004E30C4;
    case 220u: goto L_004E30CC;
    case 221u: goto L_004E30DC;
    case 222u: goto L_004E30E4;
    case 223u: goto L_004E30F4;
    case 224u: goto L_004E30FC;
    case 225u: goto L_004E311C;
    case 226u: goto L_004E3134;
    case 227u: goto L_004E3160;
    case 228u: goto L_004E3170;
    case 229u: goto L_004E3190;
    case 230u: goto L_004E31B0;
    case 231u: goto L_004E31D0;
    case 232u: goto L_004E31F0;
    case 233u: goto L_004E3200;
    case 234u: goto L_004E3220;
    case 235u: goto L_004E3230;
    case 236u: goto L_004E3270;
    case 237u: goto L_004E32F0;
    case 238u: goto L_004E331C;
    case 239u: goto L_004E3330;
    case 240u: goto L_004E334C;
    case 241u: goto L_004E335C;
    case 242u: goto L_004E3378;
    case 243u: goto L_004E338C;
    case 244u: goto L_004E339C;
    case 245u: goto L_004E33AC;
    case 246u: goto L_004E33B8;
    case 247u: goto L_004E33CC;
    case 248u: goto L_004E33D8;
    case 249u: goto L_004E33EC;
    case 250u: goto L_004E3408;
    case 251u: goto L_004E3428;
    case 252u: goto L_004E3438;
    case 253u: goto L_004E3454;
    case 254u: goto L_004E3468;
    case 255u: goto L_004E3478;
    case 256u: goto L_004E34AC;
    case 257u: goto L_004E34DC;
    case 258u: goto L_004E350C;
    case 259u: goto L_004E352C;
    case 260u: goto L_004E3560;
    case 261u: goto L_004E3870;
    case 262u: goto L_004E3898;
    case 263u: goto L_004E38CC;
    case 264u: goto L_004E38F0;
    case 265u: goto L_004E399C;
    case 266u: goto L_004E3AE0;
    case 267u: goto L_004E3D40;
    case 268u: goto L_004E3E40;
    case 269u: goto L_004E3E6C;
    default: bad_entry(c, 0x004E0000u); return;
    }
L_004E0000:
    c.f[1] = ld32((c.r[3].w[0] + 1092u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 1088u), c.f[0]);
    c.budget -= 7;
L_004E001C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 1;
L_004E0020:
    c.f[0] = ld32((c.r[16].w[0] + 800u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1171u));
    c.f[1] = ld32((c.r[3].w[0] + 1092u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004E0048; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 4;
L_004E0048:
    c.f[0] = ld32((c.r[16].w[0] + 1496u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.f[2] = ld32((c.r[16].w[0] + 436u));
    c.f[1] = ld32((c.r[16].w[0] + 372u));
    c.f[4] = ld32((c.r[16].w[0] + 432u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 368u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[7] = fp::mul(c.f[20], c.f[0]);
    c.f[6] = ld32((c.r[16].w[0] + 440u));
    c.f[5] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));  if (t) { goto L_004E0088; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E00C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E00A8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E00A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E00B8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E00B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E00C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E00C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0] + 432u));  goto L_004E00E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[7] = fp::mul(c.f[7], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 432u));
    c.budget -= 5;
L_004E00E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[5] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[0] = ld32((c.r[16].w[0] + 436u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    c.f[4] = ld32((c.r[16].w[0] + 372u));
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 440u));
    c.facc = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[7], c.f[4]));
    c.f[3] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.f[1], c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[6], c.f[3]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E012Cu); c.f[14] = fp::add(c.facc, fp::mul(c.f[7], c.f[3]));  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033B0D0u; return; } if (c.pc != 0x004E012Cu) [[unlikely]] return; }
L_004E012C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0144; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0144:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0184; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0164; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0164:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0174; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0174:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0184; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0184:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004E0218; }
    c.f[2] = ld32((c.r[16].w[0] + 1500u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[3] = c.f[20] & fp::kAbs;
    c.f[1] = ld32((c.r[16].w[0] + 1392u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 448u));
    c.f[1] = ld32((c.r[16].w[0] + 452u));
    c.f[12] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 456u));
    c.f[13] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E01C0u); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E01C0u) [[unlikely]] return; }
L_004E01C0:
    c.f[1] = ld32((c.r[16].w[0] + 1508u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[20] = c.f[20] ^ fp::kSign;
    c.f[12] = 0u;
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E01E4u); c.f[14] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E01E4u) [[unlikely]] return; }
L_004E01E4:
    c.f[2] = ld32((c.r[16].w[0] + 1512u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = ld32((c.r[16].w[0] + 664u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[12] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 668u));
    c.f[0] = ld32((c.r[16].w[0] + 672u));
    c.f[13] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0214u); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E0214u) [[unlikely]] return; }
L_004E0214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004E0218:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E0230:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 920u));
    c.f[2] = ld32((c.r[4].w[0] + 840u));
    c.f[5] = ld32((c.r[4].w[0] + 916u));
    c.f[4] = ld32((c.r[4].w[0] + 844u));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[4].w[0] + 912u));
    c.f[22] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[1] = ld32((c.r[4].w[0] + 836u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[21] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[20] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E02A8u); c.f[12] = fp::min(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x004E02A8u) [[unlikely]] return; }
L_004E02A8:
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E02F0; } }
    c.f[2] = fp::sqrt(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[12] = fp::mul(c.f[22], c.f[1]);
    c.f[13] = fp::mul(c.f[21], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[14] = fp::mul(c.f[20], c.f[1]);  if (t) { goto L_004E0304; } }
L_004E02F0:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = c.f[12];
    c.budget -= 5;
L_004E0304:
    c.f[15] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0310u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_008F(c, 63u, depth + 1u); else { c.pc = 0x0033D610u; return; } if (c.pc != 0x004E0310u) [[unlikely]] return; }
L_004E0310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0318u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 193u, depth + 1u); else { c.pc = 0x0033B0A0u; return; } if (c.pc != 0x004E0318u) [[unlikely]] return; }
L_004E0318:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0328u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_008F(c, 62u, depth + 1u); else { c.pc = 0x0033D530u; return; } if (c.pc != 0x004E0328u) [[unlikely]] return; }
L_004E0328:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0334u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008E(c, 198u, depth + 1u); else { c.pc = 0x0033B0F0u; return; } if (c.pc != 0x004E0334u) [[unlikely]] return; }
L_004E0334:
    c.f[2] = ld32((c.r[16].w[0] + 436u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[16].w[0] + 440u));
    c.f[0] = ld32((c.r[16].w[0] + 432u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0354u); st32((c.r[29].w[0] + 56u), c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x004E0354u) [[unlikely]] return; }
L_004E0354:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[11] = ld32((c.r[29].w[0] + 56u));
    c.f[8] = ld32((c.r[29].w[0] + 80u));
    c.f[3] = ld32((c.r[29].w[0] + 48u));
    c.facc = fp::mul(c.f[11], c.f[13]);
    c.f[10] = ld32((c.r[29].w[0] + 92u));
    c.f[9] = ld32((c.r[29].w[0] + 52u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[8]));
    c.f[6] = ld32((c.r[29].w[0] + 84u));
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[9], c.f[10]));
    c.facc = fp::mul(c.f[3], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[8]));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[11], c.f[6]));
    c.facc = fp::mul(c.f[9], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[11], c.f[8]));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[3], c.f[13]));
    c.facc = fp::mul(c.f[9], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[6]));
    c.f[2] = ld32((c.r[16].w[0] + 436u));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[11], c.f[10]));
    c.f[1] = ld32((c.r[16].w[0] + 432u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 440u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = fp::sqrt(c.f[0]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[4]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[10], c.f[5]));
    c.facc = fp::mul(c.f[13], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[20] = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[7]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[6], c.f[4]));
    c.facc = fp::mul(c.f[10], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[4]));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[13], c.f[7]));
    c.f[22] = fp::mul(c.f[2], c.f[1]);
    c.f[21] = fp::mul(c.f[2], c.f[0]);
    c.f[12] = c.f[20];
    c.f[13] = c.f[22];
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E040Cu); c.f[14] = c.f[21];  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033B0D0u; return; } if (c.pc != 0x004E040Cu) [[unlikely]] return; }
L_004E040C:
    st32((c.r[16].w[0] + 432u), c.f[20]);
    st32((c.r[16].w[0] + 436u), c.f[22]);
    st32((c.r[16].w[0] + 440u), c.f[21]);
    c.f[0] = ld32((c.r[16].w[0] + 912u));
    st32((c.r[16].w[0] + 836u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 916u));
    st32((c.r[16].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 920u));
    st32((c.r[16].w[0] + 844u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E0450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 832u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004E05A4; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 884u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[6] = ld32((c.r[4].w[0] + 876u));  goto L_004E0474; }
    c.f[6] = ld32((c.r[4].w[0] + 880u));
    c.budget -= 1;
L_004E0474:
    c.f[1] = ld32((c.r[4].w[0] + 852u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 856u));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 936u));
    c.f[2] = 0u;
    c.f[5] = ld32((c.r[4].w[0] + 1584u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = ld32((c.r[4].w[0] + 888u));
    c.facc = fp::add(c.f[2], c.f[3]);
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[5], c.f[4]));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 928u));  goto L_004E04C0; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1181u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 1172u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[4].w[0] + 928u));
    c.budget -= 4;
L_004E04C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[4].w[0] + 924u));
    c.f[3] = ld32((c.r[4].w[0] + 932u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[12] = fp::mul(c.f[5], c.f[2]);
    c.f[13] = fp::mul(c.f[5], c.f[1]);
    c.f[14] = fp::mul(c.f[5], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 892u));
    c.f[1] = ld32((c.r[4].w[0] + 1568u));
    c.f[0] = ld32((c.r[4].w[0] + 888u));
    c.f[3] = ld32((c.r[4].w[0] + 356u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 900u));
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.f[0] = ld32((c.r[4].w[0] + 904u));
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 364u));
    c.f[0] = ld32((c.r[4].w[0] + 908u));
    c.f[2] = ld32((c.r[4].w[0] + 912u));
    c.f[1] = ld32((c.r[4].w[0] + 916u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 920u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 4u, c.f[0], c.f[6]);
    c.f[2] = ld32((c.r[4].w[0] + 912u));
    c.f[1] = ld32((c.r[4].w[0] + 916u));
    c.f[0] = ld32((c.r[4].w[0] + 920u));
    c.f[3] = fp::mul(c.f[4], c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 50;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));  goto L_004E0598; }
    c.f[12] = fp::add(c.f[3], c.f[12]);
    c.f[13] = fp::add(c.f[2], c.f[13]);
    c.f[14] = fp::add(c.f[1], c.f[14]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 4;
L_004E0598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E05A0u);  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x004E05A0u) [[unlikely]] return; }
L_004E05A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004E05A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E05B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[2] = c.r[3].w[0];
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.f[4] = ld32((c.r[4].w[0] + 1552u));  if (t) { goto L_004E05D0; } }
    st32((c.r[4].w[0] + 1360u), 0u);
    c.budget -= 1;
L_004E05D0:
    c.f[1] = ld32((c.r[4].w[0] + 1360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[4].w[0] + 348u));  goto L_004E0610; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[5].w[0];
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 348u));
    c.budget -= 9;
L_004E0610:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004E0650; }
    c.f[2] = ld32((c.r[4].w[0] + 1392u));
    c.f[0] = ld32((c.r[4].w[0] + 452u));
    c.f[1] = ld32((c.r[4].w[0] + 448u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[12]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[13] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 456u));
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E064Cu); c.f[14] = fp::mul(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E064Cu) [[unlikely]] return; }
L_004E064C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004E0650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E0660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.f[22] = c.f[12];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[21] = c.f[13];  if (t) { goto L_004E06A0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E06A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E06E0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E06C0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E06C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E06D0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E06D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E06E0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E06E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004E0844; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1186u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0840; } }
    c.f[1] = ld32((c.r[17].w[0] + 1340u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E0840; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1052u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = ld32((c.r[17].w[0] + 1544u));  if (t) { goto L_004E0734; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
L_004E0734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E073Cu); set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004E073Cu) [[unlikely]] return; }
L_004E073C:
    c.f[8] = ld32((c.r[17].w[0] + 1392u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 424u));
    fpu_div(c, 1u, c.f[1], c.f[8]);
    c.f[6] = 0u;
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[22], c.f[1]));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 416u));
    fpu_div(c, 2u, c.f[2], c.f[8]);
    c.facc = fp::add(c.f[6], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[8]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[22], c.f[1]));
    c.f[1] = ld32((c.r[17].w[0] + 420u));
    c.f[0] = ld32((c.r[17].w[0] + 668u));
    c.f[3] = ld32((c.r[17].w[0] + 664u));
    c.facc = fp::add(c.f[6], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[22], c.f[2]));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 672u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.budget -= 25;
    { const bool t = c.r[16].d[0] != 0ull; c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));  if (t) { goto L_004E07B4; } }
    c.f[0] = ld32((c.r[17].w[0] + 728u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E0840; } }
L_004E07B4:
    c.f[0] = fp::mul(c.f[8], c.f[1]);
    fpu_div(c, 1u, c.f[0], c.f[22]);
    c.f[0] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::mul(c.f[1], c.f[21]);  goto L_004E081C; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E07F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004E0808; } }
L_004E07F0:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004E0800; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E0800:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_004E0808:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[21]);
    c.budget -= 5;
L_004E081C:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[2] = ld32((c.r[17].w[0] + 664u));
    c.f[1] = ld32((c.r[17].w[0] + 668u));
    c.f[0] = ld32((c.r[17].w[0] + 672u));
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0840u); c.f[14] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E0840u) [[unlikely]] return; }
L_004E0840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004E0844:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E0860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1187u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004E0900; }
    c.f[1] = ld32((c.r[4].w[0] + 1100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[4].w[0] + 436u));  goto L_004E08A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0898u);  if (depth < kMaxDepth) unit_00F7(c, 89u, depth + 1u); else { c.pc = 0x004DD3E0u; return; } if (c.pc != 0x004E0898u) [[unlikely]] return; }
L_004E0898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E08FC; } }
L_004E08A0:
    c.f[1] = ld32((c.r[4].w[0] + 404u));
    c.f[4] = ld32((c.r[4].w[0] + 432u));
    c.f[3] = ld32((c.r[4].w[0] + 400u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[4].w[0] + 440u));
    c.f[5] = ld32((c.r[4].w[0] + 408u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = ld32((c.r[4].w[0] + 1664u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[12] = 0u;
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E08FC; } }
    c.f[2] = ld32((c.r[4].w[0] + 1668u));
    c.f[1] = ld32((c.r[4].w[0] + 1660u));
    c.f[0] = ld32((c.r[4].w[0] + 2280u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[14] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E08FCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E08FCu) [[unlikely]] return; }
L_004E08FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004E0900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E0910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1185u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004E0A64; }
    c.f[1] = ld32((c.r[4].w[0] + 1232u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1232u), c.f[1]);  if (t) { goto L_004E0948; } }
    st8((c.r[4].w[0] + 1185u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1186u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004E0948:
    c.f[1] = ld32((c.r[4].w[0] + 1232u));
    c.f[0] = ld32((c.r[4].w[0] + 1652u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[4].w[0] + 436u));  goto L_004E0A08; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0974; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0974:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E09B4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0994; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0994:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E09A4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E09A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E09B4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E09B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E0A60; } }
    c.f[3] = ld32((c.r[4].w[0] + 436u));
    c.f[2] = ld32((c.r[4].w[0] + 372u));
    c.f[5] = ld32((c.r[4].w[0] + 432u));
    c.f[4] = ld32((c.r[4].w[0] + 368u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[7] = ld32((c.r[4].w[0] + 440u));
    c.f[6] = ld32((c.r[4].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = ld32((c.r[4].w[0] + 1656u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[0] = ld32((c.r[4].w[0] + 2284u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0A00u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E0A00u) [[unlikely]] return; }
L_004E0A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E0A60; } }
L_004E0A08:
    c.f[1] = ld32((c.r[4].w[0] + 372u));
    c.f[4] = ld32((c.r[4].w[0] + 432u));
    c.f[3] = ld32((c.r[4].w[0] + 368u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[4].w[0] + 440u));
    c.f[5] = ld32((c.r[4].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = ld32((c.r[4].w[0] + 1648u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[12] = 0u;
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E0A60; } }
    c.f[2] = ld32((c.r[4].w[0] + 1644u));
    c.f[1] = ld32((c.r[4].w[0] + 1236u));
    c.f[0] = ld32((c.r[4].w[0] + 2284u));
    c.f[14] = c.f[12];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0A60u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E0A60u) [[unlikely]] return; }
L_004E0A60:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004E0A64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E0A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1872u)));
    c.f[0] = ld32((c.r[4].w[0] + 1476u));
    set32(c.r[3], ld32((c.r[3].w[0] + 412u)));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E0AAC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1181u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[18].w[0] + 1194u));  goto L_004E0ABC; }
L_004E0AAC:
    st32((c.r[18].w[0] + 1144u), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 1192u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1194u));
    c.budget -= 4;
L_004E0ABC:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0AD0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0AD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0B10; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0AF0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0AF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0B00; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0B00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0B10; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0B10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[18].w[0] + 504u));  goto L_004E0BD0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 1872u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[3] = ld32((c.r[18].w[0] + 356u));  goto L_004E0B38; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1144u), c.r[3].w[0]);  if (t) { goto L_004E0BCC; } }
L_004E0B38:
    c.f[2] = ld32((c.r[18].w[0] + 488u));
    c.f[1] = ld32((c.r[18].w[0] + 360u));
    c.f[0] = ld32((c.r[18].w[0] + 492u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 364u));
    c.f[0] = ld32((c.r[18].w[0] + 496u));
    c.f[6] = ld32((c.r[18].w[0] + 500u));
    c.f[5] = ld32((c.r[18].w[0] + 504u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[18].w[0] + 508u));
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 20;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[18].w[0] + 1468u));  goto L_004E0B90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1144u), 0u);  if (t) { goto L_004E0BCC; } }
L_004E0B90:
    c.f[2] = ld32((c.r[18].w[0] + 348u));
    c.f[1] = ld32((c.r[18].w[0] + 1472u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 1144u), c.f[1]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 1144u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1144u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 1144u), c.f[0]);
    c.budget -= 15;
L_004E0BCC:
    c.f[1] = ld32((c.r[18].w[0] + 504u));
    c.budget -= 1;
L_004E0BD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[4] = ld32((c.r[18].w[0] + 1144u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = ld32((c.r[18].w[0] + 508u));
    c.f[2] = 0u;
    c.f[3] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[1] = fp::add(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 500u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 1132u), c.f[0]);
    st32((c.r[18].w[0] + 1136u), c.f[3]);
    st32((c.r[18].w[0] + 1140u), c.f[1]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1187u));
    c.budget -= 22;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004E0CD4; }
    c.f[2] = ld32((c.r[18].w[0] + 1432u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1876u)));
    c.f[1] = ld32((c.r[18].w[0] + 1392u));
    set32(c.r[17], c.r[18].w[0] + 1136u);
    c.f[0] = ld32((c.r[18].w[0] + 1132u));
    set32(c.r[16], c.r[18].w[0] + 1140u);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 1136u));
    c.f[0] = ld32((c.r[18].w[0] + 1140u));
    c.f[13] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0C60u); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E0C60u) [[unlikely]] return; }
L_004E0C60:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1194u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0CD0; } }
    c.r[6].d[0] = ld8((c.r[18].w[0] + 1956u));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 1957u));
    c.r[4].d[0] = ld8((c.r[18].w[0] + 1958u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1959u));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E0CD0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1163u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0CD0; } }
    c.f[4] = ld32((c.r[18].w[0] + 1428u));
    set32(c.r[4], ld32((c.r[18].w[0] + 1876u)));
    c.f[3] = ld32((c.r[18].w[0] + 1392u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[4] = c.f[4] ^ fp::kSign;
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 1132u));
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0CD0u); c.f[14] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E0CD0u) [[unlikely]] return; }
L_004E0CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004E0CD4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E0CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1168u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E0E70; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1166u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004E0E74; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0E70; } }
    c.f[1] = ld32((c.r[16].w[0] + 348u));
    c.f[0] = ld32((c.r[16].w[0] + 1504u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));  goto L_004E0D44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E0E70; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 1;
L_004E0D44:
    c.f[7] = 0u;
    c.f[20] = ld32((c.r[3].w[0] + 1096u));
    fpu_compare(c, fp::key(c.f[7]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E0E70; } }
    c.f[2] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[16].w[0] + 668u));
    c.f[4] = ld32((c.r[16].w[0] + 416u));
    c.f[3] = ld32((c.r[16].w[0] + 664u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.facc = fp::add(c.f[7], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[6] = ld32((c.r[16].w[0] + 424u));
    c.f[5] = ld32((c.r[16].w[0] + 672u));
    c.facc = fp::add(c.f[7], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 1532u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E0E70; } }
    c.f[0] = ld32((c.r[16].w[0] + 1340u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E0E70; } }
    c.f[2] = ld32((c.r[16].w[0] + 1536u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[3] = c.f[20] ^ fp::kSign;
    c.f[1] = ld32((c.r[16].w[0] + 1392u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 664u));
    c.f[1] = ld32((c.r[16].w[0] + 668u));
    c.f[12] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 672u));
    c.f[13] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0DDCu); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E0DDCu) [[unlikely]] return; }
L_004E0DDC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0DF4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0DF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0E34; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0E14; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0E14:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0E24; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0E24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E0E34; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E0E34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E0E70; } }
    c.f[3] = ld32((c.r[16].w[0] + 1500u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    c.f[4] = c.f[20] & fp::kAbs;
    c.f[0] = ld32((c.r[16].w[0] + 452u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[13] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 448u));
    c.f[0] = ld32((c.r[16].w[0] + 456u));
    c.f[12] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0E70u); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E0E70u) [[unlikely]] return; }
L_004E0E70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004E0E74:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E0E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 388u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1167u));
    c.f[1] = ld32((c.r[4].w[0] + 420u));
    c.f[4] = ld32((c.r[4].w[0] + 384u));
    c.f[3] = ld32((c.r[4].w[0] + 416u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[4].w[0] + 392u));
    c.f[5] = ld32((c.r[4].w[0] + 424u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = ld32((c.r[4].w[0] + 348u));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    fpu_div(c, 0u, c.f[20], c.f[0]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.f[3] = c.f[0] & fp::kAbs;  if (t) { goto L_004E0F00; } }
    c.f[0] = fp::mul(c.f[20], c.f[3]);
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[1] = ld32((c.r[16].w[0] + 1832u));
    c.f[0] = ld32((c.r[16].w[0] + 796u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 796u), c.f[0]);
    c.budget -= 7;
L_004E0F00:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1173u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 1844u));  goto L_004E0F14; }
    st32((c.r[16].w[0] + 796u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 1844u));
    c.budget -= 2;
L_004E0F14:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[16].w[0] + 1848u));  goto L_004E0F28; }
    st32((c.r[16].w[0] + 796u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 1848u));
    c.budget -= 2;
L_004E0F28:
    c.f[0] = ld32((c.r[16].w[0] + 796u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 796u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1852u));
    c.f[1] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_004E0F74; }
    c.f[0] = ld32((c.r[16].w[0] + 1836u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[16].w[0] + 796u));  goto L_004E0F7C; }
    c.f[1] = ld32((c.r[16].w[0] + 796u));
    c.f[0] = ld32((c.r[16].w[0] + 1840u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E0F78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004E0F74:
    st8((c.r[16].w[0] + 1166u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004E0F78:
    c.f[0] = ld32((c.r[16].w[0] + 796u));
    c.budget -= 1;
L_004E0F7C:
    c.f[1] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::min(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0FA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F8(c, 20u, depth + 1u); else { c.pc = 0x004E0660u; return; } if (c.pc != 0x004E0FA4u) [[unlikely]] return; }
L_004E0FA4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1173u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004E0FD4; }
    c.f[1] = ld32((c.r[16].w[0] + 1856u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[14] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E0FD0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E0FD0u) [[unlikely]] return; }
L_004E0FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004E0FD4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E0FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 356u));
    c.f[2] = ld32((c.r[4].w[0] + 488u));
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.f[0] = ld32((c.r[4].w[0] + 492u));
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 364u));
    c.budget -= 13;
L_004E1024:
    c.f[0] = ld32((c.r[4].w[0] + 496u));
    c.f[2] = ld32((c.r[4].w[0] + 500u));
    c.f[1] = ld32((c.r[4].w[0] + 504u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 508u));
    c.f[21] = c.f[12];
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1193u));
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004E1258; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E1254; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 420u));  goto L_004E1090; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E1254; } }
    c.f[1] = ld32((c.r[16].w[0] + 420u));
    c.budget -= 1;
L_004E1090:
    c.f[0] = ld32((c.r[16].w[0] + 480u));
    c.f[5] = ld32((c.r[16].w[0] + 416u));
    c.f[4] = ld32((c.r[16].w[0] + 476u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[7] = ld32((c.r[16].w[0] + 424u));
    c.f[6] = ld32((c.r[16].w[0] + 484u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[3] = 0u;
    c.f[20] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[0] = fp::sub(c.f[20], c.f[3]);
    c.f[2] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E1254; } }
    c.f[1] = ld32((c.r[16].w[0] + 732u));
    c.f[0] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[16].w[0] + 676u));  goto L_004E1184; }
    c.f[0] = fp::mul(c.f[20], c.f[21]);
    fpu_div(c, 2u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_004E1130; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E112C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 4;
L_004E112C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_004E1130:
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E1180; } }
    c.f[0] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = ld32((c.r[16].w[0] + 1020u));
    c.f[1] = ld32((c.r[16].w[0] + 1016u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[13] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 1024u));
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1180u); c.f[14] = fp::mul(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E1180u) [[unlikely]] return; }
L_004E1180:
    c.f[5] = ld32((c.r[16].w[0] + 676u));
    c.budget -= 1;
L_004E1184:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[4] = ld32((c.r[16].w[0] + 680u));
    c.f[1] = ld32((c.r[16].w[0] + 1008u));
    c.f[3] = ld32((c.r[16].w[0] + 684u));
    c.f[0] = ld32((c.r[16].w[0] + 1012u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E11C4u); c.f[12] = fp::min(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 428u, depth + 1u); else { c.pc = 0x003AF710u; return; } if (c.pc != 0x004E11C4u) [[unlikely]] return; }
L_004E11C4:
    c.f[1] = 0u;
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = c.f[1] & fp::kAbs;
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E1254; } }
    c.f[1] = fp::mul(c.f[20], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] | 34464ull;
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E1254; } }
    c.f[0] = fp::mul(c.f[20], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    fpu_div(c, 4u, c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = ld32((c.r[16].w[0] + 680u));
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[13] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 676u));
    c.f[0] = ld32((c.r[16].w[0] + 684u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[12] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1254u); c.f[14] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E1254u) [[unlikely]] return; }
L_004E1254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004E1258:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E1270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 824u));
    c.f[3] = ld32((c.r[4].w[0] + 364u));
    c.f[2] = ld32((c.r[4].w[0] + 820u));
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 816u));
    c.f[1] = ld32((c.r[4].w[0] + 356u));
    st32((c.r[29].w[0] + 24u), c.f[4]);
    st32((c.r[29].w[0] + 20u), c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    fpu_rsqrt(c, 2u, c.f[0], c.f[2]);
    c.f[6] = fp::mul(c.f[1], c.f[2]);
    c.f[5] = fp::mul(c.f[3], c.f[2]);
    c.f[4] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 420u));
    c.f[2] = ld32((c.r[4].w[0] + 416u));
    c.f[3] = ld32((c.r[4].w[0] + 424u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 16u), c.f[6]);
    st32((c.r[29].w[0] + 20u), c.f[5]);
    c.budget -= 36;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 24u), c.f[4]);  if (t) { goto L_004E133C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 1u, c.f[0], c.f[12]);
    c.f[0] = ld32((c.r[4].w[0] + 1392u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[12] = fp::mul(c.f[6], c.f[0]);
    c.f[13] = fp::mul(c.f[5], c.f[0]);
    c.f[14] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[12]);
    st32((c.r[29].w[0] + 20u), c.f[13]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E133Cu); st32((c.r[29].w[0] + 24u), c.f[14]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E133Cu) [[unlikely]] return; }
L_004E133C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E1350:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[24] = ld32((c.r[29].w[0] + 160u));
    c.f[25] = ld32((c.r[29].w[0] + 164u));
    c.f[26] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13ACu); c.f[29] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E13ACu) [[unlikely]] return; }
L_004E13AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13B4u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E13B4u) [[unlikely]] return; }
L_004E13B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  goto L_004E1438; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13C4u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E13C4u) [[unlikely]] return; }
L_004E13C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13CCu); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E13CCu) [[unlikely]] return; }
L_004E13CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E1434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13DCu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E13DCu) [[unlikely]] return; }
L_004E13DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13E4u); c.f[12] = ld32((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E13E4u) [[unlikely]] return; }
L_004E13E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E1434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13F4u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E13F4u) [[unlikely]] return; }
L_004E13F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E13FCu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E13FCu) [[unlikely]] return; }
L_004E13FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E1434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E140Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E140Cu) [[unlikely]] return; }
L_004E140C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1414u); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E1414u) [[unlikely]] return; }
L_004E1414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E1434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1424u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E1424u) [[unlikely]] return; }
L_004E1424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E142Cu); c.f[12] = ld32((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E142Cu) [[unlikely]] return; }
L_004E142C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  goto L_004E1450; }
L_004E1434:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 1;
L_004E1438:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E144Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x004E144Cu) [[unlikely]] return; }
L_004E144C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 1;
L_004E1450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1458u);  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E1458u) [[unlikely]] return; }
L_004E1458:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 356u));
    c.f[13] = ld32((c.r[16].w[0] + 360u));
    c.f[14] = ld32((c.r[16].w[0] + 364u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1484u); set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x004E1484u) [[unlikely]] return; }
L_004E1484:
    set32(c.r[17], ld32((c.r[16].w[0] + 1916u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 2300u)));  goto L_004E14E0; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 80u)));  goto L_004E14C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E14ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x004E14ACu) [[unlikely]] return; }
L_004E14AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 5;
L_004E14C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E14CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E14CCu) [[unlikely]] return; }
L_004E14CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 2300u)));
    c.budget -= 5;
L_004E14E0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2296u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    mmi::divu(c, 0, 0u, c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0] + 428u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 2300u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 2296u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1916u)));
    mmi::divu(c, 0, 0u, c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E152Cu); set32(c.r[7], c.r[7].w[0] + 6704u);  if (depth < kMaxDepth) unit_00DC(c, 160u, depth + 1u); else { c.pc = 0x004730B0u; return; } if (c.pc != 0x004E152Cu) [[unlikely]] return; }
L_004E152C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2296u)));
    c.f[2] = 0u;
    mmi::divu(c, 0, 0u, c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 428u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.f[0] = ld32((c.r[3].w[0] + 1092u));
    st32((c.r[16].w[0] + 1368u), c.f[0]);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    st32((c.r[29].w[0] + 240u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 416u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 420u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 424u));
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 348u));
    c.f[0] = ld32((c.r[16].w[0] + 1424u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[27] = fp::min(c.f[1], c.f[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004E1728; } }
L_004E15AC:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1956u));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1957u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1958u));
    set32(c.r[7], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.f[1] = ld32((c.r[16].w[0] + 420u));
    c.f[0] = ld32((c.r[7].w[0] + 252u));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 416u));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.f[2] = ld32((c.r[7].w[0] + 248u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 424u));
    c.f[4] = ld32((c.r[7].w[0] + 256u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));  if (t) { goto L_004E161C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.f[20] & fp::kAbs;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004E1728; }
L_004E161C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));  goto L_004E16DC; }
    st32((c.r[29].w[0] + 216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 220u), 0u);
    c.f[8] = 0u;
    st32((c.r[29].w[0] + 224u), 0u);
    c.f[12] = c.r[2].w[0];
    c.f[7] = ld32((c.r[7].w[0] + 152u));
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 216u), c.f[7]);
    c.f[0] = ld32((c.r[7].w[0] + 156u));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[6] = ld32((c.r[7].w[0] + 160u));
    c.facc = fp::add(c.f[8], c.f[0]);
    st32((c.r[29].w[0] + 224u), c.f[6]);
    c.f[2] = ld32((c.r[7].w[0] + 252u));
    c.f[1] = ld32((c.r[7].w[0] + 256u));
    c.f[0] = ld32((c.r[7].w[0] + 248u));
    c.f[3] = fp::mul(c.f[20], c.f[2]);
    c.f[5] = fp::mul(c.f[20], c.f[1]);
    c.f[4] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 180u), c.f[3]);
    st32((c.r[29].w[0] + 184u), c.f[5]);
    st32((c.r[29].w[0] + 176u), c.f[4]);
    c.f[2] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[16].w[0] + 424u));
    c.f[0] = ld32((c.r[16].w[0] + 416u));
    c.f[3] = fp::sub(c.f[2], c.f[3]);
    c.f[2] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.f[0], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.facc = fp::add(c.f[8], c.f[6]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.facc = fp::add(c.f[8], c.f[7]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[29], c.f[1]));
    st32((c.r[29].w[0] + 180u), c.f[3]);
    st32((c.r[29].w[0] + 184u), c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E16D8u); st32((c.r[29].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_00FD(c, 569u, depth + 1u); else { c.pc = 0x004F7A40u; return; } if (c.pc != 0x004E16D8u) [[unlikely]] return; }
L_004E16D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 1;
L_004E16DC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E1724; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40D00000u);
    c.f[1] = c.f[20] & fp::kAbs;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E1724; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1724u); c.f[13] = ld32((c.r[28].w[0] - 32564u));  if (depth < kMaxDepth) unit_00D2(c, 309u, depth + 1u); else { c.pc = 0x0044A8B0u; return; } if (c.pc != 0x004E1724u) [[unlikely]] return; }
L_004E1724:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004E1728:
    set32(c.r[3], ld32((c.r[16].w[0] + 344u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E15ACu | kUnwind; return; } goto L_004E15AC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.f[23] = ld32((c.r[3].w[0] + 4768u));
    c.f[20] = fp::mul(c.f[29], c.f[27]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[22] = ld32((c.r[3].w[0] + 4772u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[21] = ld32((c.r[3].w[0] + 4776u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
L_004E175C:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 1404u));  goto L_004E17CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 1408u));  goto L_004E17B8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 1404u));  goto L_004E17A4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 1408u));  goto L_004E178C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + c.r[19].w[0]);  if (t) { goto L_004E17DC; } }
L_004E178C:
    c.f[1] = ld32((c.r[16].w[0] + 1404u));
    c.f[0] = ld32((c.r[16].w[0] + 1400u));
    c.f[24] = c.f[2] ^ fp::kSign;
    c.f[25] = c.f[1] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[26] = c.f[0] ^ fp::kSign;  if (t) { goto L_004E17D8; } }
L_004E17A4:
    c.f[0] = ld32((c.r[16].w[0] + 1400u));
    c.f[24] = ld32((c.r[16].w[0] + 1408u));
    c.f[25] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[26] = c.f[0] ^ fp::kSign;  if (t) { goto L_004E17D8; } }
L_004E17B8:
    c.f[0] = ld32((c.r[16].w[0] + 1404u));
    c.f[26] = ld32((c.r[16].w[0] + 1400u));
    c.f[24] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[25] = c.f[0] ^ fp::kSign;  if (t) { goto L_004E17D8; } }
L_004E17CC:
    c.f[24] = ld32((c.r[16].w[0] + 1408u));
    c.f[26] = ld32((c.r[16].w[0] + 1400u));
    c.f[25] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
L_004E17D8:
    set32(c.r[4], c.r[16].w[0] + c.r[19].w[0]);
    c.budget -= 1;
L_004E17DC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1952u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  goto L_004E18A4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1956u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E18A0; } }
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004E19D4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));  goto L_004E1890; }
    c.f[2] = c.f[1] ^ fp::kSign;
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[0] = fp::mul(c.f[2], c.f[23]);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[12] = fp::add(c.f[0], c.f[24]);
    c.f[1] = fp::mul(c.f[2], c.f[22]);
    c.f[0] = fp::mul(c.f[2], c.f[21]);
    c.f[13] = fp::add(c.f[1], c.f[25]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1854u); c.f[14] = fp::add(c.f[0], c.f[26]);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x004E1854u) [[unlikely]] return; }
L_004E1854:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[29].w[0] + 200u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[29].w[0] + 204u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[29].w[0] + 208u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 200u);
    c.f[12] = c.f[27];
    set32(c.r[6], c.r[29].w[0] + 232u);
    st32((c.r[29].w[0] + 200u), c.f[2]);
    st32((c.r[29].w[0] + 204u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E188Cu); st32((c.r[29].w[0] + 208u), c.f[0]);  if (depth < kMaxDepth) unit_00FD(c, 569u, depth + 1u); else { c.pc = 0x004F7A40u; return; } if (c.pc != 0x004E188Cu) [[unlikely]] return; }
L_004E188C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 1;
L_004E1890:
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E18A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004E18A0u) [[unlikely]] return; }
L_004E18A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 1;
L_004E18A4:
    c.f[12] = c.f[24];
    c.f[13] = c.f[25];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E18B8u); c.f[14] = c.f[26];  if (depth < kMaxDepth) unit_008E(c, 176u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x004E18B8u) [[unlikely]] return; }
L_004E18B8:
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[3], c.r[19].w[0] << 2);
    c.f[3] = ld32((c.r[16].w[0] + 372u));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.f[4] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.f[5] = ld32((c.r[16].w[0] + 368u));
    set32(c.r[18], c.r[4].w[0] + 1920u);
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[6] = ld32((c.r[29].w[0] + 136u));
    c.f[7] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[2] = fp::mul(c.f[2], c.f[29]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 1920u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 1920u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1396u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));
    c.f[0] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = fp::sub(c.f[25], c.f[1]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    fpu_div(c, 28u, c.f[1], c.f[0]);
    c.budget -= 33;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E19A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 6397u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1950u); st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004E1950u) [[unlikely]] return; }
L_004E1950:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 248u);  goto L_004E1964; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004E198C; } }
L_004E1964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E196Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004E196Cu) [[unlikely]] return; }
L_004E196C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 244u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E197Cu); set32(c.r[6], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004E197Cu) [[unlikely]] return; }
L_004E197C:
    set32(c.r[4], c.r[29].w[0] + 248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1988u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004E1988u) [[unlikely]] return; }
L_004E1988:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E198C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 1412u));  goto L_004E19A4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[28] = c.r[3].w[0];
    c.budget -= 2;
L_004E19A0:
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.budget -= 1;
L_004E19A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = fp::sub(c.f[25], c.f[2]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[28]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 12;
L_004E19D4:
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E175Cu | kUnwind; return; } goto L_004E175C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004E1A30:
    c.f[2] = ld32((c.r[6].w[0] + 68u));
    c.f[1] = ld32((c.r[6].w[0] + 72u));
    c.f[0] = ld32((c.r[6].w[0] + 64u));
    st32((c.r[5].w[0] + 804u), c.f[0]);
    st32((c.r[5].w[0] + 808u), c.f[2]);
    st32((c.r[5].w[0] + 812u), c.f[1]);
    c.f[2] = ld32((c.r[6].w[0] + 52u));
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.f[0] = ld32((c.r[6].w[0] + 48u));
    st32((c.r[5].w[0] + 816u), c.f[0]);
    st32((c.r[5].w[0] + 820u), c.f[2]);
    st32((c.r[5].w[0] + 824u), c.f[1]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 828u), c.f[12]);  c.pc = t; return; }
L_004E1A70:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.f[12] = ld32((c.r[2].w[0] + 4768u));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2316u));
    c.f[13] = ld32((c.r[3].w[0] + 4772u));
    c.f[14] = ld32((c.r[2].w[0] + 4776u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    st8((c.r[4].w[0] + 2317u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 196u));
    st8((c.r[4].w[0] + 2316u), static_cast<std::uint8_t>(0u));
    c.f[22] = ld32((c.r[29].w[0] + 200u));
    st8((c.r[4].w[0] + 2318u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[8].w[0] - 2632u));
    st32((c.r[4].w[0] + 2320u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] - 2628u));
    st32((c.r[4].w[0] + 2324u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] - 2624u));
    st32((c.r[4].w[0] + 2328u), c.f[0]);
    st32((c.r[4].w[0] + 2332u), 0u);
    st8((c.r[4].w[0] + 2344u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1968u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1B1Cu); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_008E(c, 174u, depth + 1u); else { c.pc = 0x0033AB80u; return; } if (c.pc != 0x004E1B1Cu) [[unlikely]] return; }
L_004E1B1C:
    c.f[2] = ld32((c.r[29].w[0] + 260u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[2], 0u + 6u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    st8((c.r[20].w[0] + 1156u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1157u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1184u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1068u), 0u);
    st32((c.r[20].w[0] + 344u), 0u);
    st32((c.r[20].w[0] + 2312u), 0u);
    st8((c.r[20].w[0] + 1189u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1194u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1195u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1196u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), 0u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1B90u); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_00C0(c, 142u, depth + 1u); else { c.pc = 0x00401F00u; return; } if (c.pc != 0x004E1B90u) [[unlikely]] return; }
L_004E1B90:
    set32(c.r[2], ld32((c.r[20].w[0] + 1872u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0] + 412u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 4;
L_004E1BA0:
    set32(c.r[16], c.r[18].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | 16960ull;
    set32(c.r[3], c.r[20].w[0] + c.r[16].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { goto L_004E1C2C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[20].w[0] + 1408u));  goto L_004E1C18; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[20].w[0] + 1404u));  goto L_004E1C04; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[2] = ld32((c.r[20].w[0] + 1408u));  goto L_004E1BEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[20].w[0] + 1412u));  if (t) { goto L_004E1C40; } }
L_004E1BEC:
    c.f[1] = ld32((c.r[20].w[0] + 1404u));
    c.f[0] = ld32((c.r[20].w[0] + 1400u));
    c.f[20] = c.f[2] ^ fp::kSign;
    c.f[21] = c.f[1] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0] ^ fp::kSign;  if (t) { goto L_004E1C3C; } }
L_004E1C04:
    c.f[0] = ld32((c.r[20].w[0] + 1400u));
    c.f[20] = ld32((c.r[20].w[0] + 1408u));
    c.f[21] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0] ^ fp::kSign;  if (t) { goto L_004E1C3C; } }
L_004E1C18:
    c.f[0] = ld32((c.r[20].w[0] + 1404u));
    c.f[22] = ld32((c.r[20].w[0] + 1400u));
    c.f[20] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_004E1C3C; } }
L_004E1C2C:
    c.f[0] = ld32((c.r[20].w[0] + 1404u));
    c.f[20] = ld32((c.r[20].w[0] + 1408u));
    c.f[22] = ld32((c.r[20].w[0] + 1400u));
    c.f[21] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
L_004E1C3C:
    c.f[0] = ld32((c.r[20].w[0] + 1412u));
    c.budget -= 1;
L_004E1C40:
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 1416u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[12] = c.f[20];
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    st8((c.r[2].w[0] + 1964u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[20].w[0] + 1876u)));
    c.f[0] = ld32((c.r[20].w[0] + 1420u));
    c.f[14] = c.f[22];
    c.f[13] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1C70u); c.f[23] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 177u, depth + 1u); else { c.pc = 0x0033AD10u; return; } if (c.pc != 0x004E1C70u) [[unlikely]] return; }
L_004E1C70:
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.f[13] = ld32((c.r[29].w[0] + 180u));
    c.f[14] = ld32((c.r[29].w[0] + 184u));
    c.f[15] = ld32((c.r[29].w[0] + 256u));
    c.f[16] = ld32((c.r[29].w[0] + 260u));
    c.f[17] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1C98u); set32(c.r[21], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_009C(c, 43u, depth + 1u); else { c.pc = 0x00371A20u; return; } if (c.pc != 0x004E1C98u) [[unlikely]] return; }
L_004E1C98:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1CA4u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_009C(c, 48u, depth + 1u); else { c.pc = 0x00371B10u; return; } if (c.pc != 0x004E1CA4u) [[unlikely]] return; }
L_004E1CA4:
    set32(c.r[2], ld32((c.r[20].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004E1DC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1CC4u); set32(c.r[4], ld32((c.r[20].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E1CC4u) [[unlikely]] return; }
L_004E1CC4:
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 1876u)));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1CD8u); c.f[23] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E1CD8u) [[unlikely]] return; }
L_004E1CD8:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[4], ld32((c.r[20].w[0] + 1876u)));
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1CECu); c.f[24] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E1CECu) [[unlikely]] return; }
L_004E1CEC:
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = ld32((c.r[17].w[0] + 124u));
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    c.facc = fp::mul(c.f[2], c.f[23]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[24]));
    c.f[23] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st32((c.r[2].w[0] + 208u), c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 147u, depth + 1u); else { c.pc = 0x00402040u; return; } if (c.pc != 0x004E1D24u) [[unlikely]] return; }
L_004E1D24:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  goto L_004E1D58; }
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.f[12] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.f[13] = c.f[23];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D50u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004E1D50u) [[unlikely]] return; }
L_004E1D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 248u)));  if (t) { goto L_004E1D70; } }
L_004E1D58:
    c.f[12] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.f[13] = c.f[23] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1D6Cu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004E1D6Cu) [[unlikely]] return; }
L_004E1D6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004E1D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E1DC4; } }
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 2296u)));
    c.f[12] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1DB4u); set32(c.r[7], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_00DC(c, 200u, depth + 1u); else { c.pc = 0x00473EE0u; return; } if (c.pc != 0x004E1DB4u) [[unlikely]] return; }
L_004E1DB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 2296u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1DC4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00DC(c, 165u, depth + 1u); else { c.pc = 0x004731A0u; return; } if (c.pc != 0x004E1DC4u) [[unlikely]] return; }
L_004E1DC4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004E1DC8:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1BA0u | kUnwind; return; } goto L_004E1BA0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004E1EB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1DF4u); set32(c.r[4], ld32((c.r[20].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E1DF4u) [[unlikely]] return; }
L_004E1DF4:
    set32(c.r[5], ld32((c.r[17].w[0] + 108u)));
    c.f[12] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[6], ld32((c.r[17].w[0] + 112u)));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 2296u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1E28u); set32(c.r[7], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00DC(c, 200u, depth + 1u); else { c.pc = 0x00473EE0u; return; } if (c.pc != 0x004E1E28u) [[unlikely]] return; }
L_004E1E28:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 2296u)));  goto L_004E1E44; }
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E1E4C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2296u)));
    c.budget -= 1;
L_004E1E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1E4Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00DC(c, 165u, depth + 1u); else { c.pc = 0x004731A0u; return; } if (c.pc != 0x004E1E4Cu) [[unlikely]] return; }
L_004E1E4C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E1EB8; } }
L_004E1E58:
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 1884u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004E1EB8; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_004E1E98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x004E1E84u) [[unlikely]] return; }
L_004E1E84:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_004E1E98:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1EA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E1EA4u) [[unlikely]] return; }
L_004E1EA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_004E1EB8:
    set32(c.r[2], ld32((c.r[20].w[0] + 2304u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1E58u | kUnwind; return; } goto L_004E1E58; }
    set32(c.r[16], ld32((c.r[20].w[0] + 1908u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 1912u)));  goto L_004E1F24; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_004E1F04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1EF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x004E1EF0u) [[unlikely]] return; }
L_004E1EF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_004E1F04:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1F10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E1F10u) [[unlikely]] return; }
L_004E1F10:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 1912u)));
    c.budget -= 5;
L_004E1F24:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 336u), 0u);  goto L_004E1F7C; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_004E1F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x004E1F48u) [[unlikely]] return; }
L_004E1F48:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_004E1F5C:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E1F68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E1F68u) [[unlikely]] return; }
L_004E1F68:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 336u), 0u);
    c.budget -= 5;
L_004E1F7C:
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 340u), 0u);
    st32((c.r[29].w[0] + 344u), 0u);
    st32((c.r[29].w[0] + 320u), 0u);
    st32((c.r[29].w[0] + 324u), 0u);
    st32((c.r[29].w[0] + 328u), 0u);
    st32((c.r[29].w[0] + 304u), 0u);
    st32((c.r[29].w[0] + 308u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 312u), 0u);  if (t) { goto L_004E2264; } }
L_004E1FA4:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    c.f[20] = ld32((c.r[28].w[0] - 32644u));
    c.f[2] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 208u);  if (t) { goto L_004E2014; } }
L_004E1FBC:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[4].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_004E2014; }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 208u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E1FF4; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E2010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_004E2010; } }
L_004E1FF4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E2010; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E2010; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_004E2010:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_004E2014:
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1FBCu | kUnwind; return; } goto L_004E1FBC; } }
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32644u));  goto L_004E213C; }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E204Cu); c.f[21] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00C0(c, 176u, depth + 1u); else { c.pc = 0x00402780u; return; } if (c.pc != 0x004E204Cu) [[unlikely]] return; }
L_004E204C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 108u)));  goto L_004E2080; }
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.f[12] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.f[13] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2078u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004E2078u) [[unlikely]] return; }
L_004E2078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 248u)));  if (t) { goto L_004E2098; } }
L_004E2080:
    c.f[12] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.f[13] = c.f[21] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2094u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004E2094u) [[unlikely]] return; }
L_004E2094:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004E2098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2138; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 336u);
    set32(c.r[7], c.r[29].w[0] + 320u);
    set32(c.r[8], c.r[29].w[0] + 304u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E20E0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 181u, depth + 1u); else { c.pc = 0x0046A520u; return; } if (c.pc != 0x004E20E0u) [[unlikely]] return; }
L_004E20E0:
    c.f[5] = ld32((c.r[29].w[0] + 304u));
    c.f[4] = ld32((c.r[29].w[0] + 308u));
    c.f[3] = ld32((c.r[29].w[0] + 312u));
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[29].w[0] + 160u), c.f[5]);
    st32((c.r[29].w[0] + 164u), c.f[4]);
    st32((c.r[29].w[0] + 168u), c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 2296u)));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[2].w[0] + 332u), c.f[2]);
    st32((c.r[2].w[0] + 336u), c.f[1]);
    st32((c.r[2].w[0] + 340u), c.f[0]);
    st32((c.r[2].w[0] + 344u), c.f[3]);
    c.budget -= 22;
L_004E2138:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 1;
L_004E213C:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004E2264; }
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[1] = fp::add(c.f[20], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2164u); c.f[20] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00C0(c, 176u, depth + 1u); else { c.pc = 0x00402780u; return; } if (c.pc != 0x004E2164u) [[unlikely]] return; }
L_004E2164:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[20].w[0] + 1872u)));  goto L_004E21A0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 1872u)));
    c.f[13] = c.f[20];
    set32(c.r[2], ld32((c.r[2].w[0] + 412u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2198u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004E2198u) [[unlikely]] return; }
L_004E2198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 248u)));  if (t) { goto L_004E21C0; } }
L_004E21A0:
    c.f[13] = c.f[20] ^ fp::kSign;
    set32(c.r[2], ld32((c.r[2].w[0] + 412u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E21BCu); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004E21BCu) [[unlikely]] return; }
L_004E21BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004E21C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2260; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::max(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 336u);
    set32(c.r[7], c.r[29].w[0] + 320u);
    set32(c.r[8], c.r[29].w[0] + 304u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2208u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 181u, depth + 1u); else { c.pc = 0x0046A520u; return; } if (c.pc != 0x004E2208u) [[unlikely]] return; }
L_004E2208:
    c.f[5] = ld32((c.r[29].w[0] + 304u));
    c.f[4] = ld32((c.r[29].w[0] + 308u));
    c.f[3] = ld32((c.r[29].w[0] + 312u));
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[29].w[0] + 144u), c.f[5]);
    st32((c.r[29].w[0] + 148u), c.f[4]);
    st32((c.r[29].w[0] + 152u), c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 2296u)));
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[2].w[0] + 348u), c.f[2]);
    st32((c.r[2].w[0] + 352u), c.f[1]);
    st32((c.r[2].w[0] + 356u), c.f[0]);
    st32((c.r[2].w[0] + 360u), c.f[3]);
    c.budget -= 22;
L_004E2260:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004E2264:
    set32(c.r[3], ld32((c.r[20].w[0] + 2300u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E1FA4u | kUnwind; return; } goto L_004E1FA4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 1872u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[20].w[0] + 2304u)));
    c.f[1] = ld32((c.r[20].w[0] + 448u));
    c.f[2] = ld32((c.r[3].w[0] + 72u));
    c.f[4] = 0u;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 1880u)));
    c.f[5] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[20].w[0] + 356u));
    c.f[2] = ld32((c.r[20].w[0] + 360u));
    c.f[3] = ld32((c.r[20].w[0] + 452u));
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 364u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[1] = ld32((c.r[20].w[0] + 456u));
    c.facc = fp::add(c.f[4], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E22D4u); c.f[14] = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));  if (depth < kMaxDepth) unit_0089(c, 166u, depth + 1u); else { c.pc = 0x003271F0u; return; } if (c.pc != 0x004E22D4u) [[unlikely]] return; }
L_004E22D4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E22E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 150u, depth + 1u); else { c.pc = 0x004020D0u; return; } if (c.pc != 0x004E22E0u) [[unlikely]] return; }
L_004E22E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_004E2320:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[4].w[0] + 1408u));  goto L_004E23B8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[4].w[0] + 1408u));  goto L_004E2398; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[4].w[0] + 1408u));  goto L_004E2378; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.f[0] = ld32((c.r[4].w[0] + 1408u));  goto L_004E2354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 1412u));  if (t) { goto L_004E23D4; } }
L_004E2354:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1404u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1400u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004E23D0; } }
L_004E2378:
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1404u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1400u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004E23D0; } }
L_004E2398:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1404u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1400u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004E23D0; } }
L_004E23B8:
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1404u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1400u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_004E23D0:
    c.f[1] = ld32((c.r[4].w[0] + 1412u));
    c.budget -= 1;
L_004E23D4:
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 1416u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.f[0]);  c.pc = t; return; }
L_004E23F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[22] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E241Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00F7(c, 51u, depth + 1u); else { c.pc = 0x004DC7D0u; return; } if (c.pc != 0x004E241Cu) [[unlikely]] return; }
L_004E241C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2428u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F6(c, 111u, depth + 1u); else { c.pc = 0x004DA120u; return; } if (c.pc != 0x004E2428u) [[unlikely]] return; }
L_004E2428:
    c.f[1] = ld32((c.r[16].w[0] + 360u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3FA0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  goto L_004E2464; }
    set32(c.r[2], 0u + 5000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  goto L_004E2470; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 1;
L_004E2464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E246Cu);  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x0033AB40u; return; } if (c.pc != 0x004E246Cu) [[unlikely]] return; }
L_004E246C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 1;
L_004E2470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2478u);  if (depth < kMaxDepth) unit_008E(c, 171u, depth + 1u); else { c.pc = 0x0033AB20u; return; } if (c.pc != 0x004E2478u) [[unlikely]] return; }
L_004E2478:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));  goto L_004E24B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2498u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 179u, depth + 1u); else { c.pc = 0x0033AD90u; return; } if (c.pc != 0x004E2498u) [[unlikely]] return; }
L_004E2498:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E24B0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 178u, depth + 1u); else { c.pc = 0x0033AD80u; return; } if (c.pc != 0x004E24B0u) [[unlikely]] return; }
L_004E24B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004E3138; } }
L_004E24B8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1176u));  goto L_004E252C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 6397u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E24E0u); st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004E24E0u) [[unlikely]] return; }
L_004E24E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 200u);  goto L_004E24F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E2518; } }
L_004E24F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E24FCu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004E24FCu) [[unlikely]] return; }
L_004E24FC:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E250Cu); set32(c.r[6], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004E250Cu) [[unlikely]] return; }
L_004E250C:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2518u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004E2518u) [[unlikely]] return; }
L_004E2518:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2528; } }
    st8((c.r[16].w[0] + 1163u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004E2528:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1176u));
    c.budget -= 1;
L_004E252C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1190u));  goto L_004E25C0; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E254C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E254C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E258C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E256C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E256C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E257C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E257C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E258C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E258C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E25BC; } }
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[0] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[16].w[0] + 416u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[13] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 424u));
    c.f[12] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E25BCu); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E25BCu) [[unlikely]] return; }
L_004E25BC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1190u));
    c.budget -= 1;
L_004E25C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1172u));  goto L_004E25D8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E25D4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 89u, depth + 1u); else { c.pc = 0x004DD3E0u; return; } if (c.pc != 0x004E25D4u) [[unlikely]] return; }
L_004E25D4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1172u));
    c.budget -= 1;
L_004E25D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004E260C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E25ECu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 16u, depth + 1u); else { c.pc = 0x004E0450u; return; } if (c.pc != 0x004E25ECu) [[unlikely]] return; }
L_004E25EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E25F8u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 8u, depth + 1u); else { c.pc = 0x004E0230u; return; } if (c.pc != 0x004E25F8u) [[unlikely]] return; }
L_004E25F8:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F7(c, 171u, depth + 1u); else { c.pc = 0x004DFA80u; return; } if (c.pc != 0x004E2604u) [[unlikely]] return; }
L_004E2604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (t) { goto L_004E2FE4; } }
L_004E260C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2614u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 44u, depth + 1u); else { c.pc = 0x004E1270u; return; } if (c.pc != 0x004E2614u) [[unlikely]] return; }
L_004E2614:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1181u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1187u));  goto L_004E2630; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E262Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 39u, depth + 1u); else { c.pc = 0x004E0FF0u; return; } if (c.pc != 0x004E262Cu) [[unlikely]] return; }
L_004E262C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1187u));
    c.budget -= 1;
L_004E2630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1186u));  goto L_004E2658; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2644u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 65u, depth + 1u); else { c.pc = 0x004DCD20u; return; } if (c.pc != 0x004E2644u) [[unlikely]] return; }
L_004E2644:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F8(c, 24u, depth + 1u); else { c.pc = 0x004E0860u; return; } if (c.pc != 0x004E2650u) [[unlikely]] return; }
L_004E2650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E2FE0; } }
L_004E2658:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004E267C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1169u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2678; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2678u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 62u, depth + 1u); else { c.pc = 0x004DCAB0u; return; } if (c.pc != 0x004E2678u) [[unlikely]] return; }
L_004E2678:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004E267C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2684u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 154u, depth + 1u); else { c.pc = 0x004DF140u; return; } if (c.pc != 0x004E2684u) [[unlikely]] return; }
L_004E2684:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2690u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 30u, depth + 1u); else { c.pc = 0x004E0A70u; return; } if (c.pc != 0x004E2690u) [[unlikely]] return; }
L_004E2690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E269Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 128u, depth + 1u); else { c.pc = 0x004DE370u; return; } if (c.pc != 0x004E269Cu) [[unlikely]] return; }
L_004E269C:
    c.f[0] = ld32((c.r[16].w[0] + 1388u));
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1168u));  goto L_004E26DC; }
    c.f[0] = fp::sub(c.f[0], c.f[22]);
    st32((c.r[16].w[0] + 1388u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1640u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    c.f[13] = c.f[12];
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E26D8u); c.f[14] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E26D8u) [[unlikely]] return; }
L_004E26D8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1168u));
    c.budget -= 1;
L_004E26DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2FE0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1064u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004E2740; }
    c.f[0] = fp::sub(c.f[1], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 1064u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 1040u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = ld32((c.r[16].w[0] + 1044u));
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 1048u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[16].w[0] + 1392u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[12] = fp::mul(c.f[2], c.f[4]);
    c.f[13] = fp::mul(c.f[1], c.f[4]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E273Cu); c.f[14] = fp::mul(c.f[0], c.f[4]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E273Cu) [[unlikely]] return; }
L_004E273C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004E2740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2748u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 142u, depth + 1u); else { c.pc = 0x004DEBC0u; return; } if (c.pc != 0x004E2748u) [[unlikely]] return; }
L_004E2748:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2754u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 168u, depth + 1u); else { c.pc = 0x004DF890u; return; } if (c.pc != 0x004E2754u) [[unlikely]] return; }
L_004E2754:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2760u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 158u, depth + 1u); else { c.pc = 0x004DF2F0u; return; } if (c.pc != 0x004E2760u) [[unlikely]] return; }
L_004E2760:
    c.f[4] = ld32((c.r[16].w[0] + 1060u));
    c.f[3] = ld32((c.r[16].w[0] + 348u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1158u));  goto L_004E2818; }
    c.f[1] = ld32((c.r[16].w[0] + 1708u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = 0u;
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = fp::min(c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1252u)));
    c.budget -= 18;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_004E27C8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E27E0; } }
L_004E27C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004E27E0:
    c.f[3] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[16].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = ld32((c.r[16].w[0] + 1040u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[12] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1044u));
    c.f[0] = ld32((c.r[16].w[0] + 1048u));
    c.f[13] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2814u); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E2814u) [[unlikely]] return; }
L_004E2814:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1158u));
    c.budget -= 1;
L_004E2818:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004E2868; }
    c.f[1] = ld32((c.r[16].w[0] + 348u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[16].w[0] + 452u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 448u));
    c.f[0] = ld32((c.r[16].w[0] + 456u));
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2860u); c.f[14] = fp::mul(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E2860u) [[unlikely]] return; }
L_004E2860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));  if (t) { goto L_004E2BFC; } }
L_004E2868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2870u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 150u, depth + 1u); else { c.pc = 0x004DEF70u; return; } if (c.pc != 0x004E2870u) [[unlikely]] return; }
L_004E2870:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E287Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 152u, depth + 1u); else { c.pc = 0x004DF0B0u; return; } if (c.pc != 0x004E287Cu) [[unlikely]] return; }
L_004E287C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1166u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004E2A30; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E28A0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 20u, depth + 1u); else { c.pc = 0x004E0660u; return; } if (c.pc != 0x004E28A0u) [[unlikely]] return; }
L_004E28A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E28ACu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 18u, depth + 1u); else { c.pc = 0x004E05B0u; return; } if (c.pc != 0x004E28ACu) [[unlikely]] return; }
L_004E28AC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1185u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1188u));  goto L_004E28D8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E28C4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 27u, depth + 1u); else { c.pc = 0x004E0910u; return; } if (c.pc != 0x004E28C4u) [[unlikely]] return; }
L_004E28C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E28D0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 100u, depth + 1u); else { c.pc = 0x004DD630u; return; } if (c.pc != 0x004E28D0u) [[unlikely]] return; }
L_004E28D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E2BE4; } }
L_004E28D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2BE0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1162u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));  goto L_004E2928; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = 0u;
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[16].w[0] + 1540u));
    c.f[3] = ld32((c.r[3].w[0] + 1092u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[13] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2920u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E2920u) [[unlikely]] return; }
L_004E2920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[16].w[0] + 436u));  if (t) { goto L_004E2950; } }
L_004E2928:
    c.f[12] = 0u;
    c.f[1] = ld32((c.r[16].w[0] + 1540u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    c.f[2] = ld32((c.r[2].w[0] + 1092u));
    c.f[14] = c.f[12];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E294Cu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E294Cu) [[unlikely]] return; }
L_004E294C:
    c.f[3] = ld32((c.r[16].w[0] + 436u));
    c.budget -= 1;
L_004E2950:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[16].w[0] + 372u));
    c.f[5] = ld32((c.r[16].w[0] + 432u));
    c.f[4] = ld32((c.r[16].w[0] + 368u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[7] = ld32((c.r[16].w[0] + 440u));
    c.f[6] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = ld32((c.r[16].w[0] + 1564u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[12] = 0u;
    c.f[13] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2990u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E2990u) [[unlikely]] return; }
L_004E2990:
    c.f[0] = ld32((c.r[16].w[0] + 1348u));
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E2BE0; } }
    c.f[1] = ld32((c.r[16].w[0] + 388u));
    c.f[0] = ld32((c.r[16].w[0] + 692u));
    c.f[3] = ld32((c.r[16].w[0] + 384u));
    c.f[2] = ld32((c.r[16].w[0] + 688u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[5] = ld32((c.r[16].w[0] + 392u));
    c.f[4] = ld32((c.r[16].w[0] + 696u));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E29E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004E2A00; } }
L_004E29E8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004E29F8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E29F8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_004E2A00:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1560u));
    c.f[12] = 0u;
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[13] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A28u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E2A28u) [[unlikely]] return; }
L_004E2A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E2BE0; } }
L_004E2A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A38u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 122u, depth + 1u); else { c.pc = 0x004DE030u; return; } if (c.pc != 0x004E2A38u) [[unlikely]] return; }
L_004E2A38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A44u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 199u, depth + 1u); else { c.pc = 0x004DFF60u; return; } if (c.pc != 0x004E2A44u) [[unlikely]] return; }
L_004E2A44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2A50u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 146u, depth + 1u); else { c.pc = 0x004DEE40u; return; } if (c.pc != 0x004E2A50u) [[unlikely]] return; }
L_004E2A50:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2A68; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E2A68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004E2B48; }
    c.f[0] = ld32((c.r[16].w[0] + 1556u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[7] = ld32((c.r[16].w[0] + 348u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E2B44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.f[0] = ld32((c.r[28].w[0] - 32208u));
    c.f[1] = ld32((c.r[2].w[0] + 1092u));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E2B44; } }
    c.f[1] = ld32((c.r[16].w[0] + 372u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1159u));
    c.f[0] = ld32((c.r[16].w[0] + 436u));
    c.f[3] = ld32((c.r[16].w[0] + 368u));
    c.f[2] = ld32((c.r[16].w[0] + 432u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[6] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[4] = ld32((c.r[16].w[0] + 440u));
    c.f[1] = ld32((c.r[16].w[0] + 388u));
    c.f[0] = ld32((c.r[16].w[0] + 980u));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.f[3] = ld32((c.r[16].w[0] + 384u));
    c.f[2] = ld32((c.r[16].w[0] + 976u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 392u));
    c.f[4] = ld32((c.r[16].w[0] + 984u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[12] = 0u;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::mul(c.f[0], c.f[7]);  if (t) { goto L_004E2B1C; } }
    c.f[0] = ld32((c.r[16].w[0] + 1212u));
    c.f[1] = ld32((c.r[16].w[0] + 1624u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::add(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[6]));  if (t) { goto L_004E2B30; } }
L_004E2B1C:
    c.f[0] = ld32((c.r[16].w[0] + 1200u));
    c.f[1] = ld32((c.r[16].w[0] + 1204u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.facc = fp::add(c.f[12], c.f[0]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[6]));
    c.budget -= 5;
L_004E2B30:
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[14] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B44u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004E2B44u) [[unlikely]] return; }
L_004E2B44:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004E2B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B50u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 118u, depth + 1u); else { c.pc = 0x004DDEE0u; return; } if (c.pc != 0x004E2B50u) [[unlikely]] return; }
L_004E2B50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2B5Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 125u, depth + 1u); else { c.pc = 0x004DE120u; return; } if (c.pc != 0x004E2B5Cu) [[unlikely]] return; }
L_004E2B5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[16].w[0] + 1167u), static_cast<std::uint8_t>(0u));  goto L_004E2BE0; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2B7C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E2B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2B8C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1960u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E2B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2B9C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1961u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E2B9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2BAC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1962u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E2BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2BBC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1963u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004E2BBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_004E2BD0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1166u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004E2BE0; } }
L_004E2BD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 1167u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2BE0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 36u, depth + 1u); else { c.pc = 0x004E0E90u; return; } if (c.pc != 0x004E2BE0u) [[unlikely]] return; }
L_004E2BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004E2BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2BECu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F8(c, 33u, depth + 1u); else { c.pc = 0x004E0CF0u; return; } if (c.pc != 0x004E2BECu) [[unlikely]] return; }
L_004E2BEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2BF8u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 109u, depth + 1u); else { c.pc = 0x004DDAB0u; return; } if (c.pc != 0x004E2BF8u) [[unlikely]] return; }
L_004E2BF8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.budget -= 1;
L_004E2BFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1180u));  goto L_004E2F3C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1180u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2FE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C18u); set32(c.r[4], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004E2C18u) [[unlikely]] return; }
L_004E2C18:
    c.f[12] = ld32((c.r[28].w[0] - 32304u));
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.f[13] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C2Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00C8(c, 45u, depth + 1u); else { c.pc = 0x00420B60u; return; } if (c.pc != 0x004E2C2Cu) [[unlikely]] return; }
L_004E2C2C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1160u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_004E2C5C; }
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[16].w[0] + 716u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C48u); set32(c.r[6], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x004E2C48u) [[unlikely]] return; }
L_004E2C48:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C54u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004E2C54u) [[unlikely]] return; }
L_004E2C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 1440u));  if (t) { goto L_004E2C78; } }
L_004E2C5C:
    set32(c.r[5], c.r[16].w[0] + 704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C68u); set32(c.r[6], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_00E3(c, 88u, depth + 1u); else { c.pc = 0x0048CFD0u; return; } if (c.pc != 0x004E2C68u) [[unlikely]] return; }
L_004E2C68:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C74u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004E2C74u) [[unlikely]] return; }
L_004E2C74:
    c.f[2] = ld32((c.r[16].w[0] + 1440u));
    c.budget -= 1;
L_004E2C78:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.f[1] = ld32((c.r[16].w[0] + 1456u));
    set32(c.r[5], c.r[16].w[0] + 512u);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    set32(c.r[6], c.r[29].w[0] + 184u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2C9Cu); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_00F8(c, 236u, depth + 1u); else { c.pc = 0x004E3270u; return; } if (c.pc != 0x004E2C9Cu) [[unlikely]] return; }
L_004E2C9C:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CA8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004E2CA8u) [[unlikely]] return; }
L_004E2CA8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[16].w[0] + 500u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CB8u); set32(c.r[6], c.r[16].w[0] + 476u);  if (depth < kMaxDepth) unit_00F8(c, 235u, depth + 1u); else { c.pc = 0x004E3230u; return; } if (c.pc != 0x004E2CB8u) [[unlikely]] return; }
L_004E2CB8:
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CC8u); set32(c.r[6], c.r[16].w[0] + 356u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x004E2CC8u) [[unlikely]] return; }
L_004E2CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CD0u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00F8(c, 234u, depth + 1u); else { c.pc = 0x004E3220u; return; } if (c.pc != 0x004E2CD0u) [[unlikely]] return; }
L_004E2CD0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CDCu); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004E2CDCu) [[unlikely]] return; }
L_004E2CDC:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2CE8u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_00D2(c, 25u, depth + 1u); else { c.pc = 0x004487F0u; return; } if (c.pc != 0x004E2CE8u) [[unlikely]] return; }
L_004E2CE8:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { st8((c.r[16].w[0] + 1163u), static_cast<std::uint8_t>(0u));  goto L_004E2FE0; }
    c.f[0] = ld32((c.r[16].w[0] + 1788u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 348u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 20000u);  goto L_004E2D30; }
    st8((c.r[16].w[0] + 1163u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E2FE0; } }
L_004E2D30:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1392u));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2D54u);  if (depth < kMaxDepth) unit_00F8(c, 233u, depth + 1u); else { c.pc = 0x004E3200u; return; } if (c.pc != 0x004E2D54u) [[unlikely]] return; }
L_004E2D54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 20000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2D84u); c.f[20] = fp::sub(c.facc, fp::mul(c.f[21], c.f[1]));  if (depth < kMaxDepth) unit_00F8(c, 232u, depth + 1u); else { c.pc = 0x004E31F0u; return; } if (c.pc != 0x004E2D84u) [[unlikely]] return; }
L_004E2D84:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2D98u); c.f[23] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00F8(c, 232u, depth + 1u); else { c.pc = 0x004E31F0u; return; } if (c.pc != 0x004E2D98u) [[unlikely]] return; }
L_004E2D98:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2DACu); c.f[21] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00F8(c, 232u, depth + 1u); else { c.pc = 0x004E31F0u; return; } if (c.pc != 0x004E2DACu) [[unlikely]] return; }
L_004E2DAC:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[23]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2DCCu); st32((c.r[29].w[0] + 68u), c.f[21]);  if (depth < kMaxDepth) unit_00F8(c, 231u, depth + 1u); else { c.pc = 0x004E31D0u; return; } if (c.pc != 0x004E2DCCu) [[unlikely]] return; }
L_004E2DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2DD4u); set32(c.r[4], c.r[16].w[0] + 500u);  if (depth < kMaxDepth) unit_00F8(c, 234u, depth + 1u); else { c.pc = 0x004E3220u; return; } if (c.pc != 0x004E2DD4u) [[unlikely]] return; }
L_004E2DD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2DE0u); set32(c.r[4], c.r[16].w[0] + 384u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004E2DE0u) [[unlikely]] return; }
L_004E2DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2DE8u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00F8(c, 230u, depth + 1u); else { c.pc = 0x004E31B0u; return; } if (c.pc != 0x004E2DE8u) [[unlikely]] return; }
L_004E2DE8:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2DF8u); set32(c.r[5], c.r[16].w[0] + 400u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004E2DF8u) [[unlikely]] return; }
L_004E2DF8:
    c.f[20] = c.f[0];
    set32(c.r[2], 0u + 5000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E24u);  if (depth < kMaxDepth) unit_00F8(c, 233u, depth + 1u); else { c.pc = 0x004E3200u; return; } if (c.pc != 0x004E2E24u) [[unlikely]] return; }
L_004E2E24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], 0u + 5000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[20], c.f[1]));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E74u);  if (depth < kMaxDepth) unit_00F8(c, 229u, depth + 1u); else { c.pc = 0x004E3190u; return; } if (c.pc != 0x004E2E74u) [[unlikely]] return; }
L_004E2E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E7Cu); set32(c.r[4], c.r[16].w[0] + 500u);  if (depth < kMaxDepth) unit_00F8(c, 234u, depth + 1u); else { c.pc = 0x004E3220u; return; } if (c.pc != 0x004E2E7Cu) [[unlikely]] return; }
L_004E2E7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E88u); set32(c.r[4], c.r[16].w[0] + 400u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004E2E88u) [[unlikely]] return; }
L_004E2E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2E90u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00F8(c, 230u, depth + 1u); else { c.pc = 0x004E31B0u; return; } if (c.pc != 0x004E2E90u) [[unlikely]] return; }
L_004E2E90:
    c.f[21] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[16].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2EA0u); set32(c.r[5], c.r[16].w[0] + 384u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004E2EA0u) [[unlikely]] return; }
L_004E2EA0:
    c.f[20] = c.f[0];
    set32(c.r[2], 0u + 5000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2288u));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2ECCu);  if (depth < kMaxDepth) unit_00F8(c, 233u, depth + 1u); else { c.pc = 0x004E3200u; return; } if (c.pc != 0x004E2ECCu) [[unlikely]] return; }
L_004E2ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], 0u + 5000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[16].w[0] + 2288u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[20], c.f[1]));
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F1Cu);  if (depth < kMaxDepth) unit_00F8(c, 228u, depth + 1u); else { c.pc = 0x004E3170u; return; } if (c.pc != 0x004E2F1Cu) [[unlikely]] return; }
L_004E2F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F24u); set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));  if (depth < kMaxDepth) unit_00F8(c, 227u, depth + 1u); else { c.pc = 0x004E3160u; return; } if (c.pc != 0x004E2F24u) [[unlikely]] return; }
L_004E2F24:
    c.f[0] = ld32((c.r[28].w[0] - 32152u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F34u); c.f[12] = fp::mul(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_00F9(c, 69u, depth + 1u); else { c.pc = 0x004E4DF0u; return; } if (c.pc != 0x004E2F34u) [[unlikely]] return; }
L_004E2F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E2FE0; } }
L_004E2F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2FE0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1164u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1162u));  goto L_004E2F60; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F5Cu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 162u, depth + 1u); else { c.pc = 0x004DF420u; return; } if (c.pc != 0x004E2F5Cu) [[unlikely]] return; }
L_004E2F5C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1162u));
    c.budget -= 1;
L_004E2F60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E2FE0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1173u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E2FE0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2F80u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00F7(c, 104u, depth + 1u); else { c.pc = 0x004DD830u; return; } if (c.pc != 0x004E2F80u) [[unlikely]] return; }
L_004E2F80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 348u));  goto L_004E2F90; }
    st32((c.r[16].w[0] + 1248u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 348u));
    c.budget -= 2;
L_004E2F90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E2FE0; } }
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[28].w[0] - 32144u));
    c.f[1] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = ld32((c.r[16].w[0] + 448u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[22]);
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[12] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 452u));
    c.f[0] = ld32((c.r[16].w[0] + 456u));
    c.f[13] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2FE0u); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004E2FE0u) [[unlikely]] return; }
L_004E2FE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 1;
L_004E2FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2FECu);  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004E2FECu) [[unlikely]] return; }
L_004E2FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E2FF4u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E2FF4u) [[unlikely]] return; }
L_004E2FF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  goto L_004E3108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3004u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004E3004u) [[unlikely]] return; }
L_004E3004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E300Cu); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E300Cu) [[unlikely]] return; }
L_004E300C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E301Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004E301Cu) [[unlikely]] return; }
L_004E301C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3024u); c.f[12] = ld32((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E3024u) [[unlikely]] return; }
L_004E3024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3034u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x0033ADA0u; return; } if (c.pc != 0x004E3034u) [[unlikely]] return; }
L_004E3034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E303Cu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E303Cu) [[unlikely]] return; }
L_004E303C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E304Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x0033ADA0u; return; } if (c.pc != 0x004E304Cu) [[unlikely]] return; }
L_004E304C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3054u); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E3054u) [[unlikely]] return; }
L_004E3054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3064u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x0033ADA0u; return; } if (c.pc != 0x004E3064u) [[unlikely]] return; }
L_004E3064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E306Cu); c.f[12] = ld32((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x004E306Cu) [[unlikely]] return; }
L_004E306C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E307Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004E307Cu) [[unlikely]] return; }
L_004E307C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3084u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E3084u) [[unlikely]] return; }
L_004E3084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3094u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004E3094u) [[unlikely]] return; }
L_004E3094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E309Cu); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E309Cu) [[unlikely]] return; }
L_004E309C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30ACu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004E30ACu) [[unlikely]] return; }
L_004E30AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30B4u); c.f[12] = ld32((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E30B4u) [[unlikely]] return; }
L_004E30B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30C4u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x0033ADA0u; return; } if (c.pc != 0x004E30C4u) [[unlikely]] return; }
L_004E30C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30CCu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E30CCu) [[unlikely]] return; }
L_004E30CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30DCu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x0033ADA0u; return; } if (c.pc != 0x004E30DCu) [[unlikely]] return; }
L_004E30DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30E4u); c.f[12] = ld32((c.r[2].w[0] + 4u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E30E4u) [[unlikely]] return; }
L_004E30E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E3104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30F4u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 180u, depth + 1u); else { c.pc = 0x0033ADA0u; return; } if (c.pc != 0x004E30F4u) [[unlikely]] return; }
L_004E30F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E30FCu); c.f[12] = ld32((c.r[2].w[0] + 8u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x004E30FCu) [[unlikely]] return; }
L_004E30FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3134; } }
L_004E3104:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 1;
L_004E3108:
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E311Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 179u, depth + 1u); else { c.pc = 0x0033AD90u; return; } if (c.pc != 0x004E311Cu) [[unlikely]] return; }
L_004E311C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3134u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 178u, depth + 1u); else { c.pc = 0x0033AD80u; return; } if (c.pc != 0x004E3134u) [[unlikely]] return; }
L_004E3134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004E3138:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004E3160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 420u)));  c.pc = t; return; }
L_004E3170:
    c.f[0] = ld32((c.r[4].w[0] + 2288u));
    c.f[13] = 0u;
    c.f[14] = c.f[13];
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 7;
    { c.f[12] = fp::mul(c.f[12], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AF40u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 184u, depth); }
L_004E3190:
    c.f[0] = ld32((c.r[4].w[0] + 2280u));
    c.f[13] = 0u;
    c.f[14] = fp::mul(c.f[12], c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 7;
    { c.f[12] = c.f[13];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AF40u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 184u, depth); }
L_004E31B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::max(c.f[12], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.f[12] = fp::min(c.f[12], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF710u | kUnwind; return; } [[clang::musttail]] return unit_00AB(c, 428u, depth); }
L_004E31D0:
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.f[14] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AFE0u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 186u, depth); }
L_004E31F0:
    set32(c.r[2], c.r[5].w[0] << 2);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_004E3200:
    c.f[0] = fp::sqrt(c.f[12]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E3220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004E3230:
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[6] = ld32((c.r[6].w[0]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[4].w[0]), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_004E3270:
    c.f[8] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[7] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.f[6] = ld32((c.r[6].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[3] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[5] = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.f[4] = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[4]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[5]);  c.pc = t; return; }
L_004E32F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  goto L_004E3320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E331Cu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004E331Cu) [[unlikely]] return; }
L_004E331C:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 1;
L_004E3320:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 64u)));  goto L_004E3334; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3330u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004E3330u) [[unlikely]] return; }
L_004E3330:
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_004E3334:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004E33A0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004E337C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E334Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E334Cu) [[unlikely]] return; }
L_004E334C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E335Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E335Cu) [[unlikely]] return; }
L_004E335C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3378; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E3378u) [[unlikely]] return; }
L_004E3378:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E337C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_004E339C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E338Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E338Cu) [[unlikely]] return; }
L_004E338C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E339Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E339Cu) [[unlikely]] return; }
L_004E339C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E33A0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E33ACu); set32(c.r[6], 0u + 492u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x004E33ACu) [[unlikely]] return; }
L_004E33AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E33B8u); set32(c.r[4], c.r[4].w[0] + 8974u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004E33B8u) [[unlikely]] return; }
L_004E33B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_004E33CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E33CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004E33CCu) [[unlikely]] return; }
L_004E33CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E33D8u); set32(c.r[4], c.r[4].w[0] + 8988u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004E33D8u) [[unlikely]] return; }
L_004E33D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_004E33EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E33ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004E33ECu) [[unlikely]] return; }
L_004E33EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004E34A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3408u);  if (depth < kMaxDepth) unit_00AF(c, 266u, depth + 1u); else { c.pc = 0x003BE370u; return; } if (c.pc != 0x004E3408u) [[unlikely]] return; }
L_004E3408:
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 64u)));  goto L_004E347C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  goto L_004E3458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3428u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E3428u) [[unlikely]] return; }
L_004E3428:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3438u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E3438u) [[unlikely]] return; }
L_004E3438:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E3454; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3454u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E3454u) [[unlikely]] return; }
L_004E3454:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_004E3458:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E3478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3468u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E3468u) [[unlikely]] return; }
L_004E3468:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3478u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E3478u) [[unlikely]] return; }
L_004E3478:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_004E347C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E34A0; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_004E34A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004E34A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E34ACu); st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004E34ACu) [[unlikely]] return; }
L_004E34AC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E34DCu); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004E34DCu) [[unlikely]] return; }
L_004E34DC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E350Cu); st32((c.r[17].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004E350Cu) [[unlikely]] return; }
L_004E350C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_004E3520; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 8u);  goto L_004E3524; }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_004E3520:
    set32(c.r[2], c.r[3].w[0] + 8u);
    c.budget -= 1;
L_004E3524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E352Cu); st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004E352Cu) [[unlikely]] return; }
L_004E352C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_004E3540; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 8u);  goto L_004E3544; }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_004E3540:
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 1;
L_004E3544:
    st32((c.r[17].w[0] + 144u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E3560:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[28].w[0] - 32076u));  goto L_004E35A0; }
    c.f[3] = ld32((c.r[28].w[0] - 32620u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.f[5] = ld32((c.r[4].w[0] + 76u));
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[4] = c.r[3].w[0];
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[28].w[0] - 32076u));
    c.budget -= 13;
L_004E35A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[3] = fp::min(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[4] = c.r[3].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    set32(c.r[10], c.r[4].w[0] + 320u);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[1] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 36u), c.f[0]);
    c.f[3] = ld32((c.r[9].w[0] - 8812u));
    c.f[2] = ld32((c.r[8].w[0] - 8804u));
    c.f[0] = ld32((c.r[7].w[0] - 8808u));
    c.f[6] = fp::mul(c.f[3], c.f[4]);
    c.f[3] = fp::mul(c.f[2], c.f[4]);
    c.f[2] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = ld32((c.r[3].w[0] - 8816u));
    c.f[7] = ld32((c.r[4].w[0] + 104u));
    c.f[5] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[7] = fp::add(c.f[7], c.f[5]);
    c.f[5] = fp::mul(c.f[3], c.f[7]);
    c.f[3] = fp::mul(c.f[0], c.f[7]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    c.f[4] = fp::mul(c.f[2], c.f[7]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[6].w[0] + 40u), c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[7]);
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[6].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 48u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[6].w[0] + 52u), c.f[0]);
    st32((c.r[6].w[0] + 72u), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 484u)));
    st32((c.r[6].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 80u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 64;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_004E36C4; }
    c.f[0] = ld32((c.r[6].w[0] + 88u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E36C0; } }
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    c.f[0] = ld32((c.r[28].w[0] - 32252u));
    st32((c.r[6].w[0] + 84u), c.f[1]);
    st32((c.r[6].w[0] + 88u), c.f[0]);
    c.budget -= 4;
L_004E36C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_004E36C4:
    c.f[3] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    c.f[2] = c.r[3].w[0];
    c.f[5] = ld32((c.r[4].w[0] + 80u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 92u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[5]));
    c.f[4] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 92u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = fp::max(c.f[0], c.f[4]);
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = ld32((c.r[6].w[0] + 96u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 96u), c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[6].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 96u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 96u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 316u)));
    c.budget -= 33;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[6].w[0] + 112u));  goto L_004E3788; }
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 188u);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    c.r[5].d[0] = c.r[5].d[0] | 16ull;
    st32((c.r[6].w[0]), c.r[5].w[0]);
    st32((c.r[6].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 316u)));
    st32((c.r[6].w[0] + 144u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 72u));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[6].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 112u));
    c.budget -= 16;
L_004E3788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[4] = ld32((c.r[4].w[0] + 76u));
    c.f[6] = 0u;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::add(c.f[6], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    st32((c.r[6].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 116u));
    c.f[3] = ld32((c.r[28].w[0] - 31532u));
    c.f[5] = ld32((c.r[4].w[0] + 76u));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[4] = ld32((c.r[28].w[0] - 32076u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[5]));
    st32((c.r[6].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 120u));
    c.f[3] = ld32((c.r[4].w[0] + 76u));
    c.f[1] = ld32((c.r[28].w[0] - 32044u));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    st32((c.r[6].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 128u));
    c.f[3] = ld32((c.r[4].w[0] + 76u));
    c.f[2] = c.r[3].w[0];
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    st32((c.r[6].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[3] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = ld32((c.r[6].w[0] + 132u));
    c.facc = fp::add(c.f[6], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    c.f[3] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = ld32((c.r[6].w[0] + 136u));
    c.facc = fp::add(c.f[6], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    st32((c.r[6].w[0] + 152u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 47;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[28].w[0] - 29008u));  goto L_004E3854; }
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1056u)));
    st32((c.r[6].w[0] + 156u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29008u));
    c.budget -= 4;
L_004E3854:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E3864; } }
    st32((c.r[6].w[0] + 128u), 0u);
    st32((c.r[6].w[0] + 132u), 0u);
    c.budget -= 2;
L_004E3864:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E3870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E38B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3898u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004E3898u) [[unlikely]] return; }
L_004E3898:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[17].w[0] + 148u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_004E38B8; } }
L_004E38B4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_004E38B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_004E38D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E38CCu);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004E38CCu) [[unlikely]] return; }
L_004E38CC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_004E38D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E38F0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 40u), c.r[19].w[0]);
    c.f[20] = c.f[12];
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1200u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 124u)));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004E395C; } }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_004E395C:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004E39B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004E39AC; } }
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E399Cu); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004E399Cu) [[unlikely]] return; }
L_004E399C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[18].d[0] = c.r[18].d[0] & 255ull;  goto L_004E39B0; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E39AC:
    c.r[18].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 1;
L_004E39B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1052u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 68u)));
    c.r[2].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[20].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_004E39F4; } }
    c.f[1] = ld32((c.r[17].w[0] + 1320u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_004E39E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E39E4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_004E39F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { st32((c.r[20].w[0] + 72u), 0u);  goto L_004E3A84; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E3A80; } }
    c.r[1].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[20].w[0]));  goto L_004E3A88; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[20].w[0] + 84u), c.r[3].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[20].w[0] + 80u), c.f[0]);  goto L_004E3A78; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[20].w[0] + 80u), c.f[0]);  goto L_004E3A6C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[20].w[0] + 80u), c.f[0]);  goto L_004E3A60; }
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[20].w[0] + 80u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.f[0]);  if (t) { goto L_004E3A84; } }
L_004E3A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_004E3A84; } }
L_004E3A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_004E3A84; } }
L_004E3A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.f[0]);  if (t) { goto L_004E3A84; } }
L_004E3A80:
    st32((c.r[20].w[0] + 72u), 0u);
    c.budget -= 1;
L_004E3A84:
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 1;
L_004E3A88:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2316u));
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 424u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_004E3AFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004E3B68; } }
    c.f[0] = ld32((c.r[28].w[0] - 32088u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 32u), c.r[3].w[0]);
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3AE0u); set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004E3AE0u) [[unlikely]] return; }
L_004E3AE0:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 16u), c.f[0]);  if (t) { goto L_004E3B68; } }
L_004E3AFC:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E3B68; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E3B68; } }
    c.f[2] = ld32((c.r[28].w[0] - 32084u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32480u));
    c.f[0] = ld32((c.r[28].w[0] - 32080u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[20].w[0] + 20u), c.f[2]);
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[17].w[0] + 2332u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[20].w[0] + 24u), c.f[1]);
    st32((c.r[20].w[0] + 28u), c.f[0]);
    st32((c.r[20].w[0] + 32u), c.r[3].w[0]);
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 2320u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2324u));
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2328u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.budget -= 20;
L_004E3B68:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.f[4] = ld32((c.r[20].w[0] + 72u));  goto L_004E3C14; }
    set32(c.r[2], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { c.r[2].d[0] = ld8((c.r[20].w[0] + 52u));  goto L_004E3BE4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_004E3BB0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st8((c.r[20].w[0] + 60u), static_cast<std::uint8_t>(0u));  goto L_004E3BE0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    st8((c.r[20].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    st8((c.r[20].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E3BE0; } }
L_004E3BB0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_004E3BE0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004E3BDC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st8((c.r[20].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
L_004E3BDC:
    st8((c.r[20].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004E3BE0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 52u));
    c.budget -= 1;
L_004E3BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E3C10; } }
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[2] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[20].w[0] + 48u), c.f[1]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.budget -= 9;
L_004E3C10:
    c.f[4] = ld32((c.r[20].w[0] + 72u));
    c.budget -= 1;
L_004E3C14:
    c.f[3] = ld32((c.r[20].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32076u));  goto L_004E3C50; }
    c.f[0] = ld32((c.r[28].w[0] - 32072u));
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 76u), c.f[0]);  if (t) { goto L_004E3C74; } }
L_004E3C50:
    c.f[1] = fp::sub(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[4]);
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 9;
L_004E3C74:
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.f[3] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[20]));
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[20].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 84u));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[20]));
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 20u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 204u);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 200u);
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    c.r[21].d[0] = ld8((c.r[20].w[0] + 100u));
    set32(c.r[4], ld32((c.r[2].w[0] + 108u)));
    c.f[12] = ld32((c.r[2].w[0] + 116u));
    set32(c.r[5], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3D40u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x004E3D40u) [[unlikely]] return; }
L_004E3D40:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { st8((c.r[20].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_004E3D64; }
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[20].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004E3D64:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 100u));
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[20].w[0] + 104u));  goto L_004E3D98; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E3D94; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004E3D90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_004E3D94; } }
L_004E3D90:
    st32((c.r[20].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 1;
L_004E3D94:
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 1;
L_004E3D98:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[20].w[0] + 108u));  goto L_004E3DC8; }
    c.facc = fp::add(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[20]));
    st32((c.r[20].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 108u));
    c.budget -= 7;
L_004E3DC8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[20].w[0] + 104u));  goto L_004E3DF0; }
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32068u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[20]));
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.budget -= 5;
L_004E3DF0:
    c.f[2] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 104u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 108u));
    c.f[0] = fp::max(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 108u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E3E40u); set32(c.r[18], c.r[2].w[0] + 264u);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004E3E40u) [[unlikely]] return; }
L_004E3E40:
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (t) { goto L_004E3EB4; } }
L_004E3E6C:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.f[2] = ld32((c.r[2].w[0] + 160u));
    c.f[1] = ld32((c.r[2].w[0] + 164u));
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[5].w[0] + 4u);  goto L_004E3EB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004E3ED0; } }
L_004E3EB4:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E3E6Cu | kUnwind; return; } goto L_004E3E6C; }
L_004E3ED0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = ld32((c.r[20].w[0] + 112u));  if (t) { goto L_004E3EE4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E3F00; } }
L_004E3EE4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004E3F00:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E3F90; } }
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004E3F20; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E3F38; } }
L_004E3F20:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004E3F38:
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[20].w[0] + 112u), c.f[0]);  if (t) { goto L_004E3F64; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E3F80; } }
L_004E3F64:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_004E3F80:
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 112u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00F9(c, 3u, depth); } }
L_004E3F90:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[4], c.r[3].w[0] >> 1);  goto L_004E3FA4; }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004E3FBC; } }
L_004E3FA4:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004E3FBC:
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[20].w[0] + 112u), c.f[0]);  if (t) { goto L_004E3FE8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { [[clang::musttail]] return unit_00F9(c, 2u, depth); } }
L_004E3FE8:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_00F9(c, 1u, depth);
}

}
