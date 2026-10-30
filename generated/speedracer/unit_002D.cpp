#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11,
    0, 12, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0,
    73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0,
    0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B4000;
    case 2u: goto L_001B4054;
    case 3u: goto L_001B406C;
    case 4u: goto L_001B408C;
    case 5u: goto L_001B4094;
    case 6u: goto L_001B40AC;
    case 7u: goto L_001B40B8;
    case 8u: goto L_001B40C8;
    case 9u: goto L_001B40D8;
    case 10u: goto L_001B40E8;
    case 11u: goto L_001B40FC;
    case 12u: goto L_001B4104;
    case 13u: goto L_001B4118;
    case 14u: goto L_001B411C;
    case 15u: goto L_001B4140;
    case 16u: goto L_001B419C;
    case 17u: goto L_001B41AC;
    case 18u: goto L_001B41B4;
    case 19u: goto L_001B41C0;
    case 20u: goto L_001B41C8;
    case 21u: goto L_001B41D0;
    case 22u: goto L_001B4204;
    case 23u: goto L_001B4240;
    case 24u: goto L_001B4270;
    case 25u: goto L_001B4288;
    case 26u: goto L_001B42A0;
    case 27u: goto L_001B42B4;
    case 28u: goto L_001B42E0;
    case 29u: goto L_001B432C;
    case 30u: goto L_001B4340;
    case 31u: goto L_001B4378;
    case 32u: goto L_001B4390;
    case 33u: goto L_001B43A0;
    case 34u: goto L_001B43B0;
    case 35u: goto L_001B43F4;
    case 36u: goto L_001B4600;
    case 37u: goto L_001B4668;
    case 38u: goto L_001B4690;
    case 39u: goto L_001B46B4;
    case 40u: goto L_001B46C4;
    case 41u: goto L_001B46E0;
    case 42u: goto L_001B46F4;
    case 43u: goto L_001B4704;
    case 44u: goto L_001B471C;
    case 45u: goto L_001B4724;
    case 46u: goto L_001B474C;
    case 47u: goto L_001B4760;
    case 48u: goto L_001B477C;
    case 49u: goto L_001B4788;
    case 50u: goto L_001B4798;
    case 51u: goto L_001B4830;
    case 52u: goto L_001B48D0;
    case 53u: goto L_001B48E4;
    case 54u: goto L_001B48F4;
    case 55u: goto L_001B4908;
    case 56u: goto L_001B491C;
    case 57u: goto L_001B492C;
    case 58u: goto L_001B4948;
    case 59u: goto L_001B4964;
    case 60u: goto L_001B4980;
    case 61u: goto L_001B49B4;
    case 62u: goto L_001B49C4;
    case 63u: goto L_001B49E0;
    case 64u: goto L_001B49FC;
    case 65u: goto L_001B4A20;
    case 66u: goto L_001B4A30;
    case 67u: goto L_001B4A60;
    case 68u: goto L_001B4A7C;
    case 69u: goto L_001B4AA0;
    case 70u: goto L_001B4AB4;
    case 71u: goto L_001B4AE0;
    case 72u: goto L_001B4AF0;
    case 73u: goto L_001B4B00;
    case 74u: goto L_001B4B10;
    case 75u: goto L_001B4B28;
    case 76u: goto L_001B4B38;
    case 77u: goto L_001B4B6C;
    case 78u: goto L_001B4B7C;
    case 79u: goto L_001B4BDC;
    case 80u: goto L_001B4BEC;
    case 81u: goto L_001B4C3C;
    case 82u: goto L_001B4CA0;
    case 83u: goto L_001B4CB0;
    case 84u: goto L_001B4CC0;
    case 85u: goto L_001B4CD0;
    case 86u: goto L_001B4CE0;
    case 87u: goto L_001B4CF0;
    case 88u: goto L_001B4D28;
    case 89u: goto L_001B4D38;
    case 90u: goto L_001B4D88;
    case 91u: goto L_001B4E04;
    case 92u: goto L_001B4E14;
    case 93u: goto L_001B4E40;
    case 94u: goto L_001B4E50;
    case 95u: goto L_001B4E80;
    case 96u: goto L_001B4E90;
    case 97u: goto L_001B4EBC;
    case 98u: goto L_001B4ECC;
    case 99u: goto L_001B4F1C;
    case 100u: goto L_001B4F8C;
    case 101u: goto L_001B4FA8;
    case 102u: goto L_001B4FB8;
    case 103u: goto L_001B4FE0;
    case 104u: goto L_001B5008;
    case 105u: goto L_001B5030;
    case 106u: goto L_001B5050;
    case 107u: goto L_001B5080;
    case 108u: goto L_001B5110;
    case 109u: goto L_001B5130;
    case 110u: goto L_001B5158;
    case 111u: goto L_001B517C;
    case 112u: goto L_001B51A0;
    case 113u: goto L_001B51D0;
    case 114u: goto L_001B5200;
    case 115u: goto L_001B5220;
    case 116u: goto L_001B522C;
    case 117u: goto L_001B52C4;
    case 118u: goto L_001B5324;
    case 119u: goto L_001B53C0;
    case 120u: goto L_001B53F0;
    case 121u: goto L_001B5420;
    case 122u: goto L_001B5440;
    case 123u: goto L_001B544C;
    case 124u: goto L_001B54E4;
    case 125u: goto L_001B5548;
    case 126u: goto L_001B55E0;
    case 127u: goto L_001B5624;
    case 128u: goto L_001B5644;
    case 129u: goto L_001B5650;
    case 130u: goto L_001B5770;
    case 131u: goto L_001B57D8;
    case 132u: goto L_001B5844;
    case 133u: goto L_001B589C;
    case 134u: goto L_001B58CC;
    case 135u: goto L_001B58F8;
    case 136u: goto L_001B592C;
    case 137u: goto L_001B5968;
    case 138u: goto L_001B5998;
    case 139u: goto L_001B59B8;
    case 140u: goto L_001B59DC;
    case 141u: goto L_001B5A5C;
    case 142u: goto L_001B5A64;
    case 143u: goto L_001B5AC8;
    case 144u: goto L_001B5B0C;
    case 145u: goto L_001B5B50;
    case 146u: goto L_001B5B94;
    case 147u: goto L_001B5BD8;
    case 148u: goto L_001B5C48;
    case 149u: goto L_001B5C8C;
    case 150u: goto L_001B5CD0;
    case 151u: goto L_001B5D14;
    case 152u: goto L_001B5D58;
    case 153u: goto L_001B5DE0;
    case 154u: goto L_001B5E44;
    case 155u: goto L_001B5EB0;
    case 156u: goto L_001B5F08;
    case 157u: goto L_001B5F38;
    case 158u: goto L_001B5F64;
    case 159u: goto L_001B5F98;
    case 160u: goto L_001B5FD4;
    case 161u: goto L_001B6004;
    case 162u: goto L_001B6024;
    case 163u: goto L_001B6048;
    case 164u: goto L_001B60B0;
    case 165u: goto L_001B60B8;
    case 166u: goto L_001B6118;
    case 167u: goto L_001B615C;
    case 168u: goto L_001B61A0;
    case 169u: goto L_001B61E4;
    case 170u: goto L_001B6228;
    case 171u: goto L_001B6294;
    case 172u: goto L_001B62D8;
    case 173u: goto L_001B631C;
    case 174u: goto L_001B6360;
    case 175u: goto L_001B63A4;
    case 176u: goto L_001B6430;
    case 177u: goto L_001B64A0;
    case 178u: goto L_001B651C;
    case 179u: goto L_001B657C;
    case 180u: goto L_001B65AC;
    case 181u: goto L_001B6600;
    case 182u: goto L_001B662C;
    case 183u: goto L_001B665C;
    case 184u: goto L_001B668C;
    case 185u: goto L_001B66BC;
    case 186u: goto L_001B6734;
    case 187u: goto L_001B6768;
    case 188u: goto L_001B67A0;
    case 189u: goto L_001B67DC;
    case 190u: goto L_001B6818;
    case 191u: goto L_001B6860;
    case 192u: goto L_001B69C0;
    case 193u: goto L_001B6A50;
    case 194u: goto L_001B6A60;
    case 195u: goto L_001B6A78;
    case 196u: goto L_001B6AF8;
    case 197u: goto L_001B6B60;
    case 198u: goto L_001B6BA4;
    case 199u: goto L_001B6CB4;
    case 200u: goto L_001B6CD4;
    case 201u: goto L_001B6CE0;
    case 202u: goto L_001B6D78;
    case 203u: goto L_001B6F20;
    case 204u: goto L_001B6F40;
    case 205u: goto L_001B6F4C;
    case 206u: goto L_001B6FE4;
    case 207u: goto L_001B70D0;
    case 208u: goto L_001B71A0;
    case 209u: goto L_001B7210;
    case 210u: goto L_001B724C;
    case 211u: goto L_001B7264;
    case 212u: goto L_001B726C;
    case 213u: goto L_001B7274;
    case 214u: goto L_001B728C;
    case 215u: goto L_001B72CC;
    case 216u: goto L_001B7554;
    case 217u: goto L_001B7760;
    case 218u: goto L_001B77C0;
    case 219u: goto L_001B77F0;
    case 220u: goto L_001B781C;
    case 221u: goto L_001B782C;
    case 222u: goto L_001B7840;
    case 223u: goto L_001B7854;
    case 224u: goto L_001B7868;
    case 225u: goto L_001B7878;
    case 226u: goto L_001B7888;
    case 227u: goto L_001B789C;
    case 228u: goto L_001B78AC;
    case 229u: goto L_001B78BC;
    case 230u: goto L_001B78CC;
    case 231u: goto L_001B7980;
    case 232u: goto L_001B79C4;
    case 233u: goto L_001B79E4;
    case 234u: goto L_001B79F0;
    case 235u: goto L_001B7AA0;
    case 236u: goto L_001B7AEC;
    case 237u: goto L_001B7B04;
    case 238u: goto L_001B7B0C;
    case 239u: goto L_001B7B48;
    case 240u: goto L_001B7BF0;
    case 241u: goto L_001B7C10;
    case 242u: goto L_001B7C18;
    case 243u: goto L_001B7C30;
    case 244u: goto L_001B7C70;
    case 245u: goto L_001B7F74;
    default: bad_entry(c, 0x001B4000u); return;
    }
