#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0063[4096] = {
    1, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0063(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0028C000;
    case 2u: goto L_0028C004;
    case 3u: goto L_0028C00C;
    case 4u: goto L_0028C018;
    case 5u: goto L_0028C024;
    case 6u: goto L_0028C030;
    case 7u: goto L_0028C058;
    case 8u: goto L_0028C06C;
    case 9u: goto L_0028C08C;
    case 10u: goto L_0028C098;
    case 11u: goto L_0028C0A4;
    case 12u: goto L_0028C0B0;
    case 13u: goto L_0028C1B0;
    case 14u: goto L_0028C244;
    case 15u: goto L_0028C2D8;
    case 16u: goto L_0028C36C;
    case 17u: goto L_0028C400;
    case 18u: goto L_0028C494;
    case 19u: goto L_0028C528;
    case 20u: goto L_0028C5BC;
    case 21u: goto L_0028C650;
    case 22u: goto L_0028C680;
    case 23u: goto L_0028C6D4;
    case 24u: goto L_0028C70C;
    case 25u: goto L_0028C728;
    case 26u: goto L_0028C734;
    case 27u: goto L_0028C740;
    case 28u: goto L_0028C74C;
    case 29u: goto L_0028C758;
    case 30u: goto L_0028C7B0;
    case 31u: goto L_0028C7D0;
    case 32u: goto L_0028C81C;
    case 33u: goto L_0028C894;
    case 34u: goto L_0028C8C4;
    case 35u: goto L_0028C910;
    case 36u: goto L_0028C940;
    case 37u: goto L_0028C954;
    case 38u: goto L_0028C988;
    case 39u: goto L_0028C99C;
    case 40u: goto L_0028C9B8;
    case 41u: goto L_0028CA1C;
    case 42u: goto L_0028CA54;
    case 43u: goto L_0028CAB8;
    case 44u: goto L_0028CABC;
    case 45u: goto L_0028CAF0;
    case 46u: goto L_0028CB38;
    case 47u: goto L_0028CB54;
    case 48u: goto L_0028CB70;
    case 49u: goto L_0028CB94;
    case 50u: goto L_0028CBA8;
    case 51u: goto L_0028CC20;
    case 52u: goto L_0028CC60;
    case 53u: goto L_0028CC70;
    case 54u: goto L_0028CCB4;
    case 55u: goto L_0028CCD4;
    case 56u: goto L_0028CCF0;
    case 57u: goto L_0028CD10;
    case 58u: goto L_0028CD48;
    case 59u: goto L_0028CD8C;
    case 60u: goto L_0028CD94;
    case 61u: goto L_0028CDE8;
    case 62u: goto L_0028CE00;
    case 63u: goto L_0028CE30;
    case 64u: goto L_0028CE40;
    case 65u: goto L_0028CE60;
    case 66u: goto L_0028CE80;
    case 67u: goto L_0028CEB0;
    case 68u: goto L_0028CEEC;
    case 69u: goto L_0028CF40;
    case 70u: goto L_0028CF6C;
    case 71u: goto L_0028CF80;
    case 72u: goto L_0028CF90;
    case 73u: goto L_0028CFB0;
    case 74u: goto L_0028CFF8;
    case 75u: goto L_0028D00C;
    case 76u: goto L_0028D02C;
    case 77u: goto L_0028D070;
    case 78u: goto L_0028D078;
    case 79u: goto L_0028D0A0;
    case 80u: goto L_0028D0C0;
    case 81u: goto L_0028D110;
    case 82u: goto L_0028D120;
    case 83u: goto L_0028D130;
    case 84u: goto L_0028D144;
    case 85u: goto L_0028D150;
    case 86u: goto L_0028D164;
    case 87u: goto L_0028D180;
    case 88u: goto L_0028D1A0;
    case 89u: goto L_0028D1D8;
    case 90u: goto L_0028D20C;
    case 91u: goto L_0028D22C;
    case 92u: goto L_0028D264;
    case 93u: goto L_0028D2A0;
    case 94u: goto L_0028D2E0;
    case 95u: goto L_0028D304;
    case 96u: goto L_0028D318;
    case 97u: goto L_0028D32C;
    case 98u: goto L_0028D344;
    case 99u: goto L_0028D378;
    case 100u: goto L_0028D39C;
    case 101u: goto L_0028D3D4;
    case 102u: goto L_0028D40C;
    case 103u: goto L_0028D420;
    case 104u: goto L_0028D450;
    case 105u: goto L_0028D460;
    case 106u: goto L_0028D470;
    case 107u: goto L_0028D48C;
    case 108u: goto L_0028D494;
    case 109u: goto L_0028D4A8;
    case 110u: goto L_0028D4B0;
    case 111u: goto L_0028D4C0;
    case 112u: goto L_0028D4C8;
    case 113u: goto L_0028D4F0;
    case 114u: goto L_0028D4FC;
    case 115u: goto L_0028D520;
    case 116u: goto L_0028D53C;
    case 117u: goto L_0028D54C;
    case 118u: goto L_0028D590;
    case 119u: goto L_0028D5A8;
    case 120u: goto L_0028D5F0;
    case 121u: goto L_0028D618;
    case 122u: goto L_0028D648;
    case 123u: goto L_0028D68C;
    case 124u: goto L_0028D6C0;
    case 125u: goto L_0028D6F4;
    case 126u: goto L_0028D718;
    case 127u: goto L_0028D750;
    case 128u: goto L_0028D7B8;
    case 129u: goto L_0028D7F4;
    case 130u: goto L_0028D820;
    case 131u: goto L_0028D84C;
    case 132u: goto L_0028D85C;
    case 133u: goto L_0028D8A0;
    case 134u: goto L_0028D8B8;
    case 135u: goto L_0028D8F8;
    case 136u: goto L_0028D920;
    case 137u: goto L_0028D930;
    case 138u: goto L_0028D970;
    case 139u: goto L_0028D990;
    case 140u: goto L_0028D9E4;
    case 141u: goto L_0028DA30;
    case 142u: goto L_0028DA40;
    case 143u: goto L_0028DA6C;
    case 144u: goto L_0028DA90;
    case 145u: goto L_0028DAC0;
    case 146u: goto L_0028DAF0;
    case 147u: goto L_0028DB0C;
    case 148u: goto L_0028DB30;
    case 149u: goto L_0028DBD0;
    case 150u: goto L_0028DCDC;
    case 151u: goto L_0028DE14;
    case 152u: goto L_0028DEC4;
    case 153u: goto L_0028DED0;
    case 154u: goto L_0028DEE4;
    case 155u: goto L_0028DEEC;
    case 156u: goto L_0028DF80;
    case 157u: goto L_0028DF94;
    case 158u: goto L_0028DF9C;
    case 159u: goto L_0028E030;
    case 160u: goto L_0028E038;
    case 161u: goto L_0028E040;
    case 162u: goto L_0028E0D0;
    case 163u: goto L_0028E0D8;
    case 164u: goto L_0028E0E0;
    case 165u: goto L_0028E180;
    case 166u: goto L_0028E18C;
    case 167u: goto L_0028E194;
    case 168u: goto L_0028E230;
    case 169u: goto L_0028E238;
    case 170u: goto L_0028E240;
    case 171u: goto L_0028E2F0;
    case 172u: goto L_0028E2F8;
    case 173u: goto L_0028E300;
    case 174u: goto L_0028E390;
    case 175u: goto L_0028E3BC;
    case 176u: goto L_0028E3C4;
    case 177u: goto L_0028E414;
    case 178u: goto L_0028E41C;
    case 179u: goto L_0028E470;
    case 180u: goto L_0028E4A0;
    case 181u: goto L_0028E4A8;
    case 182u: goto L_0028E51C;
    case 183u: goto L_0028E530;
    case 184u: goto L_0028E53C;
    case 185u: goto L_0028E544;
    case 186u: goto L_0028E5E0;
    case 187u: goto L_0028E5E8;
    case 188u: goto L_0028E5F0;
    case 189u: goto L_0028E6A0;
    case 190u: goto L_0028E6A8;
    case 191u: goto L_0028E6B0;
    case 192u: goto L_0028E740;
    case 193u: goto L_0028E748;
    case 194u: goto L_0028E750;
    case 195u: goto L_0028E870;
    case 196u: goto L_0028E898;
    case 197u: goto L_0028E8A0;
    case 198u: goto L_0028E8F4;
    case 199u: goto L_0028E8FC;
    case 200u: goto L_0028E940;
    case 201u: goto L_0028E948;
    case 202u: goto L_0028E950;
    case 203u: goto L_0028EA00;
    case 204u: goto L_0028EA0C;
    case 205u: goto L_0028EA14;
    case 206u: goto L_0028EAD0;
    case 207u: goto L_0028EB00;
    case 208u: goto L_0028EB08;
    case 209u: goto L_0028EB7C;
    case 210u: goto L_0028EB90;
    case 211u: goto L_0028EB98;
    case 212u: goto L_0028EBA0;
    case 213u: goto L_0028EC20;
    case 214u: goto L_0028EC2C;
    case 215u: goto L_0028EC34;
    case 216u: goto L_0028ECE0;
    case 217u: goto L_0028ED40;
    case 218u: goto L_0028EDB4;
    case 219u: goto L_0028EDBC;
    case 220u: goto L_0028EE20;
    case 221u: goto L_0028EE4C;
    case 222u: goto L_0028EE54;
    case 223u: goto L_0028EECC;
    case 224u: goto L_0028EED4;
    case 225u: goto L_0028EF20;
    case 226u: goto L_0028EF40;
    case 227u: goto L_0028EFA0;
    case 228u: goto L_0028F014;
    case 229u: goto L_0028F01C;
    case 230u: goto L_0028F080;
    case 231u: goto L_0028F0E8;
    case 232u: goto L_0028F14C;
    case 233u: goto L_0028F154;
    case 234u: goto L_0028F1B0;
    case 235u: goto L_0028F1DC;
    case 236u: goto L_0028F1E4;
    case 237u: goto L_0028F25C;
    case 238u: goto L_0028F264;
    case 239u: goto L_0028F2D0;
    case 240u: goto L_0028F338;
    case 241u: goto L_0028F39C;
    case 242u: goto L_0028F3A4;
    case 243u: goto L_0028F400;
    case 244u: goto L_0028F450;
    case 245u: goto L_0028F464;
    case 246u: goto L_0028F4C8;
    case 247u: goto L_0028F53C;
    case 248u: goto L_0028F544;
    case 249u: goto L_0028F584;
    case 250u: goto L_0028F5C0;
    case 251u: goto L_0028F610;
    case 252u: goto L_0028F624;
    case 253u: goto L_0028F668;
    case 254u: goto L_0028F670;
    case 255u: goto L_0028F6EC;
    case 256u: goto L_0028F6F4;
    case 257u: goto L_0028F760;
    case 258u: goto L_0028F790;
    case 259u: goto L_0028F7D8;
    case 260u: goto L_0028F7EC;
    case 261u: goto L_0028F860;
    case 262u: goto L_0028F8C4;
    case 263u: goto L_0028F8CC;
    case 264u: goto L_0028F90C;
    case 265u: goto L_0028F940;
    case 266u: goto L_0028F990;
    case 267u: goto L_0028F9A4;
    case 268u: goto L_0028F9E8;
    case 269u: goto L_0028F9F0;
    case 270u: goto L_0028FA6C;
    case 271u: goto L_0028FA74;
    case 272u: goto L_0028FAE0;
    case 273u: goto L_0028FB10;
    case 274u: goto L_0028FB20;
    case 275u: goto L_0028FB28;
    case 276u: goto L_0028FB30;
    case 277u: goto L_0028FBE0;
    case 278u: goto L_0028FBF8;
    case 279u: goto L_0028FC00;
    case 280u: goto L_0028FD50;
    case 281u: goto L_0028FD58;
    case 282u: goto L_0028FD60;
    case 283u: goto L_0028FE40;
    case 284u: goto L_0028FE48;
    case 285u: goto L_0028FE50;
    case 286u: goto L_0028FF60;
    case 287u: goto L_0028FF70;
    case 288u: goto L_0028FFA4;
    case 289u: goto L_0028FFAC;
    case 290u: goto L_0028FFD8;
    default: bad_entry(c, 0x0028C000u); return;
    }
