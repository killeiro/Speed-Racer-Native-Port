#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DB[4096] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9,
    0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0,
    0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94,
    0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0,
    0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0,
    0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0,
    0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
};

void unit_00DB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0046C000;
    case 2u: goto L_0046C008;
    case 3u: goto L_0046C014;
    case 4u: goto L_0046C01C;
    case 5u: goto L_0046C038;
    case 6u: goto L_0046C040;
    case 7u: goto L_0046C060;
    case 8u: goto L_0046C06C;
    case 9u: goto L_0046C07C;
    case 10u: goto L_0046C088;
    case 11u: goto L_0046C090;
    case 12u: goto L_0046C09C;
    case 13u: goto L_0046C0C0;
    case 14u: goto L_0046C0C4;
    case 15u: goto L_0046C0D0;
    case 16u: goto L_0046C0D4;
    case 17u: goto L_0046C100;
    case 18u: goto L_0046C124;
    case 19u: goto L_0046C138;
    case 20u: goto L_0046C14C;
    case 21u: goto L_0046C16C;
    case 22u: goto L_0046C178;
    case 23u: goto L_0046C190;
    case 24u: goto L_0046C1F0;
    case 25u: goto L_0046C1F8;
    case 26u: goto L_0046C244;
    case 27u: goto L_0046C2B4;
    case 28u: goto L_0046C330;
    case 29u: goto L_0046C3CC;
    case 30u: goto L_0046C424;
    case 31u: goto L_0046C4A8;
    case 32u: goto L_0046C4D4;
    case 33u: goto L_0046C4F4;
    case 34u: goto L_0046C564;
    case 35u: goto L_0046C5D0;
    case 36u: goto L_0046C6A0;
    case 37u: goto L_0046C6C0;
    case 38u: goto L_0046C700;
    case 39u: goto L_0046C720;
    case 40u: goto L_0046C7F0;
    case 41u: goto L_0046C810;
    case 42u: goto L_0046C820;
    case 43u: goto L_0046C85C;
    case 44u: goto L_0046C874;
    case 45u: goto L_0046C890;
    case 46u: goto L_0046C908;
    case 47u: goto L_0046C918;
    case 48u: goto L_0046CB58;
    case 49u: goto L_0046CB78;
    case 50u: goto L_0046CB84;
    case 51u: goto L_0046CC2C;
    case 52u: goto L_0046CC34;
    case 53u: goto L_0046CC3C;
    case 54u: goto L_0046CC48;
    case 55u: goto L_0046CC50;
    case 56u: goto L_0046CC60;
    case 57u: goto L_0046CC74;
    case 58u: goto L_0046CCA4;
    case 59u: goto L_0046CCC4;
    case 60u: goto L_0046CCD0;
    case 61u: goto L_0046CD70;
    case 62u: goto L_0046CD78;
    case 63u: goto L_0046CD84;
    case 64u: goto L_0046CD90;
    case 65u: goto L_0046CD98;
    case 66u: goto L_0046CDA4;
    case 67u: goto L_0046CDB8;
    case 68u: goto L_0046CDC8;
    case 69u: goto L_0046CE08;
    case 70u: goto L_0046CE50;
    case 71u: goto L_0046CE5C;
    case 72u: goto L_0046CE68;
    case 73u: goto L_0046CE74;
    case 74u: goto L_0046CEA0;
    case 75u: goto L_0046CFB0;
    case 76u: goto L_0046CFD0;
    case 77u: goto L_0046D040;
    case 78u: goto L_0046D080;
    case 79u: goto L_0046D09C;
    case 80u: goto L_0046D0AC;
    case 81u: goto L_0046D0C0;
    case 82u: goto L_0046D0DC;
    case 83u: goto L_0046D0F0;
    case 84u: goto L_0046D140;
    case 85u: goto L_0046D148;
    case 86u: goto L_0046D23C;
    case 87u: goto L_0046D270;
    case 88u: goto L_0046D290;
    case 89u: goto L_0046D2AC;
    case 90u: goto L_0046D2DC;
    case 91u: goto L_0046D35C;
    case 92u: goto L_0046D368;
    case 93u: goto L_0046D374;
    case 94u: goto L_0046D37C;
    case 95u: goto L_0046D390;
    case 96u: goto L_0046D39C;
    case 97u: goto L_0046D3A4;
    case 98u: goto L_0046D498;
    case 99u: goto L_0046D4FC;
    case 100u: goto L_0046D524;
    case 101u: goto L_0046D530;
    case 102u: goto L_0046D540;
    case 103u: goto L_0046D610;
    case 104u: goto L_0046D628;
    case 105u: goto L_0046D664;
    case 106u: goto L_0046D670;
    case 107u: goto L_0046D67C;
    case 108u: goto L_0046D6D8;
    case 109u: goto L_0046D74C;
    case 110u: goto L_0046D758;
    case 111u: goto L_0046D760;
    case 112u: goto L_0046D890;
    case 113u: goto L_0046D9A0;
    case 114u: goto L_0046DA0C;
    case 115u: goto L_0046DA14;
    case 116u: goto L_0046DA4C;
    case 117u: goto L_0046DA58;
    case 118u: goto L_0046DA64;
    case 119u: goto L_0046DA84;
    case 120u: goto L_0046DA98;
    case 121u: goto L_0046DADC;
    case 122u: goto L_0046DAF0;
    case 123u: goto L_0046DB00;
    case 124u: goto L_0046DB90;
    case 125u: goto L_0046DBE8;
    case 126u: goto L_0046DC18;
    case 127u: goto L_0046DC3C;
    case 128u: goto L_0046DC5C;
    case 129u: goto L_0046DCD8;
    case 130u: goto L_0046DDA0;
    case 131u: goto L_0046DDB8;
    case 132u: goto L_0046DDE0;
    case 133u: goto L_0046DF40;
    case 134u: goto L_0046E050;
    case 135u: goto L_0046E140;
    case 136u: goto L_0046E150;
    case 137u: goto L_0046E240;
    case 138u: goto L_0046E260;
    case 139u: goto L_0046E280;
    case 140u: goto L_0046E2A0;
    case 141u: goto L_0046E304;
    case 142u: goto L_0046E37C;
    case 143u: goto L_0046E440;
    case 144u: goto L_0046E618;
    case 145u: goto L_0046E678;
    case 146u: goto L_0046E6A8;
    case 147u: goto L_0046E6B0;
    case 148u: goto L_0046E6B8;
    case 149u: goto L_0046E6C0;
    case 150u: goto L_0046E6C8;
    case 151u: goto L_0046E6D0;
    case 152u: goto L_0046E6D8;
    case 153u: goto L_0046E6E0;
    case 154u: goto L_0046E6E8;
    case 155u: goto L_0046E720;
    case 156u: goto L_0046E79C;
    case 157u: goto L_0046E814;
    case 158u: goto L_0046E9D0;
    case 159u: goto L_0046EA08;
    case 160u: goto L_0046EAD8;
    case 161u: goto L_0046EBC0;
    case 162u: goto L_0046EBF4;
    case 163u: goto L_0046EC04;
    case 164u: goto L_0046EC20;
    case 165u: goto L_0046EC28;
    case 166u: goto L_0046EC3C;
    case 167u: goto L_0046EC50;
    case 168u: goto L_0046EC64;
    case 169u: goto L_0046EC7C;
    case 170u: goto L_0046ECA0;
    case 171u: goto L_0046ED18;
    case 172u: goto L_0046ED20;
    case 173u: goto L_0046ED30;
    case 174u: goto L_0046ED4C;
    case 175u: goto L_0046ED5C;
    case 176u: goto L_0046ED78;
    case 177u: goto L_0046ED8C;
    case 178u: goto L_0046EDAC;
    case 179u: goto L_0046EDC0;
    case 180u: goto L_0046EDF4;
    case 181u: goto L_0046EE0C;
    case 182u: goto L_0046EE40;
    case 183u: goto L_0046EE9C;
    case 184u: goto L_0046EEB4;
    case 185u: goto L_0046EED8;
    case 186u: goto L_0046F1D0;
    case 187u: goto L_0046F294;
    case 188u: goto L_0046F2B0;
    case 189u: goto L_0046F2C0;
    case 190u: goto L_0046F2F4;
    case 191u: goto L_0046F360;
    case 192u: goto L_0046F38C;
    case 193u: goto L_0046F3B0;
    case 194u: goto L_0046F3CC;
    case 195u: goto L_0046F3E4;
    case 196u: goto L_0046F420;
    case 197u: goto L_0046F478;
    case 198u: goto L_0046F490;
    case 199u: goto L_0046F4B0;
    case 200u: goto L_0046F4F0;
    case 201u: goto L_0046F500;
    case 202u: goto L_0046F53C;
    case 203u: goto L_0046F54C;
    case 204u: goto L_0046F564;
    case 205u: goto L_0046F578;
    case 206u: goto L_0046F58C;
    case 207u: goto L_0046F598;
    case 208u: goto L_0046F5A8;
    case 209u: goto L_0046F5B4;
    case 210u: goto L_0046F5C4;
    case 211u: goto L_0046F5DC;
    case 212u: goto L_0046F600;
    case 213u: goto L_0046F618;
    case 214u: goto L_0046F63C;
    case 215u: goto L_0046F660;
    case 216u: goto L_0046F68C;
    case 217u: goto L_0046F6B8;
    case 218u: goto L_0046F6C4;
    case 219u: goto L_0046F6D8;
    case 220u: goto L_0046F6EC;
    case 221u: goto L_0046F6F8;
    case 222u: goto L_0046F704;
    case 223u: goto L_0046F710;
    case 224u: goto L_0046F740;
    case 225u: goto L_0046F76C;
    case 226u: goto L_0046F77C;
    case 227u: goto L_0046F79C;
    case 228u: goto L_0046F7E8;
    case 229u: goto L_0046F80C;
    case 230u: goto L_0046F830;
    case 231u: goto L_0046F840;
    case 232u: goto L_0046F884;
    case 233u: goto L_0046F8A0;
    case 234u: goto L_0046F8C0;
    case 235u: goto L_0046F8D0;
    case 236u: goto L_0046F8E0;
    case 237u: goto L_0046F8E8;
    case 238u: goto L_0046F8F8;
    case 239u: goto L_0046F904;
    case 240u: goto L_0046F914;
    case 241u: goto L_0046F928;
    case 242u: goto L_0046F934;
    case 243u: goto L_0046F94C;
    case 244u: goto L_0046F970;
    case 245u: goto L_0046F9A4;
    case 246u: goto L_0046F9B4;
    case 247u: goto L_0046F9CC;
    case 248u: goto L_0046F9E0;
    case 249u: goto L_0046F9F0;
    case 250u: goto L_0046FA30;
    case 251u: goto L_0046FA54;
    case 252u: goto L_0046FA6C;
    case 253u: goto L_0046FA90;
    case 254u: goto L_0046FAB4;
    case 255u: goto L_0046FAD0;
    case 256u: goto L_0046FAF4;
    case 257u: goto L_0046FB0C;
    case 258u: goto L_0046FB30;
    case 259u: goto L_0046FB40;
    case 260u: goto L_0046FB64;
    case 261u: goto L_0046FB70;
    case 262u: goto L_0046FB80;
    case 263u: goto L_0046FB90;
    case 264u: goto L_0046FBA0;
    case 265u: goto L_0046FBB0;
    case 266u: goto L_0046FBD4;
    case 267u: goto L_0046FBE4;
    case 268u: goto L_0046FC50;
    case 269u: goto L_0046FC74;
    case 270u: goto L_0046FC80;
    case 271u: goto L_0046FCF0;
    case 272u: goto L_0046FD10;
    case 273u: goto L_0046FD2C;
    case 274u: goto L_0046FD48;
    case 275u: goto L_0046FD54;
    case 276u: goto L_0046FD70;
    case 277u: goto L_0046FDBC;
    case 278u: goto L_0046FDD0;
    case 279u: goto L_0046FDF4;
    case 280u: goto L_0046FE10;
    case 281u: goto L_0046FE58;
    case 282u: goto L_0046FE70;
    case 283u: goto L_0046FE90;
    case 284u: goto L_0046FEB4;
    case 285u: goto L_0046FEE0;
    case 286u: goto L_0046FEF8;
    case 287u: goto L_0046FF10;
    case 288u: goto L_0046FF30;
    case 289u: goto L_0046FF50;
    case 290u: goto L_0046FF88;
    case 291u: goto L_0046FF90;
    case 292u: goto L_0046FF98;
    case 293u: goto L_0046FFAC;
    case 294u: goto L_0046FFC8;
    case 295u: goto L_0046FFD4;
    case 296u: goto L_0046FFE4;
    default: bad_entry(c, 0x0046C000u); return;
    }