L_001B4000:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), c.r[20].w[0]);  goto L_001B4058; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0]), c.r[17].d[0]);
    set32(c.r[2], 0u + 1024u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], 0u + 128u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[8], 0u + 49u);
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4054u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004C(c, 112u, depth + 1u); else { c.pc = 0x00231930u; return; } if (c.pc != 0x001B4054u) [[unlikely]] return; }
L_001B4054:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_001B4058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B406Cu); set32(c.r[4], ld32((c.r[16].w[0] + 184u)));  if (depth < kMaxDepth) unit_002D(c, 72u, depth + 1u); else { c.pc = 0x001B4AF0u; return; } if (c.pc != 0x001B406Cu) [[unlikely]] return; }
L_001B406C:
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_001B409C; }
    set32(c.r[4], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 28704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B408Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x001B408Cu) [[unlikely]] return; }
L_001B408C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4094u); set32(c.r[4], ld32((c.r[29].w[0] + 168u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x001B4094u) [[unlikely]] return; }
L_001B4094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001B411C; } }
L_001B409C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40ACu); set32(c.r[5], c.r[5].w[0] + 18088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B40ACu) [[unlikely]] return; }
L_001B40AC:
    set32(c.r[4], 0u + 588u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B40B8u) [[unlikely]] return; }
L_001B40B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_001B40CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 69u, depth + 1u); else { c.pc = 0x001B4AA0u; return; } if (c.pc != 0x001B40C8u) [[unlikely]] return; }
L_001B40C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001B40CC:
    set32(c.r[4], 0u + 172u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B40D8u) [[unlikely]] return; }
L_001B40D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_001B40EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 345u, depth + 1u); else { c.pc = 0x00502FA0u; return; } if (c.pc != 0x001B40E8u) [[unlikely]] return; }
L_001B40E8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001B40EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B40FCu) [[unlikely]] return; }
L_001B40FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 159u, depth + 1u); else { c.pc = 0x002A9880u; return; } if (c.pc != 0x001B4104u) [[unlikely]] return; }
L_001B4104:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 27644u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4118u); st8((c.r[28].w[0] - 27516u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x001B4118u) [[unlikely]] return; }
L_001B4118:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B411C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001B4140:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[28].w[0] - 29204u)));
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    c.f[20] = c.f[14];
    set32(c.r[4], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B419Cu); st32((c.r[29].w[0] + 140u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x001B419Cu) [[unlikely]] return; }
L_001B419C:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B41ACu); set32(c.r[5], c.r[28].w[0] - 28796u);  if (depth < kMaxDepth) unit_0047(c, 26u, depth + 1u); else { c.pc = 0x0021C400u; return; } if (c.pc != 0x001B41ACu) [[unlikely]] return; }
L_001B41AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B41B4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0047(c, 194u, depth + 1u); else { c.pc = 0x0021DC60u; return; } if (c.pc != 0x001B41B4u) [[unlikely]] return; }
L_001B41B4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B41C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0047(c, 23u, depth + 1u); else { c.pc = 0x0021C380u; return; } if (c.pc != 0x001B41C0u) [[unlikely]] return; }
L_001B41C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B41C8u); set32(c.r[4], ld32((c.r[29].w[0] + 136u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x001B41C8u) [[unlikely]] return; }
L_001B41C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B41D0u);  if (depth < kMaxDepth) unit_002C(c, 296u, depth + 1u); else { c.pc = 0x001B3E90u; return; } if (c.pc != 0x001B41D0u) [[unlikely]] return; }
L_001B41D0:
    st8((c.r[16].w[0] + 164u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[16].w[0] + 165u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st32((c.r[16].w[0] + 148u), c.f[22]);
    st32((c.r[16].w[0] + 152u), c.f[21]);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 180u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 176u), c.r[18].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4204u); st32((c.r[16].w[0] + 160u), c.f[20]);  if (depth < kMaxDepth) unit_0012(c, 455u, depth + 1u); else { c.pc = 0x0014B730u; return; } if (c.pc != 0x001B4204u) [[unlikely]] return; }
L_001B4204:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001B4210; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001B4240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B4288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4270u); st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 456u, depth + 1u); else { c.pc = 0x0014B740u; return; } if (c.pc != 0x001B4270u) [[unlikely]] return; }
L_001B4270:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B428C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4288u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001B4288u) [[unlikely]] return; }
L_001B4288:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B428C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B42A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 459u, depth + 1u); else { c.pc = 0x0014B7E0u; return; } if (c.pc != 0x001B42B4u) [[unlikely]] return; }
L_001B42B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 15936u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B42E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B4330; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15728u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001B4314; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15888u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001B4314:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B432C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B432Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001B432Cu) [[unlikely]] return; }
L_001B432C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B4330:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B437C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 15888u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001B4378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4378u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001B4378u) [[unlikely]] return; }
L_001B4378:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B437C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 18408u);  c.pc = t; return; }
L_001B43A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 572u);  c.pc = t; return; }
L_001B43B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B9A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].d[0] = c.r[3].d[0] | 51712ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    c.f[0] = c.r[3].w[0];
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = ld32((c.r[28].w[0] - 32532u));
    c.f[9] = ld32((c.r[28].w[0] - 32528u));
    c.f[8] = ld32((c.r[28].w[0] - 32524u));
    c.f[4] = ld32((c.r[28].w[0] - 32520u));
    c.f[3] = ld32((c.r[28].w[0] - 32516u));
    c.f[1] = c.r[3].w[0];
    c.f[6] = c.r[10].w[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001B45E8; } }
L_001B43F4:
    set32(c.r[11], c.r[8].w[0] << 2);
    c.r[10].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[10].sd[0] < 0; set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);  if (t) { goto L_001B4410; } }
    c.f[2] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B442C; } }
L_001B4410:
    set32(c.r[11], c.r[10].w[0] >> 1);
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.f[2] = c.r[11].w[0];
    c.f[12] = fp::cvt_s_w(c.f[2]);
    c.f[12] = fp::add(c.f[12], c.f[12]);
    c.budget -= 7;
L_001B442C:
    c.r[10].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 3;
    if (c.r[10].sd[0] < 0) { set32(c.r[11], c.r[10].w[0] >> 1);  goto L_001B4444; }
    c.f[2] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B445C; } }
L_001B4444:
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.f[2] = c.r[11].w[0];
    c.f[5] = fp::cvt_s_w(c.f[2]);
    c.f[5] = fp::add(c.f[5], c.f[5]);
    c.budget -= 6;
L_001B445C:
    c.r[10].d[0] = ld8((c.r[6].w[0] + 2u));
    c.budget -= 3;
    if (c.r[10].sd[0] < 0) { set32(c.r[11], c.r[10].w[0] >> 1);  goto L_001B4474; }
    c.f[2] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[14] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B448C; } }
L_001B4474:
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.f[2] = c.r[11].w[0];
    c.f[14] = fp::cvt_s_w(c.f[2]);
    c.f[14] = fp::add(c.f[14], c.f[14]);
    c.budget -= 6;
L_001B448C:
    c.r[10].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    if (c.r[10].sd[0] < 0) { set32(c.r[11], c.r[10].w[0] >> 1);  goto L_001B44A4; }
    c.f[2] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[13] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B44BC; } }
L_001B44A4:
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.f[2] = c.r[11].w[0];
    c.f[13] = fp::cvt_s_w(c.f[2]);
    c.f[13] = fp::add(c.f[13], c.f[13]);
    c.budget -= 6;
