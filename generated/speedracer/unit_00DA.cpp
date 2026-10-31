#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 37, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 0, 327, 0,
};

void unit_00DA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00468000;
    case 2u: goto L_00468024;
    case 3u: goto L_00468048;
    case 4u: goto L_0046805C;
    case 5u: goto L_0046808C;
    case 6u: goto L_00468094;
    case 7u: goto L_004680B0;
    case 8u: goto L_004680B8;
    case 9u: goto L_004680BC;
    case 10u: goto L_004680E0;
    case 11u: goto L_004680F8;
    case 12u: goto L_0046810C;
    case 13u: goto L_0046811C;
    case 14u: goto L_00468138;
    case 15u: goto L_0046813C;
    case 16u: goto L_00468150;
    case 17u: goto L_0046816C;
    case 18u: goto L_004681CC;
    case 19u: goto L_00468228;
    case 20u: goto L_004682BC;
    case 21u: goto L_004682D4;
    case 22u: goto L_00468300;
    case 23u: goto L_00468310;
    case 24u: goto L_00468334;
    case 25u: goto L_00468344;
    case 26u: goto L_00468364;
    case 27u: goto L_00468398;
    case 28u: goto L_004683D4;
    case 29u: goto L_004683F0;
    case 30u: goto L_004683F8;
    case 31u: goto L_00468420;
    case 32u: goto L_00468434;
    case 33u: goto L_00468444;
    case 34u: goto L_00468458;
    case 35u: goto L_00468468;
    case 36u: goto L_00468484;
    case 37u: goto L_00468494;
    case 38u: goto L_00468498;
    case 39u: goto L_004684A0;
    case 40u: goto L_004684A8;
    case 41u: goto L_004684B8;
    case 42u: goto L_004684CC;
    case 43u: goto L_004684E4;
    case 44u: goto L_004684EC;
    case 45u: goto L_00468520;
    case 46u: goto L_00468530;
    case 47u: goto L_00468544;
    case 48u: goto L_00468550;
    case 49u: goto L_0046855C;
    case 50u: goto L_00468578;
    case 51u: goto L_00468590;
    case 52u: goto L_004685A8;
    case 53u: goto L_004685B0;
    case 54u: goto L_004685BC;
    case 55u: goto L_004685D0;
    case 56u: goto L_00468620;
    case 57u: goto L_00468630;
    case 58u: goto L_00468644;
    case 59u: goto L_00468680;
    case 60u: goto L_00468690;
    case 61u: goto L_004686A8;
    case 62u: goto L_004686C0;
    case 63u: goto L_004686EC;
    case 64u: goto L_0046870C;
    case 65u: goto L_00468728;
    case 66u: goto L_00468734;
    case 67u: goto L_00468740;
    case 68u: goto L_0046874C;
    case 69u: goto L_00468758;
    case 70u: goto L_00468764;
    case 71u: goto L_00468768;
    case 72u: goto L_004687C0;
    case 73u: goto L_00468800;
    case 74u: goto L_00468818;
    case 75u: goto L_00468824;
    case 76u: goto L_0046882C;
    case 77u: goto L_00468840;
    case 78u: goto L_00468850;
    case 79u: goto L_00468860;
    case 80u: goto L_00468878;
    case 81u: goto L_00468890;
    case 82u: goto L_004688A8;
    case 83u: goto L_004688C0;
    case 84u: goto L_004688E0;
    case 85u: goto L_004688F8;
    case 86u: goto L_00468910;
    case 87u: goto L_00468924;
    case 88u: goto L_00468940;
    case 89u: goto L_00468960;
    case 90u: goto L_00468980;
    case 91u: goto L_004689EC;
    case 92u: goto L_00468A10;
    case 93u: goto L_00468A1C;
    case 94u: goto L_00468AEC;
    case 95u: goto L_00468B04;
    case 96u: goto L_00468B30;
    case 97u: goto L_00468BEC;
    case 98u: goto L_00468C1C;
    case 99u: goto L_00468E58;
    case 100u: goto L_00468EA8;
    case 101u: goto L_00468F64;
    case 102u: goto L_00468F74;
    case 103u: goto L_00468FC0;
    case 104u: goto L_00468FD0;
    case 105u: goto L_00469010;
    case 106u: goto L_00469020;
    case 107u: goto L_00469034;
    case 108u: goto L_00469044;
    case 109u: goto L_00469184;
    case 110u: goto L_0046918C;
    case 111u: goto L_0046919C;
    case 112u: goto L_004691A8;
    case 113u: goto L_004691BC;
    case 114u: goto L_004691D8;
    case 115u: goto L_00469204;
    case 116u: goto L_00469280;
    case 117u: goto L_0046928C;
    case 118u: goto L_00469298;
    case 119u: goto L_004692A4;
    case 120u: goto L_004692AC;
    case 121u: goto L_004692E0;
    case 122u: goto L_00469300;
    case 123u: goto L_00469310;
    case 124u: goto L_00469320;
    case 125u: goto L_00469398;
    case 126u: goto L_004693A4;
    case 127u: goto L_004693B0;
    case 128u: goto L_004693BC;
    case 129u: goto L_004693D0;
    case 130u: goto L_00469480;
    case 131u: goto L_004694A8;
    case 132u: goto L_00469588;
    case 133u: goto L_00469810;
    case 134u: goto L_00469888;
    case 135u: goto L_004698AC;
    case 136u: goto L_004698CC;
    case 137u: goto L_004698E4;
    case 138u: goto L_00469934;
    case 139u: goto L_00469970;
    case 140u: goto L_004699E0;
    case 141u: goto L_004699F8;
    case 142u: goto L_00469A5C;
    case 143u: goto L_00469B30;
    case 144u: goto L_00469BAC;
    case 145u: goto L_00469BC0;
    case 146u: goto L_00469C48;
    case 147u: goto L_00469C5C;
    case 148u: goto L_00469C98;
    case 149u: goto L_00469CA4;
    case 150u: goto L_00469CB0;
    case 151u: goto L_00469CB8;
    case 152u: goto L_00469D68;
    case 153u: goto L_00469D88;
    case 154u: goto L_00469DA4;
    case 155u: goto L_00469DE0;
    case 156u: goto L_00469DF4;
    case 157u: goto L_00469E10;
    case 158u: goto L_00469E5C;
    case 159u: goto L_00469EA0;
    case 160u: goto L_00469FB0;
    case 161u: goto L_00469FF0;
    case 162u: goto L_0046A010;
    case 163u: goto L_0046A03C;
    case 164u: goto L_0046A05C;
    case 165u: goto L_0046A080;
    case 166u: goto L_0046A100;
    case 167u: goto L_0046A13C;
    case 168u: goto L_0046A148;
    case 169u: goto L_0046A1C8;
    case 170u: goto L_0046A1D4;
    case 171u: goto L_0046A2A0;
    case 172u: goto L_0046A2C0;
    case 173u: goto L_0046A2FC;
    case 174u: goto L_0046A30C;
    case 175u: goto L_0046A320;
    case 176u: goto L_0046A3C4;
    case 177u: goto L_0046A3D0;
    case 178u: goto L_0046A444;
    case 179u: goto L_0046A4E4;
    case 180u: goto L_0046A500;
    case 181u: goto L_0046A520;
    case 182u: goto L_0046A57C;
    case 183u: goto L_0046A5C8;
    case 184u: goto L_0046A640;
    case 185u: goto L_0046A690;
    case 186u: goto L_0046A6C4;
    case 187u: goto L_0046A6F0;
    case 188u: goto L_0046A710;
    case 189u: goto L_0046A72C;
    case 190u: goto L_0046A780;
    case 191u: goto L_0046A7C0;
    case 192u: goto L_0046A7EC;
    case 193u: goto L_0046A810;
    case 194u: goto L_0046A830;
    case 195u: goto L_0046A890;
    case 196u: goto L_0046A8A4;
    case 197u: goto L_0046A900;
    case 198u: goto L_0046A980;
    case 199u: goto L_0046A9F4;
    case 200u: goto L_0046AA08;
    case 201u: goto L_0046AAD0;
    case 202u: goto L_0046AB2C;
    case 203u: goto L_0046AB98;
    case 204u: goto L_0046AC68;
    case 205u: goto L_0046ACB0;
    case 206u: goto L_0046ACE0;
    case 207u: goto L_0046AD40;
    case 208u: goto L_0046AD54;
    case 209u: goto L_0046AD98;
    case 210u: goto L_0046ADA8;
    case 211u: goto L_0046ADB4;
    case 212u: goto L_0046ADC4;
    case 213u: goto L_0046ADD0;
    case 214u: goto L_0046ADE0;
    case 215u: goto L_0046ADEC;
    case 216u: goto L_0046ADF8;
    case 217u: goto L_0046AE2C;
    case 218u: goto L_0046AF10;
    case 219u: goto L_0046AF20;
    case 220u: goto L_0046AF7C;
    case 221u: goto L_0046AF94;
    case 222u: goto L_0046AFBC;
    case 223u: goto L_0046AFCC;
    case 224u: goto L_0046AFE8;
    case 225u: goto L_0046AFF4;
    case 226u: goto L_0046B00C;
    case 227u: goto L_0046B03C;
    case 228u: goto L_0046B058;
    case 229u: goto L_0046B0B0;
    case 230u: goto L_0046B0CC;
    case 231u: goto L_0046B108;
    case 232u: goto L_0046B11C;
    case 233u: goto L_0046B134;
    case 234u: goto L_0046B13C;
    case 235u: goto L_0046B170;
    case 236u: goto L_0046B17C;
    case 237u: goto L_0046B188;
    case 238u: goto L_0046B1D0;
    case 239u: goto L_0046B1D8;
    case 240u: goto L_0046B21C;
    case 241u: goto L_0046B25C;
    case 242u: goto L_0046B29C;
    case 243u: goto L_0046B2DC;
    case 244u: goto L_0046B300;
    case 245u: goto L_0046B32C;
    case 246u: goto L_0046B36C;
    case 247u: goto L_0046B378;
    case 248u: goto L_0046B390;
    case 249u: goto L_0046B3C0;
    case 250u: goto L_0046B3F8;
    case 251u: goto L_0046B410;
    case 252u: goto L_0046B450;
    case 253u: goto L_0046B47C;
    case 254u: goto L_0046B490;
    case 255u: goto L_0046B4A4;
    case 256u: goto L_0046B4B8;
    case 257u: goto L_0046B4C0;
    case 258u: goto L_0046B5A4;
    case 259u: goto L_0046B5B0;
    case 260u: goto L_0046B5BC;
    case 261u: goto L_0046B5D4;
    case 262u: goto L_0046B5E8;
    case 263u: goto L_0046B5FC;
    case 264u: goto L_0046B640;
    case 265u: goto L_0046B654;
    case 266u: goto L_0046B668;
    case 267u: goto L_0046B690;
    case 268u: goto L_0046B6A4;
    case 269u: goto L_0046B6B8;
    case 270u: goto L_0046B6F8;
    case 271u: goto L_0046B70C;
    case 272u: goto L_0046B720;
    case 273u: goto L_0046B75C;
    case 274u: goto L_0046B774;
    case 275u: goto L_0046B78C;
    case 276u: goto L_0046B7A0;
    case 277u: goto L_0046B80C;
    case 278u: goto L_0046B818;
    case 279u: goto L_0046B824;
    case 280u: goto L_0046B844;
    case 281u: goto L_0046B850;
    case 282u: goto L_0046B904;
    case 283u: goto L_0046B960;
    case 284u: goto L_0046B96C;
    case 285u: goto L_0046B9CC;
    case 286u: goto L_0046B9E8;
    case 287u: goto L_0046BA44;
    case 288u: goto L_0046BA50;
    case 289u: goto L_0046BAB0;
    case 290u: goto L_0046BAC8;
    case 291u: goto L_0046BB28;
    case 292u: goto L_0046BB34;
    case 293u: goto L_0046BB94;
    case 294u: goto L_0046BBD0;
    case 295u: goto L_0046BBF4;
    case 296u: goto L_0046BC10;
    case 297u: goto L_0046BC34;
    case 298u: goto L_0046BC4C;
    case 299u: goto L_0046BC70;
    case 300u: goto L_0046BC80;
    case 301u: goto L_0046BCA4;
    case 302u: goto L_0046BCB0;
    case 303u: goto L_0046BCC0;
    case 304u: goto L_0046BCD4;
    case 305u: goto L_0046BCE4;
    case 306u: goto L_0046BCFC;
    case 307u: goto L_0046BD10;
    case 308u: goto L_0046BD24;
    case 309u: goto L_0046BD38;
    case 310u: goto L_0046BD4C;
    case 311u: goto L_0046BD60;
    case 312u: goto L_0046BD70;
    case 313u: goto L_0046BD80;
    case 314u: goto L_0046BDC4;
    case 315u: goto L_0046BE00;
    case 316u: goto L_0046BE74;
    case 317u: goto L_0046BED0;
    case 318u: goto L_0046BF28;
    case 319u: goto L_0046BF3C;
    case 320u: goto L_0046BF4C;
    case 321u: goto L_0046BF68;
    case 322u: goto L_0046BF74;
    case 323u: goto L_0046BF90;
    case 324u: goto L_0046BFD8;
    case 325u: goto L_0046BFE4;
    case 326u: goto L_0046BFEC;
    case 327u: goto L_0046BFF8;
    default: bad_entry(c, 0x00468000u); return;
    }
