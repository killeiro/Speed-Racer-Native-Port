#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_010B[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_010B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0052C000;
    case 2u: goto L_0052C010;
    case 3u: goto L_0052C020;
    case 4u: goto L_0052C040;
    case 5u: goto L_0052C068;
    case 6u: goto L_0052C090;
    case 7u: goto L_0052C0B4;
    case 8u: goto L_0052C0D4;
    case 9u: goto L_0052C0E0;
    case 10u: goto L_0052C100;
    case 11u: goto L_0052C120;
    case 12u: goto L_0052C130;
    case 13u: goto L_0052C164;
    case 14u: goto L_0052C194;
    case 15u: goto L_0052C1A0;
    case 16u: goto L_0052C1C8;
    case 17u: goto L_0052C1FC;
    case 18u: goto L_0052C214;
    case 19u: goto L_0052C230;
    case 20u: goto L_0052C290;
    case 21u: goto L_0052C2F4;
    case 22u: goto L_0052C314;
    case 23u: goto L_0052C330;
    case 24u: goto L_0052C3A4;
    case 25u: goto L_0052C3D4;
    case 26u: goto L_0052C3FC;
    case 27u: goto L_0052C4D0;
    case 28u: goto L_0052C510;
    case 29u: goto L_0052C5E8;
    case 30u: goto L_0052C62C;
    case 31u: goto L_0052C648;
    case 32u: goto L_0052C670;
    case 33u: goto L_0052C68C;
    case 34u: goto L_0052C6AC;
    case 35u: goto L_0052C6B8;
    case 36u: goto L_0052C790;
    case 37u: goto L_0052C7C0;
    case 38u: goto L_0052C7D0;
    case 39u: goto L_0052C804;
    case 40u: goto L_0052C814;
    case 41u: goto L_0052C884;
    case 42u: goto L_0052C89C;
    case 43u: goto L_0052C8A8;
    case 44u: goto L_0052C8D4;
    case 45u: goto L_0052C8F0;
    case 46u: goto L_0052C954;
    case 47u: goto L_0052C970;
    case 48u: goto L_0052C9A0;
    case 49u: goto L_0052C9DC;
    case 50u: goto L_0052CAA8;
    case 51u: goto L_0052CAD8;
    case 52u: goto L_0052CB00;
    case 53u: goto L_0052CB28;
    case 54u: goto L_0052CB44;
    case 55u: goto L_0052CB60;
    case 56u: goto L_0052CB6C;
    case 57u: goto L_0052CC50;
    case 58u: goto L_0052CC5C;
    case 59u: goto L_0052CC90;
    case 60u: goto L_0052CD10;
    case 61u: goto L_0052CDB8;
    case 62u: goto L_0052CDD4;
    case 63u: goto L_0052CEB0;
    case 64u: goto L_0052CFA0;
    case 65u: goto L_0052CFE0;
    case 66u: goto L_0052D004;
    case 67u: goto L_0052D090;
    case 68u: goto L_0052D0B0;
    case 69u: goto L_0052D0EC;
    case 70u: goto L_0052D158;
    case 71u: goto L_0052D180;
    case 72u: goto L_0052D1A8;
    case 73u: goto L_0052D210;
    case 74u: goto L_0052D240;
    case 75u: goto L_0052D284;
    case 76u: goto L_0052D318;
    case 77u: goto L_0052D328;
    case 78u: goto L_0052D348;
    case 79u: goto L_0052D3A4;
    case 80u: goto L_0052D3D0;
    case 81u: goto L_0052D400;
    case 82u: goto L_0052D460;
    case 83u: goto L_0052D470;
    case 84u: goto L_0052D480;
    case 85u: goto L_0052D490;
    case 86u: goto L_0052D4B8;
    case 87u: goto L_0052D4C4;
    case 88u: goto L_0052D530;
    case 89u: goto L_0052D558;
    case 90u: goto L_0052D564;
    case 91u: goto L_0052D5D0;
    case 92u: goto L_0052D624;
    case 93u: goto L_0052D640;
    case 94u: goto L_0052D66C;
    case 95u: goto L_0052D690;
    case 96u: goto L_0052D6E0;
    case 97u: goto L_0052D6F8;
    case 98u: goto L_0052D744;
    case 99u: goto L_0052D784;
    case 100u: goto L_0052D7AC;
    case 101u: goto L_0052D7CC;
    case 102u: goto L_0052D808;
    case 103u: goto L_0052D86C;
    case 104u: goto L_0052D8D0;
    case 105u: goto L_0052D90C;
    case 106u: goto L_0052D940;
    case 107u: goto L_0052D95C;
    case 108u: goto L_0052D998;
    case 109u: goto L_0052D9D8;
    case 110u: goto L_0052DA04;
    case 111u: goto L_0052DA1C;
    case 112u: goto L_0052DA50;
    case 113u: goto L_0052DA80;
    case 114u: goto L_0052DAA8;
    case 115u: goto L_0052DB20;
    case 116u: goto L_0052DB7C;
    case 117u: goto L_0052DBAC;
    case 118u: goto L_0052DBC4;
    case 119u: goto L_0052DBEC;
    case 120u: goto L_0052DC14;
    case 121u: goto L_0052DC38;
    case 122u: goto L_0052DCB0;
    case 123u: goto L_0052DCC0;
    case 124u: goto L_0052DD10;
    case 125u: goto L_0052DD34;
    case 126u: goto L_0052DD80;
    case 127u: goto L_0052DDB0;
    case 128u: goto L_0052DDD8;
    case 129u: goto L_0052DE00;
    case 130u: goto L_0052DE20;
    case 131u: goto L_0052DE5C;
    case 132u: goto L_0052DEB4;
    case 133u: goto L_0052DED4;
    case 134u: goto L_0052DF20;
    case 135u: goto L_0052DF64;
    case 136u: goto L_0052DF94;
    case 137u: goto L_0052DFC0;
    case 138u: goto L_0052DFE8;
    case 139u: goto L_0052E000;
    case 140u: goto L_0052E070;
    case 141u: goto L_0052E080;
    case 142u: goto L_0052E0A4;
    case 143u: goto L_0052E0D0;
    case 144u: goto L_0052E0E0;
    case 145u: goto L_0052E0F0;
    case 146u: goto L_0052E14C;
    case 147u: goto L_0052E15C;
    case 148u: goto L_0052E184;
    case 149u: goto L_0052E1C0;
    case 150u: goto L_0052E1DC;
    case 151u: goto L_0052E1F4;
    case 152u: goto L_0052E210;
    case 153u: goto L_0052E240;
    case 154u: goto L_0052E254;
    case 155u: goto L_0052E270;
    case 156u: goto L_0052E290;
    case 157u: goto L_0052E2EC;
    case 158u: goto L_0052E300;
    case 159u: goto L_0052E318;
    case 160u: goto L_0052E338;
    case 161u: goto L_0052E360;
    case 162u: goto L_0052E37C;
    case 163u: goto L_0052E390;
    case 164u: goto L_0052E3A4;
    case 165u: goto L_0052E3AC;
    case 166u: goto L_0052E3E0;
    case 167u: goto L_0052E3F0;
    case 168u: goto L_0052E400;
    case 169u: goto L_0052E428;
    case 170u: goto L_0052E440;
    case 171u: goto L_0052E4AC;
    case 172u: goto L_0052E4BC;
    case 173u: goto L_0052E4F0;
    case 174u: goto L_0052E500;
    case 175u: goto L_0052E524;
    case 176u: goto L_0052E550;
    case 177u: goto L_0052E5A8;
    case 178u: goto L_0052E638;
    case 179u: goto L_0052E670;
    case 180u: goto L_0052E6EC;
    case 181u: goto L_0052E700;
    case 182u: goto L_0052E72C;
    case 183u: goto L_0052E770;
    case 184u: goto L_0052E79C;
    case 185u: goto L_0052E7E0;
    case 186u: goto L_0052E80C;
    case 187u: goto L_0052E850;
    case 188u: goto L_0052E880;
    case 189u: goto L_0052E8B0;
    case 190u: goto L_0052E8E0;
    case 191u: goto L_0052E910;
    case 192u: goto L_0052E940;
    case 193u: goto L_0052E970;
    case 194u: goto L_0052E9C4;
    case 195u: goto L_0052EB4C;
    case 196u: goto L_0052EB90;
    case 197u: goto L_0052EBE4;
    case 198u: goto L_0052ECE0;
    case 199u: goto L_0052ED20;
    case 200u: goto L_0052ED6C;
    case 201u: goto L_0052EDF4;
    case 202u: goto L_0052EE18;
    case 203u: goto L_0052EE9C;
    case 204u: goto L_0052EEC4;
    case 205u: goto L_0052EF3C;
    case 206u: goto L_0052EF88;
    case 207u: goto L_0052EFB0;
    case 208u: goto L_0052EFD0;
    case 209u: goto L_0052EFF0;
    case 210u: goto L_0052F010;
    case 211u: goto L_0052F020;
    case 212u: goto L_0052F058;
    case 213u: goto L_0052F09C;
    case 214u: goto L_0052F0A8;
    case 215u: goto L_0052F0F0;
    case 216u: goto L_0052F134;
    case 217u: goto L_0052F140;
    case 218u: goto L_0052F188;
    case 219u: goto L_0052F1CC;
    case 220u: goto L_0052F1D8;
    case 221u: goto L_0052F220;
    case 222u: goto L_0052F240;
    case 223u: goto L_0052F290;
    case 224u: goto L_0052F2E0;
    case 225u: goto L_0052F2F8;
    case 226u: goto L_0052F328;
    case 227u: goto L_0052F340;
    case 228u: goto L_0052F358;
    case 229u: goto L_0052F388;
    case 230u: goto L_0052F3A0;
    case 231u: goto L_0052F3D8;
    case 232u: goto L_0052F418;
    case 233u: goto L_0052F440;
    case 234u: goto L_0052F460;
    case 235u: goto L_0052F494;
    case 236u: goto L_0052F4B0;
    case 237u: goto L_0052F4C8;
    case 238u: goto L_0052F4F8;
    case 239u: goto L_0052F510;
    case 240u: goto L_0052F538;
    case 241u: goto L_0052F560;
    case 242u: goto L_0052F580;
    case 243u: goto L_0052F598;
    case 244u: goto L_0052F5C8;
    case 245u: goto L_0052F5E0;
    case 246u: goto L_0052F600;
    case 247u: goto L_0052F634;
    case 248u: goto L_0052F650;
    case 249u: goto L_0052F670;
    case 250u: goto L_0052F6A4;
    case 251u: goto L_0052F6C0;
    case 252u: goto L_0052F6E0;
    case 253u: goto L_0052F714;
    case 254u: goto L_0052F730;
    case 255u: goto L_0052F750;
    case 256u: goto L_0052F784;
    case 257u: goto L_0052F7A0;
    case 258u: goto L_0052F7D0;
    case 259u: goto L_0052F80C;
    case 260u: goto L_0052F830;
    case 261u: goto L_0052F860;
    case 262u: goto L_0052F89C;
    case 263u: goto L_0052F8C0;
    case 264u: goto L_0052F8D0;
    case 265u: goto L_0052F8F0;
    case 266u: goto L_0052F900;
    case 267u: goto L_0052F910;
    case 268u: goto L_0052F920;
    case 269u: goto L_0052F95C;
    case 270u: goto L_0052F978;
    case 271u: goto L_0052F998;
    case 272u: goto L_0052F9E0;
    case 273u: goto L_0052FA04;
    case 274u: goto L_0052FA20;
    case 275u: goto L_0052FA34;
    case 276u: goto L_0052FA70;
    case 277u: goto L_0052FA94;
    case 278u: goto L_0052FAB0;
    case 279u: goto L_0052FAC4;
    case 280u: goto L_0052FB00;
    case 281u: goto L_0052FB34;
    case 282u: goto L_0052FB50;
    case 283u: goto L_0052FB6C;
    case 284u: goto L_0052FBB0;
    case 285u: goto L_0052FBDC;
    case 286u: goto L_0052FBF8;
    case 287u: goto L_0052FC10;
    case 288u: goto L_0052FC50;
    case 289u: goto L_0052FC84;
    case 290u: goto L_0052FCA0;
    case 291u: goto L_0052FCBC;
    case 292u: goto L_0052FD00;
    case 293u: goto L_0052FD3C;
    case 294u: goto L_0052FD58;
    case 295u: goto L_0052FD78;
    case 296u: goto L_0052FDC0;
    case 297u: goto L_0052FDF0;
    case 298u: goto L_0052FE14;
    case 299u: goto L_0052FE24;
    case 300u: goto L_0052FE48;
    case 301u: goto L_0052FE74;
    case 302u: goto L_0052FE90;
    case 303u: goto L_0052FEF8;
    case 304u: goto L_0052FF38;
    case 305u: goto L_0052FF40;
    case 306u: goto L_0052FF48;
    case 307u: goto L_0052FF50;
    case 308u: goto L_0052FF58;
    case 309u: goto L_0052FF60;
    case 310u: goto L_0052FF68;
    case 311u: goto L_0052FF70;
    case 312u: goto L_0052FF78;
    case 313u: goto L_0052FF80;
    case 314u: goto L_0052FFA0;
    default: bad_entry(c, 0x0052C000u); return;
    }