L_001B44BC:
    c.r[10].d[0] = ld8((c.r[3].w[0] + 1u));
    c.budget -= 3;
    if (c.r[10].sd[0] < 0) { set32(c.r[11], c.r[10].w[0] >> 1);  goto L_001B44D4; }
    c.f[2] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[11] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B44EC; } }
L_001B44D4:
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.f[2] = c.r[11].w[0];
    c.f[11] = fp::cvt_s_w(c.f[2]);
    c.f[11] = fp::add(c.f[11], c.f[11]);
    c.budget -= 6;
L_001B44EC:
    c.r[10].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    if (c.r[10].sd[0] < 0) { set32(c.r[11], c.r[10].w[0] >> 1);  goto L_001B4504; }
    c.f[2] = c.r[10].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B451C; } }
L_001B4504:
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.f[2] = c.r[11].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_001B451C:
    c.f[7] = fp::sub(c.f[11], c.f[5]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3u));
    c.facc = fp::mul(c.f[8], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[12]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[10], c.f[14]));
    c.facc = fp::mul(c.f[8], c.f[11]);
    c.f[11] = fp::sub(c.f[2], c.f[14]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[13]));
    c.f[12] = fp::sub(c.f[13], c.f[12]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[10], c.f[2]));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; c.f[13] = fp::sub(c.f[5], c.f[2]);  if (t) { goto L_001B4558; } }
    c.f[2] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B4574; } }
L_001B4558:
    set32(c.r[10], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.f[2] = c.r[10].w[0];
    c.f[5] = fp::cvt_s_w(c.f[2]);
    c.f[5] = fp::add(c.f[5], c.f[5]);
    c.budget -= 7;
L_001B4574:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 3u));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[10], c.r[3].w[0] >> 1);  goto L_001B458C; }
    c.f[2] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_001B45A4; } }
L_001B458C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[10].d[0] = c.r[10].d[0] | c.r[3].d[0];
    c.f[2] = c.r[10].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_001B45A4:
    c.facc = fp::mul(c.f[7], c.f[7]);
    c.f[7] = fp::sub(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[12]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[11], c.f[11]));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::mul(c.f[4], c.f[13]);
    c.f[5] = fp::mul(c.f[6], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[2]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[5]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001B45E8; }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[2];  if (t) { goto L_001B45F4; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001B45E8:
    c.r[3].d[0] = c.r[8].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B43F4u | kUnwind; return; } goto L_001B43F4; }
L_001B45F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));  c.pc = t; return; }
L_001B4600:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 100u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 92u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 112u)));
    set32(c.r[17], ld32((c.r[7].w[0])));
    st32((c.r[29].w[0] + 268u), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[4], 0u + 116u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4668u); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B4668u) [[unlikely]] return; }
L_001B4668:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[18].w[0] + 80u)));  goto L_001B4698; }
    set32(c.r[8], ld32((c.r[29].w[0] + 240u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 224u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4690u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x001B4690u) [[unlikely]] return; }
L_001B4690:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 2;
L_001B4698:
    set32(c.r[16], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[19].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 104u)));  goto L_001B4708; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 80u), c.r[19].w[0]);  goto L_001B46E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001B46B4u) [[unlikely]] return; }
L_001B46B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001B46C4u) [[unlikely]] return; }
L_001B46C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B46E0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B46E0u) [[unlikely]] return; }
L_001B46E0:
    st32((c.r[20].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 1;
L_001B46E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001B4704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001B46F4u) [[unlikely]] return; }
L_001B46F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4704u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001B4704u) [[unlikely]] return; }
L_001B4704:
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    c.budget -= 1;
L_001B4708:
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { goto L_001B47E8; } }
L_001B471C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001B47D4; } }
L_001B4724:
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_001B47C0; } }
L_001B474C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4760u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 229u, depth + 1u); else { c.pc = 0x002C5F80u; return; } if (c.pc != 0x001B4760u) [[unlikely]] return; }
L_001B4760:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B477Cu); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 228u, depth + 1u); else { c.pc = 0x002C5EF0u; return; } if (c.pc != 0x001B477Cu) [[unlikely]] return; }
L_001B477C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_001B47AC; } }
L_001B4788:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4798u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 34u, depth + 1u); else { c.pc = 0x001B43B0u; return; } if (c.pc != 0x001B4798u) [[unlikely]] return; }
L_001B4798:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_001B47AC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[30].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 268u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4788u | kUnwind; return; } goto L_001B4788; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001B47C0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B474Cu | kUnwind; return; } goto L_001B474C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001B47D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4724u | kUnwind; return; } goto L_001B4724; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001B47E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B471Cu | kUnwind; return; } goto L_001B471C; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001B4830:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[8].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001B4954; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001B4878; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001B4878; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4878:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001B4958; }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001B48A0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B48A0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B48A0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B4954; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001B48C0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 25024u);  if (t) { goto L_001B48C4; } }
L_001B48C0:
    set32(c.r[6], c.r[6].w[0] + 25104u);
    c.budget -= 1;
L_001B48C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 99u, depth + 1u); else { c.pc = 0x002969A0u; return; } if (c.pc != 0x001B48D0u) [[unlikely]] return; }
L_001B48D0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_001B48F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001B48E4u) [[unlikely]] return; }
L_001B48E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48F4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001B48F4u) [[unlikely]] return; }
L_001B48F4:
    set32(c.r[6], ld32((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4908u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 36u, depth + 1u); else { c.pc = 0x001B4600u; return; } if (c.pc != 0x001B4908u) [[unlikely]] return; }
L_001B4908:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001B4948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B491Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001B491Cu) [[unlikely]] return; }
L_001B491C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B492Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001B492Cu) [[unlikely]] return; }
L_001B492C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B4964; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4948u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4948u) [[unlikely]] return; }
L_001B4948:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4964; } }
L_001B4954:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001B4958:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4964u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 99u, depth + 1u); else { c.pc = 0x002969A0u; return; } if (c.pc != 0x001B4964u) [[unlikely]] return; }
L_001B4964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B4980:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B49FC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001B49E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001B49B4u) [[unlikely]] return; }
L_001B49B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49C4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001B49C4u) [[unlikely]] return; }
L_001B49C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B49E0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B49E0u) [[unlikely]] return; }
L_001B49E0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001B49E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001B4A00; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49FCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001B49FCu) [[unlikely]] return; }
L_001B49FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001B4A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B4A20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0065(c, 207u, depth); }
L_001B4A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001B4A7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A60u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0066(c, 69u, depth + 1u); else { c.pc = 0x00299890u; return; } if (c.pc != 0x001B4A60u) [[unlikely]] return; }
L_001B4A60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001B4A80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A7Cu); set32(c.r[5], 0u + 588u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001B4A7Cu) [[unlikely]] return; }
L_001B4A7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001B4A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B4AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4AB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0066(c, 81u, depth + 1u); else { c.pc = 0x00299A30u; return; } if (c.pc != 0x001B4AB4u) [[unlikely]] return; }
L_001B4AB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 15840u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001B4AE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28792u), c.r[4].w[0]);  c.pc = t; return; }
L_001B4B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0012(c, 390u, depth + 1u); else { c.pc = 0x0014B160u; return; } if (c.pc != 0x001B4B28u) [[unlikely]] return; }
L_001B4B28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 6528u);  if (t) { goto L_001B4BC8; } }
L_001B4B38:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B4BC8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] + 6532u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[3].w[0]), c.r[17].w[0]);  if (t) { goto L_001B4BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B6Cu);  if (depth < kMaxDepth) unit_0012(c, 390u, depth + 1u); else { c.pc = 0x0014B160u; return; } if (c.pc != 0x001B4B6Cu) [[unlikely]] return; }
L_001B4B6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 6528u);  if (t) { goto L_001B4BB4; } }
L_001B4B7C:
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001B4BB4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 6532u);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28788u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    mmi::pminw(c.r[2], c.r[2], c.r[7]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);  if (t) { goto L_001B4BC0; } }
L_001B4BB4:
    c.r[3].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[7].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4B7Cu | kUnwind; return; } goto L_001B4B7C; }
L_001B4BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001B4C8C; } }
L_001B4BC8:
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4B38u | kUnwind; return; } goto L_001B4B38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4BDCu);  if (depth < kMaxDepth) unit_0012(c, 390u, depth + 1u); else { c.pc = 0x0014B160u; return; } if (c.pc != 0x001B4BDCu) [[unlikely]] return; }
L_001B4BDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6528u);  if (t) { goto L_001B4C04; } }
L_001B4BEC:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B4C04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[4].w[0] + 4u);  if (t) { goto L_001B4C84; } }
L_001B4C04:
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4BECu | kUnwind; return; } goto L_001B4BEC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 28788u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] + 6528u);
    set32(c.r[4], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_001B4C74; } }
L_001B4C3C:
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_001B4C54; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);  goto L_001B4C58; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_001B4C54:
    st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);
    c.budget -= 1;