L_00468000:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.f[13] = ld32((c.r[20].w[0] + 460u));  goto L_00468010; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00468088; } }
L_00468010:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468024u); set32(c.r[6], c.r[6].w[0] - 31903u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x00468024u) [[unlikely]] return; }
L_00468024:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468088; } }
    c.f[0] = ld32((c.r[20].w[0] + 460u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 31968u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24332u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00468088; } }
L_00468048:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046805Cu); set32(c.r[6], c.r[6].w[0] - 31883u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x0046805Cu) [[unlikely]] return; }
L_0046805C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 305u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00468088; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468088; } }
    c.f[0] = ld32((c.r[20].w[0] + 468u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 31976u), c.f[0]);
    st8((c.r[28].w[0] - 24336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00468088:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_0046808C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468094u); st32((c.r[29].w[0] + 1484u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00468094u) [[unlikely]] return; }
L_00468094:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1616u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004680B0u); st32((c.r[29].w[0] + 1480u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004680B0u) [[unlikely]] return; }
L_004680B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004680B8u); set32(c.r[4], ld32((c.r[29].w[0] + 1480u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004680B8u) [[unlikely]] return; }
L_004680B8:
    c.f[13] = fp::mul(c.f[26], c.f[24]);
    c.budget -= 1;
L_004680BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 1616u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[16] = ld32((c.r[29].w[0] + 1620u));
    c.f[12] = c.f[22];
    c.f[15] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004680E0u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_00DA(c, 201u, depth + 1u); else { c.pc = 0x0046AAD0u; return; } if (c.pc != 0x004680E0u) [[unlikely]] return; }
L_004680E0:
    c.f[0] = ld32((c.r[29].w[0] + 1620u));
    set32(c.r[4], c.r[29].w[0] + 912u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004680F8u); c.f[25] = fp::add(c.f[25], c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004680F8u) [[unlikely]] return; }
L_004680F8:
    set32(c.r[21], ld32((c.r[29].w[0] + 1616u)));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0046813C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046810Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0046810Cu) [[unlikely]] return; }
L_0046810C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046811Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0046811Cu) [[unlikely]] return; }
L_0046811C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468138; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00468138u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00468138u) [[unlikely]] return; }
L_00468138:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0046813C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00467DF8u | kUnwind; return; } [[clang::musttail]] return unit_00D9(c, 372u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00468494; } }
L_00468150:
    c.f[0] = ld32((c.r[28].w[0] - 24344u));
    c.f[21] = ld32((c.r[2].w[0] + 32u));
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046816Cu);  if (depth < kMaxDepth) unit_00AB(c, 378u, depth + 1u); else { c.pc = 0x003AF0E0u; return; } if (c.pc != 0x0046816Cu) [[unlikely]] return; }
L_0046816C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_00468194; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004681A8; } }
L_00468194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_004681A8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[12] = ld32((c.r[20].w[0] + 380u));  goto L_004681B8; }
    set32(c.r[17], 0u + 1u);
    c.f[12] = ld32((c.r[20].w[0] + 380u));
    c.budget -= 2;
L_004681B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004681CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x004681CCu) [[unlikely]] return; }
L_004681CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 1612u), 0u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] < 0; c.f[20] = c.f[0];  if (t) { goto L_004681EC; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00468208; } }
L_004681EC:
    set32(c.r[3], c.r[17].w[0] >> 1);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00468208:
    fpu_div(c, 24u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[22], ld32((c.r[2].w[0] + 20312u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[21], c.f[24]);  if (t) { goto L_00468488; } }
L_00468228:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_0046823C; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00468254; } }
L_0046823C:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00468254:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[23] = fp::mul(c.f[0], c.f[24]);  if (t) { goto L_0046826C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00468288; } }
L_0046826C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00468288:
    c.f[13] = fp::mul(c.f[0], c.f[24]);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 411u));
    set32(c.r[4], c.r[29].w[0] + 1608u);
    set32(c.r[5], c.r[29].w[0] + 1088u);
    set32(c.r[7], c.r[29].w[0] + 1424u);
    set32(c.r[8], c.r[29].w[0] + 1376u);
    set32(c.r[9], c.r[29].w[0] + 1612u);
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    c.f[15] = ld32((c.r[20].w[0] + 468u));
    c.f[12] = c.f[23];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004682BCu); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0102(c, 230u, depth + 1u); else { c.pc = 0x00509890u; return; } if (c.pc != 0x004682BCu) [[unlikely]] return; }
L_004682BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 31841u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004682D4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004682D4u) [[unlikely]] return; }
L_004682D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 897u);  goto L_004682E8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 904u)));
    c.budget -= 1;
L_004682E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004682F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00468300; } }
L_004682F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468300u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00468300u) [[unlikely]] return; }
L_00468300:
    set32(c.r[4], ld32((c.r[29].w[0] + 1608u)));
    set32(c.r[5], c.r[29].w[0] + 1548u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468310u); st32((c.r[29].w[0] + 1548u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00468310u) [[unlikely]] return; }
L_00468310:
    set32(c.r[2], ld32((c.r[29].w[0] + 1548u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 1608u)));  goto L_00468368; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[21], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468334u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00468334u) [[unlikely]] return; }
L_00468334:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468344u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00468344u) [[unlikely]] return; }
L_00468344:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00468364; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468364u); set32(c.r[5], c.r[29].w[0] + 1548u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00468364u) [[unlikely]] return; }
L_00468364:
    set32(c.r[5], ld32((c.r[29].w[0] + 1608u)));
    c.budget -= 1;
L_00468368:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_004683F8; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 24u)));  goto L_004683CC; }
    c.f[13] = ld32((c.r[20].w[0] + 468u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468398u); set32(c.r[6], c.r[6].w[0] - 31883u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x00468398u) [[unlikely]] return; }
L_00468398:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 305u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004683C8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004683C4; } }
    c.f[0] = ld32((c.r[20].w[0] + 468u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 31976u), c.f[0]);
    st8((c.r[28].w[0] - 24336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_004683C4:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004683C8:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_004683CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004683D4u); st32((c.r[29].w[0] + 1476u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004683D4u) [[unlikely]] return; }
L_004683D4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1608u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004683F0u); st32((c.r[29].w[0] + 1472u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004683F0u) [[unlikely]] return; }
L_004683F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004683F8u); set32(c.r[4], ld32((c.r[29].w[0] + 1472u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004683F8u) [[unlikely]] return; }
L_004683F8:
    c.f[13] = fp::mul(c.f[21], c.f[23]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1608u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[16] = ld32((c.r[29].w[0] + 1612u));
    c.f[15] = ld32((c.r[20].w[0] + 468u));
    c.f[14] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468420u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00DA(c, 201u, depth + 1u); else { c.pc = 0x0046AAD0u; return; } if (c.pc != 0x00468420u) [[unlikely]] return; }
L_00468420:
    c.f[12] = ld32((c.r[29].w[0] + 1612u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468434u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x00468434u) [[unlikely]] return; }
L_00468434:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00468444u) [[unlikely]] return; }
L_00468444:
    set32(c.r[21], ld32((c.r[29].w[0] + 1608u)));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00468488; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468458u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00468458u) [[unlikely]] return; }
L_00468458:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468468u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00468468u) [[unlikely]] return; }
L_00468468:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468484; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00468484u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00468484u) [[unlikely]] return; }
L_00468484:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00468488:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00468228u | kUnwind; return; } goto L_00468228; } }
L_00468494:
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 1;
L_00468498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004684A0u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x004684A0u) [[unlikely]] return; }
L_004684A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004684A8u); set32(c.r[4], c.r[29].w[0] + 1380u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x004684A8u) [[unlikely]] return; }
L_004684A8:
    set32(c.r[6], ld32((c.r[29].w[0] + 1324u)));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004684B8u); set32(c.r[5], c.r[29].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004684B8u) [[unlikely]] return; }
L_004684B8:
    set32(c.r[22], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 1296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004684CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004684CCu) [[unlikely]] return; }
L_004684CC:
    set32(c.r[16], ld32((c.r[29].w[0] + 420u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 428u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 416u)));  if (t) { goto L_00468510; } }