L_0028C000:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028C004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C00Cu); set32(c.r[5], c.r[21].w[0] + 20u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C00Cu) [[unlikely]] return; }
L_0028C00C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C018u); set32(c.r[5], c.r[21].w[0] + 24u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C018u) [[unlikely]] return; }
L_0028C018:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C024u); set32(c.r[5], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C024u) [[unlikely]] return; }
L_0028C024:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C030u); set32(c.r[5], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C030u) [[unlikely]] return; }
L_0028C030:
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0028C064; }
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028C060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C058u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028C058u) [[unlikely]] return; }
L_0028C058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CABC; } }
L_0028C060:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028C064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C06Cu); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C06Cu) [[unlikely]] return; }
L_0028C06C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 7456u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 44u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C08Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C08Cu) [[unlikely]] return; }
L_0028C08C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C098u); set32(c.r[5], c.r[29].w[0] + 364u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C098u) [[unlikely]] return; }
L_0028C098:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0A4u); set32(c.r[5], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C0A4u) [[unlikely]] return; }
L_0028C0A4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C0B0u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C0B0u) [[unlikely]] return; }
L_0028C0B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 340u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 64ull;  goto L_0028C714; }
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], 0u + 116u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C5E4; }
    set32(c.r[2], 0u + 115u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C550; }
    set32(c.r[2], 0u + 114u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C4BC; }
    set32(c.r[2], 0u + 113u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C428; }
    set32(c.r[2], 0u + 112u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C394; }
    set32(c.r[2], 0u + 111u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C300; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x35540000u);
    c.r[2].d[0] = c.r[2].d[0] | 22596ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C26C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x33540000u);
    c.r[2].d[0] = c.r[2].d[0] | 22596ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C1D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31540000u);
    c.r[2].d[0] = c.r[2].d[0] | 22596ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028C144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 4u);  if (t) { goto L_0028C678; } }
L_0028C144:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25664u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25665u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25688u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25666u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25668u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25672u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25676u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25680u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25684u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C1B0:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C1B0u | kUnwind; return; } goto L_0028C1B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[21].w[0] + 32u));  if (t) { goto L_0028C68C; } }
L_0028C1D8:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25744u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25745u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25768u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25746u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25748u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25752u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25756u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25760u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25764u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C244:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C244u | kUnwind; return; } goto L_0028C244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C26C:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25824u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25825u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25848u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25826u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25828u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25832u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25836u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25840u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25844u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C2D8:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C2D8u | kUnwind; return; } goto L_0028C2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C300:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26304u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 26305u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 26328u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 26306u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 26308u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 26312u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 26316u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 26320u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 26324u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C36C:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C36Cu | kUnwind; return; } goto L_0028C36C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C394:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26144u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 26145u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 26168u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 26146u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 26148u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 26152u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 26156u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 26160u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 26164u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C400:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C400u | kUnwind; return; } goto L_0028C400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C428:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25984u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25985u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 26008u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25986u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25988u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25992u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25996u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 26000u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 26004u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C494:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C494u | kUnwind; return; } goto L_0028C494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C4BC:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26224u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 26225u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 26248u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 26226u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 26228u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 26232u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 26236u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 26240u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 26244u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C528:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C528u | kUnwind; return; } goto L_0028C528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C550:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 26064u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 26065u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 26088u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 26066u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 26068u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 26072u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 26076u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 26080u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 26084u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C5BC:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C5BCu | kUnwind; return; } goto L_0028C5BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C5E4:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25904u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25905u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25928u);
    set32(c.r[9], c.r[21].w[0] + 56u);
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25906u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25908u)));
    st32((c.r[21].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25912u)));
    st32((c.r[21].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25916u)));
    st32((c.r[21].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25920u)));
    st32((c.r[21].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25924u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 27;
L_0028C650:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C650u | kUnwind; return; } goto L_0028C650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C688; } }
L_0028C678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C680u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028C680u) [[unlikely]] return; }
L_0028C680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CABC; } }
L_0028C688:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 32u));
    c.budget -= 1;
L_0028C68C:
    set32(c.r[6], c.r[21].w[0] + 56u);
    set32(c.r[5], c.r[19].w[0] + 24u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 33u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 34u));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 18;
L_0028C6D4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C6D4u | kUnwind; return; } goto L_0028C6D4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C70Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028C70Cu) [[unlikely]] return; }
L_0028C70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0028C94C; } }
L_0028C714:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 4u);  goto L_0028C938; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C728u); set32(c.r[5], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C728u) [[unlikely]] return; }
L_0028C728:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C734u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C734u) [[unlikely]] return; }
L_0028C734:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C740u); set32(c.r[5], c.r[29].w[0] + 324u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C740u) [[unlikely]] return; }
L_0028C740:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C74Cu); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C74Cu) [[unlikely]] return; }
L_0028C74C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C758u); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C758u) [[unlikely]] return; }
L_0028C758:
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 332u)));  goto L_0028C770; }
    st32((c.r[29].w[0] + 316u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 2;
L_0028C770:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0028C7A0; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028C79C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028C79C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028C7A0; } }
L_0028C79C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0028C7A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 328u)));  goto L_0028C7B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7B0u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028C7B0u) [[unlikely]] return; }
L_0028C7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CABC; } }
L_0028C7B8:
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C7D0u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0071(c, 340u, depth + 1u); else { c.pc = 0x002C7960u; return; } if (c.pc != 0x0028C7D0u) [[unlikely]] return; }
L_0028C7D0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[19].w[0] + 24u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 225u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 226u));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 19;
L_0028C81C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C81Cu | kUnwind; return; } goto L_0028C81C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[6], c.r[19].w[0] + 24u);
    set32(c.r[5], c.r[21].w[0] + 56u);
    set32(c.r[4], 0u + 6u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    st8((c.r[21].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1u));
    st8((c.r[21].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    st8((c.r[21].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[21].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[21].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[21].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 22;
L_0028C894:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C894u | kUnwind; return; } goto L_0028C894; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C8C4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 241u, depth + 1u); else { c.pc = 0x0028A110u; return; } if (c.pc != 0x0028C8C4u) [[unlikely]] return; }
L_0028C8C4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 144u));
    set32(c.r[6], c.r[29].w[0] + 168u);
    set32(c.r[5], c.r[19].w[0] + 24u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 145u));
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 146u));
    st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 19;
L_0028C910:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028C910u | kUnwind; return; } goto L_0028C910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028C948; } }
L_0028C938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C940u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028C940u) [[unlikely]] return; }
L_0028C940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CABC; } }
L_0028C948:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028C94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C954u); set32(c.r[5], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C954u) [[unlikely]] return; }
L_0028C954:
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0028C994; }
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028C990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C988u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028C988u) [[unlikely]] return; }
L_0028C988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CABC; } }
L_0028C990:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028C994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C99Cu); set32(c.r[5], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0028C99Cu) [[unlikely]] return; }
L_0028C99C:
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 512ull;  goto L_0028C9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028C9B8u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028C9B8u) [[unlikely]] return; }
L_0028C9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CABC; } }
L_0028C9C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028CA24; } }
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 4u);  goto L_0028CA14; }
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CA10; } }
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CA10; } }
    c.r[2].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CA10; } }
    c.r[2].d[0] = c.r[4].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CA10; } }
    c.r[2].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028CA24; } }
L_0028CA10:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_0028CA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA1Cu);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028CA1Cu) [[unlikely]] return; }
L_0028CA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028CABC; } }
L_0028CA24:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028CA38; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0028CA3C; } }
L_0028CA38:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0028CA3C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CA54u); set32(c.r[5], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CA54u) [[unlikely]] return; }
L_0028CA54:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    c.r[2].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  goto L_0028CAA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028CAA4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028CAA4; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0028CAB0; } }
L_0028CAA4:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0028CAA8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_0028CAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CAB8u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0028CAB8u) [[unlikely]] return; }
L_0028CAB8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028CABC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0028CAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028CB54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 8304u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0028CB38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0028CB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB38u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0028CB38u) [[unlikely]] return; }
L_0028CB38:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0028CB58; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB54u); set32(c.r[5], 0u + 104u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0028CB54u) [[unlikely]] return; }
L_0028CB54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028CB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028CB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7728u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CB94u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x0028CB94u) [[unlikely]] return; }
L_0028CB94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 8304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CBA8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x0028CBA8u) [[unlikely]] return; }
L_0028CBA8:
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25664u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25665u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25688u);
    set32(c.r[9], c.r[16].w[0] + 56u);
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25666u));
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25668u)));
    st32((c.r[16].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25672u)));
    st32((c.r[16].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25676u)));
    st32((c.r[16].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25680u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25684u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 30;
L_0028CC20:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CC20u | kUnwind; return; } goto L_0028CC20; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028CC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 18320u);  c.pc = t; return; }
L_0028CC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028CCF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8336u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0028CCB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCB4u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 227u, depth + 1u); else { c.pc = 0x00251AD0u; return; } if (c.pc != 0x0028CCB4u) [[unlikely]] return; }
L_0028CCB4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0028CCD8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7136u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCD4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0028CCD4u) [[unlikely]] return; }
L_0028CCD4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0028CCD8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0028CCF4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CCF0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0028CCF0u) [[unlikely]] return; }
L_0028CCF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028CCF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028CD10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028CD5C; } }
L_0028CD48:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0028CD5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CD48u | kUnwind; return; } goto L_0028CD48; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_0028CD74; } }
    breakpoint(c, 0x0028CD70u);
    c.budget -= 1;