L_0052C000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0052C010:
    st32((c.r[4].w[0] + 404u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), 0u);  c.pc = t; return; }
L_0052C020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 416u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0052C050; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C040u); set32(c.r[4], ld32((c.r[3].w[0] + 420u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C040u) [[unlikely]] return; }
L_0052C040:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052C07C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0052C080; } }
L_0052C050:
    set32(c.r[2], ld32((c.r[28].w[0] - 21904u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052C078; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C068u); set32(c.r[4], ld32((c.r[3].w[0] + 420u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C068u) [[unlikely]] return; }
L_0052C068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052C078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052C07C; } }
L_0052C078:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052C07C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0052C080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052C090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 412u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052C0BC; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 420u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C0B4u); set32(c.r[8], ld32((c.r[8].w[0] + 424u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C0B4u) [[unlikely]] return; }
L_0052C0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0052C0D8; } }
L_0052C0BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 21908u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0052C0D4; } }
    set32(c.r[4], ld32((c.r[8].w[0] + 420u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C0D4u); set32(c.r[8], ld32((c.r[8].w[0] + 424u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C0D4u) [[unlikely]] return; }
L_0052C0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0052C0D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052C0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 408u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0052C108; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C100u); set32(c.r[4], ld32((c.r[3].w[0] + 420u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C100u) [[unlikely]] return; }
L_0052C100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0052C124; } }
L_0052C108:
    set32(c.r[2], ld32((c.r[28].w[0] - 21912u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052C120; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C120u); set32(c.r[4], ld32((c.r[3].w[0] + 420u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C120u) [[unlikely]] return; }
L_0052C120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0052C124:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052C130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 404u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052C16C; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 384u)));
    set32(c.r[7], c.r[8].w[0] + 420u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    set32(c.r[8], c.r[8].w[0] + 424u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C164u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C164u) [[unlikely]] return; }
L_0052C164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0052C198; } }
L_0052C16C:
    set32(c.r[3], ld32((c.r[28].w[0] - 21916u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0052C194; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 384u)));
    set32(c.r[7], c.r[8].w[0] + 420u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    set32(c.r[8], c.r[8].w[0] + 424u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C194u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C194u) [[unlikely]] return; }
L_0052C194:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0052C198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052C1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0052C214; } }
    set32(c.r[4], c.r[17].w[0] + 3024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C1C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0110(c, 187u, depth + 1u); else { c.pc = 0x00543680u; return; } if (c.pc != 0x0052C1C8u) [[unlikely]] return; }
L_0052C1C8:
    set32(c.r[2], c.r[17].w[0] + 2660u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 2320u);  goto L_0052C1E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 19584u);
    st32((c.r[17].w[0] + 2948u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 2320u);
    c.budget -= 4;
L_0052C1E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0052C200; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C1FCu); set32(c.r[5], c.r[5].w[0] - 22384u);  if (depth < kMaxDepth) unit_010B(c, 91u, depth + 1u); else { c.pc = 0x0052D5D0u; return; } if (c.pc != 0x0052C1FCu) [[unlikely]] return; }
L_0052C1FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0052C200:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0052C218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C214u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0052C214u) [[unlikely]] return; }
L_0052C214:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0052C218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0052C230:
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), 0u);  c.pc = t; return; }
L_0052C290:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0052C2FC; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C2F4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052C2F4u) [[unlikely]] return; }
L_0052C2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0052C798; } }
L_0052C2FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 316u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 316u)));  goto L_0052C328; }
    set32(c.r[4], c.r[19].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C314u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0052C314u) [[unlikely]] return; }
L_0052C314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052C324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052C794; } }
L_0052C324:
    set32(c.r[4], ld32((c.r[19].w[0] + 316u)));
    c.budget -= 1;
L_0052C328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C330u);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x0052C330u) [[unlikely]] return; }
L_0052C330:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 28u)));  goto L_0052C348; }
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 16u);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
L_0052C348:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 308u)));
    c.budget -= 17;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 320u)));  goto L_0052C3B0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C3A4u); c.r[6].d[0] = c.r[20].d[0] & c.r[2].d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C3A4u) [[unlikely]] return; }
L_0052C3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0052C638; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 320u)));
    c.budget -= 1;
L_0052C3B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C3D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 59u, depth + 1u); else { c.pc = 0x0052CC90u; return; } if (c.pc != 0x0052C3D4u) [[unlikely]] return; }
L_0052C3D4:
    set32(c.r[20], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 1u);
    c.r[5].d[0] = c.r[20].d[0] & 7ull;
    set32(c.r[3], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 3));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_0052C478; } }
    set32(c.r[7], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0052C3FC:
    set32(c.r[9], c.r[7].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = ld8((c.r[9].w[0]));
    c.r[7].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052C428; } }
    c.r[7].d[0] = c.r[20].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052C430; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0052C430; } }
L_0052C428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0052C438; } }
L_0052C430:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0052C438:
    c.r[7].d[0] = c.r[20].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052C460; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0052C460; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 32u);  if (t) { goto L_0052C478; } }
    c.budget -= 1;
L_0052C460:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[7].d[0] = c.r[20].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { goto L_0052C478; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0052C478:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052C4A0; } }
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052C4A0; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    c.r[7].d[0] = c.r[20].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052C3FCu | kUnwind; return; } goto L_0052C3FC; }
L_0052C4A0:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[17].d[0]) { set32(c.r[20], 0u - 1u);  goto L_0052C4B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] - c.r[17].w[0]);  if (t) { goto L_0052C4B4; } }
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_0052C4B4:
    c.budget -= 2;
    if (c.r[20].sd[0] < 0) { set32(c.r[20], ld32((c.r[19].w[0] + 300u)));  goto L_0052C4EC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C4D0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 59u, depth + 1u); else { c.pc = 0x0052CC90u; return; } if (c.pc != 0x0052C4D0u) [[unlikely]] return; }
L_0052C4D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[20].w[0]);  if (t) { goto L_0052C638; } }
    set32(c.r[20], ld32((c.r[19].w[0] + 300u)));
    c.budget -= 1;