L_0046C000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C008u); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x0046C008u) [[unlikely]] return; }
L_0046C008:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0046C0B4; } }
L_0046C014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C01Cu); set32(c.r[4], c.r[19].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x0046C01Cu) [[unlikely]] return; }
L_0046C01C:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 208u);  goto L_0046C030; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046C044; } }
L_0046C030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C038u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x0046C038u) [[unlikely]] return; }
L_0046C038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C040u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x0046C040u) [[unlikely]] return; }
L_0046C040:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0046C044:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0046C0B4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0046C064; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C060u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 17u, depth + 1u); else { c.pc = 0x0046C100u; return; } if (c.pc != 0x0046C060u) [[unlikely]] return; }
L_0046C060:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046C064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C06Cu);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x0046C06Cu) [[unlikely]] return; }
L_0046C06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046C0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C07Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x0046C07Cu) [[unlikely]] return; }
L_0046C07C:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0046C0A0; } }
L_0046C088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C090u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x0046C090u) [[unlikely]] return; }
L_0046C090:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C09Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 317u, depth + 1u); else { c.pc = 0x0046BED0u; return; } if (c.pc != 0x0046C09Cu) [[unlikely]] return; }
L_0046C09C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0046C0A0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C088u | kUnwind; return; } goto L_0046C088; }
L_0046C0B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0046C0B4:
    c.r[3].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C014u | kUnwind; return; } goto L_0046C014; } }
L_0046C0C0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0046C0C4:
    c.r[3].d[0] = c.r[20].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046BF90u | kUnwind; return; } [[clang::musttail]] return unit_00DA(c, 323u, depth); }
L_0046C0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0046C0D4:
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
L_0046C100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0046C17C; }
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C124u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0060(c, 587u, depth + 1u); else { c.pc = 0x00283CA0u; return; } if (c.pc != 0x0046C124u) [[unlikely]] return; }
L_0046C124:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0046C170; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C138u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0046C138u) [[unlikely]] return; }
L_0046C138:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C14Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0046C14Cu) [[unlikely]] return; }
L_0046C14C:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046C16C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C16Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046C16Cu) [[unlikely]] return; }
L_0046C16C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046C170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C178u);  if (depth < kMaxDepth) unit_006F(c, 106u, depth + 1u); else { c.pc = 0x002BCC70u; return; } if (c.pc != 0x0046C178u) [[unlikely]] return; }
L_0046C178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0046C17C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046C190:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0046C6A0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_0046C1FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C1F0u); set32(c.r[5], c.r[5].w[0] - 31759u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0046C1F0u) [[unlikely]] return; }
L_0046C1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C1F8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0046C1F8u) [[unlikely]] return; }
L_0046C1F8:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0046C1FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0046C478; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_0046C230; } }
    set32(c.r[4], c.r[4].w[0] + 31u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_0046C230:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[17].w[0] << 5);  goto L_0046C324; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0046C2A0; } }
L_0046C244:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0046C290; }
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[6].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[6].w[0] + 20u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[6].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 17;
L_0046C290:
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0046C2A0:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C244u | kUnwind; return; } goto L_0046C244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0046C310; } }
L_0046C2B4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0046C300; }
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
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[6].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[6].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 17;
L_0046C300:
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0046C310:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C2B4u | kUnwind; return; } goto L_0046C2B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C41C; } }
L_0046C324:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_0046C38C; } }
L_0046C330:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0046C37C; }
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
    set32(c.r[4], ld32((c.r[8].w[0] + 24u)));
    st32((c.r[7].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 28u)));
    st32((c.r[7].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 17;
L_0046C37C:
    set32(c.r[8], c.r[8].w[0] + 32u);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0046C38C:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C330u | kUnwind; return; } goto L_0046C330; } }
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  goto L_0046C410; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046C3C0; } }
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0046C3C0:
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C410; } }
L_0046C3CC:
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[3].w[0]), c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[3].w[0] + 12u), c.f[2]);
    st32((c.r[3].w[0] + 16u), c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    c.budget -= 17;
L_0046C410:
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C3CCu | kUnwind; return; } goto L_0046C3CC; }
L_0046C41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C468; } }
L_0046C424:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[18].w[0] + 12u), c.f[2]);
    st32((c.r[18].w[0] + 16u), c.f[1]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.budget -= 17;
L_0046C468:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C424u | kUnwind; return; } goto L_0046C424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0046C6A4; } }
L_0046C478:
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_0046C498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0046C4A0; } }
L_0046C498:
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0046C4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0046C4C0; } }
L_0046C4A8:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_0046C4BC; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0046C4BC:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0046C4C0:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4A8u | kUnwind; return; } goto L_0046C4A8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C4D4u); set32(c.r[4], c.r[20].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046C4D4u) [[unlikely]] return; }
L_0046C4D4:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[20].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    st32((c.r[29].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0046C550; } }
L_0046C4F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0046C540; }
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 17;
L_0046C540:
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 4;
L_0046C550:
    c.r[5].d[0] = c.r[3].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C4F4u | kUnwind; return; } goto L_0046C4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046C5C0; } }
L_0046C564:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0046C5B0; }
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 17;
L_0046C5B0:
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 4;
L_0046C5C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C564u | kUnwind; return; } goto L_0046C564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_0046C630; } }
L_0046C5D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0046C61C; }
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 17;
L_0046C61C:
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0046C630:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C5D0u | kUnwind; return; } goto L_0046C5D0; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0046C688; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_0046C688:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_0046C6A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046C6A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C6A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046C6A0u) [[unlikely]] return; }
L_0046C6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0046C6A4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0046C6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046C7F0; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 5);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C700u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046C700u) [[unlikely]] return; }
L_0046C700:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_0046C77C; } }
L_0046C720:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_0046C76C; }
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
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    st32((c.r[6].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 17;
L_0046C76C:
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_0046C77C:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046C720u | kUnwind; return; } goto L_0046C720; } }
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0046C7D8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 17;
L_0046C7D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_0046C7F0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0046C7F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C7F0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046C7F0u) [[unlikely]] return; }
L_0046C7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0046C7F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046C810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0046C820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046C874; } }
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0046C860; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046C85C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C85Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046C85Cu) [[unlikely]] return; }
L_0046C85C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0046C860:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0046C878; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C874u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046C874u) [[unlikely]] return; }
L_0046C874:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046C878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046C890:
    set32(c.r[29], c.r[29].w[0] - 496u);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0046C8FC; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[20].w[0]), c.r[5].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[20].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0046CE74; } }
L_0046C8FC:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C908u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046C908u) [[unlikely]] return; }
L_0046C908:
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046C918u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046C918u) [[unlikely]] return; }
L_0046C918:
    set32(c.r[13], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[12], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[12].w[0] - c.r[13].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046C938; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046C938:
    c.r[3].d[0] = c.r[12].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[13].d[0] < c.r[4].d[0] ? 1ull : 0ull;  goto L_0046C974; }
    c.r[1].d[0] = c.r[13].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_0046C9A0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0046C96C; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046C96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0046C99C; } }
L_0046C974:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046C99C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0046C998; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046C998:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0046C99C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_0046C9A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046C9B8; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046C9B8:
    set32(c.r[10], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[4], c.r[9].w[0] - c.r[10].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0046C9D4; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046C9D4:
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[3], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046CA00; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046CA00:
    c.r[3].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;  goto L_0046CA3C; }
    c.r[1].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[14], ld32((c.r[17].w[0] + 20u)));  goto L_0046CA68; }
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0046CA34; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046CA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0046CA64; } }
L_0046CA3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046CA64; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0046CA60; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046CA60:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0046CA64:
    set32(c.r[14], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0046CA68:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    set32(c.r[14], c.r[14].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[14].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 2));  if (t) { goto L_0046CA88; } }
    set32(c.r[3], c.r[14].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046CA88:
    set32(c.r[15], c.r[2].w[0] << 7);
    set32(c.r[14], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[14].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 2));  if (t) { goto L_0046CAA0; } }
    set32(c.r[2], c.r[14].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046CAA0:
    set32(c.r[2], c.r[15].w[0] - c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[15], c.r[7].w[0] - c.r[12].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[15].sd[0] >= 0; set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 2));  if (t) { goto L_0046CAC0; } }
    set32(c.r[14], c.r[15].w[0] + 3u);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 2));
    c.budget -= 2;