L_004684E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004684ECu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004684ECu) [[unlikely]] return; }
L_004684EC:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[21].d[0];  if (t) { goto L_00468510; } }
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[23].d[0]) { set32(c.r[18], ld32((c.r[17].w[0])));  goto L_0046850C; }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0046850C:
    set32(c.r[21], c.r[18].w[0] + 512u);
    c.budget -= 1;
L_00468510:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[22].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004684E4u | kUnwind; return; } goto L_004684E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468520u); set32(c.r[4], c.r[29].w[0] + 1296u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x00468520u) [[unlikely]] return; }
L_00468520:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468530u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x00468530u) [[unlikely]] return; }
L_00468530:
    set32(c.r[4], c.r[20].w[0] + 192u);
    st32((c.r[29].w[0] + 844u), 0u);
    st32((c.r[29].w[0] + 860u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468544u); st32((c.r[29].w[0] + 876u), 0u);  if (depth < kMaxDepth) unit_00C9(c, 150u, depth + 1u); else { c.pc = 0x00425140u; return; } if (c.pc != 0x00468544u) [[unlikely]] return; }
L_00468544:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468550u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_00C9(c, 149u, depth + 1u); else { c.pc = 0x00425130u; return; } if (c.pc != 0x00468550u) [[unlikely]] return; }
L_00468550:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046855Cu); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_00C9(c, 148u, depth + 1u); else { c.pc = 0x00425120u; return; } if (c.pc != 0x0046855Cu) [[unlikely]] return; }
L_0046855C:
    c.f[12] = ld32((c.r[18].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x00468578u) [[unlikely]] return; }
L_00468578:
    c.f[12] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468590u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x00468590u) [[unlikely]] return; }
L_00468590:
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 832u);
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004685A8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x004685A8u) [[unlikely]] return; }
L_004685A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004685B0u); set32(c.r[4], c.r[20].w[0] + 192u);  if (depth < kMaxDepth) unit_00C9(c, 147u, depth + 1u); else { c.pc = 0x00425110u; return; } if (c.pc != 0x004685B0u) [[unlikely]] return; }
L_004685B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004685BCu); set32(c.r[4], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x004685BCu) [[unlikely]] return; }
L_004685BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 832u);
    st32((c.r[29].w[0] + 892u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
L_004685D0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004685D0u | kUnwind; return; } goto L_004685D0; } }
    c.f[2] = ld32((c.r[29].w[0] + 880u));
    c.f[1] = ld32((c.r[29].w[0] + 884u));
    c.f[0] = ld32((c.r[29].w[0] + 888u));
    st32((c.r[19].w[0] + 96u), c.f[2]);
    st32((c.r[19].w[0] + 100u), c.f[1]);
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 892u));
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[19].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468620u); st32((c.r[29].w[0] + 1516u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00468620u) [[unlikely]] return; }
L_00468620:
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468630u); st32((c.r[29].w[0] + 1512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00468630u) [[unlikely]] return; }
L_00468630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 384u), c.r[2].w[0]);  goto L_00468648; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 218u, depth + 1u); else { c.pc = 0x00419980u; return; } if (c.pc != 0x00468644u) [[unlikely]] return; }
L_00468644:
    st32((c.r[20].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 1;
L_00468648:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[20].w[0] + 304u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004686A8; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 388u)));  goto L_00468694; }
    set32(c.r[2], ld32((c.r[20].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468690; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 31867u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468680u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 105u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x00468680u) [[unlikely]] return; }
L_00468680:
    st32((c.r[20].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 215u, depth + 1u); else { c.pc = 0x004033D0u; return; } if (c.pc != 0x00468690u) [[unlikely]] return; }
L_00468690:
    set32(c.r[2], ld32((c.r[20].w[0] + 388u)));
    c.budget -= 1;
L_00468694:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_004686A0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004686A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004686A8u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004686A8u) [[unlikely]] return; }
L_004686A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 392u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_004686C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004686C0u);  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x00329760u; return; } if (c.pc != 0x004686C0u) [[unlikely]] return; }
L_004686C0:
    st32((c.r[20].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 1;
L_004686C4:
    set32(c.r[16], ld32((c.r[20].w[0] + 392u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 1512u)));  goto L_00468720; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_00468700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004686ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x004686ECu) [[unlikely]] return; }
L_004686EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_00468700:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046870Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046870Cu) [[unlikely]] return; }
L_0046870C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1512u)));
    c.budget -= 5;
L_00468720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468728u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00468728u) [[unlikely]] return; }
L_00468728:
    set32(c.r[4], c.r[29].w[0] + 1200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468734u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0102(c, 279u, depth + 1u); else { c.pc = 0x00509E50u; return; } if (c.pc != 0x00468734u) [[unlikely]] return; }
L_00468734:
    set32(c.r[4], c.r[29].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x00468740u) [[unlikely]] return; }
L_00468740:
    set32(c.r[4], c.r[29].w[0] + 1332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046874Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x0046874Cu) [[unlikely]] return; }
L_0046874C:
    set32(c.r[4], c.r[29].w[0] + 1380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468758u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x00468758u) [[unlikely]] return; }
L_00468758:
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468764u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x00468764u) [[unlikely]] return; }
L_00468764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_00468768:
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1648u);  c.pc = t; return; }
L_004687C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] >> 7);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00468800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468818u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00DA(c, 77u, depth + 1u); else { c.pc = 0x00468840u; return; } if (c.pc != 0x00468818u) [[unlikely]] return; }
L_00468818:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468824u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x00468824u) [[unlikely]] return; }
L_00468824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046882Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x0046882Cu) [[unlikely]] return; }
L_0046882C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00468840:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00468850:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00468860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004688AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468878u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00468878u) [[unlikely]] return; }
L_00468878:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00468898; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468890u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00468890u) [[unlikely]] return; }
L_00468890:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00468898:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004688B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004688A8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004688A8u) [[unlikely]] return; }
L_004688A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004688AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004688B0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004688C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00468914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004688E0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004688E0u) [[unlikely]] return; }
L_004688E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00468900; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004688F8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004688F8u) [[unlikely]] return; }
L_004688F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00468900:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[29].w[0] + 44u), c.r[5].w[0]);  goto L_00468918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468910u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00468910u) [[unlikely]] return; }
L_00468910:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00468914:
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    c.budget -= 1;
L_00468918:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468924u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00DA(c, 88u, depth + 1u); else { c.pc = 0x00468940u; return; } if (c.pc != 0x00468924u) [[unlikely]] return; }
L_00468924:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00468940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468960u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0008(c, 497u, depth + 1u); else { c.pc = 0x00123D10u; return; } if (c.pc != 0x00468960u) [[unlikely]] return; }
L_00468960:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00468980:
    set32(c.r[29], c.r[29].w[0] - 480u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[31]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
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
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004689ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 111u, depth + 1u); else { c.pc = 0x004650F0u; return; } if (c.pc != 0x004689ECu) [[unlikely]] return; }
L_004689EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[31] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468A10u); st32((c.r[17].w[0] + 32u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x00468A10u) [[unlikely]] return; }
L_00468A10:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468A1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x00468A1Cu) [[unlikely]] return; }
L_00468A1C:
    c.f[0] = ld32((c.r[28].w[0] - 29912u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[27] = ld32((c.r[28].w[0] - 29916u));
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[30] = fp::mul(c.f[31], c.f[31]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[26] = 0u;
    fpu_div(c, 29u, c.f[27], c.f[2]);
    fpu_div(c, 28u, c.f[27], c.f[1]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468A84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[29] = fp::mul(c.f[29], c.f[0]);
    c.f[28] = fp::mul(c.f[28], c.f[0]);
    c.f[27] = fp::mul(c.f[27], c.f[0]);
    c.f[26] = c.r[3].w[0];
    c.budget -= 8;
L_00468A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.f[0] = fp::sub(c.f[0], c.f[26]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 36u), c.f[26]);
    st32((c.r[17].w[0] + 4u), c.f[26]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[12] = c.f[26];
    st32((c.r[29].w[0] + 464u), 0u);
    c.f[25] = c.f[26];
    st32((c.r[29].w[0] + 468u), 0u);
    c.f[24] = c.f[26];
    st32((c.r[29].w[0] + 472u), 0u);
    st32((c.r[29].w[0] + 448u), 0u);
    st32((c.r[29].w[0] + 452u), 0u);
    st32((c.r[29].w[0] + 456u), 0u);
    st32((c.r[29].w[0] + 432u), 0u);
    st32((c.r[29].w[0] + 436u), 0u);
    st32((c.r[29].w[0] + 440u), 0u);
    st32((c.r[29].w[0] + 416u), 0u);
    st32((c.r[29].w[0] + 420u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468AECu); st32((c.r[29].w[0] + 424u), 0u);  if (depth < kMaxDepth) unit_0005(c, 148u, depth + 1u); else { c.pc = 0x00115FB0u; return; } if (c.pc != 0x00468AECu) [[unlikely]] return; }
L_00468AEC:
    c.f[0] = fp::mul(c.f[28], c.f[27]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = c.f[31] ^ fp::kSign;
    c.f[23] = 0u;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_00468DE0; } }
L_00468B04:
    set32(c.r[5], c.r[29].w[0] + 464u);
    c.f[12] = c.f[25];
    set32(c.r[6], c.r[29].w[0] + 384u);
    set32(c.r[7], c.r[29].w[0] + 400u);
    st32((c.r[29].w[0] + 400u), 0u);
    st32((c.r[29].w[0] + 404u), 0u);
    st32((c.r[29].w[0] + 408u), 0u);
    st32((c.r[29].w[0] + 384u), 0u);
    st32((c.r[29].w[0] + 388u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468B30u); st32((c.r[29].w[0] + 392u), 0u);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x00468B30u) [[unlikely]] return; }
L_00468B30:
    c.f[4] = ld32((c.r[29].w[0] + 392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[29].w[0] + 404u));
    c.f[6] = ld32((c.r[29].w[0] + 388u));
    c.f[5] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 384u));
    c.f[9] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 400u));
    c.facc = fp::mul(c.f[5], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[2], c.f[4]));
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.facc = fp::mul(c.f[9], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[8]));
    c.f[10] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 10u, c.f[0], c.f[10]);
    c.f[0] = fp::mul(c.f[9], c.f[10]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = fp::mul(c.f[8], c.f[10]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[6] = ld32((c.r[29].w[0] + 464u));
    c.f[3] = ld32((c.r[29].w[0] + 432u));
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = fp::add(c.f[6], c.f[0]);
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 448u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[5] = ld32((c.r[29].w[0] + 468u));
    c.f[2] = ld32((c.r[29].w[0] + 436u));
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = fp::add(c.f[5], c.f[0]);
    c.f[20] = fp::mul(c.f[7], c.f[10]);
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 452u), c.f[0]);
    c.f[0] = fp::mul(c.f[23], c.f[20]);
    c.f[4] = ld32((c.r[29].w[0] + 472u));
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.f[4] = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 456u), c.f[4]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.budget -= 47;
    { const bool t = 0ull == 0ull; c.f[22] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (t) { goto L_00468C70; } }