L_0052C4EC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 1u);
    c.r[5].d[0] = c.r[20].d[0] & 7ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 3));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_0052C590; } }
    set32(c.r[7], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0052C510:
    set32(c.r[9], c.r[7].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = ld8((c.r[9].w[0]));
    c.r[7].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052C540; } }
    c.r[7].d[0] = c.r[20].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052C548; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0052C548; } }
    c.budget -= 1;
L_0052C540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0052C550; } }
L_0052C548:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0052C550:
    c.r[7].d[0] = c.r[20].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052C578; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0052C578; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 32u);  if (t) { goto L_0052C590; } }
    c.budget -= 1;
L_0052C578:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[7].d[0] = c.r[20].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { goto L_0052C590; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0052C590:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052C5B8; } }
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052C5B8; } }
    c.r[7].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052C510u | kUnwind; return; } goto L_0052C510; }
    c.budget -= 1;
L_0052C5B8:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[17].d[0]) { set32(c.r[20], 0u - 1u);  goto L_0052C5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] - c.r[17].w[0]);  if (t) { goto L_0052C5CC; } }
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_0052C5CC:
    c.budget -= 2;
    if (c.r[20].sd[0] < 0) { c.r[16].d[0] = 0ull + 0ull;  goto L_0052C638; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C5E8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 59u, depth + 1u); else { c.pc = 0x0052CC90u; return; } if (c.pc != 0x0052C5E8u) [[unlikely]] return; }
L_0052C5E8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 320u)));  goto L_0052C600; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0052C60C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 320u)));
    c.budget -= 1;
L_0052C600:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0052C60C:
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052C638; } }
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C62Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_010D(c, 282u, depth + 1u); else { c.pc = 0x00537A90u; return; } if (c.pc != 0x0052C62Cu) [[unlikely]] return; }
L_0052C62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052C638; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052C638:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[21].w[0]);  goto L_0052C69C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C648u); set32(c.r[4], ld32((c.r[19].w[0] + 316u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0052C648u) [[unlikely]] return; }
L_0052C648:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052C794; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C670u); set32(c.r[5], c.r[5].w[0] - 22376u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0052C670u) [[unlikely]] return; }
L_0052C670:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C68Cu); set32(c.r[6], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C68Cu) [[unlikely]] return; }
L_0052C68C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052C794; } }
    st32((c.r[16].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_0052C69C:
    set32(c.r[4], c.r[29].w[0] + 412u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C6ACu); st32((c.r[29].w[0] + 412u), 0u);  if (depth < kMaxDepth) unit_0104(c, 255u, depth + 1u); else { c.pc = 0x00512D10u; return; } if (c.pc != 0x0052C6ACu) [[unlikely]] return; }
L_0052C6AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
L_0052C6B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0052C6F0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0052C6E4; }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_0052C6F0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0052C6E4:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052C6B8u | kUnwind; return; } goto L_0052C6B8; } }
L_0052C6F0:
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 288u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 20u)));  goto L_0052C73C; }
    st32((c.r[19].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 2;
L_0052C73C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));  goto L_0052C778; }
    st32((c.r[19].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 320u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 288u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[19].w[0] + 296u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 8;
L_0052C778:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 316u)));  goto L_0052C788; }
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[4], ld32((c.r[19].w[0] + 316u)));
    c.budget -= 2;
L_0052C788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C790u);  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0052C790u) [[unlikely]] return; }
L_0052C790:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0052C794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0052C798:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_0052C7C0:
    c.budget -= 2;
    { set32(c.r[9], 0u + 1u);  goto L_0052C8F0; }
L_0052C7D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 316u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0052C80C; } }
    set32(c.r[4], c.r[18].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C804u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0052C804u) [[unlikely]] return; }
L_0052C804:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0052C8D8; }
L_0052C80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C814u); set32(c.r[4], ld32((c.r[18].w[0] + 316u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x0052C814u) [[unlikely]] return; }
L_0052C814:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_0052C828; }
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 2;
L_0052C828:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 312u)));
    c.budget -= 18;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 8u)));  goto L_0052C88C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C884u); c.r[5].d[0] = c.r[17].d[0] & c.r[2].d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C884u) [[unlikely]] return; }
L_0052C884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 316u)));  if (t) { goto L_0052C8A0; } }
L_0052C88C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C89Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 59u, depth + 1u); else { c.pc = 0x0052CC90u; return; } if (c.pc != 0x0052C89Cu) [[unlikely]] return; }
L_0052C89C:
    set32(c.r[4], ld32((c.r[18].w[0] + 316u)));
    c.budget -= 1;
L_0052C8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C8A8u);  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0052C8A8u) [[unlikely]] return; }
L_0052C8A8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0052C8D4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22368u);
    set32(c.r[7], 0u + 787u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C8D4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052C8D4u) [[unlikely]] return; }
L_0052C8D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0052C8D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052C8F0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 316u)));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0052C964; } }
    set32(c.r[4], c.r[20].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C954u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0052C954u) [[unlikely]] return; }
L_0052C954:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 316u)));  goto L_0052C968; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052CC60; } }
L_0052C964:
    set32(c.r[4], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 1;
L_0052C968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C970u);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x0052C970u) [[unlikely]] return; }
L_0052C970:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 304u)));  goto L_0052C984; }
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.budget -= 2;
L_0052C984:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 320u)));  goto L_0052C9A8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052C9A0u); c.r[5].d[0] = c.r[16].d[0] & c.r[2].d[0];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052C9A0u) [[unlikely]] return; }
L_0052C9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0052CAF0; } }
L_0052C9A8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], ld32((c.r[20].w[0] + 300u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[8], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.r[16].d[0] & 7ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_0052CA58; } }
L_0052C9DC:
    set32(c.r[9], c.r[7].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = ld8((c.r[9].w[0]));
    c.r[7].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052CA08; } }
    c.r[7].d[0] = c.r[16].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052CA10; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0052CA10; } }
L_0052CA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0052CA18; } }
L_0052CA10:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0052CA18:
    c.r[7].d[0] = c.r[16].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0052CA40; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_0052CA40; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { goto L_0052CA58; } }
    c.budget -= 1;
L_0052CA40:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[7].d[0] = c.r[16].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] << 1);  if (t) { goto L_0052CA58; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_0052CA58:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052CA80; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052CA80; } }
    c.r[7].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052C9DCu | kUnwind; return; } goto L_0052C9DC; }
    c.budget -= 1;
L_0052CA80:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[17].d[0]) { set32(c.r[16], 0u - 1u);  goto L_0052CA8C; }
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_0052CA8C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0052CAF0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CAA8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 59u, depth + 1u); else { c.pc = 0x0052CC90u; return; } if (c.pc != 0x0052CAA8u) [[unlikely]] return; }
L_0052CAA8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 320u)));  goto L_0052CAE0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] - 22368u);
    set32(c.r[7], 0u + 652u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CAD8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052CAD8u) [[unlikely]] return; }
L_0052CAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0052CAEC; } }
L_0052CAE0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0052CAEC:
    st32((c.r[18].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_0052CAF0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[18].w[0]), c.r[19].w[0]);  goto L_0052CB50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CB00u); set32(c.r[4], ld32((c.r[20].w[0] + 316u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0052CB00u) [[unlikely]] return; }
L_0052CB00:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052CC60; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CB28u); set32(c.r[5], c.r[5].w[0] - 22376u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0052CB28u) [[unlikely]] return; }
L_0052CB28:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CB44u); set32(c.r[6], c.r[29].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052CB44u) [[unlikely]] return; }
L_0052CB44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052CC60; } }
L_0052CB50:
    set32(c.r[4], c.r[29].w[0] + 428u);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CB60u); st32((c.r[29].w[0] + 428u), 0u);  if (depth < kMaxDepth) unit_0104(c, 255u, depth + 1u); else { c.pc = 0x00512D10u; return; } if (c.pc != 0x0052CB60u) [[unlikely]] return; }
L_0052CB60:
    set32(c.r[3], ld32((c.r[29].w[0] + 428u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
L_0052CB6C:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0052CBA0; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0052CB94; }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_0052CBA0; } }
L_0052CB94:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052CB6Cu | kUnwind; return; } goto L_0052CB6C; } }
L_0052CBA0:
    st32((c.r[18].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 288u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  goto L_0052CBEC; }
    st32((c.r[20].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 2;
L_0052CBEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0] + 8u));  goto L_0052CC28; }
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 320u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[20].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 288u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[20].w[0] + 296u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8u));
    c.budget -= 8;
L_0052CC28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 316u)));  goto L_0052CC54; }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { goto L_0052CC50; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0052CC50; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CC50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0052CC50u) [[unlikely]] return; }
L_0052CC50:
    set32(c.r[4], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 1;
L_0052CC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CC5Cu);  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0052CC5Cu) [[unlikely]] return; }
L_0052CC5C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0052CC60:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_0052CC90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 3));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const bool t = c.r[20].sd[0] >= 0; c.r[16].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_0052CCDC; } }
    set32(c.r[3], c.r[20].w[0] + 7u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0052CCDC:
    c.r[5].d[0] = c.r[20].d[0] & 31ull;
    c.r[17].d[0] = c.r[20].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0052CD04; } }
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[23].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052CD04; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0052CD04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052CD80; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0052CD10:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0052CD38; } }
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[6], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0052CD58; } }
L_0052CD38:
    set32(c.r[5], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[6].d[0] = ~(c.r[5].d[0] | 0ull);
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] + c.r[18].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_0052CD58:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0052CD70; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0052CD70:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052CD10u | kUnwind; return; } goto L_0052CD10; } }
    c.budget -= 1;
L_0052CD80:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 3));  if (t) { goto L_0052CD90; } }
    set32(c.r[3], c.r[16].w[0] + 7u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0052CD90:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[7].d[0] = c.r[16].d[0] & 31ull;  goto L_0052CDC8; }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (t) { goto L_0052CDAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 255u);  if (t) { goto L_0052CDB0; } }