L_001B4C58:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B4C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[17].w[0]);  if (t) { goto L_001B4C88; } }
L_001B4C74:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 28788u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4C3Cu | kUnwind; return; } goto L_001B4C3C; }
    set32(c.r[7], c.r[28].w[0] - 30824u);
    c.budget -= 1;
L_001B4C84:
    st32((c.r[7].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_001B4C88:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_001B4C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B4CA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001B4CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4CC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001B4CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001B4CF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0012(c, 390u, depth + 1u); else { c.pc = 0x0014B160u; return; } if (c.pc != 0x001B4D28u) [[unlikely]] return; }
L_001B4D28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6528u);  if (t) { goto L_001B4D50; } }
L_001B4D38:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B4D50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[4].w[0] + 4u);  if (t) { goto L_001B4DD0; } }
L_001B4D50:
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4D38u | kUnwind; return; } goto L_001B4D38; }
    set32(c.r[3], ld32((c.r[28].w[0] - 28788u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] + 6528u);
    set32(c.r[4], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_001B4DC0; } }
L_001B4D88:
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_001B4DA0; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);  goto L_001B4DA4; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_001B4DA0:
    st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);
    c.budget -= 1;
L_001B4DA4:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B4DC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 30832u));  if (t) { goto L_001B4DD4; } }
L_001B4DC0:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 28788u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4D88u | kUnwind; return; } goto L_001B4D88; }
    set32(c.r[7], c.r[28].w[0] - 30824u);
    c.budget -= 1;
L_001B4DD0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30832u));
    c.budget -= 1;
L_001B4DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], ld32((c.r[7].w[0])));  if (t) { goto L_001B4E04; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_001B4E04; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[9], ld32((c.r[29].w[0] + 120u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E04u); set32(c.r[6], c.r[6].w[0] - 28656u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x001B4E04u) [[unlikely]] return; }
L_001B4E04:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] & 128ull;  goto L_001B4E1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E14u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x001B4E14u) [[unlikely]] return; }
L_001B4E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0])));  if (t) { goto L_001B4E44; } }
L_001B4E1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30828u)));  goto L_001B4E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 28792u)));  if (t) { goto L_001B4E40; } }
L_001B4E2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E40u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4E40u) [[unlikely]] return; }
L_001B4E40:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001B4E44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E50u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 144u, depth + 1u); else { c.pc = 0x00102250u; return; } if (c.pc != 0x001B4E50u) [[unlikely]] return; }
L_001B4E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001B4E80:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00102450u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 160u, depth); }
L_001B4E90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4EBCu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 390u, depth + 1u); else { c.pc = 0x0014B160u; return; } if (c.pc != 0x001B4EBCu) [[unlikely]] return; }
L_001B4EBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 6528u);  if (t) { goto L_001B4EE4; } }
L_001B4ECC:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B4EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[4].w[0] + 4u);  if (t) { goto L_001B4F64; } }
L_001B4EE4:
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4ECCu | kUnwind; return; } goto L_001B4ECC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 28788u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] + 6528u);
    set32(c.r[4], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_001B4F54; } }
L_001B4F1C:
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 7ull;  if (t) { goto L_001B4F34; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);  goto L_001B4F38; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.budget -= 1;
L_001B4F34:
    st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);
    c.budget -= 1;
L_001B4F38:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001B4F54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[7].w[0])));  if (t) { goto L_001B4F68; } }
L_001B4F54:
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 28788u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4F1Cu | kUnwind; return; } goto L_001B4F1C; }
    set32(c.r[7], c.r[28].w[0] - 30824u);
    c.budget -= 1;
L_001B4F64:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 1;
L_001B4F68:
    c.r[2].d[0] = c.r[17].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 30828u)));  goto L_001B4F7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 28792u)));  if (t) { goto L_001B4F8C; } }
L_001B4F7C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F8Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4F8Cu) [[unlikely]] return; }
L_001B4F8C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[19].w[0])));  goto L_001B4FB0; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x001B4FA8u) [[unlikely]] return; }
L_001B4FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001B4FBC; } }
L_001B4FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FB8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x001B4FB8u) [[unlikely]] return; }
L_001B4FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001B4FBC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B4FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15888u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15728u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + 6528u);
    c.budget -= 10;
L_001B5008:
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[5].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5008u | kUnwind; return; } goto L_001B5008; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001B5030:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x001B0000u);  goto L_001B5040; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30828u), c.r[4].w[0]);  if (t) { goto L_001B5048; } }
L_001B5040:
    set32(c.r[4], c.r[4].w[0] + 20560u);
    st32((c.r[28].w[0] - 30828u), c.r[4].w[0]);
    c.budget -= 2;
L_001B5048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5050:
    c.r[2].d[0] = c.r[6].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5068; } }
    c.r[2].d[0] = c.r[6].d[0] & 64512ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (t) { goto L_001B5078; } }
L_001B5068:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[4], 0u - 1u);  goto L_001B5078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5078; } }
L_001B5078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_001B5080:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], c.r[5].w[0] << 4);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x60000000u);
    set32(c.r[10], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] - 2u);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[10].w[0] + 1u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::pcpyld(c.r[6], c.r[6], c.r[7]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.r[7].d[0] = c.r[10].d[0] << 32;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = 0ull | 32768ull;
    c.r[6].d[0] = c.r[4].d[0] | c.r[6].d[0];
    set32(c.r[4], 0u + 14u);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    mmi::pcpyld(c.r[4], c.r[4], c.r[6]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0]) & ~15u, c.r[4]);  c.pc = t; return; }
L_001B5110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B5130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5130u);  if (depth < kMaxDepth) unit_002F(c, 67u, depth + 1u); else { c.pc = 0x001BD3B0u; return; } if (c.pc != 0x001B5130u) [[unlikely]] return; }
L_001B5130:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - 5792u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5158u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5158u) [[unlikely]] return; }
L_001B5158:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] - 5776u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B517Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B517Cu) [[unlikely]] return; }
L_001B517C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B51A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51D0u); set32(c.r[16], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_004A(c, 110u, depth + 1u); else { c.pc = 0x00229430u; return; } if (c.pc != 0x001B51D0u) [[unlikely]] return; }
L_001B51D0:
    set32(c.r[17], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_001B52A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B523C; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5200u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B5200u) [[unlikely]] return; }
L_001B5200:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B5234; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5220u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x001B5220u) [[unlikely]] return; }
L_001B5220:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B522Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x001B522Cu) [[unlikely]] return; }
L_001B522C:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B5234:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B523C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_001B5260; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_001B5260:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
L_001B52A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52C4u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x001B52C4u) [[unlikely]] return; }
L_001B52C4:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | 14ull;
    c.r[4].d[0] = c.r[2].d[0] << 37;
    set32(c.r[7], ld32((c.r[28].w[0] - 28776u)));
    c.r[2].d[0] = 0ull | 43312ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[6], 0u + 7u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[7].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[4], c.r[6], c.r[2]);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[7].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5324u); c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x001B5324u) [[unlikely]] return; }
L_001B5324:
    set32(c.r[7], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_001B5344; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_001B5344:
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[4].d[0] = c.r[6].d[0] << 32;  goto L_001B536C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
L_001B536C:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B53C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 28764u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28768u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B53F0u); set32(c.r[16], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_004A(c, 110u, depth + 1u); else { c.pc = 0x00229430u; return; } if (c.pc != 0x001B53F0u) [[unlikely]] return; }
L_001B53F0:
    set32(c.r[17], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_001B54C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B545C; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B5420u) [[unlikely]] return; }
L_001B5420:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B5454; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5440u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x001B5440u) [[unlikely]] return; }
L_001B5440:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B544Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x001B544Cu) [[unlikely]] return; }
L_001B544C:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B5454:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B545C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_001B5480; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_001B5480:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
L_001B54C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B54E4u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x001B54E4u) [[unlikely]] return; }
L_001B54E4:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | 14ull;
    c.r[4].d[0] = c.r[2].d[0] << 37;
    set32(c.r[6], ld32((c.r[28].w[0] - 28776u)));
    c.r[2].d[0] = 0ull | 43312ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[5], 0u + 7u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    mmi::pcpyld(c.r[4], c.r[5], c.r[2]);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28768u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5548u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x001B5548u) [[unlikely]] return; }
L_001B5548:
    set32(c.r[7], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_001B5568; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_001B5568:
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[4].d[0] = c.r[6].d[0] << 32;  goto L_001B5590; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
L_001B5590:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001B55E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001B56C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_001B5660; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B5624u) [[unlikely]] return; }
L_001B5624:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_001B5658; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5644u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x001B5644u) [[unlikely]] return; }
L_001B5644:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5650u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x001B5650u) [[unlikely]] return; }
L_001B5650:
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001B5658:
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001B5660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_001B5684; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
L_001B5684:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 16;
L_001B56C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[4], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_001B5700; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_001B5700:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[4].d[0] = c.r[6].d[0] << 32;  goto L_001B5728; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
L_001B5728:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001B5770:
    set32(c.r[29], c.r[29].w[0] - 656u);
    set32(c.r[2], 0u + 63u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[2]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 640u);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B57D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B57D8u) [[unlikely]] return; }