L_00468BEC:
    c.f[0] = fp::add(c.f[24], c.f[28]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[24], c.f[1]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[21] = fp::add(c.f[24], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468C1Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0005(c, 148u, depth + 1u); else { c.pc = 0x00115FB0u; return; } if (c.pc != 0x00468C1Cu) [[unlikely]] return; }
L_00468C1C:
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.f[3] = ld32((c.r[29].w[0] + 420u));
    c.f[2] = ld32((c.r[29].w[0] + 452u));
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 424u));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[5] = ld32((c.r[29].w[0] + 416u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00468CAC; } }
    st32((c.r[29].w[0] + 432u), c.f[5]);
    c.f[24] = c.f[21];
    st32((c.r[29].w[0] + 436u), c.f[3]);
    c.f[22] = c.f[0];
    st32((c.r[29].w[0] + 440u), c.f[1]);
    c.budget -= 5;
L_00468C70:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00468C88; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00468C88:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468CAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00468BECu | kUnwind; return; } goto L_00468BEC; }
L_00468CAC:
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00468D88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00468CF0; } }
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00468CF0; } }
    st32((c.r[17].w[0] + 4u), c.f[25]);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 36u), c.f[24]);
    c.budget -= 3;
L_00468CF0:
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[30]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[29].w[0] + 240u)));  goto L_00468D98; }
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[5] = ld32((c.r[29].w[0] + 464u));
    c.f[6] = ld32((c.r[29].w[0] + 432u));
    c.f[11] = fp::mul(c.f[31], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[9] = ld32((c.r[29].w[0] + 468u));
    c.f[4] = ld32((c.r[29].w[0] + 436u));
    c.f[10] = fp::mul(c.f[31], c.f[0]);
    c.f[0] = fp::add(c.f[5], c.f[11]);
    c.f[2] = fp::sub(c.f[0], c.f[6]);
    c.f[0] = fp::add(c.f[9], c.f[10]);
    c.f[8] = fp::mul(c.f[31], c.f[20]);
    c.f[1] = fp::sub(c.f[0], c.f[4]);
    c.f[7] = ld32((c.r[29].w[0] + 472u));
    c.f[3] = ld32((c.r[29].w[0] + 440u));
    c.f[0] = fp::add(c.f[7], c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sub(c.f[5], c.f[11]);
    c.f[2] = fp::sub(c.f[0], c.f[6]);
    c.f[0] = fp::sub(c.f[9], c.f[10]);
    c.f[1] = fp::sub(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.f[7], c.f[8]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 32;
    if (!(c.fcr31 & kFpuCondition)) { c.f[23] = ld32((c.r[29].w[0] + 124u));  goto L_00468D80; }
    c.f[23] = c.f[31];
    c.budget -= 1;
L_00468D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00468DE0; } }
L_00468D88:
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[30]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[26];  goto L_00468E20; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 1;
L_00468D98:
    c.f[0] = fp::add(c.f[25], c.f[29]);
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[25]);
    c.f[0] = fp::mul(c.f[27], c.f[0]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[25], c.f[1]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[25], c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[3]);
    c.f[25] = fp::min(c.f[0], c.f[2]);
    c.budget -= 18;
L_00468DE0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00468DF8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00468DF8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00468E1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 240u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00468B04u | kUnwind; return; } goto L_00468B04; }
L_00468E1C:
    c.f[12] = c.f[26];
    c.budget -= 1;
L_00468E20:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    set32(c.r[7], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 368u), 0u);
    st32((c.r[29].w[0] + 372u), 0u);
    st32((c.r[29].w[0] + 376u), 0u);
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 336u), 0u);
    st32((c.r[29].w[0] + 340u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468E58u); st32((c.r[29].w[0] + 344u), 0u);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x00468E58u) [[unlikely]] return; }
L_00468E58:
    st32((c.r[17].w[0] + 12u), c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[0] = c.f[23] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 368u);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 448u);
    c.f[1] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[7], c.r[29].w[0] + 320u);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.f[3] = ld32((c.r[29].w[0] + 372u));
    c.f[2] = ld32((c.r[29].w[0] + 340u));
    c.f[4] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 376u));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[4]);
    st32((c.r[29].w[0] + 324u), c.f[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468EA8u); st32((c.r[29].w[0] + 328u), c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 84u, depth + 1u); else { c.pc = 0x00114AE0u; return; } if (c.pc != 0x00468EA8u) [[unlikely]] return; }
L_00468EA8:
    c.f[3] = ld32((c.r[29].w[0] + 144u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[17].w[0] + 28u), c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[17].w[0] + 48u), c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[2]);
    st32((c.r[17].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[17].w[0] + 60u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[25]);
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 40u), c.f[24]);  if (t) { goto L_00468F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00468F20; } }
L_00468F08:
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00468F18; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00468F18:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_00468F20:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[29]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00468F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00468F54; } }
L_00468F3C:
    fpu_compare(c, fp::key(c.f[29]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00468F4C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00468F4C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_00468F54:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[17].w[0] + 48u);  goto L_00468F6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468F64u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 83u, depth + 1u); else { c.pc = 0x00114AA0u; return; } if (c.pc != 0x00468F64u) [[unlikely]] return; }
L_00468F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00468F78; } }
L_00468F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00468F74u);  if (depth < kMaxDepth) unit_0005(c, 83u, depth + 1u); else { c.pc = 0x00114AA0u; return; } if (c.pc != 0x00468F74u) [[unlikely]] return; }
L_00468F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00468F78:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_00468FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00468FD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469010u); st32((c.r[29].w[0] + 116u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00469010u) [[unlikely]] return; }
L_00469010:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469020u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00469020u) [[unlikely]] return; }
L_00469020:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], 0u + 96u);  goto L_0046903C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469034u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x00469034u) [[unlikely]] return; }
L_00469034:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.budget -= 2;
L_0046903C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469044u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00469044u) [[unlikely]] return; }
L_00469044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046909C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31000u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[2].w[0] + 31004u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 76u), 0u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 20;
L_0046909C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_004690BC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004690BC:
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00469114; }
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004690E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004690E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00469110; }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046910C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046910C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00469110:
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00469114:
    st32((c.r[18].w[0]), c.f[21]);
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00469170; }
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046914C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046914C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0046916C; }
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00469168; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00469168:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0046916C:
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00469170:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469184u); st32((c.r[18].w[0] + 16u), c.f[20]);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00469184u) [[unlikely]] return; }
L_00469184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046918Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x0046918Cu) [[unlikely]] return; }
L_0046918C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046919Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0046919Cu) [[unlikely]] return; }
L_0046919C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004691A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004691A8u) [[unlikely]] return; }
L_004691A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_004691E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004691BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004691BCu) [[unlikely]] return; }
L_004691BC:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004691D8u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0086(c, 15u, depth + 1u); else { c.pc = 0x003181E0u; return; } if (c.pc != 0x004691D8u) [[unlikely]] return; }
L_004691D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_004691E0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00469278; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_00469208; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00469204u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00469204u) [[unlikely]] return; }
L_00469204:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_00469208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046922C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0046926C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0046926C; } }
L_0046922C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_00469254; }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_00469270; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0046926C; } }
L_00469254:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046926C; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0046926C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_00469270:
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00469278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469280u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00469280u) [[unlikely]] return; }
L_00469280:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046928Cu); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0046928Cu) [[unlikely]] return; }
L_0046928C:
    set32(c.r[4], c.r[20].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469298u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00469298u) [[unlikely]] return; }
L_00469298:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004692A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004692A4u) [[unlikely]] return; }
L_004692A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004692ACu); set32(c.r[4], ld32((c.r[29].w[0] + 112u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004692ACu) [[unlikely]] return; }
L_004692AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004692E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 52u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469300u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00469300u) [[unlikely]] return; }
L_00469300:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00469310u) [[unlikely]] return; }
L_00469310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00469360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469320u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00469320u) [[unlikely]] return; }
L_00469320:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00469360:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  goto L_004693B4; }
    c.r[6].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[3], 0u - 49u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469398u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00469398u) [[unlikely]] return; }
L_00469398:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004693A4u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004693A4u) [[unlikely]] return; }
L_004693A4:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004693B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004693B0u) [[unlikely]] return; }
L_004693B0:
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_004693B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004693BCu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004693BCu) [[unlikely]] return; }
L_004693BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004693D0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[2].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00469430; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00469430:
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0046944C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 4;
L_0046944C:
    c.f[0] = 0u;
    c.f[1] = fp::max(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::min(c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[20].w[0] + 256u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469480u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00469480u) [[unlikely]] return; }
L_00469480:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_00469578; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004694A8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[5], ld32((c.r[6].w[0])));  if (t) { goto L_0046951C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_004694EC; }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004694E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004694E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0046951C; } }
L_004694E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_004694EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0046951C; } }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046951C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0046951C; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0046951C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[21].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 208u)));  goto L_0046954C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00469534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00469548; } }
L_00469534:
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00469594; } }
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00469548:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 1;
L_0046954C:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 284u)));  goto L_0046957C; }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 4;
    if (c.r[22].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[22].w[0])));  goto L_00469570; }
    set32(c.r[22], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[16], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_00469570:
    set32(c.r[2], c.r[16].w[0] + 512u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 2;
L_00469578:
    set32(c.r[6], ld32((c.r[20].w[0] + 284u)));
    c.budget -= 1;
L_0046957C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469588u); set32(c.r[5], c.r[20].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00469588u) [[unlikely]] return; }
L_00469588:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004694A8u | kUnwind; return; } goto L_004694A8; }
L_00469594:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004695A8; }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[17].d[0]) { c.f[3] = ld32((c.r[18].w[0] + 4u));  goto L_004695F0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_004695A8:
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 24u), 0u);
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 32u), 0u);
    st32((c.r[19].w[0] + 36u), 0u);
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 44u), 0u);
    st32((c.r[19].w[0] + 48u), 0u);
    st32((c.r[19].w[0] + 52u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00469934; } }
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_004695F0:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[3]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[17].w[0] + 4u));  goto L_004696E0; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004696DC; } }
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 68u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 72u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 76u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    c.budget -= 33;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[19].w[0] + 60u), c.f[0]);  if (t) { goto L_00469934; } }
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_00469938; } }
L_004696DC:
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 1;
L_004696E0:
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = fp::sub(c.f[0], c.f[3]);  goto L_004697D0; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004697CC; } }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[19].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.budget -= 33;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[19].w[0] + 60u), c.f[0]);  if (t) { goto L_00469934; } }
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00469934; } }
L_004697CC:
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 1;
L_004697D0:
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    c.f[4] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::sub(c.f[20], c.f[3]);  goto L_004697FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[28].w[0] - 32288u));  if (t) { goto L_00469808; } }
    c.f[0] = fp::sub(c.f[20], c.f[3]);
    c.budget -= 1;