L_0052CDAC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052CDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CDB8u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0052CDB8u) [[unlikely]] return; }
L_0052CDB8:
    set32(c.r[3], c.r[22].w[0] << 3);
    set32(c.r[18], c.r[18].w[0] + c.r[22].w[0]);
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.r[7].d[0] = c.r[16].d[0] & 31ull;
    c.budget -= 4;
L_0052CDC8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0052CE48; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0052CDD4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0052CE00; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[6].w[0] << (c.r[17].w[0] & 31u));
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0052CE20; } }
    c.budget -= 1;
L_0052CE00:
    set32(c.r[3], c.r[6].w[0] << (c.r[17].w[0] & 31u));
    c.r[4].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0052CE20:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0052CE38; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0052CE38:
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052CDD4u | kUnwind; return; } goto L_0052CDD4; } }
    c.budget -= 1;
L_0052CE48:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 300u)));  goto L_0052CF60; }
    set32(c.r[3], ld32((c.r[21].w[0] + 300u)));
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 300u)));  goto L_0052CE68; }
    set32(c.r[3], c.r[20].w[0] + c.r[23].w[0]);
    st32((c.r[21].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 300u)));
    c.budget -= 3;
L_0052CE68:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0052CE78; } }
    set32(c.r[4], c.r[3].w[0] + 7u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 2;
L_0052CE78:
    set32(c.r[9], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[11], c.r[8].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[9].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[4].d[0] = c.r[11].d[0] & c.r[4].d[0];
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_0052CF74; }
    set32(c.r[7], ld32((c.r[21].w[0] + 16u)));
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0052CF28; } }
L_0052CEB0:
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[11].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0052CED8; } }
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0052CEE0; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0052CEE0; } }
L_0052CED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0052CEE8; } }
L_0052CEE0:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 2;
L_0052CEE8:
    c.r[4].d[0] = c.r[3].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0052CF10; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0052CF10; } }
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { goto L_0052CF28; } }
    c.budget -= 1;
L_0052CF10:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] << 1);  if (t) { goto L_0052CF28; } }
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_0052CF28:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] > 0;  if (t) { goto L_0052CF48; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052CF48; } }
    c.r[4].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[6], c.r[9].w[0] + c.r[10].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052CEB0u | kUnwind; return; } goto L_0052CEB0; }
L_0052CF48:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[12].d[0] != c.r[4].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0052CF58; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0052CF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 300u), c.r[3].w[0]);  if (t) { goto L_0052CF70; } }
L_0052CF60:
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052CF70; } }
    st32((c.r[21].w[0] + 300u), c.r[20].w[0]);
    c.budget -= 1;
L_0052CF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0052CF74:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0052CFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0052CFE0; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_0052CFE4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22368u);
    set32(c.r[7], 0u + 314u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052CFE0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052CFE0u) [[unlikely]] return; }
L_0052CFE0:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0052CFE4:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 288u), 0u);
    c.budget -= 8;
L_0052D004:
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 160u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 180u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D004u | kUnwind; return; } goto L_0052D004; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 11136u);
    set32(c.r[4], c.r[4].w[0] - 11152u);
    st32((c.r[16].w[0] + 304u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0] + 308u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 11168u);
    st32((c.r[16].w[0] + 312u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 13;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0052D098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D090u);  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x0052D090u) [[unlikely]] return; }
L_0052D090:
    st32((c.r[16].w[0] + 316u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0052D098:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052D0B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0052D0E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052D220; } }
L_0052D0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D0ECu);  if (depth < kMaxDepth) unit_010B(c, 64u, depth + 1u); else { c.pc = 0x0052CFA0u; return; } if (c.pc != 0x0052D0ECu) [[unlikely]] return; }
L_0052D0EC:
    set32(c.r[2], c.r[16].w[0] - 1u);
    st32((c.r[18].w[0] + 320u), c.r[16].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    set32(c.r[2], 0u - 4u);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 320u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_0052D13C; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_0052D13C:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22368u);
    set32(c.r[7], 0u + 257u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D158u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052D158u) [[unlikely]] return; }
L_0052D158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0052D168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052D220; } }
L_0052D168:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D180u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 59u, depth + 1u); else { c.pc = 0x0052CC90u; return; } if (c.pc != 0x0052D180u) [[unlikely]] return; }
L_0052D180:
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 24u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 288u), 0u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 292u), 0u);
    st32((c.r[18].w[0] + 296u), 0u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 300u), 0u);
    c.budget -= 10;
L_0052D1A8:
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[3].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 164u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 168u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 172u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    st32((c.r[3].w[0] + 176u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 184u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 188u), 0u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D1A8u | kUnwind; return; } goto L_0052D1A8; } }
    st32((c.r[18].w[0] + 304u), 0u);
    set32(c.r[4], c.r[18].w[0] + 316u);
    st32((c.r[18].w[0] + 308u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D210u); st32((c.r[18].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0052D210u) [[unlikely]] return; }
L_0052D210:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052D220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052D220; } }
L_0052D220:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052D240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0052D274; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0052D27C; } }
L_0052D274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052D3B4; } }
L_0052D27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D284u);  if (depth < kMaxDepth) unit_010B(c, 64u, depth + 1u); else { c.pc = 0x0052CFA0u; return; } if (c.pc != 0x0052D284u) [[unlikely]] return; }
L_0052D284:
    set32(c.r[3], c.r[18].w[0] + 255u);
    set32(c.r[2], 0u - 256u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[10], c.r[16].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] - c.r[18].w[0]);
    c.r[3].d[0] = ~(c.r[10].d[0] | 0ull);
    set32(c.r[4], c.r[17].w[0] - c.r[4].w[0]);
    st32((c.r[19].w[0] + 320u), c.r[16].w[0]);
    c.r[9].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[9].w[0] + 7u);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_0052D2BC; } }
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_0052D2BC:
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[16].w[0] - 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = ~(c.r[7].d[0] | 0ull);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    set32(c.r[7], c.r[9].w[0] - c.r[3].w[0]);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    mmi::div(c, 0, c.r[7].w[0], c.r[16].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 320u)));
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D318u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 59u, depth + 1u); else { c.pc = 0x0052CC90u; return; } if (c.pc != 0x0052D318u) [[unlikely]] return; }
L_0052D318:
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0052D328u) [[unlikely]] return; }
L_0052D328:
    st32((c.r[19].w[0] + 20u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 288u), 0u);
    st32((c.r[19].w[0] + 292u), 0u);
    st32((c.r[19].w[0] + 296u), 0u);
    st32((c.r[19].w[0] + 300u), 0u);
    c.budget -= 8;
L_0052D348:
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[3].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 164u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 168u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 172u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    st32((c.r[3].w[0] + 176u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 184u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 188u), 0u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D348u | kUnwind; return; } goto L_0052D348; } }
    set32(c.r[4], c.r[19].w[0] + 316u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D3A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0052D3A4u) [[unlikely]] return; }
L_0052D3A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052D3B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052D3B4; } }
L_0052D3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052D3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11136u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 11152u);
    st32((c.r[4].w[0] + 308u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0] + 312u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 316u), 0u);
    c.budget -= 12;
L_0052D400:
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[3].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 164u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 168u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    st32((c.r[3].w[0] + 172u), 0u);
    st32((c.r[3].w[0] + 44u), 0u);
    st32((c.r[3].w[0] + 176u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 184u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 188u), 0u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D400u | kUnwind; return; } goto L_0052D400; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0052D460:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x005136A0u | kUnwind; return; } [[clang::musttail]] return unit_0104(c, 325u, depth); }
L_0052D470:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x005136B0u | kUnwind; return; } [[clang::musttail]] return unit_0104(c, 326u, depth); }
L_0052D480:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x005136C0u | kUnwind; return; } [[clang::musttail]] return unit_0104(c, 327u, depth); }
L_0052D490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D4B8u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0104(c, 255u, depth + 1u); else { c.pc = 0x00512D10u; return; } if (c.pc != 0x0052D4B8u) [[unlikely]] return; }
L_0052D4B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
L_0052D4C4:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0052D4F8; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0052D4EC; }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_0052D4F8; } }
L_0052D4EC:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D4C4u | kUnwind; return; } goto L_0052D4C4; } }
L_0052D4F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052D530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D558u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0104(c, 255u, depth + 1u); else { c.pc = 0x00512D10u; return; } if (c.pc != 0x0052D558u) [[unlikely]] return; }
L_0052D558:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
L_0052D564:
    set32(c.r[2], ld32((c.r[4].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0052D598; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0052D58C; }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), 0u);  if (t) { goto L_0052D598; } }
L_0052D58C:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D564u | kUnwind; return; } goto L_0052D564; } }
L_0052D598:
    set32(c.r[4], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052D5D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0052D5F8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_0052D5F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0052D62C; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052D628; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D624u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052D624u) [[unlikely]] return; }
L_0052D624:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0052D628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0052D62C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052D640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0052D670; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D66Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052D66Cu) [[unlikely]] return; }
L_0052D66C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0052D670:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052D690:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[22].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052D718; } }
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0052D6E0:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[20].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0052D6F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052D718; } }
L_0052D6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D6F8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x0052D6F8u) [[unlikely]] return; }
L_0052D6F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052D710; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_0052D718; } }
    c.budget -= 1;