L_001B57D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 65u);
    c.r[5].d[0] = ld32((c.r[18].w[0] + 40u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[9].d[0] = c.r[7].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    set32(c.r[7], c.r[29].w[0] + 624u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5844u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5844u) [[unlikely]] return; }
L_001B5844:
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = ld32((c.r[18].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[6].w[0] >> 5);
    set32(c.r[2], 0u + 77u);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[7], c.r[29].w[0] + 608u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B589Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B589Cu) [[unlikely]] return; }
L_001B589C:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 72u));
    set32(c.r[2], 0u + 25u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 592u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58CCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B58CCu) [[unlikely]] return; }
L_001B58CC:
    set32(c.r[2], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[6]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 576u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58F8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B58F8u) [[unlikely]] return; }
L_001B58F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u + 9u);
    c.r[2].d[0] = c.r[2].d[0] | 3955ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::pcpyld(c.r[2], c.r[3], c.r[2]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[2]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 560u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B592Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B592Cu) [[unlikely]] return; }
L_001B592C:
    set32(c.r[2], 0u + 128u);
    set32(c.r[5], 0u + 67u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 68u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[29].w[0] + 544u);
    mmi::pcpyld(c.r[2], c.r[5], c.r[2]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5968u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5968u) [[unlikely]] return; }
L_001B5968:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 854u);
    mmi::pcpyld(c.r[2], c.r[3], c.r[2]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 528u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5998u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5998u) [[unlikely]] return; }
L_001B5998:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] >> 5);
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[23], c.r[5].w[0] >> 6);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[4].w[0] << 4);  if (t) { goto L_001B5D9C; } }
L_001B59B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[17], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[30], ld32((c.r[29].w[0] + 368u)));  if (t) { goto L_001B5D94; } }
    set32(c.r[3], c.r[23].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);  if (t) { goto L_001B5D80; } }
L_001B59DC:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld8((c.r[19].w[0] + 80u));
    c.r[2].d[0] = 0ull | 43312ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 0, c.r[30].w[0], c.r[4].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[2].d[0] | 32768ull;
    c.r[8].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u + 8u);
    c.r[5].d[0] = c.r[3].d[0] << 34;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[9], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    set32(c.r[7], c.r[29].w[0] + 512u);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 7u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A5Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5A5Cu) [[unlikely]] return; }
L_001B5A5C:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 63ull;
    c.budget -= 2;
L_001B5A64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  goto L_001B5BF0; }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 32u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[4].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 16;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[21].w[0] << 1);
    c.budget -= 23;
L_001B5AC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 496u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B0Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5B0Cu) [[unlikely]] return; }
L_001B5B0C:
    set32(c.r[2], c.r[22].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 480u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B50u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5B50u) [[unlikely]] return; }
L_001B5B50:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 464u);
    set32(c.r[2], c.r[2].w[0] + 384u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B94u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5B94u) [[unlikely]] return; }
L_001B5B94:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 448u);
    set32(c.r[2], c.r[2].w[0] + 256u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5BD8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5BD8u) [[unlikely]] return; }
L_001B5BD8:
    set32(c.r[21], c.r[21].w[0] + 256u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5AC8u | kUnwind; return; } goto L_001B5AC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { goto L_001B5D6C; } }
L_001B5BF0:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 32u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 64u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[2].d[0] = c.r[4].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 16;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[21].w[0] << 1);
    c.budget -= 22;
L_001B5C48:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5C8Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5C8Cu) [[unlikely]] return; }
L_001B5C8C:
    set32(c.r[2], c.r[22].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 416u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5CD0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5CD0u) [[unlikely]] return; }
L_001B5CD0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 400u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D14u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5D14u) [[unlikely]] return; }
L_001B5D14:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 384u);
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D58u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5D58u) [[unlikely]] return; }
L_001B5D58:
    set32(c.r[21], c.r[21].w[0] + 128u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5C48u | kUnwind; return; } goto L_001B5C48; }
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001B5D6C:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(512ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] & 63ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5A64u | kUnwind; return; } goto L_001B5A64; }
    set32(c.r[17], c.r[17].w[0] + 512u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 2;
L_001B5D80:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B59DCu | kUnwind; return; } goto L_001B59DC; }
L_001B5D94:
    set32(c.r[22], c.r[22].w[0] + 1024u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_001B5D9C:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B59B8u | kUnwind; return; } goto L_001B59B8; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_001B5DE0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    set32(c.r[2], 0u + 63u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[7], c.r[29].w[0] + 640u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5E44u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5E44u) [[unlikely]] return; }
L_001B5E44:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 65u);
    c.r[5].d[0] = ld32((c.r[19].w[0] + 40u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.r[9].d[0] = c.r[7].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    set32(c.r[7], c.r[29].w[0] + 624u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EB0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5EB0u) [[unlikely]] return; }
L_001B5EB0:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = ld32((c.r[19].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[7], c.r[29].w[0] + 608u);
    set32(c.r[6], c.r[4].w[0] >> 5);
    set32(c.r[2], 0u + 77u);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[6], 0u + 1u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F08u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5F08u) [[unlikely]] return; }
L_001B5F08:
    set32(c.r[2], 0u + 25u);
    c.r[3].d[0] = 0ull + 0ull;
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 592u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F38u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5F38u) [[unlikely]] return; }
L_001B5F38:
    set32(c.r[2], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[6]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 576u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F64u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5F64u) [[unlikely]] return; }
L_001B5F64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u + 9u);
    c.r[2].d[0] = c.r[2].d[0] | 3955ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::pcpyld(c.r[2], c.r[3], c.r[2]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[2]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 560u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F98u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5F98u) [[unlikely]] return; }
L_001B5F98:
    set32(c.r[2], 0u + 128u);
    set32(c.r[5], 0u + 67u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 42u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[29].w[0] + 544u);
    mmi::pcpyld(c.r[2], c.r[5], c.r[2]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5FD4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B5FD4u) [[unlikely]] return; }
L_001B5FD4:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 790u);
    mmi::pcpyld(c.r[2], c.r[3], c.r[2]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 528u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6004u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B6004u) [[unlikely]] return; }
L_001B6004:
    set32(c.r[3], ld32((c.r[22].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[22].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] >> 5);
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[23], c.r[5].w[0] >> 6);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[4].w[0] << 4);  if (t) { goto L_001B63E8; } }
L_001B6024:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[17], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[30], ld32((c.r[29].w[0] + 368u)));  if (t) { goto L_001B63E0; } }
    set32(c.r[3], c.r[23].w[0] << 5);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);  if (t) { goto L_001B63CC; } }
L_001B6048:
    set32(c.r[2], 0u + 14u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], ld32((c.r[22].w[0] + 16u)));
    c.r[2].d[0] = 0ull | 43312ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[30].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    set32(c.r[7], c.r[29].w[0] + 512u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 7u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B60B0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B60B0u) [[unlikely]] return; }
L_001B60B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 63ull;
    c.budget -= 2;
L_001B60B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  goto L_001B6240; }
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[21].w[0] << 1);
    c.budget -= 22;
L_001B6118:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 496u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B615Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B615Cu) [[unlikely]] return; }
L_001B615C:
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 480u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61A0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B61A0u) [[unlikely]] return; }
L_001B61A0:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 464u);
    set32(c.r[2], c.r[2].w[0] + 384u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61E4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B61E4u) [[unlikely]] return; }
L_001B61E4:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 448u);
    set32(c.r[2], c.r[2].w[0] + 256u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6228u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B6228u) [[unlikely]] return; }
L_001B6228:
    set32(c.r[21], c.r[21].w[0] + 256u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6118u | kUnwind; return; } goto L_001B6118; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { goto L_001B63B8; } }
L_001B6240:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[21].w[0] << 1);
    c.budget -= 21;
L_001B6294:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B62D8u) [[unlikely]] return; }
L_001B62D8:
    set32(c.r[2], c.r[18].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 416u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B631Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B631Cu) [[unlikely]] return; }
L_001B631C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 400u);
    set32(c.r[2], c.r[2].w[0] + 192u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6360u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B6360u) [[unlikely]] return; }
L_001B6360:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 384u);
    set32(c.r[2], c.r[2].w[0] + 128u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63A4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B63A4u) [[unlikely]] return; }
L_001B63A4:
    set32(c.r[21], c.r[21].w[0] + 128u);
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6294u | kUnwind; return; } goto L_001B6294; }
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001B63B8:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(512ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] & 63ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B60B8u | kUnwind; return; } goto L_001B60B8; }
    set32(c.r[17], c.r[17].w[0] + 512u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 2;
L_001B63CC:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[22].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6048u | kUnwind; return; } goto L_001B6048; }
L_001B63E0:
    set32(c.r[18], c.r[18].w[0] + 1024u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_001B63E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6024u | kUnwind; return; } goto L_001B6024; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_001B6430:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[2], 0u + 63u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 352u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[3].w[0] >> 4);
    mmi::pcpyld(c.r[2], c.r[2], c.r[5]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64A0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B64A0u) [[unlikely]] return; }
