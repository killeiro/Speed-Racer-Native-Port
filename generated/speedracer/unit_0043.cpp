#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0043[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86,
    0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0,
    0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0,
    0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0,
    0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0043(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0020C000;
    case 2u: goto L_0020C030;
    case 3u: goto L_0020C050;
    case 4u: goto L_0020C070;
    case 5u: goto L_0020C090;
    case 6u: goto L_0020C0A0;
    case 7u: goto L_0020C0C8;
    case 8u: goto L_0020C0D8;
    case 9u: goto L_0020C0F0;
    case 10u: goto L_0020C110;
    case 11u: goto L_0020C148;
    case 12u: goto L_0020C158;
    case 13u: goto L_0020C174;
    case 14u: goto L_0020C188;
    case 15u: goto L_0020C198;
    case 16u: goto L_0020C1C0;
    case 17u: goto L_0020C1E0;
    case 18u: goto L_0020C208;
    case 19u: goto L_0020C218;
    case 20u: goto L_0020C230;
    case 21u: goto L_0020C294;
    case 22u: goto L_0020C29C;
    case 23u: goto L_0020C2B4;
    case 24u: goto L_0020C2C4;
    case 25u: goto L_0020C2D8;
    case 26u: goto L_0020C2E8;
    case 27u: goto L_0020C2F4;
    case 28u: goto L_0020C334;
    case 29u: goto L_0020C340;
    case 30u: goto L_0020C354;
    case 31u: goto L_0020C378;
    case 32u: goto L_0020C380;
    case 33u: goto L_0020C398;
    case 34u: goto L_0020C3A4;
    case 35u: goto L_0020C3D8;
    case 36u: goto L_0020C3FC;
    case 37u: goto L_0020C408;
    case 38u: goto L_0020C418;
    case 39u: goto L_0020C438;
    case 40u: goto L_0020C444;
    case 41u: goto L_0020C454;
    case 42u: goto L_0020C468;
    case 43u: goto L_0020C47C;
    case 44u: goto L_0020C48C;
    case 45u: goto L_0020C4AC;
    case 46u: goto L_0020C4C0;
    case 47u: goto L_0020C4D0;
    case 48u: goto L_0020C4F8;
    case 49u: goto L_0020C530;
    case 50u: goto L_0020C550;
    case 51u: goto L_0020C5A8;
    case 52u: goto L_0020C5D8;
    case 53u: goto L_0020C610;
    case 54u: goto L_0020C61C;
    case 55u: goto L_0020C698;
    case 56u: goto L_0020C6AC;
    case 57u: goto L_0020C7B4;
    case 58u: goto L_0020C7F8;
    case 59u: goto L_0020C844;
    case 60u: goto L_0020C850;
    case 61u: goto L_0020C8D8;
    case 62u: goto L_0020C8EC;
    case 63u: goto L_0020C93C;
    case 64u: goto L_0020C964;
    case 65u: goto L_0020C9B0;
    case 66u: goto L_0020CB00;
    case 67u: goto L_0020CB0C;
    case 68u: goto L_0020CC30;
    case 69u: goto L_0020CC6C;
    case 70u: goto L_0020CC78;
    case 71u: goto L_0020CCF8;
    case 72u: goto L_0020CD08;
    case 73u: goto L_0020CD28;
    case 74u: goto L_0020CD58;
    case 75u: goto L_0020CD68;
    case 76u: goto L_0020CD84;
    case 77u: goto L_0020CD98;
    case 78u: goto L_0020CDA8;
    case 79u: goto L_0020CDE0;
    case 80u: goto L_0020CF14;
    case 81u: goto L_0020CF48;
    case 82u: goto L_0020CF50;
    case 83u: goto L_0020CFD0;
    case 84u: goto L_0020CFE4;
    case 85u: goto L_0020D058;
    case 86u: goto L_0020D07C;
    case 87u: goto L_0020D084;
    case 88u: goto L_0020D08C;
    case 89u: goto L_0020D0D8;
    case 90u: goto L_0020D130;
    case 91u: goto L_0020D138;
    case 92u: goto L_0020D1D0;
    case 93u: goto L_0020D22C;
    case 94u: goto L_0020D238;
    case 95u: goto L_0020D280;
    case 96u: goto L_0020D30C;
    case 97u: goto L_0020D31C;
    case 98u: goto L_0020D3C0;
    case 99u: goto L_0020D418;
    case 100u: goto L_0020D438;
    case 101u: goto L_0020D500;
    case 102u: goto L_0020D52C;
    case 103u: goto L_0020D590;
    case 104u: goto L_0020D5D0;
    case 105u: goto L_0020D650;
    case 106u: goto L_0020D65C;
    case 107u: goto L_0020D6A4;
    case 108u: goto L_0020D730;
    case 109u: goto L_0020D740;
    case 110u: goto L_0020D7F8;
    case 111u: goto L_0020D818;
    case 112u: goto L_0020D838;
    case 113u: goto L_0020D9B0;
    case 114u: goto L_0020DA08;
    case 115u: goto L_0020DAB8;
    case 116u: goto L_0020DB10;
    case 117u: goto L_0020DB64;
    case 118u: goto L_0020DB70;
    case 119u: goto L_0020DBB8;
    case 120u: goto L_0020DC34;
    case 121u: goto L_0020DC68;
    case 122u: goto L_0020DCF0;
    case 123u: goto L_0020DD20;
    case 124u: goto L_0020DD88;
    case 125u: goto L_0020DD94;
    case 126u: goto L_0020DDC8;
    case 127u: goto L_0020DE1C;
    case 128u: goto L_0020DE38;
    case 129u: goto L_0020DE88;
    case 130u: goto L_0020DEF0;
    case 131u: goto L_0020DEFC;
    case 132u: goto L_0020DF30;
    case 133u: goto L_0020E0A4;
    case 134u: goto L_0020E0F0;
    case 135u: goto L_0020E140;
    case 136u: goto L_0020E1C0;
    case 137u: goto L_0020E1CC;
    case 138u: goto L_0020E200;
    case 139u: goto L_0020E254;
    case 140u: goto L_0020E270;
    case 141u: goto L_0020E2DC;
    case 142u: goto L_0020E2E8;
    case 143u: goto L_0020E324;
    case 144u: goto L_0020E4E8;
    case 145u: goto L_0020E540;
    case 146u: goto L_0020E5F8;
    case 147u: goto L_0020E660;
    case 148u: goto L_0020E698;
    case 149u: goto L_0020E768;
    case 150u: goto L_0020E790;
    case 151u: goto L_0020E7CC;
    case 152u: goto L_0020E88C;
    case 153u: goto L_0020E8E0;
    case 154u: goto L_0020E8F8;
    case 155u: goto L_0020E920;
    case 156u: goto L_0020E938;
    case 157u: goto L_0020E960;
    case 158u: goto L_0020E978;
    case 159u: goto L_0020E9A0;
    case 160u: goto L_0020E9BC;
    case 161u: goto L_0020EA08;
    case 162u: goto L_0020EA28;
    case 163u: goto L_0020EA7C;
    case 164u: goto L_0020EA9C;
    case 165u: goto L_0020EB00;
    case 166u: goto L_0020EB54;
    case 167u: goto L_0020EB70;
    case 168u: goto L_0020EB90;
    case 169u: goto L_0020EBD4;
    case 170u: goto L_0020EBF0;
    case 171u: goto L_0020EC10;
    case 172u: goto L_0020EC64;
    case 173u: goto L_0020EC80;
    case 174u: goto L_0020ECA0;
    case 175u: goto L_0020ECE4;
    case 176u: goto L_0020ED00;
    case 177u: goto L_0020ED20;
    case 178u: goto L_0020ED8C;
    case 179u: goto L_0020EDD8;
    case 180u: goto L_0020EDF8;
    case 181u: goto L_0020EE4C;
    case 182u: goto L_0020EE6C;
    case 183u: goto L_0020EEB8;
    case 184u: goto L_0020EECC;
    case 185u: goto L_0020EEDC;
    case 186u: goto L_0020EEF0;
    case 187u: goto L_0020EF04;
    case 188u: goto L_0020EF24;
    case 189u: goto L_0020EF50;
    case 190u: goto L_0020EF98;
    case 191u: goto L_0020EFA8;
    case 192u: goto L_0020EFC4;
    case 193u: goto L_0020EFDC;
    case 194u: goto L_0020EFEC;
    case 195u: goto L_0020F008;
    case 196u: goto L_0020F030;
    case 197u: goto L_0020F040;
    case 198u: goto L_0020F050;
    case 199u: goto L_0020F060;
    case 200u: goto L_0020F0B0;
    case 201u: goto L_0020F0D0;
    case 202u: goto L_0020F110;
    case 203u: goto L_0020F130;
    case 204u: goto L_0020F164;
    case 205u: goto L_0020F190;
    case 206u: goto L_0020F1C4;
    case 207u: goto L_0020F1F0;
    case 208u: goto L_0020F258;
    case 209u: goto L_0020F264;
    case 210u: goto L_0020F280;
    case 211u: goto L_0020F2A0;
    case 212u: goto L_0020F2B0;
    case 213u: goto L_0020F2C4;
    case 214u: goto L_0020F2D0;
    case 215u: goto L_0020F2E4;
    case 216u: goto L_0020F300;
    case 217u: goto L_0020F32C;
    case 218u: goto L_0020F35C;
    case 219u: goto L_0020F378;
    case 220u: goto L_0020F3A4;
    case 221u: goto L_0020F3BC;
    case 222u: goto L_0020F3D4;
    case 223u: goto L_0020F3E0;
    case 224u: goto L_0020F3E8;
    case 225u: goto L_0020F3F4;
    case 226u: goto L_0020F404;
    case 227u: goto L_0020F410;
    case 228u: goto L_0020F41C;
    case 229u: goto L_0020F460;
    case 230u: goto L_0020F470;
    case 231u: goto L_0020F4BC;
    case 232u: goto L_0020F4D0;
    case 233u: goto L_0020F4EC;
    case 234u: goto L_0020F500;
    case 235u: goto L_0020F520;
    case 236u: goto L_0020F54C;
    case 237u: goto L_0020F560;
    case 238u: goto L_0020F57C;
    case 239u: goto L_0020F590;
    case 240u: goto L_0020F5B0;
    case 241u: goto L_0020F5CC;
    case 242u: goto L_0020F5E0;
    case 243u: goto L_0020F608;
    case 244u: goto L_0020F61C;
    case 245u: goto L_0020F63C;
    case 246u: goto L_0020F664;
    case 247u: goto L_0020F678;
    case 248u: goto L_0020F6A0;
    case 249u: goto L_0020F6B4;
    case 250u: goto L_0020F6D4;
    case 251u: goto L_0020F714;
    case 252u: goto L_0020F724;
    case 253u: goto L_0020F740;
    case 254u: goto L_0020F754;
    case 255u: goto L_0020F764;
    case 256u: goto L_0020F780;
    case 257u: goto L_0020F790;
    case 258u: goto L_0020F7A0;
    case 259u: goto L_0020F7C0;
    case 260u: goto L_0020F7E4;
    case 261u: goto L_0020F850;
    case 262u: goto L_0020F8A0;
    case 263u: goto L_0020F8C0;
    case 264u: goto L_0020F8D4;
    case 265u: goto L_0020F8DC;
    case 266u: goto L_0020F8F8;
    case 267u: goto L_0020F930;
    case 268u: goto L_0020F950;
    case 269u: goto L_0020F960;
    case 270u: goto L_0020F984;
    case 271u: goto L_0020F9C0;
    case 272u: goto L_0020F9EC;
    case 273u: goto L_0020F9F4;
    case 274u: goto L_0020FA1C;
    case 275u: goto L_0020FA24;
    case 276u: goto L_0020FA3C;
    case 277u: goto L_0020FA4C;
    case 278u: goto L_0020FA60;
    case 279u: goto L_0020FA70;
    case 280u: goto L_0020FA7C;
    case 281u: goto L_0020FABC;
    case 282u: goto L_0020FAC8;
    case 283u: goto L_0020FADC;
    case 284u: goto L_0020FB00;
    case 285u: goto L_0020FB08;
    case 286u: goto L_0020FB20;
    case 287u: goto L_0020FB2C;
    case 288u: goto L_0020FB60;
    case 289u: goto L_0020FB6C;
    case 290u: goto L_0020FB74;
    case 291u: goto L_0020FB84;
    case 292u: goto L_0020FB98;
    case 293u: goto L_0020FBBC;
    case 294u: goto L_0020FBC8;
    case 295u: goto L_0020FBD8;
    case 296u: goto L_0020FBF8;
    case 297u: goto L_0020FC04;
    case 298u: goto L_0020FC14;
    case 299u: goto L_0020FC28;
    case 300u: goto L_0020FC3C;
    case 301u: goto L_0020FC4C;
    case 302u: goto L_0020FC6C;
    case 303u: goto L_0020FC80;
    case 304u: goto L_0020FC90;
    case 305u: goto L_0020FCB8;
    case 306u: goto L_0020FCCC;
    case 307u: goto L_0020FCE0;
    case 308u: goto L_0020FD00;
    case 309u: goto L_0020FD40;
    case 310u: goto L_0020FD5C;
    case 311u: goto L_0020FD6C;
    case 312u: goto L_0020FD80;
    case 313u: goto L_0020FDA0;
    case 314u: goto L_0020FDB0;
    case 315u: goto L_0020FDF8;
    case 316u: goto L_0020FE18;
    case 317u: goto L_0020FE50;
    case 318u: goto L_0020FE70;
    case 319u: goto L_0020FE78;
    case 320u: goto L_0020FE9C;
    case 321u: goto L_0020FED0;
    case 322u: goto L_0020FEF8;
    case 323u: goto L_0020FF00;
    case 324u: goto L_0020FF24;
    case 325u: goto L_0020FF38;
    case 326u: goto L_0020FF4C;
    case 327u: goto L_0020FF60;
    case 328u: goto L_0020FF80;
    case 329u: goto L_0020FFB0;
    default: bad_entry(c, 0x0020C000u); return;
    }