L_0046CAC0:
    c.r[15].d[0] = c.r[7].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { c.r[15].d[0] = c.r[12].d[0] < c.r[21].d[0] ? 1ull : 0ull;  goto L_0046CAFC; }
    c.r[1].d[0] = c.r[12].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[15], c.r[14].w[0] << 7);  goto L_0046CB28; }
    set32(c.r[21], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[21], c.r[21].w[0] - c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].sd[0] >= 0; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 2));  if (t) { goto L_0046CAF4; } }
    set32(c.r[15], c.r[21].w[0] + 3u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 2));
    c.budget -= 2;
L_0046CAF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);  if (t) { goto L_0046CB24; } }
L_0046CAFC:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_0046CB24; } }
    set32(c.r[21], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[21], c.r[21].w[0] - c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].sd[0] >= 0; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 2));  if (t) { goto L_0046CB20; } }
    set32(c.r[15], c.r[21].w[0] + 3u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 2));
    c.budget -= 2;
L_0046CB20:
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.budget -= 1;
L_0046CB24:
    set32(c.r[15], c.r[14].w[0] << 7);
    c.budget -= 1;
L_0046CB28:
    set32(c.r[14], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[15].w[0] - c.r[3].w[0]);
    set32(c.r[21], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[21].d[0] != c.r[14].d[0]) { c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;  goto L_0046CBA0; }
    st32((c.r[19].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { st32((c.r[19].w[0] + 24u), 0u);  goto L_0046CE40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_0046CB88; } }
L_0046CB58:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  goto L_0046CB7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CB78u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046CB78u) [[unlikely]] return; }
L_0046CB78:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_0046CB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CB84u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x0046CB84u) [[unlikely]] return; }
L_0046CB84:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_0046CB88:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CB58u | kUnwind; return; } goto L_0046CB58; }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0046CE40; } }
L_0046CBA0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0046CCF4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 320u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[29].w[0] + 340u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 472u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[29].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 384u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 388u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 376u), c.r[3].w[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 380u), c.r[2].w[0]);  if (t) { goto L_0046CC54; } }
L_0046CC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CC34u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_00DB(c, 76u, depth + 1u); else { c.pc = 0x0046CFD0u; return; } if (c.pc != 0x0046CC34u) [[unlikely]] return; }
L_0046CC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CC3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x0046CC3Cu) [[unlikely]] return; }
L_0046CC3C:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CC48u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00DB(c, 76u, depth + 1u); else { c.pc = 0x0046CFD0u; return; } if (c.pc != 0x0046CC48u) [[unlikely]] return; }
L_0046CC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CC50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x0046CC50u) [[unlikely]] return; }
L_0046CC50:
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0046CC54:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CC60u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00DB(c, 75u, depth + 1u); else { c.pc = 0x0046CFB0u; return; } if (c.pc != 0x0046CC60u) [[unlikely]] return; }
L_0046CC60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CC2Cu | kUnwind; return; } goto L_0046CC2C; } }
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CC74u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046CC74u) [[unlikely]] return; }
L_0046CC74:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_0046CE44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] + 4u);  if (t) { goto L_0046CCDC; } }
L_0046CCA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  goto L_0046CCC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CCC4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046CCC4u) [[unlikely]] return; }
L_0046CCC4:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_0046CCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CCD0u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x0046CCD0u) [[unlikely]] return; }
L_0046CCD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 128u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_0046CCDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CCA4u | kUnwind; return; } goto L_0046CCA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CE40; } }
L_0046CCF4:
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[29].w[0] + 220u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[29].w[0] + 176u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_0046CD98; } }
L_0046CD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CD78u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x0046CD78u) [[unlikely]] return; }
L_0046CD78:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CD84u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x0046CD84u) [[unlikely]] return; }
L_0046CD84:
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CD90u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 94u, depth + 1u); else { c.pc = 0x00124C40u; return; } if (c.pc != 0x0046CD90u) [[unlikely]] return; }
L_0046CD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CD98u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 94u, depth + 1u); else { c.pc = 0x00124C40u; return; } if (c.pc != 0x0046CD98u) [[unlikely]] return; }
L_0046CD98:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CDA4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00DB(c, 75u, depth + 1u); else { c.pc = 0x0046CFB0u; return; } if (c.pc != 0x0046CDA4u) [[unlikely]] return; }
L_0046CDA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CD70u | kUnwind; return; } goto L_0046CD70; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CDB8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046CDB8u) [[unlikely]] return; }
L_0046CDB8:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0046CE0C; } }
L_0046CDC8:
    set32(c.r[5], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 14;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_0046CE0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CE08u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046CE08u) [[unlikely]] return; }
L_0046CE08:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0046CE0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0046CE20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0046CE24; } }
L_0046CE20:
    set32(c.r[4], c.r[2].w[0] << 7);
    c.budget -= 1;
L_0046CE24:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046CDC8u | kUnwind; return; } goto L_0046CDC8; }
L_0046CE40:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0046CE44:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CE50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046CE50u) [[unlikely]] return; }
L_0046CE50:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CE5Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046CE5Cu) [[unlikely]] return; }
L_0046CE5C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CE68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x0046CE68u) [[unlikely]] return; }
L_0046CE68:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046CE74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046CE74u) [[unlikely]] return; }
L_0046CE74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_0046CEA0:
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046CEC0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046CEC0:
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] < 0) { set32(c.r[2], 0u + 127u);  goto L_0046CEE8; }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 7));  if (t) { goto L_0046CF00; } }
    set32(c.r[2], c.r[8].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046CF00; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 1;
L_0046CEE8:
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));  if (t) { goto L_0046CF00; } }
    set32(c.r[2], c.r[2].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 2;
L_0046CF00:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_0046CF98; }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_0046CF24; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046CF24:
    set32(c.r[3], c.r[9].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046CF38; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046CF38:
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_0046CF50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0046CF5C; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0046CF50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0046CF60; }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0046CF5C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_0046CF60:
    set32(c.r[2], c.r[7].w[0] << 7);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0046CFA4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_0046CF98:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_0046CFA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0046CFB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0046CFD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_0046CFEC; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046CFEC:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_0046D030; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_0046D014; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_0046D014:
    set32(c.r[2], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
L_0046D030:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0046D040:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D080u); set32(c.r[4], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046D080u) [[unlikely]] return; }
L_0046D080:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 28u)));  goto L_0046D0B4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D09Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 113u, depth + 1u); else { c.pc = 0x0046D9A0u; return; } if (c.pc != 0x0046D09Cu) [[unlikely]] return; }
L_0046D09C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D0ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046D0ACu) [[unlikely]] return; }
L_0046D0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0046D860; } }
L_0046D0B4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D0C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046D0C0u) [[unlikely]] return; }
L_0046D0C0:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29212u)));  goto L_0046D0F8; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D0DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0046D0DCu) [[unlikely]] return; }
L_0046D0DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D0F0u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046D0F0u) [[unlikely]] return; }
L_0046D0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046D85C; } }
L_0046D0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[20].w[0] + 4u);  if (t) { goto L_0046D114; } }
    set32(c.r[3], 0u - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] - 9416u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29212u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0046D114:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 9416u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 464u)));  goto L_0046D14C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D140u); set32(c.r[5], c.r[5].w[0] - 31730u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0046D140u) [[unlikely]] return; }
L_0046D140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D148u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0046D148u) [[unlikely]] return; }
L_0046D148:
    set32(c.r[5], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 1;
L_0046D14C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D168; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046D168:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;  goto L_0046D1A4; }
    c.r[1].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_0046D1D0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0046D19C; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046D19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_0046D1CC; } }
L_0046D1A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0046D1CC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_0046D1C8; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046D1C8:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0046D1CC:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0046D1D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D1E8; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046D1E8:
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[3], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D20C; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046D20C:
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[21], c.r[2].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_0046D460; }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 24u)));  goto L_0046D2B8; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D23Cu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046D23Cu) [[unlikely]] return; }
L_0046D23C:
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0046D254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0046D258; } }
L_0046D254:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0046D258:
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  goto L_0046D278; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D270u); set32(c.r[5], c.r[29].w[0] + 524u);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x0046D270u) [[unlikely]] return; }
L_0046D270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_0046D2B0; } }
L_0046D278:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 128u);
    set32(c.r[5], c.r[29].w[0] + 524u);
    st32((c.r[29].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D290u); st32((c.r[29].w[0] + 504u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x0046D290u) [[unlikely]] return; }
L_0046D290:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 512u), 0u);  if (t) { goto L_0046D2AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046D2AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D2ACu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046D2ACu) [[unlikely]] return; }
L_0046D2AC:
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_0046D2B0:
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 2;
L_0046D2B8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D2DCu); st32((c.r[20].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046D2DCu) [[unlikely]] return; }
L_0046D2DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[29].w[0] + 472u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 440u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 464u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 468u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 432u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 436u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 444u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 452u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 448u), c.r[2].w[0]);  if (t) { goto L_0046D350; } }
    set32(c.r[2], c.r[6].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st32((c.r[29].w[0] + 432u), c.r[2].w[0]);  if (t) { goto L_0046D33C; } }
    st32((c.r[29].w[0] + 432u), c.r[5].w[0]);
    c.budget -= 1;
L_0046D33C:
    set32(c.r[2], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    c.budget -= 5;
L_0046D350:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D35Cu); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046D35Cu) [[unlikely]] return; }
L_0046D35C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D368u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x0046D368u) [[unlikely]] return; }
L_0046D368:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D374u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046D374u) [[unlikely]] return; }
L_0046D374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 448u)));  if (t) { goto L_0046D444; } }
L_0046D37C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 448u)));  goto L_0046D3AC; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D390u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046D390u) [[unlikely]] return; }
L_0046D390:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D39Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x0046D39Cu) [[unlikely]] return; }
L_0046D39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D3A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x0046D3A4u) [[unlikely]] return; }
L_0046D3A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 2;
L_0046D3AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 452u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 448u), c.r[4].w[0]);  if (t) { goto L_0046D3FC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 432u), c.r[4].w[0]);  if (t) { goto L_0046D3E8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    st32((c.r[29].w[0] + 432u), c.r[3].w[0]);
    c.budget -= 2;
L_0046D3E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 452u), c.r[3].w[0]);
    c.budget -= 5;
L_0046D3FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 480u), c.r[4].w[0]);  if (t) { goto L_0046D440; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 464u), c.r[4].w[0]);  if (t) { goto L_0046D42C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 2;
L_0046D42C:
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    c.budget -= 5;
L_0046D440:
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 1;
L_0046D444:
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 480u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D37Cu | kUnwind; return; } goto L_0046D37C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0046D82C; } }
L_0046D460:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0046D470; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0046D474; } }
L_0046D470:
    set32(c.r[4], c.r[2].w[0] << 7);
    c.budget -= 1;