L_0028CD74:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_0028CDA8; } }
L_0028CD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CD94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0028CD94u) [[unlikely]] return; }
L_0028CD94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[19].w[0])));  goto L_0028CDA8; }
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0028CDB4; } }
L_0028CDA8:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CD8Cu | kUnwind; return; } goto L_0028CD8C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028CDB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_0028CDC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028CE84; } }
L_0028CDC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028CE84; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0028CDE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_0028CDE8; } }
L_0028CDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CDE8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0028CDE8u) [[unlikely]] return; }
L_0028CDE8:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE00u); set32(c.r[5], c.r[29].w[0] + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CE00u) [[unlikely]] return; }
L_0028CE00:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028CE60; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE30u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0028CE30u) [[unlikely]] return; }
L_0028CE30:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE40u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0028CE40u) [[unlikely]] return; }
L_0028CE40:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028CE60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE60u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0028CE60u) [[unlikely]] return; }
L_0028CE60:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0028CE84; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CE80u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CE80u) [[unlikely]] return; }
L_0028CE80:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0028CE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028CEB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028D01C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028CF00; } }
L_0028CEEC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0028CF00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CEECu | kUnwind; return; } goto L_0028CEEC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);  if (t) { goto L_0028CF18; } }
    breakpoint(c, 0x0028CF14u);
    c.budget -= 1;
L_0028CF18:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0028D0EC; }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0028CF40u) [[unlikely]] return; }
L_0028CF40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[20].w[0])));  goto L_0028CF94; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF6Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CF6Cu) [[unlikely]] return; }
L_0028CF6C:
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CF80u); set32(c.r[4], c.r[17].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CF80u) [[unlikely]] return; }
L_0028CF80:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0028D0E8; } }
L_0028CF90:
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0028CF94:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0028CFCC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0028CFB0u) [[unlikely]] return; }
L_0028CFB0:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028CFCC; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0028CFCC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028CF90u | kUnwind; return; } goto L_0028CF90; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0028D0E8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028CFF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028CFF8u) [[unlikely]] return; }
L_0028CFF8:
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D00Cu); set32(c.r[4], c.r[17].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D00Cu) [[unlikely]] return; }
L_0028D00C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0028D0E8; } }
L_0028D01C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028D040; } }
L_0028D02C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0028D040:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D02Cu | kUnwind; return; } goto L_0028D02C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_0028D058; } }
    breakpoint(c, 0x0028D054u);
    c.budget -= 1;
L_0028D058:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_0028D088; } }
L_0028D070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D078u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0028D078u) [[unlikely]] return; }
L_0028D078:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[20].w[0])));  goto L_0028D088; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.r[19].w[0]);  if (t) { goto L_0028D0E8; } }
L_0028D088:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D070u | kUnwind; return; } goto L_0028D070; }
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0A0u); set32(c.r[4], c.r[17].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D0A0u) [[unlikely]] return; }
L_0028D0A0:
    set32(c.r[25], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D0C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D0C0u) [[unlikely]] return; }
L_0028D0C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 10;
L_0028D0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028D0EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028D110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_0028D120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_0028D130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D144u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 83u, depth + 1u); else { c.pc = 0x002849D0u; return; } if (c.pc != 0x0028D144u) [[unlikely]] return; }
L_0028D144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D150u); set32(c.r[4], ld32((c.r[2].w[0] + 18320u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0028D150u) [[unlikely]] return; }
L_0028D150:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D164u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0028D164u) [[unlikely]] return; }
L_0028D164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D1A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 87u, depth + 1u); else { c.pc = 0x00284A20u; return; } if (c.pc != 0x0028D1A0u) [[unlikely]] return; }
L_0028D1A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0028D1B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D2BC; } }
L_0028D1B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0028D1C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D2BC; } }
L_0028D1C4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028D2BC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028D1F4; } }
L_0028D1D8:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0028D1F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D204; } }
L_0028D1F4:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D1D8u | kUnwind; return; } goto L_0028D1D8; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D2B0; } }
L_0028D20C:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  goto L_0028D220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_0028D294; } }
L_0028D220:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028D240; } }
L_0028D22C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0028D240:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D22Cu | kUnwind; return; } goto L_0028D22C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[4].w[0]);  if (t) { goto L_0028D258; } }
    breakpoint(c, 0x0028D254u);
    c.budget -= 1;
L_0028D258:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 1u);  if (t) { goto L_0028D280; } }
L_0028D264:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0028D280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D290; } }
L_0028D280:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D264u | kUnwind; return; } goto L_0028D264; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D290:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0028D294:
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D2A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D2A0u) [[unlikely]] return; }
L_0028D2A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D2BC; } }
L_0028D2B0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D20Cu | kUnwind; return; } goto L_0028D20C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D2BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028D2E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D304u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284A30u; return; } if (c.pc != 0x0028D304u) [[unlikely]] return; }
L_0028D304:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D318u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D318u) [[unlikely]] return; }
L_0028D318:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D32Cu); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0028D32Cu) [[unlikely]] return; }
L_0028D32C:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0028D42C; }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028D360; } }
L_0028D344:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0028D360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D370; } }
L_0028D360:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D344u | kUnwind; return; } goto L_0028D344; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D420; } }
L_0028D378:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  goto L_0028D390; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0028D404; } }
L_0028D390:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028D3B0; } }
L_0028D39C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_0028D3B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D39Cu | kUnwind; return; } goto L_0028D39C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[6].w[0], c.r[4].w[0]);  if (t) { goto L_0028D3C8; } }
    breakpoint(c, 0x0028D3C4u);
    c.budget -= 1;
L_0028D3C8:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 1u);  if (t) { goto L_0028D3F0; } }
L_0028D3D4:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0028D3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D400; } }
L_0028D3F0:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D3D4u | kUnwind; return; } goto L_0028D3D4; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D400:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0028D404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D40Cu);  if (depth < kMaxDepth) unit_0082(c, 31u, depth + 1u); else { c.pc = 0x003083A0u; return; } if (c.pc != 0x0028D40Cu) [[unlikely]] return; }
L_0028D40C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D420u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D420u) [[unlikely]] return; }
L_0028D420:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D378u | kUnwind; return; } goto L_0028D378; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0028D42C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028D450:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284A40u | kUnwind; return; } [[clang::musttail]] return unit_0061(c, 89u, depth); }
L_0028D460:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00284A50u | kUnwind; return; } [[clang::musttail]] return unit_0061(c, 90u, depth); }
L_0028D470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D48Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 91u, depth + 1u); else { c.pc = 0x00284A60u; return; } if (c.pc != 0x0028D48Cu) [[unlikely]] return; }
L_0028D48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D494u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0028D494u) [[unlikely]] return; }
L_0028D494:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4A8u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0028D4A8u) [[unlikely]] return; }
L_0028D4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_0028D500; } }
L_0028D4B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4C0u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_0082(c, 35u, depth + 1u); else { c.pc = 0x00308430u; return; } if (c.pc != 0x0028D4C0u) [[unlikely]] return; }
L_0028D4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0028D4C8u) [[unlikely]] return; }
L_0028D4C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  goto L_0028D4F4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028D4F0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D4F0u) [[unlikely]] return; }
L_0028D4F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0028D4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D4FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0028D4FCu) [[unlikely]] return; }
L_0028D4FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_0028D500:
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D4B0u | kUnwind; return; } goto L_0028D4B0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0028D520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D53Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0028D53Cu) [[unlikely]] return; }
L_0028D53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028D5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D54Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0028D54Cu) [[unlikely]] return; }
L_0028D54C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 7136u);
    set32(c.r[2], c.r[2].w[0] + 8336u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 240u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 37u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D590u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0028D590u) [[unlikely]] return; }
L_0028D590:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D5A8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0028D5A8u) [[unlikely]] return; }
L_0028D5A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 176u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 144u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 12;
L_0028D5D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028D5F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D618u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x0028D618u) [[unlikely]] return; }
L_0028D618:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[20].w[0], c.r[6].w[0]);  if (t) { goto L_0028D634; } }
    breakpoint(c, 0x0028D630u);
    c.budget -= 1;
L_0028D634:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0028D658; } }
L_0028D648:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0028D658; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0028D660; } }
L_0028D658:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D648u | kUnwind; return; } goto L_0028D648; }
L_0028D660:
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0028D6A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[6].w[0]);  if (t) { goto L_0028D678; } }
    breakpoint(c, 0x0028D674u);
    c.budget -= 1;
L_0028D678:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_0028D69C; } }
L_0028D68C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_0028D69C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_0028D6A4; } }
L_0028D69C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D68Cu | kUnwind; return; } goto L_0028D68C; }
L_0028D6A4:
    st32((c.r[18].w[0] + 28u), c.r[7].w[0]);
    c.budget -= 1;
L_0028D6A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0028D800; }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028D6DC; } }
L_0028D6C0:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0028D6DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D6EC; } }
L_0028D6DC:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D6C0u | kUnwind; return; } goto L_0028D6C0; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D7F4; } }
L_0028D6F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[7], ld32((c.r[20].w[0] + 12u)));  goto L_0028D70C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D77C; } }
L_0028D70C:
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028D72C; } }
L_0028D718:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_0028D72C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = c.r[4].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D718u | kUnwind; return; } goto L_0028D718; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);  if (t) { goto L_0028D744; } }
    breakpoint(c, 0x0028D740u);
    c.budget -= 1;
L_0028D744:
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[4].w[0] + 1u);  if (t) { goto L_0028D76C; } }
L_0028D750:
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_0028D76C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028D77C; } }
L_0028D76C:
    c.r[4].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D750u | kUnwind; return; } goto L_0028D750; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D77C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0028D7F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028D7F4; } }
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);  if (t) { goto L_0028D7A0; } }
    breakpoint(c, 0x0028D79Cu);
    c.budget -= 1;
L_0028D7A0:
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0])));  if (t) { goto L_0028D7CC; } }
L_0028D7B8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[6], ld32((c.r[6].w[0])));  goto L_0028D7CC; }
    set32(c.r[16], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0028D7D8; } }
L_0028D7CC:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D7B8u | kUnwind; return; } goto L_0028D7B8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028D7D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0028D7F4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D7F4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D7F4u) [[unlikely]] return; }
L_0028D7F4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028D6F4u | kUnwind; return; } goto L_0028D6F4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0028D800:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028D820:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D84Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0028D84Cu) [[unlikely]] return; }
L_0028D84C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028D8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D85Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0028D85Cu) [[unlikely]] return; }
L_0028D85C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 7136u);
    set32(c.r[2], c.r[2].w[0] + 8336u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 240u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 37u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8A0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0028D8A0u) [[unlikely]] return; }