L_0020C000:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020C030:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 21984u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_0020C050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C070u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0020C070u) [[unlikely]] return; }
L_0020C070:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16224u);
    set32(c.r[6], c.r[6].w[0] - 21984u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C090u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0020C090u) [[unlikely]] return; }
L_0020C090:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0020C0A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_0020C0D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020C0C8u) [[unlikely]] return; }
L_0020C0C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C0D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020C0D8u) [[unlikely]] return; }
L_0020C0D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020C0F0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0020C110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020C198; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_0020C178; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C148u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020C148u) [[unlikely]] return; }
L_0020C148:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C158u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020C158u) [[unlikely]] return; }
L_0020C158:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020C174; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C174u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020C174u) [[unlikely]] return; }
L_0020C174:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0020C178:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_0020C198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C188u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020C188u) [[unlikely]] return; }
L_0020C188:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C198u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020C198u) [[unlikely]] return; }
L_0020C198:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020C1C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0020C1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_0020C218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C208u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020C208u) [[unlikely]] return; }
L_0020C208:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C218u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020C218u) [[unlikely]] return; }
L_0020C218:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020C230:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0020C3D8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_0020C3DC; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_0020C324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_0020C308; } }
L_0020C294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C29Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020C29Cu) [[unlikely]] return; }
L_0020C29C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C2B4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0042(c, 388u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0020C2B4u) [[unlikely]] return; }
L_0020C2B4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C2C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020C2C4u) [[unlikely]] return; }
L_0020C2C4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0020C304; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C2D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020C2D8u) [[unlikely]] return; }
L_0020C2D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C2E8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020C2E8u) [[unlikely]] return; }
L_0020C2E8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C2F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020C2F4u) [[unlikely]] return; }
L_0020C2F4:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0020C304:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0020C308:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C294u | kUnwind; return; } goto L_0020C294; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0020C324:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_0020C3C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C334u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_0042(c, 376u, depth + 1u); else { c.pc = 0x0020B260u; return; } if (c.pc != 0x0020C334u) [[unlikely]] return; }
L_0020C334:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0020C35C; } }
L_0020C340:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C354u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020C354u) [[unlikely]] return; }
L_0020C354:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0020C35C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C340u | kUnwind; return; } goto L_0020C340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_0020C3B0; } }
L_0020C378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020C380u) [[unlikely]] return; }
L_0020C380:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C398u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020C398u) [[unlikely]] return; }
L_0020C398:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020C3A4u) [[unlikely]] return; }
L_0020C3A4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_0020C3B0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C378u | kUnwind; return; } goto L_0020C378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0020C3D0; } }
L_0020C3C8:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0020C3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3D8u);  if (depth < kMaxDepth) unit_0042(c, 375u, depth + 1u); else { c.pc = 0x0020B240u; return; } if (c.pc != 0x0020C3D8u) [[unlikely]] return; }
L_0020C3D8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_0020C3DC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_0020C430; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C3FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020C3FCu) [[unlikely]] return; }
L_0020C3FC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C408u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0042(c, 388u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0020C408u) [[unlikely]] return; }
L_0020C408:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C418u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020C418u) [[unlikely]] return; }
L_0020C418:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0020C4E8; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020C4E4; } }
L_0020C430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020C438u) [[unlikely]] return; }
L_0020C438:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C444u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0042(c, 388u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0020C444u) [[unlikely]] return; }
L_0020C444:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C454u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020C454u) [[unlikely]] return; }
L_0020C454:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_0020C4A4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020C468u) [[unlikely]] return; }
L_0020C468:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C47Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0043(c, 49u, depth + 1u); else { c.pc = 0x0020C530u; return; } if (c.pc != 0x0020C47Cu) [[unlikely]] return; }
L_0020C47C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C48Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020C48Cu) [[unlikely]] return; }
L_0020C48C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020C4E4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020C4E4; } }
L_0020C4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C4ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0042(c, 389u, depth + 1u); else { c.pc = 0x0020B3D0u; return; } if (c.pc != 0x0020C4ACu) [[unlikely]] return; }
L_0020C4AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C4C0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 388u, depth + 1u); else { c.pc = 0x0020B3B0u; return; } if (c.pc != 0x0020C4C0u) [[unlikely]] return; }
L_0020C4C0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C4D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 191u, depth + 1u); else { c.pc = 0x001BE5D0u; return; } if (c.pc != 0x0020C4D0u) [[unlikely]] return; }
L_0020C4D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020C4E4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0020C4E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0020C4E8:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C4F8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0042(c, 382u, depth + 1u); else { c.pc = 0x0020B300u; return; } if (c.pc != 0x0020C4F8u) [[unlikely]] return; }
L_0020C4F8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020C530:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0020C550:
    set32(c.r[29], c.r[29].w[0] - 928u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 672u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[3], c.r[29].w[0] + 720u);
    c.budget -= 22;
L_0020C5A8:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C5A8u | kUnwind; return; } goto L_0020C5A8; } }
    st32((c.r[29].w[0] + 684u), 0u);
    set32(c.r[4], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 700u), 0u);
    set32(c.r[3], c.r[29].w[0] + 656u);
    st32((c.r[29].w[0] + 716u), 0u);
    c.budget -= 5;
L_0020C5D8:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C5D8u | kUnwind; return; } goto L_0020C5D8; } }
    st32((c.r[29].w[0] + 620u), 0u);
    set32(c.r[5], c.r[29].w[0] + 608u);
    st32((c.r[29].w[0] + 636u), 0u);
    st32((c.r[29].w[0] + 652u), 0u);
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C610u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x0020C610u) [[unlikely]] return; }
L_0020C610:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C61Cu); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x0020C61Cu) [[unlikely]] return; }
L_0020C61C:
    set32(c.r[2], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C698u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x0020C698u) [[unlikely]] return; }