L_001B64A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[2], 0u + 65u);
    c.r[5].d[0] = ld32((c.r[19].w[0] + 40u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[9], c.r[7].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 32;
    set32(c.r[7], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[9].d[0] = c.r[9].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B651Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B651Cu) [[unlikely]] return; }
L_001B651C:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = ld32((c.r[19].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[7], c.r[4].w[0] >> 5);
    set32(c.r[2], 0u + 77u);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[7], c.r[29].w[0] + 320u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B657Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B657Cu) [[unlikely]] return; }
L_001B657C:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 72u));
    set32(c.r[2], 0u + 25u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B65ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B65ACu) [[unlikely]] return; }
L_001B65AC:
    set32(c.r[2], 0u + 14u);
    c.r[3].d[0] = 0ull | 43040ull;
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[6].d[0] = ld32((c.r[20].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[7].d[0] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[2], 0u + 7u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] << 14;
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    set32(c.r[7], c.r[29].w[0] + 288u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6600u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B6600u) [[unlikely]] return; }
L_001B6600:
    set32(c.r[2], 0u + 21u);
    set32(c.r[6], 0u + 1u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[6]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B662Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B662Cu) [[unlikely]] return; }
L_001B662C:
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = 0ull + 0ull;
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B665Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B665Cu) [[unlikely]] return; }
L_001B665C:
    set32(c.r[2], 0u + 69u);
    c.r[3].d[0] = 0ull + 0ull;
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B668Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B668Cu) [[unlikely]] return; }
L_001B668C:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 790u);
    mmi::pcpyld(c.r[2], c.r[3], c.r[2]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B66BCu) [[unlikely]] return; }
L_001B66BC:
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[8], c.r[4].w[0] << 5);
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[20], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[7], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[19], c.r[5].w[0] << 4);
    c.budget -= 17;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] << 5);  if (t) { goto L_001B6830; } }
    c.r[4].d[0] = c.r[8].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[16].d[0] = c.r[4].d[0] << 16;
    c.r[22].d[0] = c.r[3].d[0] << 16;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[23].d[0] = c.r[4].d[0] << 16;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[3].d[0] << 16;  if (t) { goto L_001B6824; } }
L_001B6734:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[16].d[0];
    set32(c.r[7], c.r[29].w[0] + 208u);
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6768u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B6768u) [[unlikely]] return; }
L_001B6768:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[22].d[0];
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67A0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B67A0u) [[unlikely]] return; }
L_001B67A0:
    set32(c.r[2], c.r[20].w[0] + 128u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[23].d[0];
    set32(c.r[2], 0u + 3u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67DCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B67DCu) [[unlikely]] return; }
L_001B67DC:
    set32(c.r[2], c.r[19].w[0] + 128u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[30].d[0];
    set32(c.r[2], 0u + 5u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6818u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BD020u; return; } if (c.pc != 0x001B6818u) [[unlikely]] return; }
L_001B6818:
    set32(c.r[20], c.r[20].w[0] + 256u);
    set32(c.r[19], c.r[19].w[0] + 256u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_001B6824:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6734u | kUnwind; return; } goto L_001B6734; }
L_001B6830:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_001B6860:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[12], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[9], ld32((c.r[2].w[0] - 28544u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 272u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 28540u)));
    set32(c.r[10], ld32((c.r[3].w[0] - 28532u)));
    set32(c.r[11], ld32((c.r[11].w[0] - 28504u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 228u), c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 28536u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[8].w[0] - 28520u)));
    st32((c.r[29].w[0] + 224u), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 232u), c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0] - 28524u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[15], ld32((c.r[4].w[0] - 28516u)));
    set32(c.r[14], ld32((c.r[3].w[0] - 28512u)));
    st32((c.r[29].w[0] + 236u), c.r[10].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[13], ld32((c.r[2].w[0] - 28508u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 244u), c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 248u), c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], ld32((c.r[10].w[0] - 28500u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] - 28492u)));
    set32(c.r[8], ld32((c.r[8].w[0] - 28488u)));
    set32(c.r[4], ld32((c.r[4].w[0] - 28484u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] - 28479u));
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 252u), c.r[15].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 240u), c.r[12].w[0]);
    st8((c.r[29].w[0] + 288u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    st32((c.r[29].w[0] + 216u), 0u);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[12], c.r[12].w[0] - 28464u);
    set32(c.r[9], c.r[9].w[0] - 28416u);
    c.budget -= 88;
L_001B69C0:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[11], c.r[12].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    c.f[2] = ld32((c.r[11].w[0]));
    set32(c.r[10], c.r[3].w[0] + 176u);
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    set32(c.r[8], c.r[9].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    set32(c.r[4], c.r[3].w[0] + 128u);
    st32((c.r[10].w[0]), c.f[2]);
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[10].w[0] + 4u), c.f[1]);
    st32((c.r[10].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[10].w[0]));
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[12]);
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[10].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    c.f[1] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[10].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 35;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B69C0u | kUnwind; return; } goto L_001B69C0; } }
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001B6A50:
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[22], c.r[7].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001B6B20; } }
L_001B6A60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 176u);  goto L_001B6A6C; }
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001B6A6C:
    st32((c.r[29].w[0] + 284u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 3;
L_001B6A78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[9], c.r[16].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[9].w[0]));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[7], c.r[29].w[0] + 224u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[8], 0u + 1u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6AF8u); st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 64u, depth + 1u); else { c.pc = 0x001BA330u; return; } if (c.pc != 0x001B6AF8u) [[unlikely]] return; }
L_001B6AF8:
    set32(c.r[2], 0u + 5u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6A78u | kUnwind; return; } goto L_001B6A78; }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
L_001B6B20:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] & 1ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6A60u | kUnwind; return; } goto L_001B6A60; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001B6B60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BA4u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 135u, depth + 1u); else { c.pc = 0x001BB480u; return; } if (c.pc != 0x001B6BA4u) [[unlikely]] return; }
L_001B6BA4:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[6].w[0] << 4);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[18], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[30], c.r[19].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[4].w[0] << 4);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.f[3] = c.r[5].w[0];
    set32(c.r[3], c.r[18].w[0] + c.r[6].w[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[22], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[3].d[0] = c.r[22].d[0] << 32;
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[5], c.f[2]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] << 8;
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 56;
    { const bool t = c.r[17].d[0] != 0ull; c.r[23].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_001B6EE4; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_001B6D58; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B6CF0; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B6CB4u) [[unlikely]] return; }
L_001B6CB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B6CE8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CD4u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x001B6CD4u) [[unlikely]] return; }
L_001B6CD4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CE0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x001B6CE0u) [[unlikely]] return; }
L_001B6CE0:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B6CE8:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B6CF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_001B6D14; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_001B6D14:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 17;
L_001B6D58:
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6D78u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x001B6D78u) [[unlikely]] return; }
L_001B6D78:
    c.r[2].d[0] = c.r[22].d[0] ^ 128ull;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], 0u + 128u);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[10], ld32((c.r[28].w[0] - 28776u)));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 6;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[7].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[3].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] | 518ull;
    set32(c.r[9], ld32((c.r[10].w[0] + 20u)));
    set32(c.r[6], 0u + 5u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[8], 0u + 65u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 68u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], 0u + 67u);
    mmi::pcpyld(c.r[11], c.r[3], c.r[5]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    mmi::pcpyld(c.r[5], c.r[5], c.r[4]);
    mmi::pcpyld(c.r[4], c.r[3], c.r[23]);
    set32(c.r[3], c.r[9].w[0] + 16u);
    st32((c.r[10].w[0] + 20u), c.r[3].w[0]);
    mmi::pcpyld(c.r[2], c.r[6], c.r[2]);
    mmi::pcpyld(c.r[3], c.r[6], c.r[7]);
    st128((c.r[9].w[0]) & ~15u, c.r[11]);
    set32(c.r[6], ld32((c.r[10].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[10].w[0] + 16u), c.r[6].w[0]);
    c.r[9].d[0] = ld32((c.r[20].w[0] + 44u));
    c.r[7].d[0] = ld32((c.r[20].w[0] + 40u));
    c.r[6].d[0] = ld32((c.r[20].w[0] + 48u));
    c.r[10].d[0] = c.r[9].d[0] << 16;
    c.r[11].d[0] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[9], ld32((c.r[28].w[0] - 28776u)));
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[10].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[7], ld32((c.r[9].w[0] + 20u)));
    mmi::pcpyld(c.r[8], c.r[8], c.r[6]);
    set32(c.r[6], c.r[7].w[0] + 16u);
    st32((c.r[9].w[0] + 20u), c.r[6].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    set32(c.r[6], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[9].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    set32(c.r[6], c.r[7].w[0] + 16u);
    st32((c.r[8].w[0] + 20u), c.r[6].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    set32(c.r[5], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[8].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] + 16u);
    st32((c.r[7].w[0] + 20u), c.r[5].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    set32(c.r[4], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[7].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + 16u);
    st32((c.r[6].w[0] + 20u), c.r[4].w[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 91;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001B7190; } }
L_001B6EE4:
    set32(c.r[17], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[21], c.r[2].w[0] >> 5);
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_001B6FC4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B6F5C; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B6F20u) [[unlikely]] return; }
L_001B6F20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_001B6F54; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F40u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x001B6F40u) [[unlikely]] return; }
L_001B6F40:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F4Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x001B6F4Cu) [[unlikely]] return; }
L_001B6F4C:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B6F54:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_001B6F5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_001B6F80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_001B6F80:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 17;
L_001B6FC4:
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FE4u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x001B6FE4u) [[unlikely]] return; }
L_001B6FE4:
    set32(c.r[3], 0u + 128u);
    c.r[2].d[0] = c.r[22].d[0] ^ 128ull;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], 0u + 68u);
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[5].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 518ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], 0u + 67u);
    mmi::pcpyld(c.r[8], c.r[2], c.r[5]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    mmi::pcpyld(c.r[7], c.r[5], c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    mmi::pcpyld(c.r[5], c.r[2], c.r[23]);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[8]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[7]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 41;
    { const bool t = c.r[21].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001B7190; } }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[7].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[8], 0u + 5u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 65u);
    mmi::pcpyld(c.r[4], c.r[8], c.r[7]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; mmi::pcpyld(c.r[3], c.r[8], c.r[3]);  if (t) { goto L_001B7184; } }