L_0028D8A0:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8B8u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0028D8B8u) [[unlikely]] return; }
L_0028D8B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 208u);
    set32(c.r[2], c.r[2].w[0] + 176u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 144u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 12;
L_0028D8E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D8F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 92u, depth + 1u); else { c.pc = 0x00284A70u; return; } if (c.pc != 0x0028D8F8u) [[unlikely]] return; }
L_0028D8F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0028D920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 18368u);  c.pc = t; return; }
L_0028D930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028D954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0028D984; } }
L_0028D954:
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028D984; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 292u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D970u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D970u) [[unlikely]] return; }
L_0028D970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028D980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028D984; } }
L_0028D980:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0028D984:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028D990:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028D9C0; } }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_0028D9C8; }
L_0028D9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028DA98; } }
L_0028D9C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0028D9D4; }
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0028D9D4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028D9E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028D9E4u) [[unlikely]] return; }
L_0028D9E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DA98; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0028DA08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 16u));  if (t) { goto L_0028DA0C; } }
L_0028DA08:
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_0028DA0C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 15u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 20u);  goto L_0028DA28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0028DA94; } }
L_0028DA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0028DA30u) [[unlikely]] return; }
L_0028DA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0028DA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 182u, depth + 1u); else { c.pc = 0x0027EE30u; return; } if (c.pc != 0x0028DA40u) [[unlikely]] return; }
L_0028DA40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 8432u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0028DA4C:
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 12u), c.r[16].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DA6Cu) [[unlikely]] return; }
L_0028DA6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0028DA94; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_0028DA94; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DA90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0028DA90u) [[unlikely]] return; }
L_0028DA90:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028DA94:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0028DA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0028DAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0028DB0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 8432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DAF0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 176u, depth + 1u); else { c.pc = 0x0027ED70u; return; } if (c.pc != 0x0028DAF0u) [[unlikely]] return; }
L_0028DAF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0028DB10; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DB0Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0028DB0Cu) [[unlikely]] return; }
L_0028DB0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0028DB10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0028DB30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 25108u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DC3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25104u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DB88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 25112u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DB88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25105u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028DB94; }
L_0028DB88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DC3C; } }
L_0028DB94:
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 25116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0028DBC0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0028DBC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028DBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028DC3C; } }
L_0028DBC0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 25104u);  if (t) { goto L_0028DC2C; } }
L_0028DBD0:
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DC3C; }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DC20; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DC20; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0028DC2C; }
L_0028DC20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DC3C; } }
L_0028DC2C:
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DBD0u | kUnwind; return; } goto L_0028DBD0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0028DC3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));  goto L_0028DD54; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27188u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DD48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27184u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DC94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27192u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DC94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27185u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028DCA0; }
L_0028DC94:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DD48; } }
L_0028DCA0:
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 27196u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0028DCCC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0028DCCC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028DCCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028DD48; } }
L_0028DCCC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 27184u);  if (t) { goto L_0028DD38; } }
L_0028DCDC:
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DD48; }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DD2C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DD2C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0028DD38; }
L_0028DD2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DD48; } }
L_0028DD38:
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DCDCu | kUnwind; return; } goto L_0028DCDC; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0028DD48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0028DEC4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 1;
L_0028DD54:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_0028DD70; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_0028DE98; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0028DD70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DE94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27348u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DE80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27344u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DDCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 27352u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0028DDCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27345u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0028DDD8; }
L_0028DDCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DE80; } }
L_0028DDD8:
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 27356u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0028DE04; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0028DE04; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0028DE04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028DE80; } }
L_0028DE04:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 27344u);  if (t) { goto L_0028DE70; } }
L_0028DE14:
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0028DE80; }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DE64; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0028DE64; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.r[2].d[0] = ld8((c.r[8].w[0] + 33u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0028DE70; }
L_0028DE64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DE80; } }
L_0028DE70:
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[9].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DE14u | kUnwind; return; } goto L_0028DE14; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0028DE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0028DE94; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028DEC4; } }
L_0028DE94:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_0028DE98:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[6].d[0] = 0ull + 0ull;  goto L_0028DEBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0028DEC4; } }
L_0028DEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028DEC4u);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C67B0u; return; } if (c.pc != 0x0028DEC4u) [[unlikely]] return; }
L_0028DEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028DED0:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_0028DF60; } }
L_0028DEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028DF50; } }
L_0028DEEC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[12].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[8].d[0] = ld32((c.r[9].w[0]));
    c.r[14].d[0] = c.r[14].d[0] >> (c.r[12].w[0] & 63u);
    c.r[24].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[14].d[0] = c.r[14].d[0] << (c.r[11].w[0] & 63u);
    c.r[12].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[15].d[0] = c.r[8].d[0] & c.r[14].d[0];
    c.r[11].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[8].d[0] = ld32((c.r[9].w[0] + 4u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[14].d[0] = c.r[24].d[0] >> (c.r[12].w[0] & 63u);
    c.r[14].d[0] = c.r[14].d[0] << (c.r[11].w[0] & 63u);
    c.r[12].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[8].d[0] & c.r[14].d[0];
    c.r[11].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[8].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[12].d[0] = c.r[13].d[0] >> (c.r[12].w[0] & 63u);
    c.r[11].d[0] = c.r[12].d[0] << (c.r[11].w[0] & 63u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 25;
L_0028DF50:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[14].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DEECu | kUnwind; return; } goto L_0028DEEC; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028DF60:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DEE4u | kUnwind; return; } goto L_0028DEE4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028DF80:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[3].d[0] | 65535ull;  if (t) { goto L_0028E018; } }
L_0028DF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028E008; } }
L_0028DF9C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[12].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[8].d[0] = ld32((c.r[9].w[0]));
    c.r[14].d[0] = c.r[14].d[0] >> (c.r[12].w[0] & 63u);
    c.r[24].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[14].d[0] = c.r[14].d[0] << (c.r[11].w[0] & 63u);
    c.r[12].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[15].d[0] = c.r[8].d[0] & c.r[14].d[0];
    c.r[11].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[8].d[0] = ld32((c.r[9].w[0] + 4u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[14].d[0] = c.r[24].d[0] >> (c.r[12].w[0] & 63u);
    c.r[14].d[0] = c.r[14].d[0] << (c.r[11].w[0] & 63u);
    c.r[12].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[8].d[0] & c.r[14].d[0];
    c.r[11].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[8].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[12].d[0] = c.r[13].d[0] >> (c.r[12].w[0] & 63u);
    c.r[11].d[0] = c.r[12].d[0] << (c.r[11].w[0] & 63u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    st32((c.r[7].w[0]), c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 27;
L_0028E008:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[14].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DF9Cu | kUnwind; return; } goto L_0028DF9C; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028E018:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028DF94u | kUnwind; return; } goto L_0028DF94; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E0B8; } }
L_0028E038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E0A8; } }
L_0028E040:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[13].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[11].d[0] = ld32((c.r[9].w[0]));
    c.r[14].d[0] = c.r[14].d[0] >> (c.r[13].w[0] & 63u);
    c.r[24].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[14].d[0] = c.r[14].d[0] << (c.r[12].w[0] & 63u);
    c.r[13].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[15].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[14].d[0] = c.r[24].d[0] >> (c.r[13].w[0] & 63u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[14].d[0] = c.r[14].d[0] << (c.r[12].w[0] & 63u);
    c.r[13].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> (c.r[13].w[0] & 63u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[12].w[0] & 63u);
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 26;
L_0028E0A8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[14].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E040u | kUnwind; return; } goto L_0028E040; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028E0B8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E038u | kUnwind; return; } goto L_0028E038; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E160; } }
L_0028E0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E150; } }
L_0028E0E0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[13].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[11].d[0] = ld32((c.r[9].w[0]));
    c.r[14].d[0] = c.r[14].d[0] >> (c.r[13].w[0] & 63u);
    c.r[24].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[14].d[0] = c.r[14].d[0] << (c.r[12].w[0] & 63u);
    c.r[13].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[15].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[14].d[0] = c.r[24].d[0] >> (c.r[13].w[0] & 63u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[14].d[0] = c.r[14].d[0] << (c.r[12].w[0] & 63u);
    c.r[13].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[11].d[0] & c.r[14].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> (c.r[13].w[0] & 63u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[12].w[0] & 63u);
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 28;
L_0028E150:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[14].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E0E0u | kUnwind; return; } goto L_0028E0E0; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028E160:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E0D8u | kUnwind; return; } goto L_0028E0D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E180:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 255u);  if (t) { goto L_0028E210; } }
L_0028E18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028E200; } }
L_0028E194:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[13], ld32((c.r[11].w[0])));
    c.r[12].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    set32(c.r[12], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[8], c.r[12].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[14], ld32((c.r[10].w[0])));
    set32(c.r[13], ld32((c.r[11].w[0] + 4u)));
    c.r[12].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 21u));
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    set32(c.r[12], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[8], c.r[12].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[14], ld32((c.r[10].w[0])));
    set32(c.r[13], ld32((c.r[11].w[0] + 8u)));
    c.r[12].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 22u));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    set32(c.r[12], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[8], c.r[12].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 27;
L_0028E200:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[14], ld32((c.r[10].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E194u | kUnwind; return; } goto L_0028E194; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028E210:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E18Cu | kUnwind; return; } goto L_0028E18C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E2D8; } }
L_0028E238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028E2C8; } }
L_0028E240:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[12], ld32((c.r[11].w[0])));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[13], ld32((c.r[10].w[0])));
    set32(c.r[12], ld32((c.r[11].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 21u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[13], ld32((c.r[10].w[0])));
    set32(c.r[12], ld32((c.r[11].w[0] + 8u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 22u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[13], ld32((c.r[10].w[0])));
    set32(c.r[12], ld32((c.r[11].w[0] + 12u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 19u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 23u));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 34;
L_0028E2C8:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[13], ld32((c.r[10].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E240u | kUnwind; return; } goto L_0028E240; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028E2D8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E238u | kUnwind; return; } goto L_0028E238; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E378; } }
L_0028E2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028E368; } }
L_0028E300:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[12], ld32((c.r[11].w[0])));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[13], ld32((c.r[10].w[0])));
    set32(c.r[12], ld32((c.r[11].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 21u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[13], ld32((c.r[10].w[0])));
    set32(c.r[12], ld32((c.r[11].w[0] + 8u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 22u));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 26;
L_0028E368:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[13], ld32((c.r[10].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E300u | kUnwind; return; } goto L_0028E300; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028E378:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E2F8u | kUnwind; return; } goto L_0028E2F8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E390:
    set32(c.r[6], ld32((c.r[11].w[0] + 4u)));
    c.r[3].d[0] = 0ull | 65280ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0028E45C; } }
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_0028E40C; }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 255u);  if (t) { goto L_0028E3F8; } }
L_0028E3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E3E8; } }
L_0028E3C4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 3u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 9;
L_0028E3E8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E3C4u | kUnwind; return; } goto L_0028E3C4; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0028E3F8:
    c.r[3].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E3BCu | kUnwind; return; } goto L_0028E3BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E45C; } }