L_0020C698:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 432u));
    set32(c.r[6], c.r[29].w[0] + 432u);
    set32(c.r[5], c.r[29].w[0] + 672u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[29].w[0] + 672u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0020C6AC:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C6ACu | kUnwind; return; } goto L_0020C6AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 480u));
    c.f[2] = ld32((c.r[3].w[0] + 31024u));
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st8((c.r[29].w[0] + 720u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 480u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] << 1);
    c.f[1] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[29].w[0] + 724u), c.f[0]);
    st32((c.r[29].w[0] + 720u), c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[29].w[0] + 916u), c.f[1]);
    st32((c.r[29].w[0] + 900u), c.f[1]);
    st32((c.r[29].w[0] + 920u), c.f[0]);
    st32((c.r[29].w[0] + 904u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 488u));
    c.f[0] = ld32((c.r[29].w[0] + 492u));
    st32((c.r[29].w[0] + 912u), c.f[2]);
    st32((c.r[29].w[0] + 728u), c.f[1]);
    st32((c.r[29].w[0] + 732u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 896u), c.f[2]);
    set32(c.r[5], ld32((c.r[22].w[0] + 220u)));
    set32(c.r[30], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 880u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 884u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 41;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 888u), c.f[0]);  if (t) { goto L_0020C78C; } }
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 864u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 868u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 872u), c.f[0]);  if (t) { goto L_0020C7A8; } }
L_0020C78C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 820u), 0u);
    st32((c.r[29].w[0] + 816u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 864u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 824u), 0u);
    st32((c.r[29].w[0] + 868u), 0u);
    st32((c.r[29].w[0] + 872u), 0u);
    c.budget -= 7;
L_0020C7A8:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0020CA50; } }
L_0020C7B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_0020C7E0; }
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_0020C7EC; } }
L_0020C7E0:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
L_0020C7EC:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[29].w[0] + 544u);
    set32(c.r[3], c.r[29].w[0] + 592u);
    c.budget -= 3;
L_0020C7F8:
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C7F8u | kUnwind; return; } goto L_0020C7F8; } }
    st32((c.r[29].w[0] + 556u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] & 65535ull;
    st32((c.r[29].w[0] + 572u), c.f[20]);
    set32(c.r[3], c.r[16].w[0] << 2);
    st32((c.r[29].w[0] + 588u), c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[23].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C844u); set32(c.r[6], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_0043(c, 66u, depth + 1u); else { c.pc = 0x0020CB00u; return; } if (c.pc != 0x0020C844u) [[unlikely]] return; }
L_0020C844:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C850u); set32(c.r[22], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x0020C850u) [[unlikely]] return; }
L_0020C850:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    ld128((c.r[22].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[22].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[22].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[22].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C8D8u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x0020C8D8u) [[unlikely]] return; }
L_0020C8D8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 368u));
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[29].w[0] + 544u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0020C8EC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C8ECu | kUnwind; return; } goto L_0020C8EC; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 416u));
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    c.f[1] = ld32((c.r[29].w[0] + 416u));
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.f[12] = ld32((c.r[29].w[0] + 428u));
    set32(c.r[5], c.r[29].w[0] + 544u);
    st8((c.r[29].w[0] + 592u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    st32((c.r[29].w[0] + 592u), c.f[1]);
    st32((c.r[29].w[0] + 604u), c.f[12]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C93Cu); st32((c.r[29].w[0] + 600u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 73u, depth + 1u); else { c.pc = 0x0027D200u; return; } if (c.pc != 0x0020C93Cu) [[unlikely]] return; }
L_0020C93C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[21] = ld32((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C964u); set32(c.r[6], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0020C964u) [[unlikely]] return; }
L_0020C964:
    c.f[1] = ld32((c.r[29].w[0] + 784u));
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.f[3] = ld32((c.r[29].w[0] + 788u));
    set32(c.r[6], c.r[29].w[0] + 864u);
    c.f[2] = ld32((c.r[29].w[0] + 596u));
    c.f[4] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 792u));
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 800u), c.f[4]);
    st32((c.r[29].w[0] + 848u), c.f[4]);
    st32((c.r[29].w[0] + 804u), c.f[2]);
    st32((c.r[29].w[0] + 852u), c.f[2]);
    st32((c.r[29].w[0] + 808u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020C9B0u); st32((c.r[29].w[0] + 856u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0020C9B0u) [[unlikely]] return; }
L_0020C9B0:
    c.f[1] = ld32((c.r[29].w[0] + 772u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[0] = ld32((c.r[29].w[0] + 768u));
    c.f[11] = ld32((c.r[29].w[0] + 776u));
    c.f[3] = fp::mul(c.f[21], c.f[1]);
    st32((c.r[29].w[0] + 836u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 900u));
    c.f[4] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 896u));
    st32((c.r[29].w[0] + 832u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 848u));
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[10] = fp::mul(c.f[21], c.f[0]);
    c.f[9] = ld32((c.r[29].w[0] + 852u));
    st32((c.r[29].w[0] + 900u), c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 916u));
    c.f[1] = fp::mul(c.f[21], c.f[9]);
    st32((c.r[29].w[0] + 756u), c.f[1]);
    c.f[1] = fp::add(c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 916u), c.f[1]);
    c.f[1] = fp::mul(c.f[21], c.f[11]);
    c.f[0] = ld32((c.r[29].w[0] + 904u));
    c.f[8] = ld32((c.r[29].w[0] + 856u));
    st32((c.r[29].w[0] + 896u), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::mul(c.f[21], c.f[8]);
    c.f[7] = ld32((c.r[29].w[0] + 912u));
    st32((c.r[29].w[0] + 736u), c.f[4]);
    c.f[5] = ld32((c.r[29].w[0] + 920u));
    st32((c.r[29].w[0] + 760u), c.f[2]);
    c.f[4] = fp::add(c.f[7], c.f[10]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[29].w[0] + 840u), c.f[11]);
    st32((c.r[29].w[0] + 740u), c.f[3]);
    st32((c.r[29].w[0] + 752u), c.f[10]);
    st32((c.r[29].w[0] + 912u), c.f[4]);
    st32((c.r[29].w[0] + 920u), c.f[2]);
    st32((c.r[29].w[0] + 744u), c.f[1]);
    st32((c.r[29].w[0] + 904u), c.f[0]);
    c.budget -= 40;
L_0020CA50:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 36u));
    c.r[3].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020C7B4u | kUnwind; return; } goto L_0020C7B4; }
    c.f[5] = ld32((c.r[29].w[0] + 896u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[29].w[0] + 900u));
    c.f[3] = ld32((c.r[29].w[0] + 904u));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 6u, c.f[0], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 912u));
    c.f[1] = ld32((c.r[29].w[0] + 916u));
    c.f[0] = ld32((c.r[29].w[0] + 920u));
    st32((c.r[21].w[0]), c.f[2]);
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.f[2] = fp::mul(c.f[5], c.f[6]);
    st32((c.r[21].w[0] + 8u), c.f[0]);
    c.f[1] = fp::mul(c.f[4], c.f[6]);
    c.f[0] = fp::mul(c.f[3], c.f[6]);
    st32((c.r[20].w[0]), c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[1]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st32((c.r[29].w[0] + 896u), c.f[2]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 900u), c.f[1]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st32((c.r[29].w[0] + 904u), c.f[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 928u);  c.pc = t; return; }
L_0020CB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[8], c.r[29].w[0]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 3;
L_0020CB0C:
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CB0Cu | kUnwind; return; } goto L_0020CB0C; } }
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], c.r[29].w[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[2] = ld32((c.r[29].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    st32((c.r[4].w[0] + 28u), c.f[2]);
    st32((c.r[4].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    st32((c.r[4].w[0] + 40u), c.f[2]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 65;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020CC30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0020CC5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020CC98; } }
L_0020CC5C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CC6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020CC6Cu) [[unlikely]] return; }
L_0020CC6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 18128u);  if (t) { goto L_0020CC88; } }
L_0020CC78:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020CC88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020CC94; } }
L_0020CC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CC78u | kUnwind; return; } goto L_0020CC78; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020CC94:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020CC98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020CDB8; } }
L_0020CCA8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020CDB8; }
    set32(c.r[19], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0020CDB4; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  goto L_0020CD40; }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[2].w[0] + 84u)));  goto L_0020CCDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020CDB8; } }
L_0020CCDC:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 28u);  goto L_0020CCF0; }
    set32(c.r[16], 0u + 4u);
    set32(c.r[4], 0u + 28u);
    c.budget -= 2;
L_0020CCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CCF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020CCF8u) [[unlikely]] return; }
L_0020CCF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 220u)));  goto L_0020CD0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CD08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 128u, depth + 1u); else { c.pc = 0x002DD570u; return; } if (c.pc != 0x0020CD08u) [[unlikely]] return; }
L_0020CD08:
    set32(c.r[5], ld32((c.r[17].w[0] + 220u)));
    c.budget -= 1;
L_0020CD0C:
    c.r[7].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CD28u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 457u, depth + 1u); else { c.pc = 0x002DB410u; return; } if (c.pc != 0x0020CD28u) [[unlikely]] return; }
L_0020CD28:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CD3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020CDB8; } }
L_0020CD3C:
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0020CD40:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0020CDB8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), c.r[16].w[0]);  goto L_0020CD88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CD58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020CD58u) [[unlikely]] return; }
L_0020CD58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CD68u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020CD68u) [[unlikely]] return; }
L_0020CD68:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020CD84; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CD84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020CD84u) [[unlikely]] return; }
L_0020CD84:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_0020CD88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020CDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CD98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020CD98u) [[unlikely]] return; }
L_0020CD98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CDA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020CDA8u) [[unlikely]] return; }
L_0020CDA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020CDB8; } }
L_0020CDB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020CDB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020CDE0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0020D1B0; } }
    c.f[0] = ld32((c.r[5].w[0] + 112u));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[5].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.f[1] = ld32((c.r[5].w[0] + 120u));
    set32(c.r[3], c.r[29].w[0] + 256u);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 124u));
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 128u));
    c.f[1] = ld32((c.r[5].w[0] + 132u));
    c.f[0] = ld32((c.r[5].w[0] + 136u));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 140u));
    c.f[1] = ld32((c.r[5].w[0] + 144u));
    c.f[0] = ld32((c.r[5].w[0] + 148u));
    st32((c.r[29].w[0] + 364u), c.f[2]);
    st32((c.r[29].w[0] + 368u), c.f[1]);
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 152u));
    c.f[1] = ld32((c.r[5].w[0] + 156u));
    c.f[0] = ld32((c.r[5].w[0] + 160u));
    st32((c.r[29].w[0] + 376u), c.f[2]);
    st32((c.r[29].w[0] + 380u), c.f[1]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 164u));
    c.f[1] = ld32((c.r[5].w[0] + 168u));
    c.f[0] = ld32((c.r[5].w[0] + 172u));
    st32((c.r[29].w[0] + 388u), c.f[2]);
    st32((c.r[29].w[0] + 392u), c.f[1]);
    st32((c.r[29].w[0] + 396u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 116u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[0] = ld32((c.r[2].w[0] + 124u));
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 288u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 296u), c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 148u));
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 304u), c.f[3]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 312u), c.f[1]);
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.budget -= 67;
L_0020CF14:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020CF14u | kUnwind; return; } goto L_0020CF14; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF48u); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x0020CF48u) [[unlikely]] return; }
L_0020CF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CF50u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x0020CF50u) [[unlikely]] return; }
L_0020CF50:
    set32(c.r[3], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFD0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x0020CFD0u) [[unlikely]] return; }