L_001B70D0:
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    set32(c.r[11], ld32((c.r[20].w[0] + 40u)));
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    c.r[9].d[0] = c.r[7].d[0] << 16;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], ld32((c.r[20].w[0] + 4u)));
    c.r[10].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[8].d[0] = c.r[11].d[0] << 32;
    set32(c.r[9], ld32((c.r[28].w[0] - 28776u)));
    c.r[8].d[0] = c.r[8].d[0] >> 32;
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[10].d[0] = c.r[8].d[0] | c.r[10].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = c.r[10].d[0] | c.r[7].d[0];
    mmi::pcpyld(c.r[10], c.r[2], c.r[7]);
    set32(c.r[7], c.r[8].w[0] + 16u);
    st32((c.r[9].w[0] + 20u), c.r[7].w[0]);
    st128((c.r[8].w[0]) & ~15u, c.r[10]);
    set32(c.r[7], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[9].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[7], c.r[8].w[0] + 16u);
    st32((c.r[9].w[0] + 20u), c.r[7].w[0]);
    st128((c.r[8].w[0]) & ~15u, c.r[4]);
    set32(c.r[7], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[9].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[7], c.r[8].w[0] + 16u);
    st32((c.r[9].w[0] + 20u), c.r[7].w[0]);
    st128((c.r[8].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[9].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 45;
L_001B7184:
    c.r[7].d[0] = c.r[6].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], c.r[5].w[0] + 31u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B70D0u | kUnwind; return; } goto L_001B70D0; }
L_001B7190:
    set32(c.r[2], ld32((c.r[28].w[0] - 28768u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B71A0u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x001B71A0u) [[unlikely]] return; }
L_001B71A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_001B71C0; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_001B71C0:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
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
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001B7210:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[6].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 6608u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B724Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 135u, depth + 1u); else { c.pc = 0x001BB480u; return; } if (c.pc != 0x001B724Cu) [[unlikely]] return; }
L_001B724C:
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7264u); set32(c.r[5], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_002D(c, 231u, depth + 1u); else { c.pc = 0x001B7980u; return; } if (c.pc != 0x001B7264u) [[unlikely]] return; }
L_001B7264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B726Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x001B726Cu) [[unlikely]] return; }
L_001B726C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7274u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B77F0u; return; } if (c.pc != 0x001B7274u) [[unlikely]] return; }
L_001B7274:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B728Cu); c.r[5].d[0] = c.r[2].d[0] | 771ull;  if (depth < kMaxDepth) unit_002D(c, 218u, depth + 1u); else { c.pc = 0x001B77C0u; return; } if (c.pc != 0x001B728Cu) [[unlikely]] return; }
L_001B728C:
    c.r[4].d[0] = ld32((c.r[19].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld32((c.r[19].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 8;
    c.r[8].d[0] = ld32((c.r[19].w[0] + 24u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B72CCu); c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002D(c, 218u, depth + 1u); else { c.pc = 0x001B77C0u; return; } if (c.pc != 0x001B72CCu) [[unlikely]] return; }
L_001B72CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28768u)));
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 113u));
    c.f[2] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 88u), 0u);
    c.f[1] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_001B7468; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001B7320; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B733C; } }
L_001B7320:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001B733C:
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] << 16;  if (t) { goto L_001B7370; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B738C; } }
L_001B7370:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_001B738C:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (t) { goto L_001B73CC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B73E8; } }
L_001B73CC:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001B73E8:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001B7424; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7440; } }
L_001B7424:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001B7440:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001B7490; } }
L_001B7468:
    c.r[4].d[0] = ld32((c.r[16].w[0] + 44u));
    c.r[3].d[0] = ld32((c.r[16].w[0] + 40u));
    c.r[2].d[0] = ld32((c.r[16].w[0] + 48u));
    c.r[5].d[0] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
L_001B7490:
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], 0u + 65u);
    mmi::pcpyld(c.r[5], c.r[2], c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], c.r[3].w[0] << 4);  if (t) { goto L_001B74F0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B750C; } }
L_001B74F0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[4]);
    c.budget -= 7;