L_0028E40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 255u);  if (t) { goto L_0028E450; } }
L_0028E414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E440; } }
L_0028E41C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 3u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 9;
L_0028E440:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E41Cu | kUnwind; return; } goto L_0028E41C; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0028E450:
    c.r[3].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E414u | kUnwind; return; } goto L_0028E414; } }
L_0028E45C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull | 65280ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[11].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[8].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0028E520; }
    set32(c.r[8], ld32((c.r[11].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 255u);  goto L_0028E4EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E4D8; } }
L_0028E4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E4C8; } }
L_0028E4A8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 3u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 8;
L_0028E4C8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E4A8u | kUnwind; return; } goto L_0028E4A8; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028E4D8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E4A0u | kUnwind; return; } goto L_0028E4A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E51C; } }
L_0028E4EC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0028E51C; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028E51C; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028E51Cu); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0028E51Cu) [[unlikely]] return; }
L_0028E51C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028E520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028E530:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 255u);  if (t) { goto L_0028E5C0; } }
L_0028E53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028E5B0; } }
L_0028E544:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[13], ld32((c.r[11].w[0])));
    c.r[12].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    set32(c.r[12], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[8], c.r[12].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[14].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[13], ld32((c.r[11].w[0] + 4u)));
    c.r[12].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 21u));
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    set32(c.r[12], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[8], c.r[12].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[14].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[13], ld32((c.r[11].w[0] + 8u)));
    c.r[12].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 22u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[13].d[0] = c.r[14].d[0] & c.r[13].d[0];
    set32(c.r[12], c.r[13].w[0] >> (c.r[12].w[0] & 31u));
    set32(c.r[8], c.r[12].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 27;
L_0028E5B0:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[14].d[0] = ld16((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E544u | kUnwind; return; } goto L_0028E544; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028E5C0:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E53Cu | kUnwind; return; } goto L_0028E53C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E688; } }
L_0028E5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028E678; } }
L_0028E5F0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[12], ld32((c.r[11].w[0])));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[13].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[12], ld32((c.r[11].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 21u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[13].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[12], ld32((c.r[11].w[0] + 8u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 22u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[13].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[12], ld32((c.r[11].w[0] + 12u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 19u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 23u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 34;
L_0028E678:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[13].d[0] = ld16((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E5F0u | kUnwind; return; } goto L_0028E5F0; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028E688:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E5E8u | kUnwind; return; } goto L_0028E5E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E728; } }
L_0028E6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028E718; } }
L_0028E6B0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[12], ld32((c.r[11].w[0])));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[13].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[12], ld32((c.r[11].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 21u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[13].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[12], ld32((c.r[11].w[0] + 8u)));
    c.r[9].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 22u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[9], c.r[12].w[0] >> (c.r[9].w[0] & 31u));
    set32(c.r[8], c.r[9].w[0] << (c.r[8].w[0] & 31u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 26;
L_0028E718:
    c.r[8].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[13].d[0] = ld16((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E6B0u | kUnwind; return; } goto L_0028E6B0; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028E728:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E6A8u | kUnwind; return; } goto L_0028E6A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0028E854; } }
L_0028E748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E844; } }
L_0028E750:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[14], ld32((c.r[11].w[0] + 4u)));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[3].d[0] = ld8((c.r[11].w[0] + 21u));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[15].d[0] = c.r[6].d[0] & c.r[14].d[0];
    set32(c.r[15], c.r[15].w[0] >> (c.r[13].w[0] & 31u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 21u));
    set32(c.r[15], c.r[15].w[0] << (c.r[3].w[0] & 31u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[24].d[0] = c.r[15].d[0] & 255ull;
    c.r[3].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0])));
    c.r[24].d[0] = c.r[24].d[0] << (c.r[13].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[14], c.r[15].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[13], c.r[14].w[0] << (c.r[13].w[0] & 31u));
    c.r[15].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[24].d[0] = c.r[13].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[13].d[0] = ld32((c.r[9].w[0]));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[15].w[0] & 63u);
    c.r[24].d[0] = c.r[24].d[0] << (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0] + 8u)));
    c.r[24].d[0] = c.r[13].d[0] & c.r[24].d[0];
    c.r[14].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 22u));
    c.r[3].d[0] = c.r[24].d[0] | c.r[3].d[0];
    c.r[15].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[14], c.r[15].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[13], c.r[14].w[0] << (c.r[13].w[0] & 31u));
    c.r[15].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[24].d[0] = c.r[13].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[13].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[15].w[0] & 63u);
    c.r[24].d[0] = c.r[24].d[0] << (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0] + 12u)));
    c.r[24].d[0] = c.r[13].d[0] & c.r[24].d[0];
    c.r[14].d[0] = ld8((c.r[11].w[0] + 19u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 23u));
    c.r[3].d[0] = c.r[24].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[6], c.r[6].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[6], c.r[6].w[0] << (c.r[13].w[0] & 31u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[15].d[0] = c.r[6].d[0] & 255ull;
    c.r[13].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[14].d[0] = c.r[15].d[0] >> (c.r[14].w[0] & 63u);
    c.r[13].d[0] = c.r[14].d[0] << (c.r[13].w[0] & 63u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[13].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 61;
L_0028E844:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[10].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E750u | kUnwind; return; } goto L_0028E750; }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_0028E854:
    c.r[3].d[0] = c.r[12].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E748u | kUnwind; return; } goto L_0028E748; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E870:
    set32(c.r[6], ld32((c.r[9].w[0] + 4u)));
    c.r[3].d[0] = 0ull | 65280ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0028E938; } }
    set32(c.r[6], ld32((c.r[9].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 255u);  goto L_0028E8E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E8D0; } }
L_0028E898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E8C0; } }
L_0028E8A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 8;
L_0028E8C0:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E8A0u | kUnwind; return; } goto L_0028E8A0; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028E8D0:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E898u | kUnwind; return; } goto L_0028E898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028E938; } }
L_0028E8E4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0028E938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E92C; } }
L_0028E8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028E91C; } }
L_0028E8FC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 8;
L_0028E91C:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E8FCu | kUnwind; return; } goto L_0028E8FC; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028E92C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E8F4u | kUnwind; return; } goto L_0028E8F4; } }
L_0028E938:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028E940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0028E9E8; } }
L_0028E948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028E9D8; } }
L_0028E950:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[12].d[0] = ld32((c.r[9].w[0]));
    c.r[15].d[0] = c.r[15].d[0] >> (c.r[14].w[0] & 63u);
    c.r[25].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[13].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[24].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[13].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[12].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[15].d[0] = c.r[25].d[0] >> (c.r[14].w[0] & 63u);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[13].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[13].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[12].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[15].d[0] = c.r[24].d[0] | c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> (c.r[14].w[0] & 63u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 3u));
    c.r[6].d[0] = c.r[6].d[0] << (c.r[13].w[0] & 63u);
    c.r[6].d[0] = c.r[12].d[0] & c.r[6].d[0];
    c.r[13].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[6].d[0] | c.r[15].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 12u));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] >> (c.r[13].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[12].w[0] & 63u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 34;
L_0028E9D8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[15].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E950u | kUnwind; return; } goto L_0028E950; }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0028E9E8:
    c.r[3].d[0] = c.r[11].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028E948u | kUnwind; return; } goto L_0028E948; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EA00:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u + 255u);  if (t) { goto L_0028EAB0; } }
L_0028EA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028EAA0; } }
L_0028EA14:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[11].d[0] = ld32((c.r[9].w[0]));
    c.r[15].d[0] = c.r[15].d[0] >> (c.r[14].w[0] & 63u);
    c.r[25].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[12].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[24].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[15].d[0] = c.r[25].d[0] >> (c.r[14].w[0] & 63u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[12].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[15].d[0] = c.r[24].d[0] | c.r[15].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> (c.r[14].w[0] & 63u);
    set32(c.r[10], c.r[10].w[0] + 3u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[12].w[0] & 63u);
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[3].d[0] | c.r[15].d[0];
    c.r[11].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[3].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[12].d[0] = c.r[13].d[0] >> (c.r[12].w[0] & 63u);
    c.r[11].d[0] = c.r[12].d[0] << (c.r[11].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 35;
L_0028EAA0:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[15].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EA14u | kUnwind; return; } goto L_0028EA14; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028EAB0:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EA0Cu | kUnwind; return; } goto L_0028EA0C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EAD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = 0ull | 65280ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[8].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0028EB80; }
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 255u);  goto L_0028EB4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028EB38; } }
L_0028EB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028EB28; } }
L_0028EB08:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] + 3u);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 8;
L_0028EB28:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EB08u | kUnwind; return; } goto L_0028EB08; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028EB38:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EB00u | kUnwind; return; } goto L_0028EB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EB7C; } }
L_0028EB4C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0028EB7C; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0028EB7C; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028EB7Cu); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0028EB7Cu) [[unlikely]] return; }
L_0028EB7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0028EB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0028EB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028EC00; } }
L_0028EB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0028EBF0; } }
L_0028EBA0:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[11].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[6].d[0] = c.r[6].d[0] & 248ull;
    c.r[8].d[0] = c.r[6].d[0] & 65535ull;
    c.r[6].d[0] = c.r[9].d[0] & 252ull;
    set32(c.r[10], c.r[10].w[0] + 3u);
    set32(c.r[9], c.r[8].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[8], c.r[6].w[0] << 3);
    c.r[6].d[0] = c.r[11].d[0] & 248ull;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.r[8].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 20;
L_0028EBF0:
    c.r[6].d[0] = c.r[12].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EBA0u | kUnwind; return; } goto L_0028EBA0; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0028EC00:
    c.r[6].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EB98u | kUnwind; return; } goto L_0028EB98; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EC20:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u + 255u);  if (t) { goto L_0028ECC8; } }