L_0052D710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D6E0u | kUnwind; return; } goto L_0052D6E0; } }
L_0052D718:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0052D7E8; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0052D7E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  goto L_0052D760; }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D744u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0052D744u) [[unlikely]] return; }
L_0052D744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052D75C; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0052D7DC; } }
L_0052D75C:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0052D760:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0052D78C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 140u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D784u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052D784u) [[unlikely]] return; }
L_0052D784:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 2;
L_0052D78C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 144u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D7ACu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052D7ACu) [[unlikely]] return; }
L_0052D7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0052D7BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052D7DC; } }
L_0052D7BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D7CCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0052D7CCu) [[unlikely]] return; }
L_0052D7CC:
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0052D7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052D888; } }
L_0052D7E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0052D7E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 44u);
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 495u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D808u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052D808u) [[unlikely]] return; }
L_0052D808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0052D844; } }
    st32((c.r[2].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 13;
L_0052D844:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_0052D854; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052D898; } }
L_0052D854:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D86Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 130u, depth + 1u); else { c.pc = 0x0052DE20u; return; } if (c.pc != 0x0052D86Cu) [[unlikely]] return; }
L_0052D86C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[20].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.budget -= 7;
L_0052D888:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0052D898; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0052D898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0052D8D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[19].d[0] == c.r[23].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0052DAF0; } }
    set32(c.r[22], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0052D90C:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[19].w[0]), c.r[19].w[0]);
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 37u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052DAD0; } }
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0052D940:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[20].d[0];  if (t) { goto L_0052D950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0052D970; } }
L_0052D950:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D95Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x0052D95Cu) [[unlikely]] return; }
L_0052D95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052D970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D940u | kUnwind; return; } goto L_0052D940; } }
    c.budget -= 1;
L_0052D970:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0052DAB0; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[21], ld32((c.r[19].w[0] + 24u)));  if (t) { goto L_0052D9B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D998u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0052D998u) [[unlikely]] return; }
L_0052D998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052D9B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0052DA28; } }
    c.budget -= 1;
L_0052D9B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052D9E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 140u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052D9D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052D9D8u) [[unlikely]] return; }
L_0052D9D8:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 2;
L_0052D9E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 144u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DA04u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052DA04u) [[unlikely]] return; }
L_0052DA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0052DA28; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DA1Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0052DA1Cu) [[unlikely]] return; }
L_0052DA1C:
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0052DA28:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052DA58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 90u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DA50u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DA50u) [[unlikely]] return; }
L_0052DA50:
    st32((c.r[19].w[0] + 20u), 0u);
    c.budget -= 2;
L_0052DA58:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052DA88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 98u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DA80u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DA80u) [[unlikely]] return; }
L_0052DA80:
    st32((c.r[19].w[0] + 24u), 0u);
    c.budget -= 2;
L_0052DA88:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 102u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DAA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DAA8u) [[unlikely]] return; }
L_0052DAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052DAE8; } }
L_0052DAB0:
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[20].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[19].w[0]);  if (t) { goto L_0052DAE8; } }
    c.budget -= 1;
L_0052DAD0:
    set32(c.r[2], ld32((c.r[22].w[0])));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[20].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 6;
L_0052DAE8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[23].d[0]; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052D90Cu | kUnwind; return; } goto L_0052D90C; } }
L_0052DAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0052DB20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[21].sd[0] < 0; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0052DBE0; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[19].w[0])));  goto L_0052DBA8; }
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { goto L_0052DB70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052DB98; } }
L_0052DB70:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] <= 0;  if (t) { goto L_0052DB98; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0052DB7C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[19].d[0]) { set32(c.r[21], c.r[21].w[0] - 1u);  goto L_0052DB8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052DB98; } }
L_0052DB8C:
    c.budget -= 2;
    if (c.r[21].sd[0] > 0) { set32(c.r[16], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052DB7Cu | kUnwind; return; } goto L_0052DB7C; }
    c.budget -= 1;
L_0052DB98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0052DC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 74u);  if (t) { goto L_0052DC8C; } }
L_0052DBA8:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052DBAC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[19].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_0052DBBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 74u);  if (t) { goto L_0052DC8C; } }
L_0052DBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DBC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x0052DBC4u) [[unlikely]] return; }
L_0052DBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052DBD8; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[21].d[0];  if (t) { goto L_0052DC48; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0052DBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052DBACu | kUnwind; return; } goto L_0052DBAC; } }
L_0052DBE0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0052DC10; } }
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0052DBEC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[19].d[0]) { c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));  goto L_0052DBFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 74u);  if (t) { goto L_0052DC8C; } }
L_0052DBFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052DC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052DBECu | kUnwind; return; } goto L_0052DBEC; } }
    c.budget -= 1;
L_0052DC10:
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0052DC14:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[19].d[0]) { c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));  goto L_0052DC24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 74u);  if (t) { goto L_0052DC8C; } }
L_0052DC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052DC40; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DC38u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x0052DC38u) [[unlikely]] return; }
L_0052DC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052DC48; } }
L_0052DC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052DC14u | kUnwind; return; } goto L_0052DC14; } }
L_0052DC48:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052DC8C; }
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0052DC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0052DCB0:
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[4].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0052DCE0; } }
L_0052DCC0:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0052DCD0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0052DCD0:
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052DCC0u | kUnwind; return; } goto L_0052DCC0; } }
    c.budget -= 1;
L_0052DCE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052DCEC; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_0052DCEC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052DCFC; }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0052DCFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0052DD10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[18].d[0];  if (t) { goto L_0052DDE0; } }
L_0052DD34:
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[17].w[0]), c.r[17].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052DD88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 90u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DD80u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DD80u) [[unlikely]] return; }
L_0052DD80:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 2;
L_0052DD88:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052DDB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 98u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DDB0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DDB0u) [[unlikely]] return; }
L_0052DDB0:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 2;
L_0052DDB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 102u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DDD8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DDD8u) [[unlikely]] return; }
L_0052DDD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052DD34u | kUnwind; return; } goto L_0052DD34; } }
L_0052DDE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 186u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DE00u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DE00u) [[unlikely]] return; }
L_0052DE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052DE20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DE5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x0052DE5Cu) [[unlikely]] return; }
L_0052DE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0052DE6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052DEF4; } }
L_0052DE6C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0052DE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] + 1u);  if (t) { goto L_0052DE94; } }
L_0052DE80:
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0052DE98; }
    set32(c.r[16], c.r[18].w[0] + 2u);
    c.budget -= 1;
L_0052DE94:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0052DE98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22352u);
    set32(c.r[7], 0u + 52u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DEB4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0052DEB4u) [[unlikely]] return; }
L_0052DEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0052DEC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052DEF4; } }
L_0052DEC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DED4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0052DED4u) [[unlikely]] return; }
L_0052DED4:
    st32((c.r[20].w[0] + 32u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 12u), c.r[19].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.r[17].w[0]);
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 40u), 0u);
    c.budget -= 8;
L_0052DEF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0052DF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0052DF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052DFA8; } }
L_0052DF34:
    c.r[2].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  goto L_0052DF74; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_0052DF54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0052DFA8; } }
L_0052DF54:
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DF64u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0108(c, 185u, depth + 1u); else { c.pc = 0x00523810u; return; } if (c.pc != 0x0052DF64u) [[unlikely]] return; }
L_0052DF64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052DFA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0052DFAC; } }
L_0052DF74:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = c.r[6].d[0] + 0ull;  goto L_0052DF84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0052DFA8; } }
L_0052DF84:
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DF94u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0108(c, 185u, depth + 1u); else { c.pc = 0x00523810u; return; } if (c.pc != 0x0052DF94u) [[unlikely]] return; }
L_0052DF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052DFA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052DFA8; } }
L_0052DFA4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052DFA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0052DFAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052DFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[6], c.r[6].w[0] - 22320u);
    set32(c.r[7], 0u + 84u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052DFE8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052DFE8u) [[unlikely]] return; }
L_0052DFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052E000:
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20232u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 20304u);
    set32(c.r[6], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[3], c.r[4].w[0] + 120u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 128u), 0u);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), 0u);  c.pc = t; return; }
L_0052E070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0052E080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 224u)));  goto L_0052E0AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E0A4u);  if (depth < kMaxDepth) unit_0108(c, 189u, depth + 1u); else { c.pc = 0x00523AE0u; return; } if (c.pc != 0x0052E0A4u) [[unlikely]] return; }
L_0052E0A4:
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 2;
L_0052E0AC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0052E0D8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22304u);
    set32(c.r[7], 0u + 126u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E0D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052E0D0u) [[unlikely]] return; }
L_0052E0D0:
    st32((c.r[16].w[0] + 224u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0052E0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E0E0u);  if (depth < kMaxDepth) unit_010B(c, 137u, depth + 1u); else { c.pc = 0x0052DFC0u; return; } if (c.pc != 0x0052E0E0u) [[unlikely]] return; }
L_0052E0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052E0F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0052E120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 77u);  if (t) { goto L_0052E224; } }
L_0052E120:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0052E220; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], c.r[6].w[0] - 22304u);
    set32(c.r[7], 0u + 71u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E14Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0052E14Cu) [[unlikely]] return; }
L_0052E14C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 44u), c.r[2].w[0]);  goto L_0052E160; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E15Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 196u, depth + 1u); else { c.pc = 0x00523C50u; return; } if (c.pc != 0x0052E15Cu) [[unlikely]] return; }
L_0052E15C:
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_0052E160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0052E170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052E224; } }
L_0052E170:
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E184u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 194u, depth + 1u); else { c.pc = 0x00523BB0u; return; } if (c.pc != 0x0052E184u) [[unlikely]] return; }
L_0052E184:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));  goto L_0052E194; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0052E228; } }
L_0052E194:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 22304u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[7], 0u + 83u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E1C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0052E1C0u) [[unlikely]] return; }
L_0052E1C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_0052E1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052E224; } }
L_0052E1D0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0052E220; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052E1DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052E1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E1F4u);  if (depth < kMaxDepth) unit_0105(c, 293u, depth + 1u); else { c.pc = 0x00516E20u; return; } if (c.pc != 0x0052E1F4u) [[unlikely]] return; }
L_0052E1F4:
    c.budget -= 1;