L_004697FC:
    fpu_div(c, 1u, c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32288u));
    c.budget -= 3;
L_00469808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469810u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00469810u) [[unlikely]] return; }
L_00469810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[4] = ld32((c.r[18].w[0] + 16u));
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[4]);
    c.f[2] = fp::sub(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 400u), 0u);
    st32((c.r[29].w[0] + 404u), 0u);
    st32((c.r[29].w[0] + 408u), 0u);
    st32((c.r[29].w[0] + 384u), 0u);
    st32((c.r[29].w[0] + 388u), 0u);
    c.f[21] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));
    st32((c.r[29].w[0] + 392u), 0u);
    st32((c.r[29].w[0] + 368u), 0u);
    st32((c.r[29].w[0] + 372u), 0u);
    c.budget -= 25;
    { const bool t = c.r[30].d[0] == 0ull; st32((c.r[29].w[0] + 376u), 0u);  if (t) { goto L_004698B4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[3], c.r[21].w[0] << 2);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469888u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0005(c, 170u, depth + 1u); else { c.pc = 0x00116DF0u; return; } if (c.pc != 0x00469888u) [[unlikely]] return; }
L_00469888:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 44u)));  goto L_004698B8; }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004698ACu); set32(c.r[7], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x004698ACu) [[unlikely]] return; }
L_004698AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004698E4; } }
L_004698B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 1;
L_004698B8:
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004698CCu); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x004698CCu) [[unlikely]] return; }
L_004698CC:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004698E4u); set32(c.r[7], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x004698E4u) [[unlikely]] return; }
L_004698E4:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00469920; }
    c.f[2] = ld32((c.r[29].w[0] + 384u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[21] = fp::mul(c.f[21], c.f[3]);
    st32((c.r[29].w[0] + 384u), c.f[2]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    st32((c.r[29].w[0] + 392u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 13;
L_00469920:
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.f[12] = c.f[21];
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469934u); set32(c.r[7], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_00D1(c, 378u, depth + 1u); else { c.pc = 0x004476D0u; return; } if (c.pc != 0x00469934u) [[unlikely]] return; }
L_00469934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00469938:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00469970:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 20u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004699B8; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 324u));  if (t) { goto L_004699C4; } }
L_004699B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.r[2].d[0] = ld8((c.r[17].w[0] + 324u));
    c.budget -= 3;
L_004699C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 16u)));  goto L_004699D0; }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004699D0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[17].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004699E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004699E0u) [[unlikely]] return; }
L_004699E0:
    set32(c.r[22], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_00469A4C; } }
L_004699F8:
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[20], c.r[20].w[0] + 4u);  goto L_00469A2C; }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_00469A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00469B00; } }
L_00469A28:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_00469A2C:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[21].d[0]) { set32(c.r[6], ld32((c.r[17].w[0] + 284u)));  goto L_00469A50; }
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[23].d[0]) { set32(c.r[20], ld32((c.r[19].w[0])));  goto L_00469A48; }
    c.r[19].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_00469A48:
    set32(c.r[21], c.r[20].w[0] + 512u);
    c.budget -= 1;
L_00469A4C:
    set32(c.r[6], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 1;
L_00469A50:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469A5Cu); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00469A5Cu) [[unlikely]] return; }
L_00469A5C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004699F8u | kUnwind; return; } goto L_004699F8; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 280u)));  goto L_00469AB4; }
    set32(c.r[6], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 264u)));
    set32(c.r[5], c.r[6].w[0] >> 7);
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].d[0] & 127ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00469AFC; } }
L_00469AB4:
    set32(c.r[2], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[6], c.r[2].w[0] >> 7);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
L_00469AFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00469B00:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00469B30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[6].w[0] + 20u)));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 48u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != c.r[10].d[0]; st32((c.r[29].w[0] + 68u), c.r[10].w[0]);  if (t) { goto L_00469B88; } }
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[9].w[0])));  goto L_00469B84; }
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_00469B84:
    set32(c.r[10], c.r[2].w[0] + 512u);
    c.budget -= 1;
L_00469B88:
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[7], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469BACu); st32((c.r[29].w[0] + 36u), c.r[10].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 45u, depth + 1u); else { c.pc = 0x0046C890u; return; } if (c.pc != 0x00469BACu) [[unlikely]] return; }
L_00469BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00469BC0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00469C3C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[6], c.r[2].w[0] >> 7);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 24;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00469C50; }
L_00469C3C:
    set32(c.r[4], c.r[16].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469C48u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00469C48u) [[unlikely]] return; }
L_00469C48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00469DF8; } }
L_00469C50:
    set32(c.r[5], c.r[16].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469C5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00469C5Cu) [[unlikely]] return; }
L_00469C5C:
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 304u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 316u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469C98u); st32((c.r[29].w[0] + 324u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DA(c, 160u, depth + 1u); else { c.pc = 0x00469FB0u; return; } if (c.pc != 0x00469C98u) [[unlikely]] return; }
L_00469C98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469CA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DA(c, 159u, depth + 1u); else { c.pc = 0x00469EA0u; return; } if (c.pc != 0x00469CA4u) [[unlikely]] return; }
L_00469CA4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469CB0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00DA(c, 160u, depth + 1u); else { c.pc = 0x00469FB0u; return; } if (c.pc != 0x00469CB0u) [[unlikely]] return; }
L_00469CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 284u)));  if (t) { goto L_00469D5C; } }
L_00469CB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[6], ld32((c.r[16].w[0] + 284u)));  goto L_00469D7C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 320u), c.r[3].w[0]);  if (t) { goto L_00469D14; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_00469D00; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 2;
L_00469D00:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 5;
L_00469D14:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_00469D58; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_00469D44; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 2;
L_00469D44:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 5;
L_00469D58:
    set32(c.r[6], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 1;
L_00469D5C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469D68u); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00469D68u) [[unlikely]] return; }
L_00469D68:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00469CB8u | kUnwind; return; } goto L_00469CB8; }
    set32(c.r[6], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 1;
L_00469D7C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469D88u); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00469D88u) [[unlikely]] return; }
L_00469D88:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[29].w[0] + 224u), c.r[3].w[0]);  goto L_00469DAC; }
    set32(c.r[4], c.r[16].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469DA4u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00469DA4u) [[unlikely]] return; }
L_00469DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00469DF4; } }
L_00469DAC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469DE0u); st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DA(c, 160u, depth + 1u); else { c.pc = 0x00469FB0u; return; } if (c.pc != 0x00469DE0u) [[unlikely]] return; }
L_00469DE0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[16].w[0] + 256u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469DF4u); set32(c.r[7], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00DA(c, 157u, depth + 1u); else { c.pc = 0x00469E10u; return; } if (c.pc != 0x00469DF4u) [[unlikely]] return; }
L_00469DF4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00469DF8:
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00469E10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[8], ld32((c.r[6].w[0])));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00469E5Cu); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00DB(c, 77u, depth + 1u); else { c.pc = 0x0046D040u; return; } if (c.pc != 0x00469E5Cu) [[unlikely]] return; }
L_00469E5C:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00469EA0:
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00469EC0; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00469EC0:
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] < 0) { set32(c.r[2], 0u + 127u);  goto L_00469EE8; }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 7));  if (t) { goto L_00469F00; } }
    set32(c.r[2], c.r[8].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00469F00; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 1;
L_00469EE8:
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));  if (t) { goto L_00469F00; } }
    set32(c.r[2], c.r[2].w[0] + 127u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 7));
    c.budget -= 2;
L_00469F00:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_00469F98; }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_00469F24; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00469F24:
    set32(c.r[3], c.r[9].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00469F38; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00469F38:
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_00469F50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00469F5C; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00469F50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_00469F60; }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00469F5C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_00469F60:
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
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00469FA4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_00469F98:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_00469FA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00469FB0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00469FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046A014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A010u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x00329760u; return; } if (c.pc != 0x0046A010u) [[unlikely]] return; }
L_0046A010:
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 1;
L_0046A014:
    set32(c.r[16], ld32((c.r[16].w[0] + 392u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0046A070; }
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_0046A050; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A03Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0046A03Cu) [[unlikely]] return; }
L_0046A03C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_0046A050:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A05Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046A05Cu) [[unlikely]] return; }
L_0046A05C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
L_0046A070:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046A080:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0046A0D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0046A0DC; } }
L_0046A0D8:
    set32(c.r[20], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0046A0DC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], c.r[22].w[0] - c.r[17].w[0]);  goto L_0046A264; }
    c.f[23] = fp::mul(c.f[12], c.f[12]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[5].w[0]));
    c.f[21] = ld32((c.r[5].w[0] + 4u));
    c.f[22] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[19].w[0] << 2);  if (t) { goto L_0046A248; } }
L_0046A100:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 212u)));  goto L_0046A114; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046A120; } }
L_0046A114:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_0046A120:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_0046A130; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046A174; } }
L_0046A130:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A13Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046A13Cu) [[unlikely]] return; }
L_0046A13C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_0046A158; } }
L_0046A148:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0046A158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0046A164; } }
L_0046A158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A148u | kUnwind; return; } goto L_0046A148; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046A164:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_0046A174; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046A174; } }
L_0046A174:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0046A248; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 220u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046A244; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 218u));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 212u)));  goto L_0046A1A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046A1AC; } }
L_0046A1A4:
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0046A1AC:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_0046A1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0046A200; } }
L_0046A1BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A1C8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046A1C8u) [[unlikely]] return; }
L_0046A1C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_0046A1E4; } }
L_0046A1D4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0046A1E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0046A1F0; } }
L_0046A1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A1D4u | kUnwind; return; } goto L_0046A1D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046A1F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_0046A200; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046A200; } }
L_0046A200:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0046A244; } }
    c.f[2] = ld32((c.r[21].w[0] + 32u));
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    c.f[2] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = fp::sub(c.f[21], c.f[1]);
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[23]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0046A244; } }
    st32((c.r[18].w[0]), c.r[21].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
L_0046A244:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0046A248:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 220u));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046A260; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A100u | kUnwind; return; } goto L_0046A100; }
L_0046A260:
    set32(c.r[2], c.r[22].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_0046A264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0046A2A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_0046A2B0; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046A2B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046A2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 384u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046A30C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 388u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0046A310; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 31867u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A2FCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 105u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x0046A2FCu) [[unlikely]] return; }
L_0046A2FC:
    st32((c.r[16].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A30Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 215u, depth + 1u); else { c.pc = 0x004033D0u; return; } if (c.pc != 0x0046A30Cu) [[unlikely]] return; }
L_0046A30C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0046A310:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046A320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[4].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[4].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[4].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[4].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[4].w[0] + 252u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 38;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0046A3C8; }
    set32(c.r[5], c.r[3].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A3C4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 294u, depth + 1u); else { c.pc = 0x0041A0B0u; return; } if (c.pc != 0x0046A3C4u) [[unlikely]] return; }