L_0020CFD0:
    c.f[20] = ld32((c.r[29].w[0] + 204u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020CFE4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0020CFE4u) [[unlikely]] return; }
L_0020CFE4:
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    set32(c.r[3], 0u + 2u);
    c.f[3] = ld32((c.r[29].w[0] + 400u));
    c.f[4] = ld32((c.r[29].w[0] + 404u));
    c.f[5] = fp::mul(c.f[20], c.f[0]);
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 200u));
    c.f[4] = fp::mul(c.f[20], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    set32(c.r[4], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 19;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 432u);  goto L_0020D124; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0020D074; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 416u);  goto L_0020D04C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0020D1B4; } }
L_0020D04C:
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D058u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0020D058u) [[unlikely]] return; }
L_0020D058:
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_0020D1B0; } }
L_0020D074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D07Cu);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x0020D07Cu) [[unlikely]] return; }
L_0020D07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D084u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x0020D084u) [[unlikely]] return; }
L_0020D084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D08Cu); st32((c.r[16].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 31u, depth + 1u); else { c.pc = 0x0027C8D0u; return; } if (c.pc != 0x0020D08Cu) [[unlikely]] return; }
L_0020D08C:
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D0D8u); st32((c.r[16].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D0D8u) [[unlikely]] return; }
L_0020D0D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[18].w[0] + 28u));
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_0020D1B0; } }
L_0020D124:
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D130u); set32(c.r[6], c.r[18].w[0] + 120u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0020D130u) [[unlikely]] return; }
L_0020D130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D138u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D138u) [[unlikely]] return; }
L_0020D138:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[7] = fp::sub(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[18].w[0] + 24u));
    c.f[4] = 0u;
    c.f[6] = ld32((c.r[18].w[0] + 28u));
    c.facc = fp::add(c.f[4], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 432u));
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    c.f[2] = ld32((c.r[29].w[0] + 440u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 436u), c.f[1]);
    c.f[2] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 432u), c.f[3]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 30;
L_0020D1B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0020D1B4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_0020D1D0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = c.r[20].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0020D21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D258; } }
L_0020D21C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D22Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020D22Cu) [[unlikely]] return; }
L_0020D22C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 18128u);  if (t) { goto L_0020D248; } }
L_0020D238:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020D248; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020D254; } }
L_0020D248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020D238u | kUnwind; return; } goto L_0020D238; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020D254:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020D258:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 8u)));  goto L_0020D268; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D594; } }
L_0020D268:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld16((c.r[2].w[0] + 8u));  goto L_0020D278; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D594; } }
L_0020D278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D280u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D280u) [[unlikely]] return; }
L_0020D280:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_0020D294; }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020D2AC; } }
L_0020D294:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020D2AC:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::pminw(c.r[4], c.r[3], c.r[2]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld16((c.r[17].w[0] + 30u));
    c.budget -= 18;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0020D314; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D30Cu); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 116u, depth + 1u); else { c.pc = 0x0020DB10u; return; } if (c.pc != 0x0020D30Cu) [[unlikely]] return; }
L_0020D30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0020D598; } }
L_0020D314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D31Cu);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D31Cu) [[unlikely]] return; }
L_0020D31C:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_0020D330; }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020D348; } }
L_0020D330:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020D348:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::pminw(c.r[4], c.r[3], c.r[2]);
    set32(c.r[30], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 10;
    if (c.r[30].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));  goto L_0020D378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D594; } }
L_0020D378:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[4].w[0] << 1);  goto L_0020D39C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[23].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_0020D3B8; } }
L_0020D39C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = ld16((c.r[2].w[0]));
    c.r[16].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[23].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
L_0020D3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D3C0u);  if (depth < kMaxDepth) unit_005F(c, 30u, depth + 1u); else { c.pc = 0x0027C8B0u; return; } if (c.pc != 0x0020D3C0u) [[unlikely]] return; }
L_0020D3C0:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[16].d[0] = c.r[23].d[0] + 0ull;  goto L_0020D3F8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[22].d[0] = c.r[16].d[0] + 0ull;  goto L_0020D3F4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[10].d[0] = c.r[22].d[0] + 0ull;  goto L_0020D3FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020D3F8; } }
L_0020D3F4:
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0020D3F8:
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0020D3FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D418u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 50u, depth + 1u); else { c.pc = 0x0020C550u; return; } if (c.pc != 0x0020D418u) [[unlikely]] return; }
L_0020D418:
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D438u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 50u, depth + 1u); else { c.pc = 0x0020C550u; return; } if (c.pc != 0x0020D438u) [[unlikely]] return; }
L_0020D438:
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[6] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[4] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[6], c.f[4]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    c.budget -= 20;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  goto L_0020D518; }
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[4] = ld32((c.r[29].w[0] + 200u));
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    c.f[5] = fp::add(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[2] = fp::mul(c.f[6], c.f[1]);
    c.f[1] = fp::mul(c.f[6], c.f[5]);
    c.f[3] = fp::mul(c.f[6], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 6u, c.f[0], c.f[6]);
    c.f[4] = fp::mul(c.f[2], c.f[6]);
    c.f[5] = fp::mul(c.f[1], c.f[6]);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    c.budget -= 30;
L_0020D500:
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 6;
L_0020D518:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0020D580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D52Cu);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D52Cu) [[unlikely]] return; }
L_0020D52C:
    c.f[7] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = ld32((c.r[29].w[0] + 216u));
    c.f[3] = ld32((c.r[29].w[0] + 184u));
    c.f[6] = fp::sub(c.f[1], c.f[7]);
    c.f[5] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = 0u;
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    c.facc = fp::add(c.f[2], c.f[4]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.facc = fp::add(c.f[2], c.f[5]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.facc = fp::add(c.f[2], c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[6]));
    st32((c.r[19].w[0]), c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[3]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 21;
L_0020D580:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D590u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 79u, depth + 1u); else { c.pc = 0x0020CDE0u; return; } if (c.pc != 0x0020D590u) [[unlikely]] return; }
L_0020D590:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020D594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0020D598:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0020D5D0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 26;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0020D640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020D67C; } }
L_0020D640:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D650u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020D650u) [[unlikely]] return; }
L_0020D650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 18128u);  if (t) { goto L_0020D66C; } }
L_0020D65C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020D66C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020D678; } }
L_0020D66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020D65Cu | kUnwind; return; } goto L_0020D65C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020D678:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020D67C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 8u)));  goto L_0020D68C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DABC; } }
L_0020D68C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld16((c.r[2].w[0] + 8u));  goto L_0020D69C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DABC; } }
L_0020D69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D6A4u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D6A4u) [[unlikely]] return; }
L_0020D6A4:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_0020D6B8; }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020D6D0; } }
L_0020D6B8:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020D6D0:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::pminw(c.r[4], c.r[3], c.r[2]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].d[0] = ld16((c.r[16].w[0] + 30u));
    c.budget -= 18;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0020D738; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D730u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 116u, depth + 1u); else { c.pc = 0x0020DB10u; return; } if (c.pc != 0x0020D730u) [[unlikely]] return; }
L_0020D730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_0020DAC0; } }
L_0020D738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D740u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D740u) [[unlikely]] return; }
L_0020D740:
    c.budget -= 2;
    if (c.r[21].sd[0] < 0) { set32(c.r[3], c.r[21].w[0] >> 1);  goto L_0020D754; }
    c.f[1] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020D76C; } }
L_0020D754:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020D76C:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::pminw(c.r[4], c.r[3], c.r[2]);
    set32(c.r[21], ld32((c.r[19].w[0] + 224u)));
    c.budget -= 10;
    if (c.r[21].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 34u));  goto L_0020D79C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DABC; } }
L_0020D79C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[4].w[0] << 1);  goto L_0020D7C0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[23].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = ld16((c.r[2].w[0]));  if (t) { goto L_0020D7DC; } }
L_0020D7C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[10].d[0] = ld16((c.r[2].w[0]));
    c.r[22].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[23].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
L_0020D7DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 280u);
    set32(c.r[6], c.r[29].w[0] + 264u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D7F8u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 50u, depth + 1u); else { c.pc = 0x0020C550u; return; } if (c.pc != 0x0020D7F8u) [[unlikely]] return; }
L_0020D7F8:
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 248u);
    set32(c.r[6], c.r[29].w[0] + 232u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D818u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 50u, depth + 1u); else { c.pc = 0x0020C550u; return; } if (c.pc != 0x0020D818u) [[unlikely]] return; }
L_0020D818:
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[6], c.r[29].w[0] + 200u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D838u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 50u, depth + 1u); else { c.pc = 0x0020C550u; return; } if (c.pc != 0x0020D838u) [[unlikely]] return; }
L_0020D838:
    c.f[2] = ld32((c.r[29].w[0] + 280u));
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    c.f[20] = 0u;
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[7] = fp::add(c.f[2], c.f[1]);
    c.f[7] = fp::add(c.f[7], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 284u));
    c.f[1] = ld32((c.r[29].w[0] + 252u));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.f[6] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[5] = ld32((c.r[29].w[0] + 256u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[28].w[0] - 32588u));
    c.f[5] = fp::add(c.f[6], c.f[5]);
    c.f[4] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[7]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    set32(c.r[4], ld32((c.r[20].w[0] + 112u)));
    c.f[21] = c.f[20];
    c.budget -= 27;
    { const bool t = c.r[4].d[0] == 0ull; c.f[22] = c.f[20];  if (t) { goto L_0020D8B4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0020D900; } }