L_0052E1F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E210u); set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0108(c, 181u, depth + 1u); else { c.pc = 0x00523750u; return; } if (c.pc != 0x0052E210u) [[unlikely]] return; }
L_0052E210:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 148u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E1DCu | kUnwind; return; } goto L_0052E1DC; } }
L_0052E220:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052E224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0052E228:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052E240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E254u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 139u, depth + 1u); else { c.pc = 0x0052E000u; return; } if (c.pc != 0x0052E254u) [[unlikely]] return; }
L_0052E254:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 68u);
    set32(c.r[2], c.r[2].w[0] - 20288u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E270u); set32(c.r[6], 0u + 156u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0052E270u) [[unlikely]] return; }
L_0052E270:
    st32((c.r[16].w[0] + 224u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052E290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0052E2F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20272u);
    set32(c.r[3], c.r[3].w[0] - 20256u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 512u), c.r[3].w[0]);  if (t) { goto L_0052E2D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 19584u);
    st32((c.r[16].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 3;
L_0052E2D4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0052E2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E2ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0052E2ECu) [[unlikely]] return; }
L_0052E2EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0052E2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052E300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E318u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0110(c, 114u, depth + 1u); else { c.pc = 0x00541F00u; return; } if (c.pc != 0x0052E318u) [[unlikely]] return; }
L_0052E318:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 524u)));  goto L_0052E328; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0052E350; } }
L_0052E328:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052E34C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E338u);  if (depth < kMaxDepth) unit_0104(c, 218u, depth + 1u); else { c.pc = 0x00512800u; return; } if (c.pc != 0x0052E338u) [[unlikely]] return; }
L_0052E338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052E348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052E34C; } }
L_0052E348:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052E34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0052E350:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052E360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 524u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0052E380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E37Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 213u, depth + 1u); else { c.pc = 0x00512780u; return; } if (c.pc != 0x0052E37Cu) [[unlikely]] return; }
L_0052E37C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0052E380:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052E390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E3A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 139u, depth + 1u); else { c.pc = 0x0052E000u; return; } if (c.pc != 0x0052E3A4u) [[unlikely]] return; }
L_0052E3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E3ACu); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0110(c, 136u, depth + 1u); else { c.pc = 0x005421E0u; return; } if (c.pc != 0x0052E3ACu) [[unlikely]] return; }
L_0052E3AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20272u);
    set32(c.r[3], c.r[3].w[0] - 20256u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 512u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 516u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052E3E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E290u | kUnwind; return; } goto L_0052E290; }
L_0052E3F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 224u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E360u | kUnwind; return; } goto L_0052E360; }
L_0052E400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[6], c.r[6].w[0] - 22272u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E428u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052E428u) [[unlikely]] return; }
L_0052E428:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052E440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0052E470; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0052E478; }
L_0052E470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E534; } }
L_0052E478:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 68u)));  goto L_0052E4C8; }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(528ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  if (t) { goto L_0052E494; } }
    set32(c.r[5], 0u + 528u);
    c.budget -= 1;
L_0052E494:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[7], 0u + 1849u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E4ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0052E4ACu) [[unlikely]] return; }
L_0052E4AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_0052E504; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E4BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 163u, depth + 1u); else { c.pc = 0x0052E390u; return; } if (c.pc != 0x0052E4BCu) [[unlikely]] return; }
L_0052E4BC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052E504; } }
L_0052E4C8:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(224ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  if (t) { goto L_0052E4D8; } }
    set32(c.r[5], 0u + 224u);
    c.budget -= 1;
L_0052E4D8:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[7], 0u + 1853u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E4F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0052E4F0u) [[unlikely]] return; }
L_0052E4F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_0052E504; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E500u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 139u, depth + 1u); else { c.pc = 0x0052E000u; return; } if (c.pc != 0x0052E500u) [[unlikely]] return; }
L_0052E500:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0052E504:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0052E518; }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052E534; } }
L_0052E518:
    set32(c.r[4], c.r[19].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E524u); set32(c.r[6], 0u + 156u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0052E524u) [[unlikely]] return; }
L_0052E524:
    set32(c.r[3], ld32((c.r[18].w[0] + 636u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 4;
L_0052E534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052E550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0052E578; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 64u)));  goto L_0052E580; }
L_0052E578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E658; } }
L_0052E580:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(232ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  if (t) { goto L_0052E590; } }
    set32(c.r[5], 0u + 232u);
    c.budget -= 1;
L_0052E590:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[7], 0u + 1340u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E5A8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0052E5A8u) [[unlikely]] return; }
L_0052E5A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0052E61C; } }
    st32((c.r[16].w[0]), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 4u), c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20232u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 29352u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] - 20560u);
    set32(c.r[5], c.r[16].w[0] + 112u);
    set32(c.r[4], c.r[4].w[0] + 6992u);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + 7024u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 7040u);
    st32((c.r[16].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 26;
L_0052E61C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0052E62C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052E658; } }
L_0052E62C:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E638u); set32(c.r[6], 0u + 92u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0052E638u) [[unlikely]] return; }
L_0052E638:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052E658; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] - 6544u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0052E658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052E670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0052E68C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0052E6F0; } }
L_0052E68C:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0052E6F0; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052E6A8; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { goto L_0052E6BC; } }
L_0052E6A8:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], c.r[5].w[0] << 3);  goto L_0052E6CC; }
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0052E6C8; } }
L_0052E6BC:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052E6F0; } }
L_0052E6C8:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.budget -= 1;
L_0052E6CC:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], 0u + 296u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E6ECu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0052E6ECu) [[unlikely]] return; }
L_0052E6EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052E6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0052E700:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[6].w[0]), 0u);  goto L_0052E710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E75C; } }
L_0052E710:
    set32(c.r[2], c.r[4].w[0] + 480u);
    set32(c.r[4], ld32((c.r[4].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0052E724; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 1;
L_0052E724:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0052E758; } }
L_0052E72C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  goto L_0052E740; }
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052E75C; } }
L_0052E740:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_0052E750; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 2;
L_0052E750:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E72Cu | kUnwind; return; } goto L_0052E72C; } }
L_0052E758:
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_0052E75C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0052E770:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[6].w[0]), 0u);  goto L_0052E780; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E7CC; } }
L_0052E780:
    set32(c.r[2], c.r[4].w[0] + 348u);
    set32(c.r[4], ld32((c.r[4].w[0] + 440u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0052E794; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 1;
L_0052E794:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0052E7C8; } }
L_0052E79C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_0052E7B0; }
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052E7CC; } }
L_0052E7B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_0052E7C0; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 2;
L_0052E7C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E79Cu | kUnwind; return; } goto L_0052E79C; } }
L_0052E7C8:
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_0052E7CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0052E7E0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[6].w[0]), 0u);  goto L_0052E7F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E83C; } }
L_0052E7F0:
    set32(c.r[2], c.r[4].w[0] + 256u);
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0052E804; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 1;
L_0052E804:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0052E838; } }
L_0052E80C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  goto L_0052E820; }
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052E83C; } }
L_0052E820:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_0052E830; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 2;
L_0052E830:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E80Cu | kUnwind; return; } goto L_0052E80C; } }
L_0052E838:
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_0052E83C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0052E850:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[5].w[0]), 0u);  goto L_0052E860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E8A4; } }
L_0052E860:
    set32(c.r[3], c.r[4].w[0] + 480u);
    set32(c.r[4], ld32((c.r[4].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052E874; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 1;
L_0052E874:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0052E8A0; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0052E880:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052E898; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 1;
L_0052E898:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E880u | kUnwind; return; } goto L_0052E880; }
L_0052E8A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052E8A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0052E8B0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[5].w[0]), 0u);  goto L_0052E8C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E904; } }
L_0052E8C0:
    set32(c.r[3], c.r[4].w[0] + 348u);
    set32(c.r[4], ld32((c.r[4].w[0] + 440u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052E8D4; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 1;
L_0052E8D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0052E900; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0052E8E0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052E8F8; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 1;
L_0052E8F8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E8E0u | kUnwind; return; } goto L_0052E8E0; }
L_0052E900:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052E904:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0052E910:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st32((c.r[5].w[0]), 0u);  goto L_0052E920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052E964; } }
L_0052E920:
    set32(c.r[3], c.r[4].w[0] + 256u);
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052E934; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 1;
L_0052E934:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0052E960; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0052E940:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0052E958; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 1;
L_0052E958:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052E940u | kUnwind; return; } goto L_0052E940; }
L_0052E960:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052E964:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0052E970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0052E9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052EB74; } }
L_0052E9A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 156u);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[7], 0u + 934u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052E9C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0052E9C4u) [[unlikely]] return; }
L_0052E9C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_0052E9D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052EB74; } }
L_0052E9D4:
    set32(c.r[3], c.r[19].w[0] + 532u);
    set32(c.r[4], c.r[2].w[0] + 52u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[2].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[2].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[2].w[0] + 100u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[2].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[2].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[2].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[2].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[2].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[2].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[2].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[2].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    st32((c.r[2].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[2].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 100u)));
    st32((c.r[2].w[0] + 100u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    st32((c.r[2].w[0] + 104u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 108u)));
    st32((c.r[2].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    st32((c.r[2].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 120u)));
    st32((c.r[2].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 124u)));
    st32((c.r[2].w[0] + 124u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 128u)));
    st32((c.r[2].w[0] + 128u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    st32((c.r[2].w[0] + 132u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 136u)));
    st32((c.r[2].w[0] + 136u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 140u)));
    st32((c.r[2].w[0] + 140u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    st32((c.r[2].w[0] + 144u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 148u)));
    st32((c.r[2].w[0] + 148u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 152u)));
    st32((c.r[2].w[0] + 152u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    st32((c.r[2].w[0] + 116u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    st32((c.r[2].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 536u)));
    st32((c.r[2].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 536u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 84;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0052EB28; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0052EB28:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052EB74; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 532u)));  goto L_0052EB40; }
    set32(c.r[2], c.r[2].w[0] + 52u);
    set32(c.r[4], ld32((c.r[19].w[0] + 532u)));
    c.budget -= 2;
L_0052EB40:
    set32(c.r[3], c.r[19].w[0] + 532u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0052EB68; } }