L_0046A3C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0046A3C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046A3D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0046A414; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 6;
L_0046A414:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0046A4D8; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A444u); st32((c.r[18].w[0] + 8u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x0046A444u) [[unlikely]] return; }
L_0046A444:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[18].w[0] + 48u), c.f[2]);
    st32((c.r[18].w[0] + 52u), c.f[1]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[18].w[0] + 60u), c.f[2]);
    st32((c.r[18].w[0] + 64u), c.f[1]);
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[18].w[0] + 72u), c.f[2]);
    st32((c.r[18].w[0] + 76u), c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 37;
L_0046A4D8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A4E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 187u, depth + 1u); else { c.pc = 0x00459580u; return; } if (c.pc != 0x0046A4E4u) [[unlikely]] return; }
L_0046A4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0046A500:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::mul(c.f[12], c.f[0]);  c.pc = t; return; }
L_0046A520:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0046A554; } }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0046A598; }
L_0046A554:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A57Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x0046A57Cu) [[unlikely]] return; }
L_0046A57C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0046A61C; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_0046A618; } }
L_0046A598:
    set32(c.r[2], c.r[5].w[0] << 3);
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] + 48u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A5C8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x0046A5C8u) [[unlikely]] return; }
L_0046A5C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046A600; } }
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_0046A600:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046A618; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 4;
L_0046A618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0046A61C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046A640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[5].w[0] + 328u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046A66C; } }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0046A698; }
L_0046A66C:
    set32(c.r[2], c.r[6].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A690u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x0046A690u) [[unlikely]] return; }
L_0046A690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 32u));  if (t) { goto L_0046A6C8; } }
L_0046A698:
    set32(c.r[3], c.r[6].w[0] << 3);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A6C4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0005(c, 150u, depth + 1u); else { c.pc = 0x00116080u; return; } if (c.pc != 0x0046A6C4u) [[unlikely]] return; }
L_0046A6C4:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0046A6C8:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046A6F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 328u), c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 408u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046A738; } }
L_0046A710:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A72Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046A72Cu) [[unlikely]] return; }
L_0046A72C:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 4u);
    c.budget -= 3;
L_0046A738:
    set32(c.r[5], ld32((c.r[16].w[0] + 404u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 408u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046A710u | kUnwind; return; } goto L_0046A710; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0046A780:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_0046A79C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 364u), c.r[3].w[0]);  if (t) { goto L_0046A7AC; } }
L_0046A79C:
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 4;
L_0046A7AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0046A7C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A7ECu); st32((c.r[29].w[0] + 108u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0046A7ECu) [[unlikely]] return; }
L_0046A7EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A810u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046A810u) [[unlikely]] return; }
L_0046A810:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[4].w[0] - 1u);  if (t) { goto L_0046A898; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A830u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046A830u) [[unlikely]] return; }
L_0046A830:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  goto L_0046A870; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 14;
L_0046A870:
    set32(c.r[4], c.r[19].w[0] + 348u);
    set32(c.r[3], ld32((c.r[19].w[0] + 356u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[7], c.r[29].w[0] + 188u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A890u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046A890u) [[unlikely]] return; }
L_0046A890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046A900; } }
L_0046A898:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A8A4u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046A8A4u) [[unlikely]] return; }
L_0046A8A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  goto L_0046A8E0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.budget -= 13;
L_0046A8E0:
    set32(c.r[4], c.r[19].w[0] + 332u);
    set32(c.r[3], ld32((c.r[19].w[0] + 340u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 344u)));
    set32(c.r[7], c.r[29].w[0] + 184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A900u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046A900u) [[unlikely]] return; }
L_0046A900:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0046A9F8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 280u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 284u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 272u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 264u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 276u)));
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[8], c.r[4].w[0] >> 7);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[4].w[0])));  if (t) { goto L_0046A970; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0046A978; } }
L_0046A970:
    c.f[20] = 0u;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0046A978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A980u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046A980u) [[unlikely]] return; }
L_0046A980:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0046A9EC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 68u), 0u);
    st32((c.r[2].w[0] + 72u), 0u);
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 25;
L_0046A9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046A9F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 145u, depth + 1u); else { c.pc = 0x00469BC0u; return; } if (c.pc != 0x0046A9F4u) [[unlikely]] return; }
L_0046A9F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0046A9F8:
    st8((c.r[19].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AA08u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x0046AA08u) [[unlikely]] return; }
L_0046AA08:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[4].w[0] + 72u), c.f[2]);
    st32((c.r[4].w[0] + 76u), c.f[1]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[1] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[4].w[0] + 84u), c.f[2]);
    st32((c.r[4].w[0] + 88u), c.f[1]);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[4].w[0] + 96u), c.f[2]);
    st32((c.r[4].w[0] + 100u), c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 172u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[4].w[0] + 108u), c.f[2]);
    st32((c.r[4].w[0] + 112u), c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 49;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0046AAD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[4], 0u + 36u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.f[24] = c.f[12];
    c.f[23] = c.f[13];
    c.f[22] = c.f[14];
    c.f[21] = c.f[15];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AB2Cu); c.f[20] = c.f[16];  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046AB2Cu) [[unlikely]] return; }
L_0046AB2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  goto L_0046AB58; }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 9;
L_0046AB58:
    c.f[0] = 0u;
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[2].w[0] + 4u), c.f[24]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[2].w[0] + 12u), c.f[22]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[2].w[0] + 16u), c.f[21]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[2].w[0] + 8u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0046ABC0; } }
L_0046AB98:
    set32(c.r[3], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0046ABC0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_0046ABC0:
    c.r[2].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046AB98u | kUnwind; return; } goto L_0046AB98; }
    set32(c.r[2], ld32((c.r[18].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0046AC14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046ABEC; } }
    c.f[0] = fp::sub(c.f[0], c.f[23]);
    c.f[23] = fp::sub(c.f[0], c.f[24]);
    c.budget -= 2;
L_0046ABEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.f[0] = 0u;
    st32((c.r[2].w[0] + 20u), c.f[23]);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[3].w[0] + 20u);  if (t) { goto L_0046AC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_0046AC1C; } }
L_0046AC14:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[2].w[0] + 20u), c.f[23]);
    c.budget -= 2;
L_0046AC1C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 440u)));  goto L_0046AC70; }
    set32(c.r[2], ld32((c.r[18].w[0] + 440u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 448u);  goto L_0046AC50; }
    set32(c.r[3], ld32((c.r[18].w[0] + 448u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] + 448u);
    c.budget -= 8;
L_0046AC50:
    set32(c.r[5], c.r[18].w[0] + 436u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[6], c.r[29].w[0] + 132u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AC68u); set32(c.r[7], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0004(c, 36u, depth + 1u); else { c.pc = 0x00110510u; return; } if (c.pc != 0x0046AC68u) [[unlikely]] return; }
L_0046AC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0046ACB4; } }
L_0046AC70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 452u)));  goto L_0046AC98; }
    set32(c.r[3], ld32((c.r[18].w[0] + 452u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 452u)));
    c.budget -= 8;
L_0046AC98:
    set32(c.r[5], c.r[18].w[0] + 436u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 124u);
    set32(c.r[7], c.r[29].w[0] + 140u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ACB0u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 36u, depth + 1u); else { c.pc = 0x00110510u; return; } if (c.pc != 0x0046ACB0u) [[unlikely]] return; }
L_0046ACB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0046ACB4:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0046ACE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046AD20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046AEE4; } }
L_0046AD20:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AD40u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_00D8(c, 211u, depth + 1u); else { c.pc = 0x00462410u; return; } if (c.pc != 0x0046AD40u) [[unlikely]] return; }
L_0046AD40:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.f[23] = c.f[0];
    c.f[22] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AD54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x0046AD54u) [[unlikely]] return; }
L_0046AD54:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.f[3] = fp::sub(c.f[22], c.f[23]);  goto L_0046AE00; }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[28].w[0] - 31936u));
    c.f[1] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[21] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[1] = fp::sub(c.f[21], c.f[22]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0046ADBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AD98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0046AD98u) [[unlikely]] return; }
L_0046AD98:
    c.f[1] = fp::sub(c.f[22], c.f[21]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ADA8u); c.f[22] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0046ADA8u) [[unlikely]] return; }
L_0046ADA8:
    c.f[12] = fp::sub(c.f[23], c.f[21]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ADB4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0046ADB4u) [[unlikely]] return; }
L_0046ADB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[0];  if (t) { goto L_0046ADFC; } }
L_0046ADBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ADC4u);  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0046ADC4u) [[unlikely]] return; }
L_0046ADC4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ADD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0046ADD0u) [[unlikely]] return; }
L_0046ADD0:
    c.f[1] = fp::sub(c.f[22], c.f[21]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ADE0u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0046ADE0u) [[unlikely]] return; }
L_0046ADE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ADECu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x0046ADECu) [[unlikely]] return; }
L_0046ADEC:
    c.f[12] = fp::sub(c.f[23], c.f[21]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046ADF8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0046ADF8u) [[unlikely]] return; }
L_0046ADF8:
    c.f[23] = c.f[0];
    c.budget -= 1;
L_0046ADFC:
    c.f[3] = fp::sub(c.f[22], c.f[23]);
    c.budget -= 1;
L_0046AE00:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], ld32((c.r[18].w[0] + 452u)));  goto L_0046AE1C; }
    c.f[3] = c.f[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 452u)));
    c.budget -= 2;
L_0046AE1C:
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    set32(c.r[4], c.r[18].w[0] + 448u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046AE80; } }
L_0046AE2C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[2] = ld32((c.r[2].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[2].w[0] + 4u));  goto L_0046AE5C; }
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[3].d[0] << 32;  goto L_0046AE78; }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_0046AE5C:
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0046AE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0046AEE8; } }
L_0046AE74:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_0046AE78:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_0046AE80:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[2].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046AE2Cu | kUnwind; return; } goto L_0046AE2C; }
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.f[2] = ld32((c.r[28].w[0] - 31832u));
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[18].w[0] + 448u)));  goto L_0046AEB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046AEE4; } }
L_0046AEB8:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0046AEE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046AEE4; } }
L_0046AEE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0046AEE8:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0046AF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_0046AF20:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0046B390; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30080u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 388u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 388u), 0u);  goto L_0046AF80; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AF7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046AF7Cu) [[unlikely]] return; }
L_0046AF7C:
    st32((c.r[21].w[0] + 388u), 0u);
    c.budget -= 1;
L_0046AF80:
    set32(c.r[4], ld32((c.r[21].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 384u)));  goto L_0046AF98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AF94u);  if (depth < kMaxDepth) unit_00C6(c, 212u, depth + 1u); else { c.pc = 0x004198F0u; return; } if (c.pc != 0x0046AF94u) [[unlikely]] return; }