L_0020D8B4:
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.f[5] = ld32((c.r[29].w[0] + 268u));
    c.f[7] = fp::add(c.f[2], c.f[1]);
    c.f[4] = ld32((c.r[29].w[0] + 236u));
    c.f[7] = fp::add(c.f[7], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.f[6] = ld32((c.r[28].w[0] - 32588u));
    c.f[4] = fp::add(c.f[5], c.f[4]);
    c.f[3] = ld32((c.r[29].w[0] + 204u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[20] = fp::mul(c.f[6], c.f[7]);
    c.f[21] = fp::mul(c.f[6], c.f[3]);
    c.f[22] = fp::mul(c.f[6], c.f[0]);
    c.budget -= 19;
L_0020D900:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 116u)));  goto L_0020D964; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.f[21] = fp::mul(c.f[21], c.f[1]);
    c.f[22] = fp::mul(c.f[22], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[21]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[22]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 23;
L_0020D964:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0020DAA8; }
    c.f[6] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[5] = ld32((c.r[29].w[0] + 284u));
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.f[27] = fp::sub(c.f[1], c.f[6]);
    c.f[28] = fp::sub(c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[29].w[0] + 220u));
    c.f[4] = ld32((c.r[29].w[0] + 280u));
    c.f[3] = ld32((c.r[29].w[0] + 248u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[24] = fp::sub(c.f[2], c.f[6]);
    c.f[25] = fp::sub(c.f[1], c.f[5]);
    c.f[29] = fp::sub(c.f[3], c.f[4]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020D9B0u); c.f[26] = fp::sub(c.f[0], c.f[4]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020D9B0u) [[unlikely]] return; }
L_0020D9B0:
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 300u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[4].d[0] = c.r[2].d[0] | 23007ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 296u), c.r[3].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[1], c.f[4]);
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[23] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DA08u); st32((c.r[29].w[0] + 300u), c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020DA08u) [[unlikely]] return; }
L_0020DA08:
    c.f[2] = fp::mul(c.f[0], c.f[26]);
    c.f[7] = fp::sub(c.f[2], c.f[29]);
    c.f[2] = fp::mul(c.f[0], c.f[24]);
    c.f[0] = fp::mul(c.f[0], c.f[25]);
    c.f[4] = fp::sub(c.f[2], c.f[27]);
    c.f[6] = ld32((c.r[29].w[0] + 280u));
    c.f[5] = 0u;
    c.f[2] = fp::sub(c.f[0], c.f[28]);
    c.facc = fp::add(c.f[5], c.f[6]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[23], c.f[7]));
    c.f[3] = ld32((c.r[29].w[0] + 288u));
    c.f[0] = fp::add(c.f[0], c.f[29]);
    c.f[1] = ld32((c.r[29].w[0] + 284u));
    c.facc = fp::add(c.f[5], c.f[3]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[23], c.f[4]));
    c.facc = fp::add(c.f[5], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[27]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    c.f[0] = fp::add(c.f[0], c.f[28]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[20].w[0] + 132u));
    c.f[0] = ld32((c.r[28].w[0] - 32584u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020DAA4; } }
    c.f[3] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = fp::mul(c.f[1], c.f[21]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_0020DAA4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0020DAA8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DAB8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 79u, depth + 1u); else { c.pc = 0x0020CDE0u; return; } if (c.pc != 0x0020DAB8u) [[unlikely]] return; }
L_0020DAB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020DABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_0020DAC0:
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0020DB10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 15;
    { const bool t = c.r[20].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0020DB54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DB90; } }
L_0020DB54:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DB64u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020DB64u) [[unlikely]] return; }
L_0020DB64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 18128u);  if (t) { goto L_0020DB80; } }
L_0020DB70:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020DB80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020DB8C; } }
L_0020DB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DB70u | kUnwind; return; } goto L_0020DB70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020DB8C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020DB90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0020DBA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DCF4; } }
L_0020DBA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = ld16((c.r[2].w[0] + 8u));  goto L_0020DBB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DCF4; } }
L_0020DBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DBB8u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020DBB8u) [[unlikely]] return; }
L_0020DBB8:
    c.budget -= 2;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], c.r[17].w[0] >> 1);  goto L_0020DBCC; }
    c.f[1] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020DBE4; } }
L_0020DBCC:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020DBE4:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    mmi::pminw(c.r[4], c.r[3], c.r[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DC34u); c.f[20] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020DC34u) [[unlikely]] return; }
L_0020DC34:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 224u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[10], c.f[0]);
    c.budget -= 6;
    if (c.r[8].d[0] != 0ull) { c.r[9].d[0] = c.r[17].d[0] + 0ull;  goto L_0020DC54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DCF4; } }
L_0020DC54:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DC68u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 50u, depth + 1u); else { c.pc = 0x0020C550u; return; } if (c.pc != 0x0020DC68u) [[unlikely]] return; }
L_0020DC68:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0020DCE0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020DCDC; } }
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[2]);
    c.budget -= 16;
L_0020DCDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020DCE0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DCF0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 79u, depth + 1u); else { c.pc = 0x0020CDE0u; return; } if (c.pc != 0x0020DCF0u) [[unlikely]] return; }
L_0020DCF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020DCF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020DD20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 20;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0020DD78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DDB4; } }
L_0020DD78:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DD88u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020DD88u) [[unlikely]] return; }
L_0020DD88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 18128u);  if (t) { goto L_0020DDA4; } }
L_0020DD94:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020DDA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020DDB0; } }
L_0020DDA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DD94u | kUnwind; return; } goto L_0020DD94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020DDB0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020DDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020DED4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DDC8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 82u));  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020DDC8u) [[unlikely]] return; }
L_0020DDC8:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_0020DDDC; }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020DDF4; } }
L_0020DDDC:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020DDF4:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 6;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.r[22].d[0] = 0ull + 0ull;  goto L_0020DE74; }
    set32(c.r[17], c.r[16].w[0] - 1u);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020DE74; } }
L_0020DE1C:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[6], c.r[29].w[0] + 174u);
    set32(c.r[7], c.r[29].w[0] + 172u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DE38u); set32(c.r[8], c.r[29].w[0] + 170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020DE38u) [[unlikely]] return; }
L_0020DE38:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 172u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 174u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0020DE60; }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 170u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020DE5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0020DE80; } }
L_0020DE5C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020DE60:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0020DE74; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0020DE74:
    c.r[2].d[0] = c.r[22].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 220u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DE1Cu | kUnwind; return; } goto L_0020DE1C; }
L_0020DE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DE88u);  if (depth < kMaxDepth) unit_005F(c, 30u, depth + 1u); else { c.pc = 0x0027C8B0u; return; } if (c.pc != 0x0020DE88u) [[unlikely]] return; }
L_0020DE88:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[29].w[0] + 170u));  goto L_0020DECC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld16((c.r[29].w[0] + 172u));  goto L_0020DEBC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 220u)));  goto L_0020DF64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020DF60; } }
L_0020DEBC:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 170u));
    st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020DF60; } }
L_0020DECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020DF60; } }
L_0020DED4:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_0020DEE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020DF1C; } }
L_0020DEE4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DEF0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020DEF0u) [[unlikely]] return; }
L_0020DEF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20848u);  if (t) { goto L_0020DF0C; } }
L_0020DEFC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020DF0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020DF18; } }
L_0020DF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020DEFCu | kUnwind; return; } goto L_0020DEFC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020DF18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020DF1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020E0F4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020DF30u); c.r[16].d[0] = ld16((c.r[2].w[0] + 12u));  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020DF30u) [[unlikely]] return; }
L_0020DF30:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_0020DF60:
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.budget -= 1;
L_0020DF64:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 36u)));  if (t) { goto L_0020DF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020E0F4; } }
L_0020DF78:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 174u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[6] = c.r[2].w[0];
    c.r[3].d[0] = ld16((c.r[29].w[0] + 172u));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[3].w[0]);
    c.f[23] = ld32((c.r[4].w[0]));
    c.f[20] = ld32((c.r[2].w[0]));
    c.f[24] = ld32((c.r[4].w[0] + 4u));
    c.f[25] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::add(c.f[23], c.f[20]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[21] = ld32((c.r[2].w[0] + 4u));
    c.f[22] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = fp::add(c.f[24], c.f[21]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = fp::add(c.f[25], c.f[22]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 112u)));
    c.budget -= 30;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  goto L_0020E090; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0020E08C; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[6], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    c.f[1] = fp::mul(c.f[6], c.f[1]);
    c.f[2] = fp::mul(c.f[6], c.f[4]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 6u, c.f[0], c.f[6]);
    c.f[4] = fp::mul(c.f[2], c.f[6]);
    c.f[5] = fp::mul(c.f[1], c.f[6]);
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 37;
L_0020E08C:
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 1;
L_0020E090:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0020E0E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E0A4u);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020E0A4u) [[unlikely]] return; }
L_0020E0A4:
    c.f[4] = fp::sub(c.f[20], c.f[23]);
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[23]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[2] = fp::sub(c.f[21], c.f[24]);
    c.facc = fp::add(c.f[3], c.f[24]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    st32((c.r[19].w[0]), c.f[4]);
    c.f[1] = fp::sub(c.f[22], c.f[25]);
    c.facc = fp::add(c.f[3], c.f[25]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 15;
L_0020E0E0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E0F0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 79u, depth + 1u); else { c.pc = 0x0020CDE0u; return; } if (c.pc != 0x0020E0F0u) [[unlikely]] return; }
L_0020E0F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020E0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0020E140:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 26;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0020E1B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020E1EC; } }
L_0020E1B0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E1C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020E1C0u) [[unlikely]] return; }
L_0020E1C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 18128u);  if (t) { goto L_0020E1DC; } }
L_0020E1CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020E1DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020E1E8; } }
L_0020E1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E1CCu | kUnwind; return; } goto L_0020E1CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020E1E8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020E1EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E2C0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E200u); c.r[16].d[0] = ld16((c.r[2].w[0] + 82u));  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020E200u) [[unlikely]] return; }
L_0020E200:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_0020E214; }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020E22C; } }
L_0020E214:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020E22C:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 6;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.r[22].d[0] = 0ull + 0ull;  goto L_0020E2AC; }
    set32(c.r[17], c.r[16].w[0] - 1u);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E2AC; } }