L_0052EB4C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0052EB5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_0052EB70; } }
L_0052EB5C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052EB4Cu | kUnwind; return; } goto L_0052EB4C; } }
    c.budget -= 1;
L_0052EB68:
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_0052EB70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052EB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052EB90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0052EBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052ED04; } }
L_0052EBC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 92u);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[7], 0u + 658u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052EBE4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0052EBE4u) [[unlikely]] return; }
L_0052EBE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_0052EBF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0052ED04; } }
L_0052EBF4:
    set32(c.r[3], c.r[19].w[0] + 304u);
    set32(c.r[4], c.r[2].w[0] + 48u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[2].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[2].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[2].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[2].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[2].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    st32((c.r[2].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    st32((c.r[2].w[0] + 68u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    st32((c.r[2].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    st32((c.r[2].w[0] + 76u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    st32((c.r[2].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[2].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    st32((c.r[2].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 308u)));
    st32((c.r[2].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 308u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 48;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_0052ECBC; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0052ECBC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0052ED04; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 304u)));  goto L_0052ECD4; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    set32(c.r[4], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 2;
L_0052ECD4:
    set32(c.r[3], c.r[19].w[0] + 304u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0052ECF8; } }
L_0052ECE0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0052ECF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[5].w[0]);  if (t) { goto L_0052ED00; } }
L_0052ECF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052ECE0u | kUnwind; return; } goto L_0052ECE0; } }
L_0052ECF8:
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_0052ED00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052ED04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052ED20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0052EEA4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] + 256u);  goto L_0052EDFC; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 480u);  goto L_0052ED50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052EF90; } }
L_0052ED50:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0052ED64; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 1;
L_0052ED64:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0052ED98; } }
L_0052ED6C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  goto L_0052ED80; }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052ED9C; } }
L_0052ED80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0052ED90; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 2;
L_0052ED90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052ED6Cu | kUnwind; return; } goto L_0052ED6C; } }
L_0052ED98:
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_0052ED9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[3].d[0] << 32;  goto L_0052EDAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0052EFA0; } }
L_0052EDAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + 52u);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[7], 0u + 573u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052EDF4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052EDF4u) [[unlikely]] return; }
L_0052EDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052EF9C; } }
L_0052EDFC:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0052EE10; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 1;
L_0052EE10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0052EE40; } }
L_0052EE18:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  goto L_0052EE2C; }
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052EE44; } }
L_0052EE2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0052EE38; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 1;
L_0052EE38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052EE18u | kUnwind; return; } goto L_0052EE18; } }
L_0052EE40:
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_0052EE44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[3].d[0] << 32;  goto L_0052EE54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052EF9C; } }
L_0052EE54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[3], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[4], c.r[5].w[0] + 48u);
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[7], 0u + 593u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052EE9Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052EE9Cu) [[unlikely]] return; }
L_0052EE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052EF98; } }
L_0052EEA4:
    set32(c.r[2], c.r[4].w[0] + 348u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 440u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0052EEBC; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 1;
L_0052EEBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0052EEF0; } }
L_0052EEC4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  goto L_0052EED8; }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0052EEF4; } }
L_0052EED8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_0052EEE8; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 2;
L_0052EEE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052EEC4u | kUnwind; return; } goto L_0052EEC4; } }
L_0052EEF0:
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_0052EEF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_0052EF04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052EF9C; } }
L_0052EF04:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] << 32;  goto L_0052EF40; }
    set32(c.r[5], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052EF3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[7], 0u + 610u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052EF3Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052EF3Cu) [[unlikely]] return; }
L_0052EF3C:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_0052EF40:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[4], c.r[5].w[0] + 92u);
    set32(c.r[2], ld32((c.r[5].w[0] + 96u)));
    set32(c.r[7], 0u + 621u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052EF88u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052EF88u) [[unlikely]] return; }
L_0052EF88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052EF98; } }
L_0052EF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052EF9C; } }
L_0052EF98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052EF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0052EFA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0052EFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052EFD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0052EFD0u) [[unlikely]] return; }
L_0052EFD0:
    c.r[2].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0052EFE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0052EFF4; } }
L_0052EFE4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052EFF0u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0052EFF0u) [[unlikely]] return; }
L_0052EFF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052EFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0052F010:
    st32((c.r[4].w[0] + 636u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0052F020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 304u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 256u);  if (t) { goto L_0052F04C; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 1;
L_0052F04C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0052F078; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 1;
L_0052F058:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 1u);  if (t) { goto L_0052F070; } }
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 2;
L_0052F070:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052F058u | kUnwind; return; } goto L_0052F058; }
L_0052F078:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0052F08C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0052F228; } }
L_0052F08C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052F0D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0052F09C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F0A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 199u, depth + 1u); else { c.pc = 0x0052ED20u; return; } if (c.pc != 0x0052F0A8u) [[unlikely]] return; }
L_0052F0A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0052F0B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052F224; } }
L_0052F0B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052F09Cu | kUnwind; return; } goto L_0052F09C; }
    c.budget -= 1;
L_0052F0D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 440u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 348u);  if (t) { goto L_0052F0E4; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 1;
L_0052F0E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0052F110; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 1;
L_0052F0F0:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 1u);  if (t) { goto L_0052F108; } }
    set32(c.r[4], c.r[4].w[0] - 92u);
    c.budget -= 2;
L_0052F108:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052F0F0u | kUnwind; return; } goto L_0052F0F0; }
L_0052F110:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0052F124; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052F224; } }
L_0052F124:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052F168; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0052F134:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F140u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 199u, depth + 1u); else { c.pc = 0x0052ED20u; return; } if (c.pc != 0x0052F140u) [[unlikely]] return; }
L_0052F140:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0052F150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052F224; } }
L_0052F150:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052F134u | kUnwind; return; } goto L_0052F134; }
    c.budget -= 1;
L_0052F168:
    set32(c.r[4], ld32((c.r[17].w[0] + 532u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 480u);  if (t) { goto L_0052F17C; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 1;
L_0052F17C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0052F1A8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 1;
L_0052F188:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 1u);  if (t) { goto L_0052F1A0; } }
    set32(c.r[4], c.r[4].w[0] - 52u);
    c.budget -= 2;
L_0052F1A0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052F188u | kUnwind; return; } goto L_0052F188; }
L_0052F1A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0052F1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052F224; } }
L_0052F1BC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052F200; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0052F1CC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F1D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 199u, depth + 1u); else { c.pc = 0x0052ED20u; return; } if (c.pc != 0x0052F1D8u) [[unlikely]] return; }
L_0052F1D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_0052F1E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052F224; } }
L_0052F1E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0052F1CCu | kUnwind; return; } goto L_0052F1CC; }
    c.budget -= 1;
L_0052F200:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22256u);
    set32(c.r[7], 0u + 142u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F220u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0052F220u) [[unlikely]] return; }