L_0046AF94:
    set32(c.r[17], ld32((c.r[21].w[0] + 384u)));
    c.budget -= 1;
L_0046AF98:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[21].w[0] + 384u), 0u);  goto L_0046AFF8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0046AFEC; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046AFE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AFBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0046AFBCu) [[unlikely]] return; }
L_0046AFBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AFCCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0046AFCCu) [[unlikely]] return; }
L_0046AFCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046AFE8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AFE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046AFE8u) [[unlikely]] return; }
L_0046AFE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046AFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046AFF4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046AFF4u) [[unlikely]] return; }
L_0046AFF4:
    st32((c.r[21].w[0] + 384u), 0u);
    c.budget -= 1;
L_0046AFF8:
    set32(c.r[4], ld32((c.r[21].w[0] + 392u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 344u)));  goto L_0046B014; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B00Cu);  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x0046B00Cu) [[unlikely]] return; }
L_0046B00C:
    st32((c.r[21].w[0] + 392u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 344u)));
    c.budget -= 2;
L_0046B014:
    set32(c.r[2], ld32((c.r[21].w[0] + 340u)));
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.f[0]);  if (t) { goto L_0046B064; } }
L_0046B03C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 244u)));  goto L_0046B05C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B058u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046B058u) [[unlikely]] return; }
L_0046B058:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 1;
L_0046B05C:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_0046B064:
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 244u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046B03Cu | kUnwind; return; } goto L_0046B03C; }
    st32((c.r[21].w[0] + 340u), 0u);
    set32(c.r[3], ld32((c.r[21].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 356u)));
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_0046B0D8; } }
L_0046B0B0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  goto L_0046B0D0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B0CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046B0CCu) [[unlikely]] return; }
L_0046B0CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_0046B0D0:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 2;
L_0046B0D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046B0B0u | kUnwind; return; } goto L_0046B0B0; }
    st32((c.r[21].w[0] + 356u), 0u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], ld32((c.r[21].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B108u); set32(c.r[5], c.r[21].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046B108u) [[unlikely]] return; }
L_0046B108:
    set32(c.r[22], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B11Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x0046B11Cu) [[unlikely]] return; }
L_0046B11C:
    set32(c.r[16], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_0046B160; } }
L_0046B134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B13Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046B13Cu) [[unlikely]] return; }
L_0046B13C:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[19].d[0];  if (t) { goto L_0046B160; } }
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[23].d[0]) { set32(c.r[18], ld32((c.r[17].w[0])));  goto L_0046B15C; }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0046B15C:
    set32(c.r[19], c.r[18].w[0] + 512u);
    c.budget -= 1;
L_0046B160:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[22].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046B134u | kUnwind; return; } goto L_0046B134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B170u); set32(c.r[4], c.r[21].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x0046B170u) [[unlikely]] return; }
L_0046B170:
    set32(c.r[17], ld32((c.r[21].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 448u);  if (t) { goto L_0046B194; } }
L_0046B17C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B188u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046B188u) [[unlikely]] return; }
L_0046B188:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_0046B194:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046B17Cu | kUnwind; return; } goto L_0046B17C; }
    set32(c.r[2], c.r[21].w[0] + 448u);
    set32(c.r[4], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], c.r[21].w[0] + 436u);
    set32(c.r[2], ld32((c.r[21].w[0] + 452u)));
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[29].w[0] + 220u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B1D0u); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x0046B1D0u) [[unlikely]] return; }
L_0046B1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B1D8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 61u, depth + 1u); else { c.pc = 0x00464690u; return; } if (c.pc != 0x0046B1D8u) [[unlikely]] return; }
L_0046B1D8:
    set32(c.r[5], c.r[21].w[0] + 436u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + 396u);  goto L_0046B220; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0046B21C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0046B21C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0046B21C; } }
    set32(c.r[2], c.r[21].w[0] + 448u);
    set32(c.r[4], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 212u);
    set32(c.r[2], ld32((c.r[21].w[0] + 452u)));
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B21Cu); st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x0046B21Cu) [[unlikely]] return; }
L_0046B21C:
    set32(c.r[2], c.r[21].w[0] + 396u);
    c.budget -= 1;
L_0046B220:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + 348u);  goto L_0046B260; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B25C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B25C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B25C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 408u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B25C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B25Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046B25Cu) [[unlikely]] return; }
L_0046B25C:
    set32(c.r[2], c.r[21].w[0] + 348u);
    c.budget -= 1;
L_0046B260:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + 332u);  goto L_0046B2A0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B29C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B29C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B29C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B29C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B29C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B29Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046B29Cu) [[unlikely]] return; }
L_0046B29C:
    set32(c.r[2], c.r[21].w[0] + 332u);
    c.budget -= 1;
L_0046B2A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 288u);  goto L_0046B2E0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B2DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B2DC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B2DC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B2DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B2DCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046B2DCu) [[unlikely]] return; }
L_0046B2DC:
    set32(c.r[4], c.r[21].w[0] + 288u);
    c.budget -= 1;
L_0046B2E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 256u);  goto L_0046B304; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B300; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B300u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 42u, depth + 1u); else { c.pc = 0x0046C820u; return; } if (c.pc != 0x0046B300u) [[unlikely]] return; }
L_0046B300:
    set32(c.r[4], c.r[21].w[0] + 256u);
    c.budget -= 1;
L_0046B304:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] + 32u);  goto L_0046B330; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B32C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B32C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B32Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x0046B32Cu) [[unlikely]] return; }
L_0046B32C:
    set32(c.r[2], c.r[21].w[0] + 32u);
    c.budget -= 1;
L_0046B330:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0046B370; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B36C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B36C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046B36C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B36C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0046B36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B36Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0046B36Cu) [[unlikely]] return; }
L_0046B36C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0046B370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B378u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 304u, depth + 1u); else { c.pc = 0x00463840u; return; } if (c.pc != 0x0046B378u) [[unlikely]] return; }
L_0046B378:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_0046B394; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B390u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046B390u) [[unlikely]] return; }
L_0046B390:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0046B394:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0046B3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0046B3FC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 30120u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0046B3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B3F8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0046B3F8u) [[unlikely]] return; }
L_0046B3F8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046B3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046B410:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 124u), c.r[8].w[0]);
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B450u); set32(c.r[7], c.r[7].w[0] - 31830u);  if (depth < kMaxDepth) unit_00D8(c, 307u, depth + 1u); else { c.pc = 0x004638C0u; return; } if (c.pc != 0x0046B450u) [[unlikely]] return; }
L_0046B450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 30080u);
    set32(c.r[19], c.r[18].w[0] + 32u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 28u), 0u);  if (t) { goto L_0046B4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B47Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046B47Cu) [[unlikely]] return; }
L_0046B47C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0046B494; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B490u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0046B490u) [[unlikely]] return; }
L_0046B490:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0046B494:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_0046B4A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B4A4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046B4A4u) [[unlikely]] return; }
L_0046B4A4:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0046B4A8:
    set32(c.r[20], c.r[18].w[0] + 48u);
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 4;
L_0046B4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B4C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 172u, depth + 1u); else { c.pc = 0x00116E80u; return; } if (c.pc != 0x0046B4C0u) [[unlikely]] return; }
L_0046B4C0:
    set32(c.r[20], c.r[20].w[0] + 72u);
    set32(c.r[2], c.r[18].w[0] + 192u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046B4B8u | kUnwind; return; } goto L_0046B4B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[19], c.r[18].w[0] + 256u);
    c.f[0] = ld32((c.r[2].w[0] - 7040u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[3].w[0] - 7036u));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[2].w[0] - 7032u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[20].w[0] - 7028u));
    st32((c.r[18].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[15].w[0] - 7024u));
    st32((c.r[18].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] - 7020u));
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] - 7016u));
    st32((c.r[18].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] - 7012u));
    st32((c.r[18].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] - 7008u));
    st32((c.r[18].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] - 7004u));
    st32((c.r[18].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] - 7000u));
    st32((c.r[18].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] - 6996u));
    st32((c.r[18].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] - 6992u));
    st32((c.r[18].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] - 6988u));
    st32((c.r[18].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 6984u));
    st32((c.r[18].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 6980u));
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B5A4u); st32((c.r[18].w[0] + 252u), c.f[0]);  if (depth < kMaxDepth) unit_00DA(c, 79u, depth + 1u); else { c.pc = 0x00468860u; return; } if (c.pc != 0x0046B5A4u) [[unlikely]] return; }
L_0046B5A4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B5B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 78u, depth + 1u); else { c.pc = 0x00468850u; return; } if (c.pc != 0x0046B5B0u) [[unlikely]] return; }
L_0046B5B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B5BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 73u, depth + 1u); else { c.pc = 0x00468800u; return; } if (c.pc != 0x0046B5BCu) [[unlikely]] return; }
L_0046B5BC:
    set32(c.r[3], 0u - 1u);
    set32(c.r[20], c.r[18].w[0] + 288u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0046B5FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B5D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046B5D4u) [[unlikely]] return; }
L_0046B5D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0046B5EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B5E8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0046B5E8u) [[unlikely]] return; }
L_0046B5E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0046B5EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_0046B600; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B5FCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046B5FCu) [[unlikely]] return; }
L_0046B5FC:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0046B600:
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[19], c.r[18].w[0] + 332u);
    st32((c.r[20].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 305u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 306u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 308u), 0u);
    st32((c.r[18].w[0] + 312u), 0u);
    st32((c.r[18].w[0] + 316u), 0u);
    st8((c.r[18].w[0] + 324u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 328u), 0u);  if (t) { goto L_0046B668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B640u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046B640u) [[unlikely]] return; }
L_0046B640:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0046B658; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B654u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0046B654u) [[unlikely]] return; }
L_0046B654:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0046B658:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_0046B66C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B668u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046B668u) [[unlikely]] return; }
L_0046B668:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0046B66C:
    set32(c.r[3], 0u - 1u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[16], c.r[18].w[0] + 348u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[19].w[0] + 12u), 0u);  if (t) { goto L_0046B6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B690u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046B690u) [[unlikely]] return; }
L_0046B690:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0046B6A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B6A4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0046B6A4u) [[unlikely]] return; }
L_0046B6A4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0046B6A8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0046B6BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B6B8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046B6B8u) [[unlikely]] return; }
L_0046B6B8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0046B6BC:
    c.f[0] = ld32((c.r[28].w[0] - 31864u));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[19], c.r[18].w[0] + 396u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 364u), 0u);
    st32((c.r[18].w[0] + 376u), 0u);
    st32((c.r[18].w[0] + 380u), c.f[0]);
    st32((c.r[18].w[0] + 384u), 0u);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 388u), 0u);  if (t) { goto L_0046B720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B6F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046B6F8u) [[unlikely]] return; }