L_0046D474:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_0046D614; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D498u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046D498u) [[unlikely]] return; }
L_0046D498:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0046D4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046D4B4; } }
L_0046D4B0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0046D4B4:
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 128u);  goto L_0046D504; }
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 520u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D4FCu); st32((c.r[29].w[0] + 520u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x0046D4FCu) [[unlikely]] return; }
L_0046D4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046D610; } }
L_0046D504:
    st32((c.r[29].w[0] + 488u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 496u), c.r[19].w[0]);  if (t) { goto L_0046D530; } }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D524u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x0046D524u) [[unlikely]] return; }
L_0046D524:
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D530u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 133u, depth + 1u); else { c.pc = 0x00125460u; return; } if (c.pc != 0x0046D530u) [[unlikely]] return; }
L_0046D530:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 516u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D540u); st32((c.r[29].w[0] + 516u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x0046D540u) [[unlikely]] return; }
L_0046D540:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0046D560; }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
L_0046D560:
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    st32((c.r[29].w[0] + 260u), c.r[6].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_0046D5A8; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046D5A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D5C0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046D5C0:
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;  goto L_0046D5D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0046D5E0; } }
L_0046D5D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 260u)));  goto L_0046D5E4; }
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0046D5E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 1;
L_0046D5E4:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 496u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (t) { goto L_0046D610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046D610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D610u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046D610u) [[unlikely]] return; }
L_0046D610:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_0046D614:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D628u); st32((c.r[20].w[0] + 28u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046D628u) [[unlikely]] return; }
L_0046D628:
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 464u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 468u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 472u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 476u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D664u); st32((c.r[29].w[0] + 484u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046D664u) [[unlikely]] return; }
L_0046D664:
    set32(c.r[5], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D670u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 112u, depth + 1u); else { c.pc = 0x0046D890u; return; } if (c.pc != 0x0046D670u) [[unlikely]] return; }
L_0046D670:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D67Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046D67Cu) [[unlikely]] return; }
L_0046D67C:
    set32(c.r[21], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[3], c.r[20].w[0] - c.r[21].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 476u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D6A4; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046D6A4:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[21], c.r[21].w[0] - 4u);  goto L_0046D7B0; }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[22].d[0]) { set32(c.r[19], c.r[19].w[0] - 4u);  goto L_0046D6C0; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 4u);
    c.budget -= 2;
L_0046D6C0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[3].w[0] + 512u);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] - 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046D7B0; } }
L_0046D6D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D6F0; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046D6F0:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 480u)));  goto L_0046D734; }
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 464u)));  goto L_0046D718; }
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 3;
L_0046D718:
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 7;
L_0046D734:
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 480u), c.r[3].w[0]);  if (t) { goto L_0046D764; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D74Cu); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 92u, depth + 1u); else { c.pc = 0x00124BE0u; return; } if (c.pc != 0x0046D74Cu) [[unlikely]] return; }
L_0046D74C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D758u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 74u, depth + 1u); else { c.pc = 0x0046CEA0u; return; } if (c.pc != 0x0046D758u) [[unlikely]] return; }
L_0046D758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046D760u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 98u, depth + 1u); else { c.pc = 0x00124D40u; return; } if (c.pc != 0x0046D760u) [[unlikely]] return; }
L_0046D760:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0046D764:
    set32(c.r[5], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[3], c.r[20].w[0] - c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D77C; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046D77C:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[21], c.r[21].w[0] - 4u);  goto L_0046D7A8; }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[22].d[0]) { set32(c.r[19], c.r[19].w[0] - 4u);  goto L_0046D798; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 4u);
    c.budget -= 2;
L_0046D798:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[3].w[0] + 512u);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[21], c.r[21].w[0] - 4u);
    c.budget -= 4;
L_0046D7A8:
    set32(c.r[3], ld32((c.r[21].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0046D7B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[21].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 484u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046D6D8u | kUnwind; return; } goto L_0046D6D8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D7D8; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_0046D7D8:
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 480u)));  goto L_0046D81C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 464u)));  goto L_0046D800; }
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 3;
L_0046D800:
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 464u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[3], c.r[3].w[0] + 512u);
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    c.budget -= 7;
L_0046D81C:
    set32(c.r[3], c.r[4].w[0] - 4u);
    st32((c.r[29].w[0] + 480u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0] - 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0046D82C:
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 472u)));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 484u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 12;
L_0046D85C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0046D860:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_0046D890:
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D8B0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046D8B0:
    set32(c.r[8], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] < 0) { set32(c.r[2], 0u + 127u);  goto L_0046D8D8; }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 7));  if (t) { goto L_0046D8F0; } }
    set32(c.r[2], c.r[8].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046D8F0; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 1;
L_0046D8D8:
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));  if (t) { goto L_0046D8F0; } }
    set32(c.r[2], c.r[2].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 2;
L_0046D8F0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_0046D988; }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_0046D914; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046D914:
    set32(c.r[3], c.r[9].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_0046D928; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_0046D928:
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_0046D940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0046D94C; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0046D940:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0046D950; }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_0046D94C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_0046D950:
    set32(c.r[2], c.r[7].w[0] << 7);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0046D998; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_0046D988:
    set32(c.r[3], 0u - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_0046D998:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0046D9A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046DB20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046D9E0; } }
    set32(c.r[3], 0u - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] - 9416u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29212u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0046D9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 9416u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0046DA18; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA0Cu); set32(c.r[5], c.r[5].w[0] - 31673u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0046DA0Cu) [[unlikely]] return; }
L_0046DA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA14u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0046DA14u) [[unlikely]] return; }
L_0046DA14:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0046DA18:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] - 1u);  goto L_0046DA2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0046DA2C; } }
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0046DA2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_0046DAE8; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_0046DA5C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA4Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x0046DA4Cu) [[unlikely]] return; }
L_0046DA4C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 133u, depth + 1u); else { c.pc = 0x00125460u; return; } if (c.pc != 0x0046DA58u) [[unlikely]] return; }
L_0046DA58:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0046DA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA64u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046DA64u) [[unlikely]] return; }
L_0046DA64:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], 0u + 128u);
    st32((c.r[29].w[0] + 56u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA84u); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x0046DA84u) [[unlikely]] return; }
L_0046DA84:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DA98u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x0046DA98u) [[unlikely]] return; }
L_0046DA98:
    set32(c.r[4], 0u + 127u);
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(508ll);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0046DB74; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0046DB78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DADCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046DADCu) [[unlikely]] return; }
L_0046DADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046DB74; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0046DAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DAF0u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046DAF0u) [[unlikely]] return; }
L_0046DAF0:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DB00u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00B1(c, 36u, depth + 1u); else { c.pc = 0x003C47C0u; return; } if (c.pc != 0x0046DB00u) [[unlikely]] return; }
L_0046DB00:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 128u);  goto L_0046DB1C; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_0046DB20; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_0046DB1C:
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 1;
L_0046DB20:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] >> 7);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0])));
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 21;
L_0046DB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0046DB78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046DB90:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[5].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DBE8u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046DBE8u) [[unlikely]] return; }
L_0046DBE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DC18u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046DC18u) [[unlikely]] return; }
L_0046DC18:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0046DC40; }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DC3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046DC3Cu) [[unlikely]] return; }
L_0046DC3C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0046DC40:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0046DC60; }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DC5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046DC5Cu) [[unlikely]] return; }
L_0046DC5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0046DC60:
    c.f[5] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[2] = ld32((c.r[3].w[0] - 2564u));
    c.f[6] = ld32((c.r[4].w[0] + 4u));
    c.f[7] = fp::sub(c.f[5], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[5] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] - 2560u));
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    c.f[5] = fp::sub(c.f[6], c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[3].w[0] - 2568u));
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[23] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[24] = fp::sub(c.facc, fp::mul(c.f[7], c.f[1]));
    c.facc = fp::mul(c.f[7], c.f[2]);
    c.f[25] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[20] = ld32((c.r[16].w[0]));
    c.f[21] = c.f[23] ^ fp::kSign;
    c.f[22] = c.f[24] ^ fp::kSign;
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull; c.f[26] = c.f[25] ^ fp::kSign;  if (t) { goto L_0046DCE0; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DCD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046DCD8u) [[unlikely]] return; }
L_0046DCD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046DCE4; } }
L_0046DCE0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046DCE4:
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 236u), c.f[21]);
    st32((c.r[29].w[0] + 240u), c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[8] = ld32((c.r[3].w[0] - 8816u));
    st32((c.r[29].w[0] + 244u), c.f[26]);
    st32((c.r[29].w[0] + 224u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[7] = ld32((c.r[3].w[0] - 8812u));
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[6] = ld32((c.r[3].w[0] - 8808u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[4] = ld32((c.r[29].w[0] + 228u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[5] = ld32((c.r[3].w[0] - 8804u));
    c.f[3] = ld32((c.r[29].w[0] + 232u));
    c.f[2] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[4]);
    st32((c.r[3].w[0] + 8u), c.f[3]);
    st32((c.r[3].w[0] + 12u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[3].w[0] + 16u), c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[20]);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 32u), c.f[8]);
    st32((c.r[3].w[0] + 36u), c.f[7]);
    st32((c.r[3].w[0] + 40u), c.f[6]);
    st32((c.r[3].w[0] + 44u), c.f[5]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 45;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_0046E020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0046E008; } }
L_0046DDA0:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0046DDBC; }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DDB8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046DDB8u) [[unlikely]] return; }
L_0046DDB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0046DDBC:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[20].w[0] + 1u);
    c.f[21] = ld32((c.r[4].w[0] + 4u));
    c.f[22] = ld32((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = ld32((c.r[4].w[0]));  if (t) { goto L_0046DDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DDE0u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046DDE0u) [[unlikely]] return; }
L_0046DDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046DDEC; } }
L_0046DDE8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046DDEC:
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[22]);
    c.f[1] = fp::sub(c.f[1], c.f[21]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 296u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 31844u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046DE60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[5] = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[3] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0046DE70; } }
L_0046DE60:
    c.f[5] = 0u;
    c.f[6] = c.f[5];
    c.f[3] = c.f[5];
    c.budget -= 4;