L_0020E254:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[6], c.r[29].w[0] + 206u);
    set32(c.r[7], c.r[29].w[0] + 204u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E270u); set32(c.r[8], c.r[29].w[0] + 202u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020E270u) [[unlikely]] return; }
L_0020E270:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 204u));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 206u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0020E298; }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 202u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020E294; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 220u)));  goto L_0020E330; }
L_0020E294:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020E298:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0020E2AC; }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0020E2AC:
    c.r[2].d[0] = c.r[22].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 220u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E254u | kUnwind; return; } goto L_0020E254; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E32C; } }
L_0020E2C0:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_0020E2D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020E308; } }
L_0020E2D0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E2DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020E2DCu) [[unlikely]] return; }
L_0020E2DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20848u);  if (t) { goto L_0020E2F8; } }
L_0020E2E8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0020E2F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0020E304; } }
L_0020E2F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020E2E8u | kUnwind; return; } goto L_0020E2E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020E304:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0020E308:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020E5FC; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E324u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 123u, depth + 1u); else { c.pc = 0x0020DD20u; return; } if (c.pc != 0x0020E324u) [[unlikely]] return; }
L_0020E324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_0020E600; } }
L_0020E32C:
    set32(c.r[2], ld32((c.r[20].w[0] + 220u)));
    c.budget -= 1;
L_0020E330:
    set32(c.r[10], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 36u)));  if (t) { goto L_0020E344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020E5FC; } }
L_0020E344:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 206u));
    c.f[20] = 0u;
    c.r[5].d[0] = ld16((c.r[29].w[0] + 204u));
    c.f[4] = ld32((c.r[28].w[0] - 32588u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 202u));
    c.f[21] = c.f[20];
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] + c.r[7].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[25] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 188u), c.f[3]);
    c.f[26] = ld32((c.r[6].w[0] + 4u));
    c.f[5] = fp::add(c.f[25], c.f[0]);
    c.f[3] = fp::add(c.f[5], c.f[3]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[27] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[23] = ld32((c.r[3].w[0] + 4u));
    c.f[24] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[19].w[0]), c.f[3]);
    c.f[3] = fp::add(c.f[26], c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[23]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[3]);
    c.f[3] = fp::add(c.f[27], c.f[2]);
    c.f[3] = fp::add(c.f[3], c.f[24]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    st32((c.r[19].w[0] + 8u), c.f[3]);
    set32(c.r[6], ld32((c.r[21].w[0] + 112u)));
    c.budget -= 43;
    { const bool t = c.r[6].d[0] == 0ull; c.f[22] = c.f[20];  if (t) { goto L_0020E400; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 116u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0020E460; } }
L_0020E400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E460; } }
    set32(c.r[5], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[8].w[0]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[4].w[0] + 4u));
    c.f[8] = fp::add(c.f[4], c.f[3]);
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[7] = fp::add(c.f[7], c.f[6]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[5] = ld32((c.r[28].w[0] - 32588u));
    c.f[6] = fp::add(c.f[4], c.f[3]);
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[20] = fp::mul(c.f[5], c.f[6]);
    c.f[4] = fp::add(c.f[7], c.f[4]);
    c.f[3] = fp::add(c.f[8], c.f[3]);
    c.f[21] = fp::mul(c.f[5], c.f[4]);
    c.f[22] = fp::mul(c.f[5], c.f[3]);
    c.budget -= 22;
L_0020E460:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  goto L_0020E4CC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0020E4C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    fpu_rsqrt(c, 4u, c.f[3], c.f[4]);
    c.f[20] = fp::mul(c.f[20], c.f[4]);
    c.f[21] = fp::mul(c.f[21], c.f[4]);
    c.f[22] = fp::mul(c.f[22], c.f[4]);
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[3] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[3] = fp::mul(c.f[4], c.f[20]);
    st32((c.r[18].w[0]), c.f[3]);
    c.f[3] = fp::mul(c.f[4], c.f[21]);
    st32((c.r[18].w[0] + 4u), c.f[3]);
    c.f[3] = fp::mul(c.f[4], c.f[22]);
    st32((c.r[18].w[0] + 8u), c.f[3]);
    c.budget -= 22;
L_0020E4C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 1;
L_0020E4CC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0020E5E8; }
    c.f[29] = fp::sub(c.f[2], c.f[27]);
    c.f[30] = fp::sub(c.f[1], c.f[26]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E4E8u); c.f[31] = fp::sub(c.f[0], c.f[25]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020E4E8u) [[unlikely]] return; }
L_0020E4E8:
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[4].d[0] = c.r[2].d[0] | 23007ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[1], c.f[4]);
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[28] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E540u); st32((c.r[29].w[0] + 196u), c.f[1]);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020E540u) [[unlikely]] return; }
L_0020E540:
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[25]);
    c.f[1] = fp::sub(c.f[1], c.f[25]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = fp::sub(c.f[1], c.f[31]);
    c.f[1] = fp::sub(c.f[23], c.f[26]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[1], c.f[30]);
    c.f[1] = fp::sub(c.f[24], c.f[27]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[28], c.f[4]));
    c.f[1] = fp::add(c.f[1], c.f[31]);
    c.f[0] = fp::sub(c.f[0], c.f[29]);
    st32((c.r[19].w[0]), c.f[1]);
    c.facc = fp::add(c.f[3], c.f[26]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[28], c.f[2]));
    c.facc = fp::add(c.f[3], c.f[27]);
    c.f[1] = fp::add(c.f[1], c.f[30]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[28], c.f[0]));
    c.f[0] = fp::add(c.f[0], c.f[29]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 132u));
    c.f[0] = ld32((c.r[28].w[0] - 32584u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0020E5E4; } }
    c.f[3] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = fp::mul(c.f[1], c.f[21]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[22]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_0020E5E4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0020E5E8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E5F8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 79u, depth + 1u); else { c.pc = 0x0020CDE0u; return; } if (c.pc != 0x0020E5F8u) [[unlikely]] return; }
L_0020E5F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020E5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0020E600:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0020E660:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 220u)));
    c.r[20].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E698u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020E698u) [[unlikely]] return; }
L_0020E698:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[5], ld32((c.r[2].w[0] + 32u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (t) { goto L_0020E6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020E76C; } }
L_0020E6D0:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.f[5] = ld32((c.r[3].w[0]));  if (t) { goto L_0020E754; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0020E758; }
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 13;
L_0020E754:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0020E758:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E768u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 79u, depth + 1u); else { c.pc = 0x0020CDE0u; return; } if (c.pc != 0x0020E768u) [[unlikely]] return; }
L_0020E768:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020E76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020E790:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld16((c.r[4].w[0] + 92u));
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0020E978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E7CCu);  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x0020E7CCu) [[unlikely]] return; }
L_0020E7CC:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[4], c.r[16].w[0] >> 1);  goto L_0020E7E0; }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0020E7F8; } }
L_0020E7E0:
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0020E7F8:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[16].d[0]) { c.r[3].d[0] = ld16((c.r[21].w[0] + 92u));  goto L_0020E818; }
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 92u));
    c.budget -= 2;
L_0020E818:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0020E834; }
    set32(c.r[3], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_0020E834:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0020E97C; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 108u));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 224u)));  if (t) { goto L_0020E860; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_0020E864; } }
L_0020E860:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020E864:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 116u)));  goto L_0020E890; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0020E88C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020E88C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E88Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 68u, depth + 1u); else { c.pc = 0x0020CC30u; return; } if (c.pc != 0x0020E88Cu) [[unlikely]] return; }
L_0020E88C:
    set32(c.r[3], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 1;
L_0020E890:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020E940; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020E940; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020E900; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0020E900; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0020E8E8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E8E0u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 116u, depth + 1u); else { c.pc = 0x0020DB10u; return; } if (c.pc != 0x0020E8E0u) [[unlikely]] return; }
L_0020E8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E978; } }
L_0020E8E8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E8F8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 147u, depth + 1u); else { c.pc = 0x0020E660u; return; } if (c.pc != 0x0020E8F8u) [[unlikely]] return; }
L_0020E8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E978; } }
L_0020E900:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0020E928; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E920u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 104u, depth + 1u); else { c.pc = 0x0020D5D0u; return; } if (c.pc != 0x0020E920u) [[unlikely]] return; }
L_0020E920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E978; } }
L_0020E928:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E938u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 135u, depth + 1u); else { c.pc = 0x0020E140u; return; } if (c.pc != 0x0020E938u) [[unlikely]] return; }
L_0020E938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E978; } }
L_0020E940:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0020E968; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E960u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 92u, depth + 1u); else { c.pc = 0x0020D1D0u; return; } if (c.pc != 0x0020E960u) [[unlikely]] return; }
L_0020E960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020E978; } }
L_0020E968:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E978u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 123u, depth + 1u); else { c.pc = 0x0020DD20u; return; } if (c.pc != 0x0020E978u) [[unlikely]] return; }
L_0020E978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0020E97C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0020E9A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020E9BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0040(c, 227u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0020E9BCu) [[unlikely]] return; }
L_0020E9BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9200u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9056u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st16((c.r[18].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 90u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 92u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld16((c.r[18].w[0] + 88u));
    c.budget -= 15;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[18].w[0] + 80u);  if (t) { goto L_0020EA30; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA08u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0020EA08u) [[unlikely]] return; }
L_0020EA08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19792u);
    set32(c.r[6], c.r[6].w[0] - 6704u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA28u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0020EA28u) [[unlikely]] return; }
L_0020EA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0020EA34; } }
L_0020EA30:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0020EA34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9040u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9024u);
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 110u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 108u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = ld16((c.r[18].w[0] + 104u));
    c.budget -= 14;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[18].w[0] + 96u);  if (t) { goto L_0020EAA4; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA7Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0020EA7Cu) [[unlikely]] return; }