L_0046B6F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0046B710; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B70Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0046B70Cu) [[unlikely]] return; }
L_0046B70C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0046B710:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_0046B724; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B720u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046B720u) [[unlikely]] return; }
L_0046B720:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0046B724:
    set32(c.r[16], c.r[18].w[0] + 436u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 8u), 0u);
    st32((c.r[19].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 412u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 416u), 0u);
    st32((c.r[18].w[0] + 420u), 0u);
    st32((c.r[18].w[0] + 424u), 0u);
    st32((c.r[18].w[0] + 428u), 0u);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 432u), 0u);  if (t) { goto L_0046B790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046B75Cu) [[unlikely]] return; }
L_0046B75C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0046B77C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B774u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0046B774u) [[unlikely]] return; }
L_0046B774:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0046B77C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0046B794; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B78Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046B78Cu) [[unlikely]] return; }
L_0046B78C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0046B790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0046B794:
    set32(c.r[5], c.r[29].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B7A0u); st32((c.r[29].w[0] + 212u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x0046B7A0u) [[unlikely]] return; }
L_0046B7A0:
    c.f[0] = ld32((c.r[28].w[0] - 31860u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 456u), c.f[0]);
    st32((c.r[18].w[0] + 468u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 328u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[18].w[0] + 456u));  goto L_0046B7C4; }
    c.f[0] = ld32((c.r[18].w[0] + 456u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_0046B7C4:
    st32((c.r[18].w[0] + 472u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[28].w[0] - 31856u));
    c.f[0] = ld32((c.r[28].w[0] - 31852u));
    st32((c.r[18].w[0] + 456u), c.f[1]);
    st32((c.r[18].w[0] + 460u), c.f[0]);
    st32((c.r[18].w[0] + 464u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 456u));
    st32((c.r[18].w[0] + 468u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 328u)));
    c.budget -= 12;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[18].w[0] + 456u));  goto L_0046B7FC; }
    c.f[0] = ld32((c.r[18].w[0] + 456u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 2;
L_0046B7FC:
    st32((c.r[18].w[0] + 472u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B80Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0046B80Cu) [[unlikely]] return; }
L_0046B80C:
    set32(c.r[4], c.r[18].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B818u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0046B818u) [[unlikely]] return; }
L_0046B818:
    set32(c.r[4], c.r[18].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B824u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0046B824u) [[unlikely]] return; }
L_0046B824:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B844u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046B844u) [[unlikely]] return; }
L_0046B844:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B850u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x0046B850u) [[unlikely]] return; }
L_0046B850:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = ld32((c.r[29].w[0] + 156u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[18].w[0] + 72u), c.f[2]);
    st32((c.r[18].w[0] + 76u), c.f[1]);
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[18].w[0] + 84u), c.f[2]);
    st32((c.r[18].w[0] + 88u), c.f[1]);
    st32((c.r[18].w[0] + 92u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[18].w[0] + 96u), c.f[2]);
    st32((c.r[18].w[0] + 100u), c.f[1]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 188u));
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[18].w[0] + 108u), c.f[2]);
    st32((c.r[18].w[0] + 112u), c.f[1]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    st32((c.r[18].w[0] + 392u), 0u);
    st8((c.r[18].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 324u));
    c.budget -= 42;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046B9D4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B904u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046B904u) [[unlikely]] return; }
L_0046B904:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  goto L_0046B940; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 13;
L_0046B940:
    set32(c.r[4], c.r[18].w[0] + 332u);
    set32(c.r[3], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    set32(c.r[7], c.r[29].w[0] + 236u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B960u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046B960u) [[unlikely]] return; }
L_0046B960:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B96Cu); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046B96Cu) [[unlikely]] return; }
L_0046B96C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  goto L_0046B9AC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 14;
L_0046B9AC:
    set32(c.r[4], c.r[18].w[0] + 348u);
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[7], c.r[29].w[0] + 232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B9CCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046B9CCu) [[unlikely]] return; }
L_0046B9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0046BBA8; } }
L_0046B9D4:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 24u)));  goto L_0046BAC0; }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046B9E8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046B9E8u) [[unlikely]] return; }
L_0046B9E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  goto L_0046BA24; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 13;
L_0046BA24:
    set32(c.r[4], c.r[18].w[0] + 332u);
    set32(c.r[3], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    set32(c.r[7], c.r[29].w[0] + 228u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BA44u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046BA44u) [[unlikely]] return; }
L_0046BA44:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BA50u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046BA50u) [[unlikely]] return; }
L_0046BA50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  goto L_0046BA90; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 14;
L_0046BA90:
    set32(c.r[4], c.r[18].w[0] + 332u);
    set32(c.r[3], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    set32(c.r[7], c.r[29].w[0] + 224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BAB0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046BAB0u) [[unlikely]] return; }
L_0046BAB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0046BBA4; } }
L_0046BAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BAC8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046BAC8u) [[unlikely]] return; }
L_0046BAC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  goto L_0046BB08; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 14;
L_0046BB08:
    set32(c.r[4], c.r[18].w[0] + 348u);
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[7], c.r[29].w[0] + 220u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BB28u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046BB28u) [[unlikely]] return; }
L_0046BB28:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BB34u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046BB34u) [[unlikely]] return; }
L_0046BB34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 216u), c.r[2].w[0]);  goto L_0046BB74; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 30120u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.budget -= 14;
L_0046BB74:
    set32(c.r[4], c.r[18].w[0] + 348u);
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[7], c.r[29].w[0] + 216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BB94u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046BB94u) [[unlikely]] return; }
L_0046BB94:
    set32(c.r[2], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0046BBA4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0046BBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0046BBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29920u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0046BBEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0046BBFC; } }
L_0046BBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BBF4u);  if (depth < kMaxDepth) unit_00D8(c, 339u, depth + 1u); else { c.pc = 0x00463BF0u; return; } if (c.pc != 0x0046BBF4u) [[unlikely]] return; }
L_0046BBF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0046BBFC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046BC10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BC34u); set32(c.r[4], c.r[4].w[0] - 31960u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0046BC34u) [[unlikely]] return; }
L_0046BC34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0046BC44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0046BC54; } }
L_0046BC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BC4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 340u, depth + 1u); else { c.pc = 0x00463C10u; return; } if (c.pc != 0x0046BC4Cu) [[unlikely]] return; }
L_0046BC4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0046BC54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0046BC70:
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0046BC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29920u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0046BC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046BCA4; } }
L_0046BC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BCA4u);  if (depth < kMaxDepth) unit_00D8(c, 343u, depth + 1u); else { c.pc = 0x00463C60u; return; } if (c.pc != 0x0046BCA4u) [[unlikely]] return; }
L_0046BCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0046BCB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29920u)));  c.pc = t; return; }
L_0046BCC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BCD4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 323u, depth + 1u); else { c.pc = 0x0013F1B0u; return; } if (c.pc != 0x0046BCD4u) [[unlikely]] return; }
L_0046BCD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BCE4u); set32(c.r[5], c.r[5].w[0] - 31818u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0046BCE4u) [[unlikely]] return; }
L_0046BCE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 16u);  goto L_0046BD08; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BCFCu); set32(c.r[5], c.r[5].w[0] - 31817u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0046BCFCu) [[unlikely]] return; }
L_0046BCFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0046BD18; }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_0046BD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046BD10u) [[unlikely]] return; }
L_0046BD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0046BD74; } }
L_0046BD18:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BD24u); set32(c.r[5], c.r[5].w[0] - 31812u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0046BD24u) [[unlikely]] return; }
L_0046BD24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0046BD40; }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BD38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046BD38u) [[unlikely]] return; }
L_0046BD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046BD74; } }
L_0046BD40:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BD4Cu); set32(c.r[5], c.r[5].w[0] - 31806u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0046BD4Cu) [[unlikely]] return; }
L_0046BD4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 16u);  goto L_0046BD68; }
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BD60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046BD60u) [[unlikely]] return; }
L_0046BD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0046BD74; } }
L_0046BD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BD70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0046BD70u) [[unlikely]] return; }
L_0046BD70:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0046BD74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0046BD80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[16], 0u + 512u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[28].w[0] - 31840u));
    c.f[23] = c.f[12];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; c.f[21] = c.f[13];  if (t) { goto L_0046BE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BDC4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x0046BDC4u) [[unlikely]] return; }
L_0046BDC4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0046BE14; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046BE14; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046BE14; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BE00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046BE00u) [[unlikely]] return; }
L_0046BE00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.f[20] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 5;
L_0046BE14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0046BE20; } }
    c.f[21] = c.f[21] ^ fp::kSign;
    c.budget -= 1;
L_0046BE20:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::mul(c.f[23], c.f[13]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 22u, c.f[0], c.f[2]);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[23]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[21]));
    c.f[0] = fp::mul(c.f[0], c.f[13]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    fpu_div(c, 21u, c.f[0], c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BE74u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0046BE74u) [[unlikely]] return; }
L_0046BE74:
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[1] = fp::add(c.f[22], c.f[0]);
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[0], c.f[20]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0046BED0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00DB(c, 15u, depth); } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_0046BF78; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0046BF74; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BF28u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0060(c, 587u, depth + 1u); else { c.pc = 0x00283CA0u; return; } if (c.pc != 0x0046BF28u) [[unlikely]] return; }
L_0046BF28:
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0046BF6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BF3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0046BF3Cu) [[unlikely]] return; }
L_0046BF3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BF4Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0046BF4Cu) [[unlikely]] return; }
L_0046BF4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046BF68; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BF68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046BF68u) [[unlikely]] return; }
L_0046BF68:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0046BF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BF74u);  if (depth < kMaxDepth) unit_006F(c, 106u, depth + 1u); else { c.pc = 0x002BCC70u; return; } if (c.pc != 0x0046BF74u) [[unlikely]] return; }
L_0046BF74:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.budget -= 1;
L_0046BF78:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  [[clang::musttail]] return unit_00DB(c, 16u, depth); }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00DB(c, 14u, depth); } }
L_0046BF90:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_0046BFA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0046BFB0; } }
L_0046BFA4:
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0046BFB0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  [[clang::musttail]] return unit_00DB(c, 14u, depth); }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0046BFF0; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0046BFEC; } }
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BFD8u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0060(c, 587u, depth + 1u); else { c.pc = 0x00283CA0u; return; } if (c.pc != 0x0046BFD8u) [[unlikely]] return; }
L_0046BFD8:
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BFE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0046BFE4u) [[unlikely]] return; }
L_0046BFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BFECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 106u, depth + 1u); else { c.pc = 0x002BCC70u; return; } if (c.pc != 0x0046BFECu) [[unlikely]] return; }
L_0046BFEC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0046BFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046BFF8u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x0046BFF8u) [[unlikely]] return; }
L_0046BFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00DB(c, 13u, depth); } }
    [[clang::musttail]] return unit_00DB(c, 1u, depth);
}

}