L_0046DE70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[2] = ld32((c.r[3].w[0] - 2564u));
    c.f[1] = ld32((c.r[4].w[0] - 2560u));
    c.f[4] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[3].w[0] - 2568u));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.f[20] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[21] = fp::sub(c.facc, fp::mul(c.f[5], c.f[1]));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[22] = fp::sub(c.facc, fp::mul(c.f[6], c.f[0]));
    c.f[2] = fp::add(c.f[20], c.f[23]);
    c.f[1] = fp::add(c.f[21], c.f[24]);
    c.f[0] = fp::add(c.f[22], c.f[25]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 31844u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 28;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = c.f[4];  goto L_0046DF0C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.f[4] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0046DF10; } }
L_0046DF0C:
    c.f[0] = c.f[4];
    c.budget -= 1;
L_0046DF10:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.f[26] = ld32((c.r[4].w[0]));
    c.f[23] = c.f[4] ^ fp::kSign;
    c.f[24] = c.f[1] ^ fp::kSign;
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[25] = c.f[0] ^ fp::kSign;  if (t) { goto L_0046DF48; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046DF40u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046DF40u) [[unlikely]] return; }
L_0046DF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046DF4C; } }
L_0046DF48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046DF4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[6] = ld32((c.r[3].w[0] - 8816u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[5] = ld32((c.r[3].w[0] - 8812u));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[4] = ld32((c.r[3].w[0] - 8808u));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 188u), c.f[23]);
    st32((c.r[29].w[0] + 192u), c.f[24]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[3] = ld32((c.r[3].w[0] - 8804u));
    set32(c.r[5], c.r[19].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 196u), c.f[25]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[2] = ld32((c.r[29].w[0] + 188u));
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[3].w[0] + 16u), c.f[1]);
    c.f[23] = c.f[20];
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[26]);
    st32((c.r[3].w[0] + 28u), 0u);
    c.f[24] = c.f[21];
    st32((c.r[3].w[0] + 32u), c.f[6]);
    st32((c.r[3].w[0] + 36u), c.f[5]);
    st32((c.r[3].w[0] + 40u), c.f[4]);
    c.f[25] = c.f[22];
    st32((c.r[3].w[0] + 44u), c.f[3]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 47;
L_0046E008:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046DDA0u | kUnwind; return; } goto L_0046DDA0; }
L_0046E020:
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.f[21] = c.f[23] ^ fp::kSign;
    c.f[20] = ld32((c.r[4].w[0]));
    c.f[22] = c.f[24] ^ fp::kSign;
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[23] = c.f[25] ^ fp::kSign;  if (t) { goto L_0046E058; } }
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046E050u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046E050u) [[unlikely]] return; }
L_0046E050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046E05C; } }
L_0046E058:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046E05C:
    c.f[2] = ld32((c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] - 8808u));
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    st32((c.r[29].w[0] + 140u), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[6] = ld32((c.r[3].w[0] - 8816u));
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[22]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[5] = ld32((c.r[3].w[0] - 8812u));
    st32((c.r[29].w[0] + 148u), c.f[23]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[3] = ld32((c.r[3].w[0] - 8804u));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[2]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[3].w[0] + 12u), c.f[2]);
    st32((c.r[3].w[0] + 16u), c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[20]);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 32u), c.f[6]);
    st32((c.r[3].w[0] + 36u), c.f[5]);
    st32((c.r[3].w[0] + 40u), c.f[4]);
    st32((c.r[3].w[0] + 44u), c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 57;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0046E140:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_0046E1E4; } }
L_0046E150:
    set32(c.r[6], c.r[9].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[12]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0046E1E4; }
    c.f[0] = ld32((c.r[6].w[0] - 24u));
    set32(c.r[5], c.r[9].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    fpu_div(c, 6u, c.f[0], c.f[1]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = fp::add(c.f[5], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[1]);  if (t) { goto L_0046E22C; } }
L_0046E1E4:
    c.r[3].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E150u | kUnwind; return; } goto L_0046E150; }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_0046E22C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046E240:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0]));  c.pc = t; return; }
L_0046E260:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0046E280:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0046E2A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 8;
    if (c.r[3].sd[0] <= 0) { set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  goto L_0046E2CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0])));  if (t) { goto L_0046E2D8; } }
L_0046E2CC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_0046E2D8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_0046E2F0; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[3].w[0])));  if (t) { goto L_0046E2FC; } }
L_0046E2F0:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[3].w[0] - 4u)));
    c.budget -= 3;
L_0046E2FC:
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = 0u;
    c.budget -= 2;
L_0046E304:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 144u), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0] + 96u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E304u | kUnwind; return; } goto L_0046E304; } }
    set32(c.r[10], ld32((c.r[4].w[0] + 36u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].d[0] = 0ull + 0ull;
    st32((c.r[10].w[0] + 48u), c.f[1]);
    st32((c.r[10].w[0] + 52u), c.f[1]);
    st32((c.r[10].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] - 2584u));
    c.f[2] = ld32((c.r[28].w[0] - 32636u));
    c.f[0] = c.r[7].w[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.f[3] = 0u;
    st32((c.r[6].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] - 2580u));
    st32((c.r[6].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] - 2576u));
    st32((c.r[6].w[0] + 56u), c.f[1]);
    c.f[13] = ld32((c.r[9].w[0] + 4u));
    c.f[16] = c.f[13];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[15] = c.f[13];  if (t) { goto L_0046E3FC; } }
L_0046E37C:
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.f[4] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046E3AC; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[16]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E3AC; } }
    c.f[16] = c.f[1];
    c.budget -= 1;
L_0046E3AC:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::sub(c.f[4], c.f[3]);  goto L_0046E3D0; }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[15]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E3CC; } }
    c.f[15] = c.f[1];
    c.budget -= 1;
L_0046E3CC:
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    c.budget -= 1;
L_0046E3D0:
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_0046E3FC; }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E3F8; } }
    st32((c.r[29].w[0] + 160u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 112u), c.f[3]);
    c.budget -= 2;
L_0046E3F8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0046E3FC:
    c.r[3].d[0] = c.r[11].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[11].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E37Cu | kUnwind; return; } goto L_0046E37C; }
    c.f[12] = ld32((c.r[9].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[14] = ld32((c.r[9].w[0] + 8u));
    c.f[10] = c.f[13];
    c.f[7] = c.f[13];
    c.f[4] = c.f[13];
    c.f[9] = c.f[12];
    c.f[6] = c.f[12];
    c.f[11] = c.f[14];
    c.f[8] = c.f[14];
    c.f[3] = c.f[12];
    c.f[1] = 0u;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[5] = c.f[14];  if (t) { goto L_0046E504; } }
L_0046E440:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046E47C; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[16]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E47C; } }
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 148u), c.r[5].w[0]);
    c.f[13] = c.f[0];
    c.f[12] = c.f[2];
    c.budget -= 4;
L_0046E47C:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E4A8; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[15]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E4A8; } }
    c.f[11] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 172u), c.r[5].w[0]);
    c.f[10] = c.f[0];
    c.f[9] = c.f[2];
    c.budget -= 4;
L_0046E4A8:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046E4D4; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046E4D4; } }
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    c.f[7] = c.f[0];
    c.f[6] = c.f[2];
    c.budget -= 4;
L_0046E4D4:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0046E504; }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046E500; } }
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[29].w[0] + 176u), c.r[5].w[0]);
    c.f[3] = c.f[2];
    c.f[4] = c.f[0];
    c.budget -= 4;
L_0046E500:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0046E504:
    c.r[3].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E440u | kUnwind; return; } goto L_0046E440; }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 12u), c.f[12]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 16u), c.f[13]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 20u), c.f[14]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[19], ld32((c.r[4].w[0] + 36u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 84u), c.f[9]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[19].w[0] + 88u), c.f[10]);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[19].w[0] + 92u), c.f[11]);
    st32((c.r[29].w[0] + 96u), 0u);
    c.f[0] = ld32((c.r[25].w[0] - 2584u));
    st32((c.r[29].w[0] + 128u), 0u);
    c.f[2] = c.f[12] & fp::kAbs;
    set32(c.r[18], c.r[18].w[0] + 31904u);
    c.f[1] = c.f[9] & fp::kAbs;
    set32(c.r[17], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[16], 0u + 4u);
    st32((c.r[25].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[24].w[0] - 2580u));
    st32((c.r[25].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[15].w[0] - 2576u));
    st32((c.r[25].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] - 2584u));
    set32(c.r[14], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[14].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] - 2580u));
    st32((c.r[14].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] - 2576u));
    st32((c.r[14].w[0] + 92u), c.f[0]);
    set32(c.r[12], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[12].w[0]), c.f[6]);
    st32((c.r[12].w[0] + 4u), c.f[7]);
    st32((c.r[12].w[0] + 8u), c.f[8]);
    set32(c.r[12], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[12].w[0] + 96u), c.f[3]);
    st32((c.r[12].w[0] + 100u), c.f[4]);
    st32((c.r[12].w[0] + 104u), c.f[5]);
    c.f[0] = ld32((c.r[11].w[0] - 2584u));
    set32(c.r[11], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[11].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] - 2580u));
    st32((c.r[11].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] - 2576u));
    st32((c.r[11].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] - 2584u));
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[6].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] - 2580u));
    st32((c.r[6].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2576u));
    st32((c.r[6].w[0] + 104u), c.f[0]);
    c.budget -= 66;
L_0046E618:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] > 0; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E618u | kUnwind; return; } goto L_0046E618; } }
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[1]);
    set32(c.r[5], c.r[5].w[0] - 31472u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[28].w[0] - 32304u));
    c.f[3] = ld32((c.r[28].w[0] - 32316u));
    c.f[5] = ld32((c.r[28].w[0] - 32300u));
    c.f[6] = ld32((c.r[28].w[0] - 32296u));
    c.f[7] = c.r[3].w[0];
    c.f[4] = 0u;
    c.budget -= 16;
L_0046E678:
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0] + 64u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.f[8] = c.f[4];  goto L_0046E6F4; }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0046C000u < 16384u) { entry = entries_00DB[(t - 0x0046C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0046E6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[7];  if (t) { goto L_0046E6F4; } }
L_0046E6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[7];  if (t) { goto L_0046E6F4; } }
L_0046E6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[6];  if (t) { goto L_0046E6F4; } }
L_0046E6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[5];  if (t) { goto L_0046E6F4; } }
L_0046E6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[4];  if (t) { goto L_0046E6F4; } }
L_0046E6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[3];  if (t) { goto L_0046E6F4; } }
L_0046E6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[2];  if (t) { goto L_0046E6F4; } }
L_0046E6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[1];  if (t) { goto L_0046E6F4; } }
L_0046E6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[8] = c.f[1];  if (t) { goto L_0046E6F4; } }
    c.f[8] = c.f[4];
    c.budget -= 1;