L_0052F220:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0052F224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0052F228:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052F240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 304u);
    set32(c.r[3], c.r[16].w[0] + 440u);
    st32((c.r[4].w[0] + 304u), c.r[5].w[0]);
    set32(c.r[2], c.r[16].w[0] + 532u);
    st32((c.r[4].w[0] + 308u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 312u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 440u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 444u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 448u), 0u);
    st32((c.r[4].w[0] + 532u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 536u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 540u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F290u); st32((c.r[4].w[0] + 636u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0052F290u) [[unlikely]] return; }
L_0052F290:
    set32(c.r[2], c.r[16].w[0] + 440u);
    set32(c.r[4], c.r[16].w[0] + 304u);
    st32((c.r[16].w[0] + 440u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 532u);
    st32((c.r[16].w[0] + 444u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 448u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 304u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 532u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 536u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 540u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052F2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F2F8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F2F8u) [[unlikely]] return; }
L_0052F2F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_0052F308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0052F32C; } }
L_0052F308:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F31C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F328; } }
L_0052F31C:
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F328u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F328u) [[unlikely]] return; }
L_0052F328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0052F32C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0052F340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F358u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F358u) [[unlikely]] return; }
L_0052F358:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_0052F368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0052F38C; } }
L_0052F368:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F37C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F388; } }
L_0052F37C:
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F388u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F388u) [[unlikely]] return; }
L_0052F388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0052F38C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0052F3A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F3D8u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F3D8u) [[unlikely]] return; }
L_0052F3D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0052F3E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0052F41C; } }
L_0052F3E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F3FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F418; } }
L_0052F3FC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F418u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F418u) [[unlikely]] return; }
L_0052F418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0052F41C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0052F440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F460u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F460u) [[unlikely]] return; }
L_0052F460:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0052F470; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0052F498; } }
L_0052F470:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F494; } }
L_0052F484:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F494u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F494u) [[unlikely]] return; }
L_0052F494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0052F498:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052F4B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F4C8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F4C8u) [[unlikely]] return; }
L_0052F4C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_0052F4D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0052F4FC; } }
L_0052F4D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F4EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F4F8; } }
L_0052F4EC:
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F4F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F4F8u) [[unlikely]] return; }
L_0052F4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0052F4FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0052F510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F538u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F538u) [[unlikely]] return; }
L_0052F538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_0052F548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0052F564; } }
L_0052F548:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F560u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F560u) [[unlikely]] return; }
L_0052F560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0052F564:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052F580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F598u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F598u) [[unlikely]] return; }
L_0052F598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_0052F5A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0052F5CC; } }
L_0052F5A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F5BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F5C8; } }
L_0052F5BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F5C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F5C8u) [[unlikely]] return; }
L_0052F5C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0052F5CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0052F5E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F600u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F600u) [[unlikely]] return; }
L_0052F600:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0052F610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0052F638; } }
L_0052F610:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F634; } }
L_0052F624:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F634u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F634u) [[unlikely]] return; }
L_0052F634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0052F638:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052F650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F670u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F670u) [[unlikely]] return; }
L_0052F670:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0052F680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0052F6A8; } }
L_0052F680:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F6A4; } }
L_0052F694:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F6A4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F6A4u) [[unlikely]] return; }
L_0052F6A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0052F6A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052F6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F6E0u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F6E0u) [[unlikely]] return; }
L_0052F6E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0052F6F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0052F718; } }
L_0052F6F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F714; } }
L_0052F704:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F714u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F714u) [[unlikely]] return; }
L_0052F714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0052F718:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052F730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F750u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F750u) [[unlikely]] return; }
L_0052F750:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0052F760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0052F788; } }
L_0052F760:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F774; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F784; } }
L_0052F774:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F784u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F784u) [[unlikely]] return; }
L_0052F784:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0052F788:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052F7A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F7D0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F7D0u) [[unlikely]] return; }
L_0052F7D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  goto L_0052F7E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0052F810; } }
L_0052F7E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F80C; } }
L_0052F7F4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F80Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F80Cu) [[unlikely]] return; }
L_0052F80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0052F810:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0052F830:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[5], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F860u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F860u) [[unlikely]] return; }
L_0052F860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_0052F870; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0052F8A0; } }
L_0052F870:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[4].w[0] + 300u)));  goto L_0052F884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_0052F89C; } }
L_0052F884:
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F89Cu); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F89Cu) [[unlikely]] return; }
L_0052F89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0052F8A0:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0052F8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F8D0u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_010D(c, 277u, depth + 1u); else { c.pc = 0x005379C0u; return; } if (c.pc != 0x0052F8D0u) [[unlikely]] return; }
L_0052F8D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  goto L_0052F8E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0052F8F4; } }
L_0052F8E0:
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F8F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F8F0u) [[unlikely]] return; }
L_0052F8F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0052F8F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0052F900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 73u);  c.pc = t; return; }
L_0052F910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0052F920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F95Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_010C(c, 196u, depth + 1u); else { c.pc = 0x00532D20u; return; } if (c.pc != 0x0052F95Cu) [[unlikely]] return; }
L_0052F95C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 160u)));  goto L_0052F96C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0052F9B8; } }
L_0052F96C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0052F9B0; } }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0052F978:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052F998u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052F998u) [[unlikely]] return; }
L_0052F998:
    set32(c.r[2], ld32((c.r[21].w[0] + 160u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052F978u | kUnwind; return; } goto L_0052F978; } }
    c.budget -= 1;
L_0052F9B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 2;
L_0052F9B8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0052F9E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FA04u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_010C(c, 220u, depth + 1u); else { c.pc = 0x00533200u; return; } if (c.pc != 0x0052FA04u) [[unlikely]] return; }
L_0052FA04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 160u)));  goto L_0052FA14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0052FA50; } }
L_0052FA14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052FA48; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0052FA20:
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FA34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FA34u) [[unlikely]] return; }
L_0052FA34:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052FA20u | kUnwind; return; } goto L_0052FA20; } }
L_0052FA48:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0052FA50:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052FA70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FA94u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_010C(c, 224u, depth + 1u); else { c.pc = 0x005332A0u; return; } if (c.pc != 0x0052FA94u) [[unlikely]] return; }
L_0052FA94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 160u)));  goto L_0052FAA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0052FAE0; } }
L_0052FAA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052FAD8; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0052FAB0:
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FAC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FAC4u) [[unlikely]] return; }
L_0052FAC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052FAB0u | kUnwind; return; } goto L_0052FAB0; } }
L_0052FAD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0052FAE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052FB00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FB34u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_010D(c, 138u, depth + 1u); else { c.pc = 0x00535CE0u; return; } if (c.pc != 0x0052FB34u) [[unlikely]] return; }
L_0052FB34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 160u)));  goto L_0052FB44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0052FB88; } }
L_0052FB44:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0052FB80; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0052FB50:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FB6Cu); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FB6Cu) [[unlikely]] return; }
L_0052FB6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052FB50u | kUnwind; return; } goto L_0052FB50; } }
L_0052FB80:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0052FB88:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052FBB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FBDCu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_010D(c, 140u, depth + 1u); else { c.pc = 0x00535DC0u; return; } if (c.pc != 0x0052FBDCu) [[unlikely]] return; }
L_0052FBDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 160u)));  goto L_0052FBEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0052FC30; } }
L_0052FBEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0052FC28; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0052FBF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FC10u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FC10u) [[unlikely]] return; }
L_0052FC10:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052FBF8u | kUnwind; return; } goto L_0052FBF8; } }
    c.budget -= 1;
L_0052FC28:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0052FC30:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052FC50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FC84u); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_010D(c, 142u, depth + 1u); else { c.pc = 0x00535E50u; return; } if (c.pc != 0x0052FC84u) [[unlikely]] return; }
L_0052FC84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 160u)));  goto L_0052FC94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0052FCD8; } }
L_0052FC94:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0052FCD0; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0052FCA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FCBCu); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FCBCu) [[unlikely]] return; }
L_0052FCBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052FCA0u | kUnwind; return; } goto L_0052FCA0; } }
L_0052FCD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0052FCD8:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052FD00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FD3Cu); c.f[20] = c.f[14];  if (depth < kMaxDepth) unit_010D(c, 144u, depth + 1u); else { c.pc = 0x00535F00u; return; } if (c.pc != 0x0052FD3Cu) [[unlikely]] return; }
L_0052FD3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 160u)));  goto L_0052FD4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0052FD98; } }
L_0052FD4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0052FD90; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0052FD58:
    set32(c.r[4], ld32((c.r[19].w[0] + 164u)));
    c.f[12] = c.f[22];
    c.f[13] = c.f[21];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FD78u); c.f[14] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FD78u) [[unlikely]] return; }
L_0052FD78:
    set32(c.r[2], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052FD58u | kUnwind; return; } goto L_0052FD58; } }
    c.budget -= 1;
L_0052FD90:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_0052FD98:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0052FDC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0052FE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FDF0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 114u, depth + 1u); else { c.pc = 0x00538DC0u; return; } if (c.pc != 0x0052FDF0u) [[unlikely]] return; }
L_0052FDF0:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 160u)));  goto L_0052FE18; }
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] - 22232u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FE14u); set32(c.r[4], c.r[2].w[0] + 2320u);  if (depth < kMaxDepth) unit_010B(c, 91u, depth + 1u); else { c.pc = 0x0052D5D0u; return; } if (c.pc != 0x0052FE14u) [[unlikely]] return; }
L_0052FE14:
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 1;
L_0052FE18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0052FE68; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0052FE24:
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0052FE50; } }
    st32((c.r[2].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FE48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FE48u) [[unlikely]] return; }
L_0052FE48:
    st32((c.r[16].w[0] + 164u), 0u);
    c.budget -= 2;
L_0052FE50:
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0052FE24u | kUnwind; return; } goto L_0052FE24; } }
    c.budget -= 1;
L_0052FE68:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FE74u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 148u, depth + 1u); else { c.pc = 0x00535FE0u; return; } if (c.pc != 0x0052FE74u) [[unlikely]] return; }
L_0052FE74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0052FE90:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 284u), c.r[5].w[0]);  if (t) { goto L_0052FED8; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 160u)));  goto L_0052FEE0; }
L_0052FED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { [[clang::musttail]] return unit_010C(c, 47u, depth); } }
L_0052FEE0:
    c.budget -= 2;
    if (c.r[17].sd[0] > 0) { set32(c.r[16], ld32((c.r[20].w[0] + 60u)));  goto L_0052FF00; }
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FEF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0052FEF8u) [[unlikely]] return; }
L_0052FEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { [[clang::musttail]] return unit_010C(c, 48u, depth); } }
L_0052FF00:
    set32(c.r[18], ld32((c.r[20].w[0] + 308u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_010C(c, 5u, depth); } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0052FF80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22128u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0052C000u < 16384u) { entry = entries_010B[(t - 0x0052C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0052FF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0052FF80; } }
L_0052FF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0052FF80; } }
L_0052FF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_0052FF80; } }
L_0052FF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0052FF80; } }
L_0052FF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0052FF80; } }
L_0052FF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052FF80; } }
L_0052FF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052FF80; } }
L_0052FF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052FF80; } }
L_0052FF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0052FF80; } }
L_0052FF80:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0052FFAC; } }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0052FFA0u); c.r[4].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0052FFA0u) [[unlikely]] return; }
L_0052FFA0:
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);  if (t) { [[clang::musttail]] return unit_010C(c, 4u, depth); } }
L_0052FFAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_010C(c, 4u, depth); }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[19].d[0] = c.r[18].d[0] + 0ull;  [[clang::musttail]] return unit_010C(c, 5u, depth); }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[19].d[0] = c.r[18].d[0] + 0ull;  [[clang::musttail]] return unit_010C(c, 5u, depth); }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] << 3);  [[clang::musttail]] return unit_010C(c, 3u, depth); }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38E30000u);  [[clang::musttail]] return unit_010C(c, 2u, depth); }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] << 3);  goto L_0052FFF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::divu(c, 0, c.r[18].w[0], c.r[17].w[0]);  if (t) { [[clang::musttail]] return unit_010C(c, 6u, depth); } }
L_0052FFF8:
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 2;
    [[clang::musttail]] return unit_010C(c, 1u, depth);
}

}