L_001B750C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B7528; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7540; } }
L_001B7528:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_001B7540:
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_001B7750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_001B7744; } }
L_001B7554:
    set32(c.r[13], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 4u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[12], ld32((c.r[13].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[11], c.r[12].w[0] + 16u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    set32(c.r[7], c.f[2]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[7].d[0] << 16;
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    mmi::pcpyld(c.r[9], c.r[3], c.r[7]);
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = c.r[7].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[7], c.f[2]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.f[1] = fp::cvt_w_s(c.f[1]);
    mmi::pcpyld(c.r[8], c.r[3], c.r[7]);
    set32(c.r[7], c.f[1]);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[14].d[0] = c.r[7].d[0] << 32;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    set32(c.r[7], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    st32((c.r[13].w[0] + 20u), c.r[11].w[0]);
    c.r[7].d[0] = c.r[14].d[0] | c.r[7].d[0];
    st128((c.r[12].w[0]) & ~15u, c.r[9]);
    mmi::pcpyld(c.r[7], c.r[3], c.r[7]);
    set32(c.r[2], ld32((c.r[13].w[0] + 16u)));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[13].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[12], ld32((c.r[28].w[0] - 28776u)));
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[11], ld32((c.r[12].w[0] + 20u)));
    set32(c.r[2], c.f[1]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[13].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], c.r[11].w[0] + 16u);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    st32((c.r[12].w[0] + 20u), c.r[2].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st128((c.r[11].w[0]) & ~15u, c.r[8]);
    set32(c.r[2], ld32((c.r[12].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[12].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[8], ld32((c.r[11].w[0] + 20u)));
    c.r[12].d[0] = c.r[2].d[0] << 16;
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    set32(c.r[2], c.r[8].w[0] + 16u);
    st32((c.r[11].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    mmi::pcpyld(c.r[2], c.r[3], c.r[12]);
    set32(c.r[8], ld32((c.r[11].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[11].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[12], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[11], ld32((c.r[12].w[0] + 20u)));
    set32(c.r[8], c.r[11].w[0] + 16u);
    st32((c.r[12].w[0] + 20u), c.r[8].w[0]);
    st128((c.r[11].w[0]) & ~15u, c.r[9]);
    set32(c.r[8], ld32((c.r[12].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st32((c.r[12].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[9], ld32((c.r[11].w[0] + 20u)));
    set32(c.r[8], c.r[9].w[0] + 16u);
    st32((c.r[11].w[0] + 20u), c.r[8].w[0]);
    st128((c.r[9].w[0]) & ~15u, c.r[7]);
    set32(c.r[7], ld32((c.r[11].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[11].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[8], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[7], c.r[8].w[0] + 16u);
    st32((c.r[9].w[0] + 20u), c.r[7].w[0]);
    st128((c.r[8].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[9].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[9].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 124;
L_001B7744:
    c.r[2].d[0] = c.r[10].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[10].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7554u | kUnwind; return; } goto L_001B7554; }
L_001B7750:
    set32(c.r[2], ld32((c.r[28].w[0] - 28768u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7760u); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x001B7760u) [[unlikely]] return; }
L_001B7760:
    set32(c.r[3], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_001B7780; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_001B7780:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001B77C0:
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    mmi::pcpyld(c.r[5], c.r[6], c.r[5]);
    set32(c.r[3], c.r[7].w[0] + 16u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_001B77F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  goto L_001B78DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 28368u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001B4000u < 16384u) { entry = entries_002D[(t - 0x001B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001B781C:
    c.r[3].d[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | 168ull;  if (t) { goto L_001B78D8; } }
L_001B782C:
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], 0u + 68u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (t) { goto L_001B78D8; } }
L_001B7840:
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (t) { goto L_001B78D8; } }
L_001B7854:
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], 0u + 84u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (t) { goto L_001B78D8; } }
L_001B7868:
    c.r[3].d[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | 100ull;  if (t) { goto L_001B78D8; } }
L_001B7878:
    c.r[3].d[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | 104ull;  if (t) { goto L_001B78D8; } }
L_001B7888:
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], 0u + 137u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (t) { goto L_001B78D8; } }
L_001B789C:
    c.r[3].d[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | 169ull;  if (t) { goto L_001B78D8; } }
L_001B78AC:
    c.r[3].d[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | 34ull;  if (t) { goto L_001B78D8; } }
L_001B78BC:
    c.r[3].d[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | 98ull;  if (t) { goto L_001B78D8; } }
L_001B78CC:
    c.r[3].d[0] = ld32((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[3].d[0] | 168ull;
    c.budget -= 3;
L_001B78D8:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_001B78DC:
    c.r[3].d[0] = c.r[3].d[0] ^ 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], ld32((c.r[28].w[0] - 28776u)));  goto L_001B78F4; }
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[28].w[0] - 28776u)));
    c.budget -= 2;
L_001B78F4:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 67u);
    mmi::pcpyld(c.r[9], c.r[3], c.r[6]);
    set32(c.r[7], ld32((c.r[8].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[5], c.r[7].w[0] + 16u);
    st32((c.r[8].w[0] + 20u), c.r[5].w[0]);
    st128((c.r[7].w[0]) & ~15u, c.r[9]);
    set32(c.r[5], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[8].w[0] + 16u), c.r[5].w[0]);
    c.r[5].d[0] = ld32((c.r[4].w[0] + 40u));
    c.r[7].d[0] = ld32((c.r[4].w[0] + 44u));
    c.r[8].d[0] = c.r[5].d[0] << 1;
    c.r[4].d[0] = ld32((c.r[4].w[0] + 52u));
    c.r[8].d[0] = c.r[8].d[0] | 1ull;
    c.r[7].d[0] = c.r[7].d[0] << 4;
    set32(c.r[5], ld32((c.r[28].w[0] - 28776u)));
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 17;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    mmi::pcpyld(c.r[6], c.r[3], c.r[4]);
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_001B7980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_001B7A68; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_001B7A00; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B79C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001B79C4u) [[unlikely]] return; }
L_001B79C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_001B79F8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B79E4u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x001B79E4u) [[unlikely]] return; }
L_001B79E4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B79F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x001B79F0u) [[unlikely]] return; }
L_001B79F0:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001B79F8:
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_001B7A00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_001B7A24; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
L_001B7A24:
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[4]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 17;
L_001B7A68:
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001B7AA0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[16], c.r[16].w[0] + 6608u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7AECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 135u, depth + 1u); else { c.pc = 0x001BB480u; return; } if (c.pc != 0x001B7AECu) [[unlikely]] return; }
L_001B7AEC:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B04u); set32(c.r[5], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_002D(c, 231u, depth + 1u); else { c.pc = 0x001B7980u; return; } if (c.pc != 0x001B7B04u) [[unlikely]] return; }
L_001B7B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x001B7B0Cu) [[unlikely]] return; }
L_001B7B0C:
    set32(c.r[2], 0u - 25u);
    c.r[7].d[0] = ld64((c.r[20].w[0] + 56u));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[6], 0u + 7u);
    c.r[3].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = ld32((c.r[17].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 35;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7B48u); c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002D(c, 218u, depth + 1u); else { c.pc = 0x001B77C0u; return; } if (c.pc != 0x001B7B48u) [[unlikely]] return; }
L_001B7B48:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0] + 81u));  goto L_001B7B94; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 81u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u + 5u);  goto L_001B7BE4; }
    c.r[2].d[0] = ld32((c.r[20].w[0] + 36u));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 44u));
    c.r[3].d[0] = ld32((c.r[20].w[0] + 40u));
    c.r[5].d[0] = c.r[2].d[0] << 4;
    c.r[2].d[0] = ld32((c.r[20].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] | 10ull;
    c.r[4].d[0] = c.r[4].d[0] << 14;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_001B7BE4; } }
L_001B7B94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_001B7BE4; }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[2].d[0] = ld32((c.r[20].w[0] + 40u));
    c.r[5].d[0] = c.r[5].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | 15ull;
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 34;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 18;
L_001B7BE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BF0u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_002D(c, 218u, depth + 1u); else { c.pc = 0x001B77C0u; return; } if (c.pc != 0x001B7BF0u) [[unlikely]] return; }
L_001B7BF0:
    c.r[2].d[0] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[6], 0u + 21u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.r[3].d[0] = c.r[2].d[0] << 5;
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C10u); c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002D(c, 218u, depth + 1u); else { c.pc = 0x001B77C0u; return; } if (c.pc != 0x001B7C10u) [[unlikely]] return; }
L_001B7C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 219u, depth + 1u); else { c.pc = 0x001B77F0u; return; } if (c.pc != 0x001B7C18u) [[unlikely]] return; }
L_001B7C18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C30u); c.r[5].d[0] = c.r[2].d[0] | 787ull;  if (depth < kMaxDepth) unit_002D(c, 218u, depth + 1u); else { c.pc = 0x001B77C0u; return; } if (c.pc != 0x001B7C30u) [[unlikely]] return; }
L_001B7C30:
    c.r[4].d[0] = ld32((c.r[17].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = ld32((c.r[17].w[0] + 36u));
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 8;
    c.r[8].d[0] = ld32((c.r[17].w[0] + 24u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C70u); c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_002D(c, 218u, depth + 1u); else { c.pc = 0x001B77C0u; return; } if (c.pc != 0x001B7C70u) [[unlikely]] return; }
L_001B7C70:
    set32(c.r[3], ld32((c.r[28].w[0] - 28768u)));
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 113u));
    c.f[2] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[1] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_001B7E0C; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001B7CC4; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7CE0; } }
L_001B7CC4:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001B7CE0:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] << 16;  if (t) { goto L_001B7D14; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7D30; } }
L_001B7D14:
    set32(c.r[4], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_001B7D30:
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];  if (t) { goto L_001B7D70; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7D8C; } }
L_001B7D70:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001B7D8C:
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_001B7DC8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7DE4; } }
L_001B7DC8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_001B7DE4:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];  if (t) { goto L_001B7E34; } }
L_001B7E0C:
    c.r[4].d[0] = ld32((c.r[16].w[0] + 44u));
    c.r[3].d[0] = ld32((c.r[16].w[0] + 40u));
    c.r[2].d[0] = ld32((c.r[16].w[0] + 48u));
    c.r[5].d[0] = ld32((c.r[16].w[0] + 36u));
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
L_001B7E34:
    set32(c.r[4], ld32((c.r[28].w[0] - 28776u)));
    set32(c.r[2], 0u + 65u);
    mmi::pcpyld(c.r[5], c.r[2], c.r[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[10], c.r[2].w[0] << 4);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[9], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[7], c.r[3].w[0] << 4);  if (t) { goto L_001B7EA4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7EC0; } }
L_001B7EA4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 7;
L_001B7EC0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B7EDC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7EF4; } }
L_001B7EDC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_001B7EF4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B7F10; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7F28; } }
L_001B7F10:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_001B7F28:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_001B7F44; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001B7F5C; } }
L_001B7F44:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001B7F5C:
    set32(c.r[6], c.r[18].w[0] << 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_002E(c, 3u, depth); } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { [[clang::musttail]] return unit_002E(c, 2u, depth); } }
L_001B7F74:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.f[6] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[5] = ld32((c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[28].w[0] - 28776u)));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.f[6] = fp::mul(c.f[2], c.f[6]);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[24], ld32((c.r[25].w[0] + 20u)));
    set32(c.r[20], c.r[24].w[0] + 16u);
    c.f[6] = fp::cvt_w_s(c.f[6]);
    set32(c.r[11], c.f[6]);
    c.f[5] = fp::mul(c.f[3], c.f[5]);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = c.r[11].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[12].d[0] = c.r[11].d[0] << 16;
    c.f[5] = fp::cvt_w_s(c.f[5]);
    set32(c.r[11], c.f[5]);
    c.f[4] = fp::mul(c.f[3], c.f[4]);
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = c.r[11].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    mmi::pcpyld(c.r[17], c.r[5], c.r[11]);
    c.f[6] = ld32((c.r[2].w[0] + 12u));
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[11], c.f[4]);
    c.f[6] = fp::mul(c.f[2], c.f[6]);
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    c.r[12].d[0] = c.r[11].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.budget -= 35;
    [[clang::musttail]] return unit_002E(c, 1u, depth);
}

}