L_0046E6F4:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[8]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E678u | kUnwind; return; } goto L_0046E678; } }
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.r[13].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
L_0046E720:
    set32(c.r[7], c.r[13].w[0] << 3);
    set32(c.r[10], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[12], ld32((c.r[7].w[0] + 68u)));
    set32(c.r[11], c.r[12].w[0] << 1);
    c.r[7].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), 0u);
    st32((c.r[10].w[0] + 4u), c.f[1]);
    st32((c.r[10].w[0] + 8u), 0u);
    set32(c.r[10], ld32((c.r[4].w[0] + 40u)));
    c.f[0] = ld32((c.r[6].w[0] - 2584u));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] - 2580u));
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2576u));
    c.budget -= 22;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[10].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E720u | kUnwind; return; } goto L_0046E720; } }
    c.f[9] = ld32((c.r[28].w[0] - 32484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[13], 0u + 1u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = 0u;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[8] = c.r[3].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[14].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0046E9A8; } }
L_0046E79C:
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[10], c.r[9].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[10].w[0]));
    c.f[1] = ld32((c.r[10].w[0] - 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[11], c.r[10].w[0] - 48u);  if (t) { goto L_0046E7C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[13].w[0] - 1u);  if (t) { goto L_0046E7C8; } }
L_0046E7C4:
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_0046E7C8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[6].d[0] = c.r[13].d[0] + 0ull;  goto L_0046E7D8; }
    set32(c.r[6], c.r[13].w[0] - 1u);
    c.budget -= 1;
L_0046E7D8:
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[9].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[7].w[0]));
    c.r[12].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[6].w[0]));
    set32(c.r[5], c.r[10].w[0] - 44u);
    set32(c.r[3], c.r[10].w[0] - 40u);
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    set32(c.r[16], c.r[12].w[0] << 3);
    c.budget -= 15;
L_0046E814:
    set32(c.r[16], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.f[4] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_0046E998; }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046E994; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[0];  goto L_0046E85C; }
    c.f[4] = fp::sub(c.f[4], c.f[2]);
    fpu_div(c, 12u, c.f[4], c.f[1]);
    c.budget -= 6;
L_0046E85C:
    c.f[5] = ld32((c.r[6].w[0]));
    set32(c.r[25], ld32((c.r[16].w[0] + 4u)));
    c.f[4] = ld32((c.r[7].w[0]));
    c.f[10] = ld32((c.r[6].w[0] + 4u));
    c.f[6] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[17], c.r[25].w[0] << 1);
    c.f[4] = fp::sub(c.f[4], c.f[5]);
    set32(c.r[17], c.r[17].w[0] + c.r[25].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[17], c.r[17].w[0] << 2);
    c.f[6] = fp::sub(c.f[6], c.f[10]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.f[4] = fp::mul(c.f[4], c.f[12]);
    c.f[7] = fp::add(c.f[5], c.f[4]);
    c.f[6] = fp::mul(c.f[6], c.f[12]);
    c.f[6] = fp::add(c.f[10], c.f[6]);
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[11] = ld32((c.r[6].w[0] + 8u));
    c.f[5] = ld32((c.r[7].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[4]));
    c.f[4] = fp::sub(c.f[5], c.f[11]);
    c.f[4] = fp::mul(c.f[4], c.f[12]);
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::add(c.f[11], c.f[4]);  if (t) { goto L_0046E994; } }
    st32((c.r[16].w[0]), c.f[7]);
    set32(c.r[25], c.r[25].w[0] << 2);
    st32((c.r[16].w[0] + 4u), c.f[6]);
    set32(c.r[25], c.r[25].w[0] + c.r[29].w[0]);
    st32((c.r[16].w[0] + 8u), c.f[4]);
    st32((c.r[25].w[0] + 144u), c.r[13].w[0]);
    c.f[7] = ld32((c.r[11].w[0]));
    c.f[6] = ld32((c.r[10].w[0]));
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[10].w[0] + 4u));
    c.f[11] = fp::sub(c.f[7], c.f[6]);
    c.f[10] = fp::sub(c.f[5], c.f[4]);
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[4] = ld32((c.r[10].w[0] + 8u));
    c.f[5] = ld32((c.r[15].w[0] - 2564u));
    c.f[6] = ld32((c.r[24].w[0] - 2568u));
    c.f[7] = fp::sub(c.f[7], c.f[4]);
    c.f[4] = ld32((c.r[14].w[0] - 2560u));
    st32((c.r[25].w[0] + 96u), c.f[12]);
    c.facc = fp::mul(c.f[10], c.f[4]);
    c.f[12] = fp::sub(c.facc, fp::mul(c.f[7], c.f[5]));
    c.facc = fp::mul(c.f[7], c.f[6]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[11], c.f[4]));
    c.facc = fp::mul(c.f[11], c.f[5]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[10], c.f[6]));
    st32((c.r[29].w[0] + 192u), c.f[12]);
    st32((c.r[29].w[0] + 196u), c.f[7]);
    st32((c.r[29].w[0] + 200u), c.f[4]);
    c.facc = fp::mul(c.f[12], c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[4] = fp::sqrt(c.f[4]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[9]));
    c.budget -= 37;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[6] = c.f[0];  goto L_0046E978; }
    fpu_div(c, 7u, c.f[8], c.f[4]);
    c.f[6] = ld32((c.r[29].w[0] + 192u));
    c.f[5] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = ld32((c.r[29].w[0] + 200u));
    c.f[6] = fp::mul(c.f[6], c.f[7]);
    c.f[5] = fp::mul(c.f[5], c.f[7]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[4] = fp::mul(c.f[4], c.f[7]);  if (t) { goto L_0046E980; } }
L_0046E978:
    c.f[5] = c.f[0];
    c.f[4] = c.f[0];
    c.budget -= 2;
L_0046E980:
    set32(c.r[25], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[25], c.r[25].w[0] + c.r[17].w[0]);
    st32((c.r[25].w[0]), c.f[6]);
    st32((c.r[25].w[0] + 4u), c.f[5]);
    st32((c.r[25].w[0] + 8u), c.f[4]);
    c.budget -= 5;
L_0046E994:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_0046E998:
    c.r[25].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[25].d[0] != 0ull) { set32(c.r[16], c.r[12].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E814u | kUnwind; return; } goto L_0046E814; }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_0046E9A8:
    c.r[3].d[0] = c.r[13].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[13].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E79Cu | kUnwind; return; } goto L_0046E79C; }
    set32(c.r[10], ld32((c.r[29].w[0] + 160u)));
    c.r[11].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    set32(c.r[6], c.r[9].w[0] - 48u);
    set32(c.r[5], c.r[9].w[0] - 44u);
    set32(c.r[3], c.r[9].w[0] - 40u);
    set32(c.r[8], c.r[11].w[0] << 2);
    c.budget -= 7;
L_0046E9D0:
    set32(c.r[12], c.r[8].w[0] + c.r[29].w[0]);
    set32(c.r[7], ld32((c.r[12].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[10].d[0]; c.f[1] = ld32((c.r[12].w[0] + 96u));  if (t) { goto L_0046E9F0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_0046EB90; } }
L_0046E9F0:
    c.r[1].d[0] = c.r[7].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.f[6] = c.f[0];  goto L_0046EAD0; }
    c.f[8] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0046EA5C; } }
L_0046EA08:
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[12].w[0] << 4);
    set32(c.r[12], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[9].w[0] + c.r[14].w[0]);
    c.f[6] = ld32((c.r[12].w[0]));
    c.f[7] = ld32((c.r[13].w[0]));
    c.f[5] = ld32((c.r[13].w[0] + 4u));
    set32(c.r[12], c.r[5].w[0] + c.r[14].w[0]);
    c.f[4] = ld32((c.r[12].w[0]));
    c.f[3] = ld32((c.r[13].w[0] + 8u));
    c.f[6] = fp::sub(c.f[7], c.f[6]);
    set32(c.r[12], c.r[3].w[0] + c.r[14].w[0]);
    c.f[2] = ld32((c.r[12].w[0]));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[6], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[15], c.r[15].w[0] - 1u);
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[8] = fp::add(c.f[8], c.f[2]);
    c.budget -= 21;
L_0046EA5C:
    c.r[1].d[0] = c.r[7].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[12], c.r[15].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EA08u | kUnwind; return; } goto L_0046EA08; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], ld32((c.r[4].w[0] + 44u)));  goto L_0046EAC4; }
    set32(c.r[12], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    c.f[5] = ld32((c.r[7].w[0]));
    c.f[4] = ld32((c.r[7].w[0] - 48u));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = ld32((c.r[7].w[0] - 44u));
    c.f[5] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = fp::sub(c.f[3], c.f[2]);
    c.f[3] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = ld32((c.r[7].w[0] - 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.facc = fp::add(c.f[0], c.f[8]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 20;
L_0046EAC4:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.f[8]);  if (t) { goto L_0046EB90; } }
L_0046EAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0046EB20; } }
L_0046EAD8:
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[12], c.r[9].w[0] + c.r[12].w[0]);
    c.f[5] = ld32((c.r[12].w[0]));
    c.f[4] = ld32((c.r[12].w[0] + 48u));
    c.f[3] = ld32((c.r[12].w[0] + 4u));
    c.f[2] = ld32((c.r[12].w[0] + 52u));
    c.f[5] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = fp::sub(c.f[3], c.f[2]);
    c.f[3] = ld32((c.r[12].w[0] + 8u));
    c.f[2] = ld32((c.r[12].w[0] + 56u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[6] = fp::add(c.f[6], c.f[2]);
    c.budget -= 18;
L_0046EB20:
    c.r[12].d[0] = c.r[13].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[12].d[0] != 0ull) { set32(c.r[12], c.r[13].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EAD8u | kUnwind; return; } goto L_0046EAD8; }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], ld32((c.r[4].w[0] + 44u)));  goto L_0046EB88; }
    set32(c.r[12], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[9].w[0] + c.r[7].w[0]);
    c.f[5] = ld32((c.r[7].w[0]));
    c.f[4] = ld32((c.r[7].w[0] + 48u));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = ld32((c.r[7].w[0] + 52u));
    c.f[5] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = fp::sub(c.f[3], c.f[2]);
    c.f[3] = ld32((c.r[7].w[0] + 8u));
    c.f[2] = ld32((c.r[7].w[0] + 56u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.facc = fp::add(c.f[0], c.f[6]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 20;
L_0046EB88:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.f[6]);
    c.budget -= 2;
L_0046EB90:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[7].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[8], c.r[11].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046E9D0u | kUnwind; return; } goto L_0046E9D0; }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0046EBC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046EC7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 30136u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0046EC08; } }
L_0046EBF4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC04u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046EC04u) [[unlikely]] return; }
L_0046EC04:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0046EC08:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EBF4u | kUnwind; return; } goto L_0046EBF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC20u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0046EC20u) [[unlikely]] return; }
L_0046EC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC28u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0046EC28u) [[unlikely]] return; }
L_0046EC28:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 40u)));  goto L_0046EC40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC3Cu); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0046EC3Cu) [[unlikely]] return; }
L_0046EC3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_0046EC40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 20u);  goto L_0046EC54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC50u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0046EC50u) [[unlikely]] return; }
L_0046EC50:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 1;
L_0046EC54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0046EC68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046EC64u) [[unlikely]] return; }
L_0046EC64:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0046EC68:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0046EC80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EC7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046EC7Cu) [[unlikely]] return; }
L_0046EC7C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0046EC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046ECA0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 30136u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
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
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ED18u); set32(c.r[4], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0046ED18u) [[unlikely]] return; }
L_0046ED18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ED20u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0046ED20u) [[unlikely]] return; }
L_0046ED20:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ED30u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0046ED30u) [[unlikely]] return; }
L_0046ED30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30928u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ED4Cu); set32(c.r[8], 0u + 9u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0046ED4Cu) [[unlikely]] return; }
L_0046ED4C:
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], 0u + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ED5Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0046ED5Cu) [[unlikely]] return; }
L_0046ED5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30928u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ED78u); set32(c.r[8], 0u + 9u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0046ED78u) [[unlikely]] return; }
L_0046ED78:
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ED8Cu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 152u, depth + 1u); else { c.pc = 0x00102350u; return; } if (c.pc != 0x0046ED8Cu) [[unlikely]] return; }
L_0046ED8C:
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24312u)));
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EDACu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0046EDACu) [[unlikely]] return; }
L_0046EDAC:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EDC0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0046EDC0u) [[unlikely]] return; }
L_0046EDC0:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 35ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_0046F2EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[30] = 0u;
    c.f[29] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_0046F2E0; } }