L_0028EC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028ECB8; } }
L_0028EC34:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[11].d[0] = ld32((c.r[9].w[0]));
    c.r[15].d[0] = c.r[15].d[0] >> (c.r[14].w[0] & 63u);
    c.r[25].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[12].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[24].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[15].d[0] = c.r[25].d[0] >> (c.r[14].w[0] & 63u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[12].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[11].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[15].d[0] = c.r[24].d[0] | c.r[15].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> (c.r[14].w[0] & 63u);
    set32(c.r[10], c.r[10].w[0] + 3u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[12].w[0] & 63u);
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[3].d[0] | c.r[15].d[0];
    c.r[11].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[3].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[12].d[0] = c.r[13].d[0] >> (c.r[12].w[0] & 63u);
    c.r[11].d[0] = c.r[12].d[0] << (c.r[11].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 33;
L_0028ECB8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[15].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EC34u | kUnwind; return; } goto L_0028EC34; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028ECC8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EC2Cu | kUnwind; return; } goto L_0028EC2C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028ECE0:
    set32(c.r[29], c.r[29].w[0] - 2192u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[8].w[0] + 20u)));
    c.r[25].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[24].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[15].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[12].d[0] = ld32((c.r[9].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[23].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[30].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[3].d[0] = ld32((c.r[9].w[0] + 12u));
    c.budget -= 24;
L_0028ED40:
    set32(c.r[18], c.r[17].w[0] << 2);
    set32(c.r[9], c.r[17].w[0] << 3);
    set32(c.r[19], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[22].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[18], c.r[9].w[0] + c.r[29].w[0]);
    c.r[21].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[9].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.r[20].d[0] = ld8((c.r[19].w[0] + 2u));
    c.r[22].d[0] = c.r[22].d[0] >> (c.r[14].w[0] & 63u);
    c.r[21].d[0] = c.r[21].d[0] >> (c.r[25].w[0] & 63u);
    c.r[22].d[0] = c.r[22].d[0] << (c.r[13].w[0] & 63u);
    c.r[19].d[0] = ld8((c.r[19].w[0] + 3u));
    c.r[21].d[0] = c.r[21].d[0] << (c.r[24].w[0] & 63u);
    c.r[20].d[0] = c.r[20].d[0] >> (c.r[11].w[0] & 63u);
    c.r[22].d[0] = c.r[12].d[0] & c.r[22].d[0];
    c.r[21].d[0] = c.r[15].d[0] & c.r[21].d[0];
    c.r[20].d[0] = c.r[20].d[0] << (c.r[8].w[0] & 63u);
    c.r[19].d[0] = c.r[19].d[0] >> (c.r[23].w[0] & 63u);
    c.r[21].d[0] = c.r[22].d[0] | c.r[21].d[0];
    c.r[20].d[0] = c.r[6].d[0] & c.r[20].d[0];
    c.r[19].d[0] = c.r[19].d[0] << (c.r[30].w[0] & 63u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    c.r[19].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    c.budget -= 27;
    { const bool t = c.r[9].d[0] != 0ull; st64((c.r[18].w[0] + 144u), c.r[19].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028ED40u | kUnwind; return; } goto L_0028ED40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028EDE8; } }
L_0028EDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028EDD8; } }
L_0028EDBC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 144u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
L_0028EDD8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EDBCu | kUnwind; return; } goto L_0028EDBC; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028EDE8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EDB4u | kUnwind; return; } goto L_0028EDB4; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2192u);  c.pc = t; return; }
L_0028EE20:
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    c.r[6].d[0] = 0ull | 65280ull;
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0028EF34; } }
    set32(c.r[8], ld32((c.r[9].w[0])));
    set32(c.r[6], 0u + 255u);
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[6].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  goto L_0028EEBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0028EEA8; } }
L_0028EE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028EE98; } }
L_0028EE54:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 17;
L_0028EE98:
    c.r[6].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EE54u | kUnwind; return; } goto L_0028EE54; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0028EEA8:
    c.r[6].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EE4Cu | kUnwind; return; } goto L_0028EE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028EF34; } }
L_0028EEBC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0028EF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0028EF28; } }
L_0028EECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028EF18; } }
L_0028EED4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 17;
L_0028EF18:
    c.r[6].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EED4u | kUnwind; return; } goto L_0028EED4; }
    goto L_0028EF24;
L_0028EF20:
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    c.budget -= 1;
L_0028EF24:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0028EF28:
    c.r[6].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EECCu | kUnwind; return; } goto L_0028EECC; } }
L_0028EF34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028EF40:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[8].w[0] + 20u)));
    c.r[25].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[24].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[15].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[12].d[0] = ld32((c.r[9].w[0]));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[23].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[30].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[3].d[0] = ld32((c.r[9].w[0] + 12u));
    c.budget -= 24;
L_0028EFA0:
    set32(c.r[18], c.r[17].w[0] << 2);
    set32(c.r[9], c.r[17].w[0] << 1);
    set32(c.r[19], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[22].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[18], c.r[9].w[0] + c.r[29].w[0]);
    c.r[21].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[9].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.r[20].d[0] = ld8((c.r[19].w[0] + 2u));
    c.r[22].d[0] = c.r[22].d[0] >> (c.r[14].w[0] & 63u);
    c.r[21].d[0] = c.r[21].d[0] >> (c.r[25].w[0] & 63u);
    c.r[22].d[0] = c.r[22].d[0] << (c.r[13].w[0] & 63u);
    c.r[19].d[0] = ld8((c.r[19].w[0] + 3u));
    c.r[21].d[0] = c.r[21].d[0] << (c.r[24].w[0] & 63u);
    c.r[20].d[0] = c.r[20].d[0] >> (c.r[11].w[0] & 63u);
    c.r[22].d[0] = c.r[12].d[0] & c.r[22].d[0];
    c.r[21].d[0] = c.r[15].d[0] & c.r[21].d[0];
    c.r[20].d[0] = c.r[20].d[0] << (c.r[8].w[0] & 63u);
    c.r[19].d[0] = c.r[19].d[0] >> (c.r[23].w[0] & 63u);
    c.r[21].d[0] = c.r[22].d[0] | c.r[21].d[0];
    c.r[20].d[0] = c.r[6].d[0] & c.r[20].d[0];
    c.r[19].d[0] = c.r[19].d[0] << (c.r[30].w[0] & 63u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    c.r[19].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    c.budget -= 27;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[18].w[0] + 144u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028EFA0u | kUnwind; return; } goto L_0028EFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028F048; } }
L_0028F014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028F038; } }
L_0028F01C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 144u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
L_0028F038:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F01Cu | kUnwind; return; } goto L_0028F01C; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028F048:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F014u | kUnwind; return; } goto L_0028F014; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0028F080:
    set32(c.r[29], c.r[29].w[0] - 2160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 255u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[8].w[0] + 20u)));
    c.r[16].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[25].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[24].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[15].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[13].d[0] = ld32((c.r[9].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[8].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[20].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[6].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[3].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[9].d[0] = c.r[19].d[0] >> (c.r[20].w[0] & 63u);
    c.r[6].d[0] = c.r[9].d[0] << (c.r[6].w[0] & 63u);
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 26;
L_0028F0E8:
    set32(c.r[9], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[20], c.r[17].w[0] + c.r[9].w[0]);
    set32(c.r[19], c.r[3].w[0] + c.r[29].w[0]);
    c.r[21].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[9].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.r[21].d[0] = c.r[21].d[0] >> (c.r[15].w[0] & 63u);
    c.r[22].d[0] = c.r[21].d[0] << (c.r[14].w[0] & 63u);
    c.r[20].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[21].d[0] = c.r[3].d[0] >> (c.r[16].w[0] & 63u);
    c.r[21].d[0] = c.r[21].d[0] << (c.r[25].w[0] & 63u);
    c.r[3].d[0] = c.r[13].d[0] & c.r[22].d[0];
    c.r[21].d[0] = c.r[24].d[0] & c.r[21].d[0];
    c.r[20].d[0] = c.r[20].d[0] >> (c.r[12].w[0] & 63u);
    c.r[21].d[0] = c.r[3].d[0] | c.r[21].d[0];
    c.r[3].d[0] = c.r[20].d[0] << (c.r[11].w[0] & 63u);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { const bool t = c.r[9].d[0] != 0ull; st64((c.r[19].w[0] + 112u), c.r[3].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F0E8u | kUnwind; return; } goto L_0028F0E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028F180; } }
L_0028F14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028F170; } }
L_0028F154:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 112u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
L_0028F170:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F154u | kUnwind; return; } goto L_0028F154; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028F180:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F14Cu | kUnwind; return; } goto L_0028F14C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2160u);  c.pc = t; return; }
L_0028F1B0:
    set32(c.r[3], ld32((c.r[8].w[0] + 20u)));
    c.r[6].d[0] = 0ull | 65280ull;
    set32(c.r[8], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0028F2C4; } }
    set32(c.r[8], ld32((c.r[9].w[0])));
    set32(c.r[6], 0u + 255u);
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[6].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  goto L_0028F24C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0028F238; } }
L_0028F1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028F228; } }
L_0028F1E4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 17;
L_0028F228:
    c.r[6].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F1E4u | kUnwind; return; } goto L_0028F1E4; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0028F238:
    c.r[6].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F1DCu | kUnwind; return; } goto L_0028F1DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0028F2C4; } }
L_0028F24C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0028F2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0028F2B8; } }
L_0028F25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028F2A8; } }
L_0028F264:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 1u));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[10].w[0]));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.budget -= 17;
L_0028F2A8:
    c.r[6].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F264u | kUnwind; return; } goto L_0028F264; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0028F2B8:
    c.r[6].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F25Cu | kUnwind; return; } goto L_0028F25C; } }
L_0028F2C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028F2D0:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 255u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[8].w[0] + 20u)));
    c.r[16].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[25].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[24].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[15].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[13].d[0] = ld32((c.r[9].w[0]));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[11].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[8].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[20].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[6].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[3].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[9].d[0] = c.r[19].d[0] >> (c.r[20].w[0] & 63u);
    c.r[6].d[0] = c.r[9].d[0] << (c.r[6].w[0] & 63u);
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.budget -= 26;
L_0028F338:
    set32(c.r[9], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[20], c.r[17].w[0] + c.r[9].w[0]);
    set32(c.r[19], c.r[3].w[0] + c.r[29].w[0]);
    c.r[21].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 1u));
    c.r[9].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.r[21].d[0] = c.r[21].d[0] >> (c.r[15].w[0] & 63u);
    c.r[22].d[0] = c.r[21].d[0] << (c.r[14].w[0] & 63u);
    c.r[20].d[0] = ld8((c.r[20].w[0] + 2u));
    c.r[21].d[0] = c.r[3].d[0] >> (c.r[16].w[0] & 63u);
    c.r[21].d[0] = c.r[21].d[0] << (c.r[25].w[0] & 63u);
    c.r[3].d[0] = c.r[13].d[0] & c.r[22].d[0];
    c.r[21].d[0] = c.r[24].d[0] & c.r[21].d[0];
    c.r[20].d[0] = c.r[20].d[0] >> (c.r[12].w[0] & 63u);
    c.r[21].d[0] = c.r[3].d[0] | c.r[21].d[0];
    c.r[3].d[0] = c.r[20].d[0] << (c.r[11].w[0] & 63u);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { const bool t = c.r[9].d[0] != 0ull; st16((c.r[19].w[0] + 112u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F338u | kUnwind; return; } goto L_0028F338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028F3D0; } }