L_0020EA7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16224u);
    set32(c.r[6], c.r[6].w[0] - 21984u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EA9Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0020EA9Cu) [[unlikely]] return; }
L_0020EA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0020EAA8; } }
L_0020EAA4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0020EAA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 9008u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[18].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 116u), 0u);
    c.f[0] = ld32((c.r[5].w[0] + 31040u));
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 31044u));
    st32((c.r[18].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31048u));
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 132u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020EB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020EB70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9008u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0020EB54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[2], c.r[2].w[0] - 9024u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21984u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB54u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0020EB54u) [[unlikely]] return; }
L_0020EB54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020EB74; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EB70u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020EB70u) [[unlikely]] return; }
L_0020EB70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020EB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020EB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020EBF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[2], c.r[2].w[0] - 9024u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21984u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EBD4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0020EBD4u) [[unlikely]] return; }
L_0020EBD4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020EBF4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EBF0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020EBF0u) [[unlikely]] return; }
L_0020EBF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020EBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020EC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020EC80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9040u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0020EC64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] - 9056u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6704u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC64u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0020EC64u) [[unlikely]] return; }
L_0020EC64:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020EC84; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EC80u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020EC80u) [[unlikely]] return; }
L_0020EC80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020EC84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020ECA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020ED00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] - 9056u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6704u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ECE4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0020ECE4u) [[unlikely]] return; }
L_0020ECE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0020ED04; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ED00u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020ED00u) [[unlikely]] return; }
L_0020ED00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0020ED04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020ED20:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.f[4] = ld32((c.r[9].w[0]));
    ld128((c.r[10].w[0]) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[9].w[0] + 4u));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.f[2] = ld32((c.r[9].w[0] + 8u));
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 144u), c.f[4]);
    set32(c.r[6], 0u + 1000u);
    st32((c.r[29].w[0] + 148u), c.f[3]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    st32((c.r[29].w[0]), c.f[1]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020ED8Cu); st32((c.r[29].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0040(c, 229u, depth + 1u); else { c.pc = 0x002026E0u; return; } if (c.pc != 0x0020ED8Cu) [[unlikely]] return; }
L_0020ED8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9200u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9056u);
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st16((c.r[19].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 90u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 92u), static_cast<std::uint16_t>(0u));
    c.r[20].d[0] = ld16((c.r[19].w[0] + 88u));
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[21], c.r[19].w[0] + 80u);  if (t) { goto L_0020EE00; } }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EDD8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0020EDD8u) [[unlikely]] return; }
L_0020EDD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19792u);
    set32(c.r[6], c.r[6].w[0] - 6704u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EDF8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0020EDF8u) [[unlikely]] return; }
L_0020EDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0020EE04; } }
L_0020EE00:
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 1;
L_0020EE04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9040u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9024u);
    st32((c.r[19].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 104u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 110u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 108u), static_cast<std::uint16_t>(0u));
    c.r[21].d[0] = ld16((c.r[19].w[0] + 104u));
    c.budget -= 14;
    { const bool t = c.r[21].sd[0] <= 0; set32(c.r[20], c.r[19].w[0] + 96u);  if (t) { goto L_0020EE74; } }
    set32(c.r[2], c.r[21].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EE4Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0020EE4Cu) [[unlikely]] return; }
L_0020EE4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00210000u);
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16224u);
    set32(c.r[6], c.r[6].w[0] - 21984u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EE6Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0020EE6Cu) [[unlikely]] return; }
L_0020EE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0020EE78; } }
L_0020EE74:
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 1;
L_0020EE78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9008u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[19].w[0] + 112u), c.r[16].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[19].w[0] + 116u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[19].w[0] + 124u), c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[19].w[0] + 128u), c.f[0]);  if (t) { goto L_0020EF24; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 156u), c.r[18].w[0]);  if (t) { goto L_0020EECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020EEB8u) [[unlikely]] return; }
L_0020EEB8:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EECCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020EECCu) [[unlikely]] return; }
L_0020EECC:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 90u));
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEDCu); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0043(c, 20u, depth + 1u); else { c.pc = 0x0020C230u; return; } if (c.pc != 0x0020EEDCu) [[unlikely]] return; }
L_0020EEDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0020EF28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EEF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020EEF0u) [[unlikely]] return; }
L_0020EEF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF04u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020EF04u) [[unlikely]] return; }
L_0020EF04:
    set32(c.r[4], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020EF24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020EF24u) [[unlikely]] return; }
L_0020EF24:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0020EF28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0020EF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020F008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[18].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] - 9088u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0020EFC4; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0020EFC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EF98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020EF98u) [[unlikely]] return; }
L_0020EF98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020EFA8u) [[unlikely]] return; }
L_0020EFA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020EFC4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020EFC4u) [[unlikely]] return; }
L_0020EFC4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0020EFF0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFDCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020EFDCu) [[unlikely]] return; }
L_0020EFDC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020EFECu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020EFECu) [[unlikely]] return; }
L_0020EFEC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0020EFF0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0020F00C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F008u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020F008u) [[unlikely]] return; }
L_0020F008:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0020F00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020F030:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_0020F0D0; }
L_0020F040:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_0020F070; }
L_0020F050:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_0020F190; }
L_0020F060:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_0020F130; }
L_0020F070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F0B0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F0B0u) [[unlikely]] return; }
L_0020F0B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020F0D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F110u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F110u) [[unlikely]] return; }
L_0020F110:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020F130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F164u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F164u) [[unlikely]] return; }
L_0020F164:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020F190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F1C4u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F1C4u) [[unlikely]] return; }
L_0020F1C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020F1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0020F280; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[16].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] - 8992u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0020F258; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15024u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0020F258; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] - 15008u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 22784u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F258u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0020F258u) [[unlikely]] return; }
L_0020F258:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F264u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 185u, depth + 1u); else { c.pc = 0x002113B0u; return; } if (c.pc != 0x0020F264u) [[unlikely]] return; }
L_0020F264:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0020F284; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F280u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0020F280u) [[unlikely]] return; }
L_0020F280:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0020F284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020F2A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10336u);  c.pc = t; return; }
L_0020F2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F2C4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 140u, depth + 1u); else { c.pc = 0x00210F00u; return; } if (c.pc != 0x0020F2C4u) [[unlikely]] return; }
L_0020F2C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F2D0u); set32(c.r[4], ld32((c.r[2].w[0] - 10336u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0020F2D0u) [[unlikely]] return; }
L_0020F2D0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F2E4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0020F2E4u) [[unlikely]] return; }
L_0020F2E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020F300:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F32Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 426u, depth + 1u); else { c.pc = 0x002BB300u; return; } if (c.pc != 0x0020F32Cu) [[unlikely]] return; }
L_0020F32C:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0020F440; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[4].w[0] + 220u)));  goto L_0020F364; }
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F35Cu); c.r[5].d[0] = ld16((c.r[21].w[0] + 34u));  if (depth < kMaxDepth) unit_003D(c, 233u, depth + 1u); else { c.pc = 0x001F5E40u; return; } if (c.pc != 0x0020F35Cu) [[unlikely]] return; }
L_0020F35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020F43C; } }
L_0020F364:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020F43C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0020F42C; } }
L_0020F378:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0020F42C; }
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0020F428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F3A4u); set32(c.r[4], c.r[16].w[0] + 140u);  if (depth < kMaxDepth) unit_0043(c, 257u, depth + 1u); else { c.pc = 0x0020F790u; return; } if (c.pc != 0x0020F3A4u) [[unlikely]] return; }
L_0020F3A4:
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0020F428; } }
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F3BCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 256u, depth + 1u); else { c.pc = 0x0020F780u; return; } if (c.pc != 0x0020F3BCu) [[unlikely]] return; }
L_0020F3BC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020F428; } }
    set32(c.r[4], c.r[16].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F3D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 256u, depth + 1u); else { c.pc = 0x0020F780u; return; } if (c.pc != 0x0020F3D4u) [[unlikely]] return; }
L_0020F3D4:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0020F414; } }
L_0020F3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F3E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 458u, depth + 1u); else { c.pc = 0x002BB6E0u; return; } if (c.pc != 0x0020F3E8u) [[unlikely]] return; }
L_0020F3E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F3F4u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020F3F4u) [[unlikely]] return; }
L_0020F3F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F404u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0043(c, 230u, depth + 1u); else { c.pc = 0x0020F470u; return; } if (c.pc != 0x0020F404u) [[unlikely]] return; }
L_0020F404:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F410u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020F410u) [[unlikely]] return; }
L_0020F410:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0020F414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F41Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 229u, depth + 1u); else { c.pc = 0x0020F460u; return; } if (c.pc != 0x0020F41Cu) [[unlikely]] return; }
L_0020F41C:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F3E0u | kUnwind; return; } goto L_0020F3E0; } }
L_0020F428:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0020F42C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 150u));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 32u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F378u | kUnwind; return; } goto L_0020F378; }
L_0020F43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0020F440:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0020F460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));  c.pc = t; return; }
L_0020F470:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 10u));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0020F538; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_0020F4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F4BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F4BCu) [[unlikely]] return; }
L_0020F4BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F4D0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F4D0u) [[unlikely]] return; }
L_0020F4D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[19].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_0020F520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F4ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F4ECu) [[unlikely]] return; }
L_0020F4EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F500u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F500u) [[unlikely]] return; }
L_0020F500:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020F520; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F520u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F520u) [[unlikely]] return; }
L_0020F520:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_0020F6EC; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020F6E8; } }
L_0020F538:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_0020F560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F54Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F54Cu) [[unlikely]] return; }
L_0020F54C:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F560u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F560u) [[unlikely]] return; }
L_0020F560:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[19].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[19].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_0020F5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F57Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F57Cu) [[unlikely]] return; }
L_0020F57C:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F590u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F590u) [[unlikely]] return; }
L_0020F590:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020F5B0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F5B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F5B0u) [[unlikely]] return; }
L_0020F5B0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0020F654; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_0020F5E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F5CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F5CCu) [[unlikely]] return; }
L_0020F5CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F5E0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F5E0u) [[unlikely]] return; }
L_0020F5E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[19].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0020F63C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F608u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F608u) [[unlikely]] return; }
L_0020F608:
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F61Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F61Cu) [[unlikely]] return; }
L_0020F61C:
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020F63C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F63Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F63Cu) [[unlikely]] return; }
L_0020F63C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0020F6E8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0020F6E8; } }
L_0020F654:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 80u), 0u);  if (t) { goto L_0020F678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F664u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F664u) [[unlikely]] return; }
L_0020F664:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F678u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F678u) [[unlikely]] return; }
L_0020F678:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[19].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_0020F6D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F6A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F6A0u) [[unlikely]] return; }
L_0020F6A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F6B4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F6B4u) [[unlikely]] return; }
L_0020F6B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020F6D4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F6D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F6D4u) [[unlikely]] return; }
L_0020F6D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0020F6E8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0020F6E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0020F6EC:
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0020F768; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0020F744; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F714u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F714u) [[unlikely]] return; }
L_0020F714:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F724u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F724u) [[unlikely]] return; }
L_0020F724:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020F740; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F740u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F740u) [[unlikely]] return; }
L_0020F740:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0020F744:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), c.r[16].w[0]);  if (t) { goto L_0020F764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F754u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020F754u) [[unlikely]] return; }
L_0020F754:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F764u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020F764u) [[unlikely]] return; }
L_0020F764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0020F768:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020F780:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0020F790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));  c.pc = t; return; }
L_0020F7A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F7C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 150u, depth + 1u); else { c.pc = 0x00210FC0u; return; } if (c.pc != 0x0020F7C0u) [[unlikely]] return; }
L_0020F7C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 34u));  goto L_0020F7D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020F87C; } }
L_0020F7D0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0020F868; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020F87C; } }
L_0020F7E4:
    set32(c.r[5], c.r[16].w[0] << 2);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0020F80C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_0020F810; } }