L_0046EDF4:
    set32(c.r[16], c.r[23].w[0] << 2);
    c.f[1] = ld32((c.r[28].w[0] - 32556u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE0Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x0046EE0Cu) [[unlikely]] return; }
L_0046EE0C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 220u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EE40u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046EE40u) [[unlikely]] return; }
L_0046EE40:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[26] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.f[28] = c.r[3].w[0];
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[24] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.f[27] = c.f[26];
    c.f[23] = c.f[26];
    c.r[17].d[0] = 0ull + 0ull;
    c.f[25] = c.f[26];
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.f[31] = c.f[26];  if (t) { goto L_0046F180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_0046F168; } }
L_0046EE9C:
    c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0046EEB4; }
    set32(c.r[4], c.r[19].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EEB4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046EEB4u) [[unlikely]] return; }
L_0046EEB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[21].w[0] + 1u);
    c.f[21] = ld32((c.r[2].w[0] + 4u));
    c.f[22] = ld32((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = ld32((c.r[2].w[0]));  if (t) { goto L_0046EEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046EED8u); set32(c.r[4], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046EED8u) [[unlikely]] return; }
L_0046EED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_0046EEE8; } }
L_0046EEE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 2;
L_0046EEE8:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[22]);
    c.f[1] = fp::sub(c.f[1], c.f[21]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 360u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046EF58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 352u));
    c.f[1] = ld32((c.r[29].w[0] + 356u));
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    c.f[5] = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[7] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0046EF68; } }
L_0046EF58:
    c.f[5] = 0u;
    c.f[6] = c.f[5];
    c.f[7] = c.f[5];
    c.budget -= 4;
L_0046EF68:
    c.facc = fp::mul(c.f[26], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[6]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[28], c.f[7]));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0046EF84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0046EFAC; } }
L_0046EF84:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 220u));  goto L_0046EF9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0046EFAC; } }
L_0046EF9C:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  goto L_0046EFB0; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0046EFAC:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 1;
L_0046EFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046EFE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31552u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[30].d[0] != 0ull; c.f[31] = ld32((c.r[2].w[0]));  if (t) { goto L_0046EFE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[31] = fp::sub(c.f[0], c.f[31]);
    c.budget -= 4;
L_0046EFE0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  goto L_0046F130; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = 0u;
    c.f[3] = c.r[2].w[0];
    c.facc = fp::mul(c.f[4], c.f[7]);
    c.f[10] = fp::sub(c.facc, fp::mul(c.f[3], c.f[6]));
    c.facc = fp::mul(c.f[3], c.f[5]);
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[4], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[6]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[2] = fp::add(c.f[23], c.f[10]);
    c.f[1] = fp::add(c.f[24], c.f[9]);
    c.f[0] = fp::add(c.f[25], c.f[8]);
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 24;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = c.f[4];  goto L_0046F070; }
    fpu_div(c, 3u, c.f[3], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.f[4] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0046F074; } }
L_0046F070:
    c.f[0] = c.f[4];
    c.budget -= 1;
L_0046F074:
    c.f[28] = c.f[7];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[7] = ld32((c.r[3].w[0] - 8816u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[27] = c.f[6];
    c.f[6] = ld32((c.r[2].w[0] - 8812u));
    c.f[26] = c.f[5];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[5] = ld32((c.r[3].w[0] - 8808u));
    st32((c.r[29].w[0] + 300u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[4] = ld32((c.r[2].w[0] - 8804u));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 288u), c.f[20]);
    st32((c.r[29].w[0] + 292u), c.f[21]);
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[29].w[0] + 296u), c.f[22]);
    st32((c.r[29].w[0] + 304u), c.f[1]);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[2].w[0] + 8u), c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[2].w[0] + 12u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[2].w[0] + 16u), c.f[1]);
    c.f[23] = c.f[10];
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.f[31]);
    st32((c.r[2].w[0] + 28u), 0u);
    c.f[24] = c.f[9];
    st32((c.r[2].w[0] + 32u), c.f[7]);
    st32((c.r[2].w[0] + 36u), c.f[6]);
    st32((c.r[2].w[0] + 40u), c.f[5]);
    c.f[25] = c.f[8];
    st32((c.r[2].w[0] + 44u), c.f[4]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 47;
L_0046F130:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32308u));  goto L_0046F15C; }
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0046F160; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_0046F164; }
    set32(c.r[17], c.r[17].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_0046F160; } }
L_0046F15C:
    c.f[31] = fp::add(c.f[31], c.f[0]);
    c.budget -= 1;
L_0046F160:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0046F164:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_0046F168:
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EE9Cu | kUnwind; return; } goto L_0046EE9C; }
L_0046F180:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046F194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[31] = c.r[2].w[0];
    c.budget -= 2;
L_0046F194:
    c.facc = fp::mul(c.f[30], c.f[28]);
    c.f[22] = fp::sub(c.facc, fp::mul(c.f[29], c.f[27]));
    c.facc = fp::mul(c.f[29], c.f[26]);
    c.f[21] = fp::sub(c.facc, fp::mul(c.f[30], c.f[28]));
    c.facc = fp::mul(c.f[30], c.f[27]);
    c.f[20] = fp::sub(c.facc, fp::mul(c.f[30], c.f[26]));
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0046F1D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F1D0u); set32(c.r[4], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_0004(c, 372u, depth + 1u); else { c.pc = 0x00113E50u; return; } if (c.pc != 0x0046F1D0u) [[unlikely]] return; }
L_0046F1D0:
    c.f[2] = ld32((c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[17], c.r[18].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 252u), c.f[22]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[7] = ld32((c.r[2].w[0] - 8816u));
    st32((c.r[29].w[0] + 256u), c.f[21]);
    st32((c.r[29].w[0] + 260u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[6] = ld32((c.r[2].w[0] - 8812u));
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[5] = ld32((c.r[2].w[0] - 8808u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[4] = ld32((c.r[2].w[0] - 8804u));
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    c.f[3] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.f[1]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[2].w[0] + 8u), c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[2].w[0] + 12u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[2].w[0] + 16u), c.f[1]);
    st32((c.r[2].w[0] + 20u), c.f[0]);
    st32((c.r[2].w[0] + 24u), c.f[31]);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), c.f[7]);
    st32((c.r[2].w[0] + 36u), c.f[6]);
    st32((c.r[2].w[0] + 40u), c.f[5]);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F294u); st32((c.r[2].w[0] + 44u), c.f[4]);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0046F294u) [[unlikely]] return; }
L_0046F294:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F2B0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0046F2B0u) [[unlikely]] return; }
L_0046F2B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F2C0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046F2C0u) [[unlikely]] return; }
L_0046F2C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 8;
L_0046F2E0:
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 24308u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046EDF4u | kUnwind; return; } goto L_0046EDF4; }
L_0046F2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F2F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 140u, depth + 1u); else { c.pc = 0x0046E2A0u; return; } if (c.pc != 0x0046F2F4u) [[unlikely]] return; }
L_0046F2F4:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0046F360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24308u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0046F398; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F38Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046F38Cu) [[unlikely]] return; }
L_0046F38C:
    st32((c.r[28].w[0] - 24312u), c.r[17].w[0]);
    st32((c.r[28].w[0] - 24308u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_0046F398:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046F3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0046F3F4; } }
L_0046F3CC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31856u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F3E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0046F3E4u) [[unlikely]] return; }
L_0046F3E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0046F3F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046F404; } }
L_0046F3F4:
    c.r[2].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F3CCu | kUnwind; return; } goto L_0046F3CC; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0046F404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046F420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046F490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30160u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0046F478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0046F478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0046F478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046F478u) [[unlikely]] return; }
L_0046F478:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0046F494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F490u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046F490u) [[unlikely]] return; }
L_0046F490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046F494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046F4B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0046F4D8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0046F4D0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0046F4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046F4DC; } }
L_0046F4D8:
    set32(c.r[2], c.r[2].w[0] - 30960u);
    c.budget -= 1;