L_0028F39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028F3C0; } }
L_0028F3A4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 112u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
L_0028F3C0:
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F3A4u | kUnwind; return; } goto L_0028F3A4; }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0028F3D0:
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F39Cu | kUnwind; return; } goto L_0028F39C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_0028F400:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[30], ld32((c.r[8].w[0] + 20u)));
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0028F450u) [[unlikely]] return; }
L_0028F450:
    set32(c.r[3], c.r[19].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028F484; } }
L_0028F464:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 8;
L_0028F484:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F464u | kUnwind; return; } goto L_0028F464; }
    c.r[13].d[0] = ld8((c.r[16].w[0] + 21u));
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].d[0] = ld8((c.r[16].w[0] + 17u));
    c.r[14].d[0] = 0ull + 0ull;
    c.r[11].d[0] = ld32((c.r[16].w[0] + 4u));
    c.r[10].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[8].d[0] = ld32((c.r[16].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 22u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[5].d[0] = ld32((c.r[16].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 23u));
    c.r[23].d[0] = ld8((c.r[16].w[0] + 19u));
    c.r[2].d[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 14;
L_0028F4C8:
    set32(c.r[20], c.r[14].w[0] << 2);
    set32(c.r[16], c.r[14].w[0] << 3);
    set32(c.r[25], c.r[30].w[0] + c.r[20].w[0]);
    set32(c.r[24], c.r[16].w[0] + c.r[29].w[0]);
    c.r[22].d[0] = ld8((c.r[25].w[0]));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[21].d[0] = ld8((c.r[25].w[0] + 1u));
    c.r[16].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[20].d[0] = ld8((c.r[25].w[0] + 2u));
    c.r[22].d[0] = c.r[22].d[0] >> (c.r[10].w[0] & 63u);
    c.r[21].d[0] = c.r[21].d[0] >> (c.r[13].w[0] & 63u);
    c.r[22].d[0] = c.r[22].d[0] << (c.r[9].w[0] & 63u);
    c.r[21].d[0] = c.r[21].d[0] << (c.r[12].w[0] & 63u);
    c.r[20].d[0] = c.r[20].d[0] >> (c.r[7].w[0] & 63u);
    c.r[20].d[0] = c.r[20].d[0] << (c.r[6].w[0] & 63u);
    c.r[25].d[0] = ld8((c.r[25].w[0] + 3u));
    c.r[22].d[0] = c.r[8].d[0] & c.r[22].d[0];
    c.r[21].d[0] = c.r[11].d[0] & c.r[21].d[0];
    c.r[21].d[0] = c.r[22].d[0] | c.r[21].d[0];
    c.r[20].d[0] = c.r[5].d[0] & c.r[20].d[0];
    c.r[22].d[0] = c.r[25].d[0] >> (c.r[3].w[0] & 63u);
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    c.r[21].d[0] = c.r[22].d[0] << (c.r[23].w[0] & 63u);
    c.r[21].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.r[20].d[0] = c.r[21].d[0] | c.r[20].d[0];
    c.budget -= 27;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[24].w[0] + 160u), c.r[20].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F4C8u | kUnwind; return; } goto L_0028F4C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028F570; } }
L_0028F53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028F560; } }
L_0028F544:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 160u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
L_0028F560:
    c.r[2].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[15].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F544u | kUnwind; return; } goto L_0028F544; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0028F570:
    c.r[2].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F53Cu | kUnwind; return; } goto L_0028F53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0028F584u) [[unlikely]] return; }
L_0028F584:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0028F5C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull | 65280ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0028F760; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F610u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0028F610u) [[unlikely]] return; }
L_0028F610:
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028F644; } }
L_0028F624:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 8;
L_0028F644:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F624u | kUnwind; return; } goto L_0028F624; }
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028F6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028F6C4; } }
L_0028F668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028F6B4; } }
L_0028F670:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 3u);
    c.budget -= 17;
L_0028F6B4:
    c.r[3].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F670u | kUnwind; return; } goto L_0028F670; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028F6C4:
    c.r[3].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F668u | kUnwind; return; } goto L_0028F668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028F758; } }
L_0028F6D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0028F754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028F748; } }
L_0028F6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028F738; } }
L_0028F6F4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 3u);
    c.budget -= 17;
L_0028F738:
    c.r[3].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F6F4u | kUnwind; return; } goto L_0028F6F4; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028F748:
    c.r[3].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F6ECu | kUnwind; return; } goto L_0028F6EC; } }
L_0028F754:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028F758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F760u);  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0028F760u) [[unlikely]] return; }
L_0028F760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028F790:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[19].w[0], c.r[20].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[8].w[0] + 20u)));
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F7D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0028F7D8u) [[unlikely]] return; }
L_0028F7D8:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028F80C; } }
L_0028F7EC:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 8;
L_0028F80C:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[21].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F7ECu | kUnwind; return; } goto L_0028F7EC; }
    c.r[13].d[0] = ld8((c.r[17].w[0] + 21u));
    set32(c.r[21], 0u + 255u);
    c.r[12].d[0] = ld8((c.r[17].w[0] + 17u));
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = ld32((c.r[17].w[0] + 4u));
    c.r[14].d[0] = 0ull + 0ull;
    c.r[10].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 16u));
    c.r[8].d[0] = ld32((c.r[17].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 22u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = ld32((c.r[17].w[0] + 8u));
    c.r[22].d[0] = ld8((c.r[17].w[0] + 23u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 19u));
    c.r[2].d[0] = ld32((c.r[17].w[0] + 12u));
    c.r[17].d[0] = c.r[21].d[0] >> (c.r[22].w[0] & 63u);
    c.r[3].d[0] = c.r[17].d[0] << (c.r[3].w[0] & 63u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 18;
L_0028F860:
    set32(c.r[17], c.r[14].w[0] << 2);
    set32(c.r[2], c.r[14].w[0] << 3);
    set32(c.r[24], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[21], c.r[2].w[0] + c.r[29].w[0]);
    c.r[22].d[0] = ld8((c.r[24].w[0]));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[24].w[0] + 1u));
    c.r[17].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[22].d[0] = c.r[22].d[0] >> (c.r[10].w[0] & 63u);
    c.r[24].d[0] = ld8((c.r[24].w[0] + 2u));
    c.r[25].d[0] = c.r[2].d[0] >> (c.r[13].w[0] & 63u);
    c.r[22].d[0] = c.r[22].d[0] << (c.r[9].w[0] & 63u);
    c.r[25].d[0] = c.r[25].d[0] << (c.r[12].w[0] & 63u);
    c.r[2].d[0] = c.r[8].d[0] & c.r[22].d[0];
    c.r[25].d[0] = c.r[11].d[0] & c.r[25].d[0];
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[7].w[0] & 63u);
    c.r[25].d[0] = c.r[2].d[0] | c.r[25].d[0];
    c.r[2].d[0] = c.r[24].d[0] << (c.r[6].w[0] & 63u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[25].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 23;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[21].w[0] + 128u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F860u | kUnwind; return; } goto L_0028F860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028F8F8; } }
L_0028F8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0028F8E8; } }
L_0028F8CC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
L_0028F8E8:
    c.r[2].d[0] = c.r[3].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[15].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F8CCu | kUnwind; return; } goto L_0028F8CC; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0028F8F8:
    c.r[2].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F8C4u | kUnwind; return; } goto L_0028F8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F90Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0028F90Cu) [[unlikely]] return; }
L_0028F90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0028F940:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull | 65280ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[8].w[0] + 20u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0028FAE0; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028F990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0028F990u) [[unlikely]] return; }
L_0028F990:
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0028F9C4; } }
L_0028F9A4:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 8;
L_0028F9C4:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[7].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F9A4u | kUnwind; return; } goto L_0028F9A4; }
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0028FA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028FA44; } }
L_0028F9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028FA34; } }
L_0028F9F0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 3u);
    c.budget -= 17;
L_0028FA34:
    c.r[3].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F9F0u | kUnwind; return; } goto L_0028F9F0; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028FA44:
    c.r[3].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028F9E8u | kUnwind; return; } goto L_0028F9E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028FAD8; } }
L_0028FA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0028FAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0028FAC8; } }
L_0028FA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028FAB8; } }
L_0028FA74:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 3u);
    c.budget -= 17;
L_0028FAB8:
    c.r[3].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FA74u | kUnwind; return; } goto L_0028FA74; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028FAC8:
    c.r[3].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FA6Cu | kUnwind; return; } goto L_0028FA6C; } }
L_0028FAD4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0028FAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0028FAE0u);  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0028FAE0u) [[unlikely]] return; }
L_0028FAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0028FB10:
    c.budget -= 2;
    {  goto L_0028FE40; }
L_0028FB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0028FBC8; } }
L_0028FB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028FBB8; } }
L_0028FB30:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[12].d[0] = ld32((c.r[9].w[0]));
    c.r[15].d[0] = c.r[15].d[0] >> (c.r[14].w[0] & 63u);
    c.r[25].d[0] = ld8((c.r[10].w[0] + 1u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[13].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[24].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[13].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[12].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[15].d[0] = c.r[25].d[0] >> (c.r[14].w[0] & 63u);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 2u));
    c.r[15].d[0] = c.r[15].d[0] << (c.r[13].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[13].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[12].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[15].d[0] = c.r[24].d[0] | c.r[15].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> (c.r[14].w[0] & 63u);
    c.r[3].d[0] = ld8((c.r[10].w[0] + 3u));
    c.r[6].d[0] = c.r[6].d[0] << (c.r[13].w[0] & 63u);
    c.r[6].d[0] = c.r[12].d[0] & c.r[6].d[0];
    c.r[13].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[14].d[0] = c.r[6].d[0] | c.r[15].d[0];
    c.r[12].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 12u));
    set32(c.r[10], c.r[10].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] >> (c.r[13].w[0] & 63u);
    c.r[3].d[0] = c.r[3].d[0] << (c.r[12].w[0] & 63u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 34;
L_0028FBB8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[15].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FB30u | kUnwind; return; } goto L_0028FB30; }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_0028FBC8:
    c.r[3].d[0] = c.r[11].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FB28u | kUnwind; return; } goto L_0028FB28; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028FBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 224u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0028FD2C; } }