L_0020F80C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0020F810:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0020F820; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0020F87C; }
L_0020F820:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0020F830; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0020F858; } }
L_0020F830:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0020F868; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0020F864; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F850u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F850u) [[unlikely]] return; }
L_0020F850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0020F864; } }
L_0020F858:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020F87C; } }
L_0020F864:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020F868:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F7E4u | kUnwind; return; } goto L_0020F7E4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020F87C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020F8A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F8C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 152u, depth + 1u); else { c.pc = 0x00211040u; return; } if (c.pc != 0x0020F8C0u) [[unlikely]] return; }
L_0020F8C0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F8D4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0020F8D4u) [[unlikely]] return; }
L_0020F8D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020F8FC; } }
L_0020F8DC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F8F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F8F8u) [[unlikely]] return; }
L_0020F8F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020F8FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F8DCu | kUnwind; return; } goto L_0020F8DC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0020F930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F950u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 158u, depth + 1u); else { c.pc = 0x002110B0u; return; } if (c.pc != 0x0020F950u) [[unlikely]] return; }
L_0020F950:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0020F988; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0020F99C; } }
L_0020F960:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0020F988; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F984u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020F984u) [[unlikely]] return; }
L_0020F984:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020F988:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020F960u | kUnwind; return; } goto L_0020F960; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0020F99C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020F9C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F9ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 161u, depth + 1u); else { c.pc = 0x00211110u; return; } if (c.pc != 0x0020F9ECu) [[unlikely]] return; }
L_0020F9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020F9F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x0020F9F4u) [[unlikely]] return; }
L_0020F9F4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 32u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0020FD04; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[21], ld32((c.r[17].w[0] + 28u)));  goto L_0020FAAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_0020FA90; } }
L_0020FA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FA24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020FA24u) [[unlikely]] return; }
L_0020FA24:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FA3Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x0020FA3Cu) [[unlikely]] return; }
L_0020FA3C:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FA4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020FA4Cu) [[unlikely]] return; }
L_0020FA4C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 1u);  goto L_0020FA8C; }
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FA60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020FA60u) [[unlikely]] return; }
L_0020FA60:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FA70u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x0020FA70u) [[unlikely]] return; }
L_0020FA70:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FA7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020FA7Cu) [[unlikely]] return; }
L_0020FA7C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.budget -= 4;
L_0020FA8C:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0020FA90:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FA1Cu | kUnwind; return; } goto L_0020FA1C; }
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[21], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 2;
L_0020FAAC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { goto L_0020FB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FABCu); c.r[4].d[0] = ld16((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_003D(c, 177u, depth + 1u); else { c.pc = 0x001F5790u; return; } if (c.pc != 0x0020FABCu) [[unlikely]] return; }
L_0020FABC:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0020FAE4; } }
L_0020FAC8:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FADCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x0020FADCu) [[unlikely]] return; }
L_0020FADC:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0020FAE4:
    c.r[20].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FAC8u | kUnwind; return; } goto L_0020FAC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 32u));  if (t) { goto L_0020FB38; } }
L_0020FB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020FB08u) [[unlikely]] return; }
L_0020FB08:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB20u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x0020FB20u) [[unlikely]] return; }
L_0020FB20:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020FB2Cu) [[unlikely]] return; }
L_0020FB2C:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 32u));
    c.budget -= 3;
L_0020FB38:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FB00u | kUnwind; return; } goto L_0020FB00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0020FB58; } }
L_0020FB50:
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_0020FB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB60u);  if (depth < kMaxDepth) unit_003D(c, 176u, depth + 1u); else { c.pc = 0x001F5770u; return; } if (c.pc != 0x0020FB60u) [[unlikely]] return; }
L_0020FB60:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0020FD04; } }
L_0020FB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0020FB74u) [[unlikely]] return; }
L_0020FB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_0020FB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020FB84u) [[unlikely]] return; }
L_0020FB84:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FB98u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020FB98u) [[unlikely]] return; }
L_0020FB98:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_0020FBF0; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FBBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020FBBCu) [[unlikely]] return; }
L_0020FBBC:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FBC8u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x0020FBC8u) [[unlikely]] return; }
L_0020FBC8:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FBD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020FBD8u) [[unlikely]] return; }
L_0020FBD8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_0020FCA8; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020FCA4; } }
L_0020FBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FBF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020FBF8u) [[unlikely]] return; }
L_0020FBF8:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC04u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x0020FC04u) [[unlikely]] return; }
L_0020FC04:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020FC14u) [[unlikely]] return; }
L_0020FC14:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0020FC64; }
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020FC28u) [[unlikely]] return; }
L_0020FC28:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC3Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 346u, depth + 1u); else { c.pc = 0x001F6C50u; return; } if (c.pc != 0x0020FC3Cu) [[unlikely]] return; }
L_0020FC3C:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020FC4Cu) [[unlikely]] return; }
L_0020FC4C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0020FCA4; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0020FCA4; } }
L_0020FC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x0020FC6Cu) [[unlikely]] return; }
L_0020FC6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC80u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x0020FC80u) [[unlikely]] return; }
L_0020FC80:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FC90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x0020FC90u) [[unlikely]] return; }
L_0020FC90:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0020FCA4; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0020FCA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0020FCA8:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FCB8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x0020FCB8u) [[unlikely]] return; }
L_0020FCB8:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0020FD04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FCCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020FCCCu) [[unlikely]] return; }
L_0020FCCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FCE0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020FCE0u) [[unlikely]] return; }
L_0020FCE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020FD00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FD00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020FD00u) [[unlikely]] return; }
L_0020FD00:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0020FD04:
    c.r[3].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FB6Cu | kUnwind; return; } goto L_0020FB6C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0020FD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FD5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 164u, depth + 1u); else { c.pc = 0x00211140u; return; } if (c.pc != 0x0020FD5Cu) [[unlikely]] return; }
L_0020FD5C:
    set32(c.r[2], 0u + 6500u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FD6Cu); st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x0020FD6Cu) [[unlikely]] return; }
L_0020FD6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0020FD80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FDA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0020FDA0u) [[unlikely]] return; }
L_0020FDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0020FE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FDB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 191u, depth + 1u); else { c.pc = 0x00211490u; return; } if (c.pc != 0x0020FDB0u) [[unlikely]] return; }
L_0020FDB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 8992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15008u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    c.r[18].d[0] = ld16((c.r[16].w[0] + 32u));
    c.budget -= 14;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[17], c.r[16].w[0] + 24u);  if (t) { goto L_0020FE20; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FDF8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0020FDF8u) [[unlikely]] return; }
L_0020FDF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FE18u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0020FE18u) [[unlikely]] return; }
L_0020FE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0020FE24; } }
L_0020FE20:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0020FE24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15024u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0020FE30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020FE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FE70u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 171u, depth + 1u); else { c.pc = 0x002111D0u; return; } if (c.pc != 0x0020FE70u) [[unlikely]] return; }
L_0020FE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020FEA0; } }
L_0020FE78:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0020FEA0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FE9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020FE9Cu) [[unlikely]] return; }
L_0020FE9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020FEA0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 34u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FE78u | kUnwind; return; } goto L_0020FE78; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0020FED0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FEF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0044(c, 175u, depth + 1u); else { c.pc = 0x00211290u; return; } if (c.pc != 0x0020FEF8u) [[unlikely]] return; }
L_0020FEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0020FF84; } }
L_0020FF00:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0020FF84; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FF24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020FF24u) [[unlikely]] return; }
L_0020FF24:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FF38u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 329u, depth + 1u); else { c.pc = 0x0020FFB0u; return; } if (c.pc != 0x0020FF38u) [[unlikely]] return; }
L_0020FF38:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0020FF80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FF4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0020FF4Cu) [[unlikely]] return; }
L_0020FF4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FF60u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0020FF60u) [[unlikely]] return; }
L_0020FF60:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0020FF80; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0020FF80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0020FF80u) [[unlikely]] return; }
L_0020FF80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0020FF84:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 34u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020FF00u | kUnwind; return; } goto L_0020FF00; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0020FFB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 34u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0044(c, 29u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[17], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[16].w[0]);  if (t) { [[clang::musttail]] return unit_0044(c, 4u, depth); } }
    [[clang::musttail]] return unit_0044(c, 2u, depth);
}

}