L_0046F4DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046F4F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 30768u);  c.pc = t; return; }
L_0046F500:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] - 30624u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F53Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0046F53Cu) [[unlikely]] return; }
L_0046F53C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F54Cu); set32(c.r[5], c.r[5].w[0] - 30622u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0046F54Cu) [[unlikely]] return; }
L_0046F54C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_0046F570; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F564u); set32(c.r[5], c.r[5].w[0] - 30617u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0046F564u) [[unlikely]] return; }
L_0046F564:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0046F580; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_0046F570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F578u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0046F578u) [[unlikely]] return; }
L_0046F578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046F714; } }
L_0046F580:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F58Cu); set32(c.r[5], c.r[5].w[0] - 30622u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0046F58Cu) [[unlikely]] return; }
L_0046F58C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F598u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0046F598u) [[unlikely]] return; }
L_0046F598:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F5A8u); set32(c.r[5], c.r[5].w[0] - 30617u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0046F5A8u) [[unlikely]] return; }
L_0046F5A8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F5B4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0046F5B4u) [[unlikely]] return; }
L_0046F5B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F5C4u); set32(c.r[5], c.r[5].w[0] - 30612u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0046F5C4u) [[unlikely]] return; }
L_0046F5C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0046F604; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F5DCu); set32(c.r[5], c.r[29].w[0] + 239u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0046F5DCu) [[unlikely]] return; }
L_0046F5DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld8((c.r[29].w[0] + 239u));  goto L_0046F604; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0046F600; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F600u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0046F600u) [[unlikely]] return; }
L_0046F600:
    c.r[16].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 1;
L_0046F604:
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F618u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046F618u) [[unlikely]] return; }
L_0046F618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046F6C4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_0046F634; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0046F634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F63Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0046F63Cu) [[unlikely]] return; }
L_0046F63C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0046F654; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 152u)));  if (t) { goto L_0046F658; } }
L_0046F654:
    set32(c.r[5], c.r[29].w[0] + 145u);
    c.budget -= 1;
L_0046F658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F660u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x0046F660u) [[unlikely]] return; }
L_0046F660:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0046F678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  if (t) { goto L_0046F67C; } }
L_0046F678:
    set32(c.r[6], c.r[29].w[0] + 97u);
    c.budget -= 1;
L_0046F67C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F68Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0046F68Cu) [[unlikely]] return; }
L_0046F68C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[3], c.r[3].w[0] + 30192u);
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30264u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F6B8u); st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x0046F6B8u) [[unlikely]] return; }
L_0046F6B8:
    set32(c.r[4], c.r[19].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F6C4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0046F6C4u) [[unlikely]] return; }
L_0046F6C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046F6D8; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F6D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046F6D8u) [[unlikely]] return; }
L_0046F6D8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0046F6F0; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F6ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0046F6ECu) [[unlikely]] return; }
L_0046F6EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0046F6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F6F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046F6F8u) [[unlikely]] return; }
L_0046F6F8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046F704u) [[unlikely]] return; }
L_0046F704:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0046F710u) [[unlikely]] return; }
L_0046F710:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0046F714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0046F740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 30600u);
    set32(c.r[5], c.r[5].w[0] - 30578u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F76Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0046F76Cu) [[unlikely]] return; }
L_0046F76C:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F77Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046F77Cu) [[unlikely]] return; }
L_0046F77C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 808u)));  goto L_0046F7BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F79Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0046F79Cu) [[unlikely]] return; }
L_0046F79C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 30160u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_0046F7BC:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0046F81C; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 30600u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F7E8u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x0046F7E8u) [[unlikely]] return; }
L_0046F7E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F80Cu); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x0046F80Cu) [[unlikely]] return; }
L_0046F80C:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_0046F81C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046F830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046F840:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[3], 0u + 263u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0046F94C; } }
    set32(c.r[2], 0u + 76u);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    mmi::divu(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0046F938; } }
L_0046F884:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 43u, depth + 1u); else { c.pc = 0x00448A60u; return; } if (c.pc != 0x0046F8A0u) [[unlikely]] return; }
L_0046F8A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0046F8C8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 30542u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8C0u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0046F8C0u) [[unlikely]] return; }
L_0046F8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 72u)));  if (t) { goto L_0046F92C; } }
L_0046F8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8D0u);  if (depth < kMaxDepth) unit_00D2(c, 47u, depth + 1u); else { c.pc = 0x00448AC0u; return; } if (c.pc != 0x0046F8D0u) [[unlikely]] return; }
L_0046F8D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8E0u); set32(c.r[4], c.r[4].w[0] - 30474u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0046F8E0u) [[unlikely]] return; }
L_0046F8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D2(c, 229u, depth + 1u); else { c.pc = 0x0044A000u; return; } if (c.pc != 0x0046F8E8u) [[unlikely]] return; }
L_0046F8E8:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F8F8u); set32(c.r[5], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0046F8F8u) [[unlikely]] return; }
L_0046F8F8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F904u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 208u, depth + 1u); else { c.pc = 0x00112A90u; return; } if (c.pc != 0x0046F904u) [[unlikely]] return; }
L_0046F904:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046F914u) [[unlikely]] return; }
L_0046F914:
    set32(c.r[5], ld32((c.r[20].w[0] + 32u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F928u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 124u, depth + 1u); else { c.pc = 0x0046DB90u; return; } if (c.pc != 0x0046F928u) [[unlikely]] return; }
L_0046F928:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_0046F92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F934u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046F934u) [[unlikely]] return; }
L_0046F934:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0046F938:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F884u | kUnwind; return; } goto L_0046F884; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F94Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046F94Cu) [[unlikely]] return; }
L_0046F94C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0046F970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0046F98C; } }
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 1;
L_0046F98C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[16].w[0] + 36u);
    set32(c.r[6], c.r[6].w[0] - 31296u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F9A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x0046F9A4u) [[unlikely]] return; }
L_0046F9A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0046F9D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F9B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x0046F9B4u) [[unlikely]] return; }
L_0046F9B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046F9CCu); set32(c.r[6], c.r[6].w[0] - 30449u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0046F9CCu) [[unlikely]] return; }
L_0046F9CC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046F9D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046F9E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0046F9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046FA6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 30192u);
    set32(c.r[2], c.r[2].w[0] + 30264u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 36u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FA30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0046FA30u) [[unlikely]] return; }
L_0046FA30:
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0046FA4C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0046FA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FA54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x0046FA54u) [[unlikely]] return; }
L_0046FA54:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0046FA70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046FA6Cu) [[unlikely]] return; }
L_0046FA6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046FA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046FA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29904u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0046FAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0046FABC; } }
L_0046FAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FAB4u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x0046FAB4u) [[unlikely]] return; }
L_0046FAB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0046FABC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046FAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FAF4u); set32(c.r[4], c.r[4].w[0] - 30720u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0046FAF4u) [[unlikely]] return; }
L_0046FAF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0046FB04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0046FB14; } }
L_0046FB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FB0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x0046FB0Cu) [[unlikely]] return; }
L_0046FB0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0046FB14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046FB30:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0046FB40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29904u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0046FB5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046FB64; } }
L_0046FB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FB64u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x0046FB64u) [[unlikely]] return; }
L_0046FB64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046FB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29904u)));  c.pc = t; return; }
L_0046FB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 30672u);  c.pc = t; return; }
L_0046FB90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F840u | kUnwind; return; } goto L_0046F840; }
L_0046FBA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046F9F0u | kUnwind; return; } goto L_0046F9F0; }
L_0046FBB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046FC00; } }
L_0046FBD4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FBE4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0046FBE4u) [[unlikely]] return; }
L_0046FBE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0046FBF8; }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0046FC34; } }
L_0046FBF8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 32u);
    c.budget -= 2;
L_0046FC00:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FBD4u | kUnwind; return; } goto L_0046FBD4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 3840u);
    c.budget -= 2;
L_0046FC34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046FC50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046FCA0; } }
L_0046FC74:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FC80u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0046FC80u) [[unlikely]] return; }
L_0046FC80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0046FC98; }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { goto L_0046FCD4; } }
L_0046FC98:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 32u);
    c.budget -= 2;
L_0046FCA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FC74u | kUnwind; return; } goto L_0046FC74; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 3840u);
    c.budget -= 2;
L_0046FCD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046FCF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { set32(c.r[4], c.r[4].w[0] + 8u);  [[clang::musttail]] return unit_00DC(c, 19u, depth); }
L_0046FD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 30304u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD2Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x0046FD2Cu) [[unlikely]] return; }
L_0046FD2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] - 30320u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD48u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x0046FD48u) [[unlikely]] return; }
L_0046FD48:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FD54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0046FD54u) [[unlikely]] return; }
L_0046FD54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27888u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046FD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0046FDC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30304u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0046FDA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0046FDA4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0046FDBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FDBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046FDBCu) [[unlikely]] return; }
L_0046FDBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046FDC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046FDD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 24272u), 0u);  goto L_0046FDF8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FDF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046FDF4u) [[unlikely]] return; }
L_0046FDF4:
    st32((c.r[28].w[0] - 24272u), 0u);
    c.budget -= 1;
L_0046FDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046FE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046FE70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 30288u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0046FE58; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0046FE5C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046FE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FE58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DC(c, 61u, depth + 1u); else { c.pc = 0x004707F0u; return; } if (c.pc != 0x0046FE58u) [[unlikely]] return; }
L_0046FE58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0046FE5C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0046FE74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FE70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046FE70u) [[unlikely]] return; }
L_0046FE70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046FE74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046FE90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 24u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FEB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046FEB4u) [[unlikely]] return; }
L_0046FEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046FF30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 30288u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_0046FF14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FEE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046FEE0u) [[unlikely]] return; }
L_0046FEE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0046FF00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FEF8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0046FEF8u) [[unlikely]] return; }
L_0046FEF8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0046FF00:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[18].w[0]);  goto L_0046FF18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FF10u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046FF10u) [[unlikely]] return; }
L_0046FF10:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0046FF14:
    st32((c.r[16].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0046FF18:
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FF30u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00DC(c, 54u, depth + 1u); else { c.pc = 0x004706B0u; return; } if (c.pc != 0x0046FF30u) [[unlikely]] return; }
L_0046FF30:
    st32((c.r[28].w[0] - 24272u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046FF50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], 0u + 262u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00DC(c, 14u, depth); } }
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[18], c.r[7].w[0] >> 3);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00DC(c, 13u, depth); } }
L_0046FF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FF90u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0046FF90u) [[unlikely]] return; }
L_0046FF90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FF98u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0046FF98u) [[unlikely]] return; }
L_0046FF98:
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FFACu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0046FFACu) [[unlikely]] return; }
L_0046FFAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_0046FFC0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0046FFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FFC8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0046FFC8u) [[unlikely]] return; }
L_0046FFC8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FFD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046FFD4u) [[unlikely]] return; }
L_0046FFD4:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046FFE4u); set32(c.r[16], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0046FFE4u) [[unlikely]] return; }
L_0046FFE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0046FFF8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0046FFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470000u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00470000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00DC(c, 1u, depth);
}

}