L_0028FBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_0028FD1C; } }
L_0028FC00:
    set32(c.r[12], ld32((c.r[11].w[0])));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[6].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    set32(c.r[16], ld32((c.r[11].w[0] + 4u)));
    set32(c.r[12], c.r[12].w[0] >> (c.r[8].w[0] & 31u));
    set32(c.r[24], ld32((c.r[11].w[0] + 8u)));
    set32(c.r[12], c.r[12].w[0] << (c.r[6].w[0] & 31u));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[16].d[0] = c.r[13].d[0] & c.r[16].d[0];
    c.r[6].d[0] = ld8((c.r[11].w[0] + 21u));
    c.r[24].d[0] = c.r[13].d[0] & c.r[24].d[0];
    set32(c.r[25], ld32((c.r[11].w[0] + 12u)));
    set32(c.r[8], c.r[16].w[0] >> (c.r[8].w[0] & 31u));
    c.r[12].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[6], c.r[8].w[0] << (c.r[6].w[0] & 31u));
    c.r[16].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[8].d[0] = c.r[6].d[0] & 255ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[25].d[0];
    c.r[6].d[0] = ld8((c.r[11].w[0] + 22u));
    set32(c.r[16], c.r[24].w[0] >> (c.r[16].w[0] & 31u));
    c.r[24].d[0] = ld8((c.r[11].w[0] + 19u));
    set32(c.r[6], c.r[16].w[0] << (c.r[6].w[0] & 31u));
    c.r[16].d[0] = ld8((c.r[11].w[0] + 23u));
    set32(c.r[13], c.r[13].w[0] >> (c.r[24].w[0] & 31u));
    set32(c.r[13], c.r[13].w[0] << (c.r[16].w[0] & 31u));
    c.r[17].d[0] = c.r[13].d[0] & 255ull;
    c.budget -= 29;
    { const bool t = c.r[17].d[0] == 0ull; c.r[6].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_0028FC90; } }
    set32(c.r[13], c.r[25].w[0] - 1u);
    c.r[13].d[0] = c.r[25].d[0] & c.r[13].d[0];
    c.budget -= 4;
    if (c.r[13].d[0] == 0ull) { c.r[13].d[0] = c.r[3].d[0] + 0ull;  goto L_0028FC8C; }
    c.r[13].d[0] = c.r[17].d[0] & 255ull;
    c.r[13].d[0] = c.r[13].d[0] & 224ull;
    c.budget -= 2;
L_0028FC8C:
    c.r[17].d[0] = c.r[13].d[0] & 255ull;
    c.budget -= 1;
L_0028FC90:
    c.r[24].d[0] = c.r[8].d[0] & 255ull;
    c.r[25].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[13].d[0] = c.r[6].d[0] & 255ull;
    c.r[8].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[16].d[0] = c.r[12].d[0] & 255ull;
    c.r[6].d[0] = ld32((c.r[9].w[0]));
    c.r[16].d[0] = c.r[16].d[0] >> (c.r[25].w[0] & 63u);
    c.r[12].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[16].d[0] << (c.r[8].w[0] & 63u);
    c.r[25].d[0] = ld8((c.r[9].w[0] + 21u));
    c.r[16].d[0] = c.r[6].d[0] & c.r[16].d[0];
    c.r[8].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 4u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[25].d[0] = c.r[24].d[0] >> (c.r[25].w[0] & 63u);
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[25].d[0] = c.r[25].d[0] << (c.r[8].w[0] & 63u);
    c.r[24].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[25].d[0] = c.r[6].d[0] & c.r[25].d[0];
    c.r[8].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[25].d[0] = c.r[16].d[0] | c.r[25].d[0];
    c.r[13].d[0] = c.r[13].d[0] >> (c.r[24].w[0] & 63u);
    c.r[8].d[0] = c.r[13].d[0] << (c.r[8].w[0] & 63u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.r[13].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[24].d[0] = c.r[6].d[0] | c.r[25].d[0];
    c.r[8].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[12].d[0] = c.r[12].d[0] >> (c.r[13].w[0] & 63u);
    c.r[8].d[0] = c.r[12].d[0] << (c.r[8].w[0] & 63u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[24].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 35;
L_0028FD1C:
    c.r[6].d[0] = c.r[14].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[13].d[0] = ld16((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FC00u | kUnwind; return; } goto L_0028FC00; }
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 1;
L_0028FD2C:
    c.r[6].d[0] = c.r[15].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FBF8u | kUnwind; return; } goto L_0028FBF8; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0028FD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0028FE24; } }
L_0028FD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028FE14; } }
L_0028FD60:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[14], ld32((c.r[11].w[0] + 4u)));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[3].d[0] = ld8((c.r[11].w[0] + 21u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[15].d[0] = c.r[6].d[0] & c.r[14].d[0];
    set32(c.r[15], c.r[15].w[0] >> (c.r[13].w[0] & 31u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 21u));
    set32(c.r[15], c.r[15].w[0] << (c.r[3].w[0] & 31u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[24].d[0] = c.r[15].d[0] & 255ull;
    c.r[3].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0])));
    c.r[24].d[0] = c.r[24].d[0] << (c.r[13].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[14], c.r[15].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[13], c.r[14].w[0] << (c.r[13].w[0] & 31u));
    c.r[15].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[24].d[0] = c.r[13].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[13].d[0] = ld32((c.r[9].w[0]));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[15].w[0] & 63u);
    c.r[24].d[0] = c.r[24].d[0] << (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0] + 8u)));
    c.r[24].d[0] = c.r[13].d[0] & c.r[24].d[0];
    c.r[14].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 22u));
    c.r[3].d[0] = c.r[24].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[6], c.r[6].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[6], c.r[6].w[0] << (c.r[13].w[0] & 31u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[15].d[0] = c.r[6].d[0] & 255ull;
    c.r[13].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[14].d[0] = c.r[15].d[0] >> (c.r[14].w[0] & 63u);
    c.r[13].d[0] = c.r[14].d[0] << (c.r[13].w[0] & 63u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[13].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 45;
L_0028FE14:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FD60u | kUnwind; return; } goto L_0028FD60; }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_0028FE24:
    c.r[3].d[0] = c.r[12].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FD58u | kUnwind; return; } goto L_0028FD58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028FE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0028FF4C; } }
L_0028FE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0028FF3C; } }
L_0028FE50:
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[14], ld32((c.r[11].w[0] + 4u)));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 17u));
    c.r[3].d[0] = ld8((c.r[11].w[0] + 21u));
    set32(c.r[10], c.r[10].w[0] + 2u);
    c.r[15].d[0] = c.r[6].d[0] & c.r[14].d[0];
    set32(c.r[15], c.r[15].w[0] >> (c.r[13].w[0] & 31u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 21u));
    set32(c.r[15], c.r[15].w[0] << (c.r[3].w[0] & 31u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 17u));
    c.r[24].d[0] = c.r[15].d[0] & 255ull;
    c.r[3].d[0] = ld32((c.r[9].w[0] + 4u));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0])));
    c.r[24].d[0] = c.r[24].d[0] << (c.r[13].w[0] & 63u);
    c.r[14].d[0] = ld8((c.r[11].w[0] + 16u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[14], c.r[15].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[13], c.r[14].w[0] << (c.r[13].w[0] & 31u));
    c.r[15].d[0] = ld8((c.r[9].w[0] + 20u));
    c.r[24].d[0] = c.r[13].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[9].w[0] + 16u));
    c.r[13].d[0] = ld32((c.r[9].w[0]));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[15].w[0] & 63u);
    c.r[24].d[0] = c.r[24].d[0] << (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0] + 8u)));
    c.r[24].d[0] = c.r[13].d[0] & c.r[24].d[0];
    c.r[14].d[0] = ld8((c.r[11].w[0] + 18u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 22u));
    c.r[3].d[0] = c.r[24].d[0] | c.r[3].d[0];
    c.r[15].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[14], c.r[15].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[13], c.r[14].w[0] << (c.r[13].w[0] & 31u));
    c.r[15].d[0] = ld8((c.r[9].w[0] + 22u));
    c.r[24].d[0] = c.r[13].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[9].w[0] + 18u));
    c.r[13].d[0] = ld32((c.r[9].w[0] + 8u));
    c.r[24].d[0] = c.r[24].d[0] >> (c.r[15].w[0] & 63u);
    c.r[24].d[0] = c.r[24].d[0] << (c.r[14].w[0] & 63u);
    set32(c.r[15], ld32((c.r[11].w[0] + 12u)));
    c.r[24].d[0] = c.r[13].d[0] & c.r[24].d[0];
    c.r[14].d[0] = ld8((c.r[11].w[0] + 19u));
    c.r[13].d[0] = ld8((c.r[11].w[0] + 23u));
    c.r[3].d[0] = c.r[24].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[15].d[0];
    set32(c.r[6], c.r[6].w[0] >> (c.r[14].w[0] & 31u));
    set32(c.r[6], c.r[6].w[0] << (c.r[13].w[0] & 31u));
    c.r[14].d[0] = ld8((c.r[9].w[0] + 23u));
    c.r[15].d[0] = c.r[6].d[0] & 255ull;
    c.r[13].d[0] = ld8((c.r[9].w[0] + 19u));
    c.r[6].d[0] = ld32((c.r[9].w[0] + 12u));
    c.r[14].d[0] = c.r[15].d[0] >> (c.r[14].w[0] & 63u);
    c.r[13].d[0] = c.r[14].d[0] << (c.r[13].w[0] & 63u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[13].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 59;
L_0028FF3C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FE50u | kUnwind; return; } goto L_0028FE50; }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_0028FF4C:
    c.r[3].d[0] = c.r[12].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FE48u | kUnwind; return; } goto L_0028FE48; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0028FF60:
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 255u);  if (t) { goto L_0028FFF4; } }
L_0028FF70:
    set32(c.r[11], c.r[6].w[0] << 2);
    set32(c.r[9], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[10], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[9].w[0])));
    set32(c.r[10], ld32((c.r[7].w[0])));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0028FFE4; } }
L_0028FFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0028FFD4; } }
L_0028FFAC:
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 128u);
    st8((c.r[12].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[12].w[0]));
    c.r[9].d[0] = ld8((c.r[12].w[0] + 3u));
    set32(c.r[7], c.r[7].w[0] + 128u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[12].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 10;
L_0028FFD4:
    c.r[7].d[0] = c.r[13].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0028FFD8:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[12].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FFACu | kUnwind; return; } goto L_0028FFAC; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0028FFE4:
    c.r[7].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FFA4u | kUnwind; return; } goto L_0028FFA4; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0028FFF4:
    c.r[5].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 96u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0028FF70u | kUnwind; return; } goto L_0028FF70; }
    [[clang::musttail]] return unit_0064(c, 1u, depth);
}

}
