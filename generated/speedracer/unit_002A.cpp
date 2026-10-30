#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0,
    0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
};

void unit_002A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A8000;
    case 2u: goto L_001A8028;
    case 3u: goto L_001A8058;
    case 4u: goto L_001A8070;
    case 5u: goto L_001A80AC;
    case 6u: goto L_001A80C4;
    case 7u: goto L_001A80D4;
    case 8u: goto L_001A80E8;
    case 9u: goto L_001A8134;
    case 10u: goto L_001A8164;
    case 11u: goto L_001A817C;
    case 12u: goto L_001A81B8;
    case 13u: goto L_001A81D0;
    case 14u: goto L_001A81E0;
    case 15u: goto L_001A81F4;
    case 16u: goto L_001A8240;
    case 17u: goto L_001A8270;
    case 18u: goto L_001A8288;
    case 19u: goto L_001A82C4;
    case 20u: goto L_001A82DC;
    case 21u: goto L_001A82EC;
    case 22u: goto L_001A8300;
    case 23u: goto L_001A8328;
    case 24u: goto L_001A8354;
    case 25u: goto L_001A836C;
    case 26u: goto L_001A8394;
    case 27u: goto L_001A83AC;
    case 28u: goto L_001A83E0;
    case 29u: goto L_001A844C;
    case 30u: goto L_001A8460;
    case 31u: goto L_001A84D0;
    case 32u: goto L_001A851C;
    case 33u: goto L_001A8530;
    case 34u: goto L_001A8600;
    case 35u: goto L_001A8620;
    case 36u: goto L_001A86C4;
    case 37u: goto L_001A86E4;
    case 38u: goto L_001A8700;
    case 39u: goto L_001A8760;
    case 40u: goto L_001A8780;
    case 41u: goto L_001A87A4;
    case 42u: goto L_001A87B4;
    case 43u: goto L_001A87D8;
    case 44u: goto L_001A87F8;
    case 45u: goto L_001A8810;
    case 46u: goto L_001A8830;
    case 47u: goto L_001A8864;
    case 48u: goto L_001A8874;
    case 49u: goto L_001A8888;
    case 50u: goto L_001A889C;
    case 51u: goto L_001A88B4;
    case 52u: goto L_001A88E8;
    case 53u: goto L_001A88F8;
    case 54u: goto L_001A8914;
    case 55u: goto L_001A8928;
    case 56u: goto L_001A8940;
    case 57u: goto L_001A8974;
    case 58u: goto L_001A8984;
    case 59u: goto L_001A8998;
    case 60u: goto L_001A89AC;
    case 61u: goto L_001A89C4;
    case 62u: goto L_001A89F8;
    case 63u: goto L_001A8A0C;
    case 64u: goto L_001A8A20;
    case 65u: goto L_001A8A34;
    case 66u: goto L_001A8A4C;
    case 67u: goto L_001A8A68;
    case 68u: goto L_001A8A78;
    case 69u: goto L_001A8A8C;
    case 70u: goto L_001A8AA4;
    case 71u: goto L_001A8AC0;
    case 72u: goto L_001A8AE0;
    case 73u: goto L_001A8AF4;
    case 74u: goto L_001A8B08;
    case 75u: goto L_001A8B1C;
    case 76u: goto L_001A8B34;
    case 77u: goto L_001A8B68;
    case 78u: goto L_001A8B7C;
    case 79u: goto L_001A8B90;
    case 80u: goto L_001A8BA4;
    case 81u: goto L_001A8BC8;
    case 82u: goto L_001A8BE4;
    case 83u: goto L_001A8BF4;
    case 84u: goto L_001A8C08;
    case 85u: goto L_001A8C2C;
    case 86u: goto L_001A8C5C;
    case 87u: goto L_001A8D4C;
    case 88u: goto L_001A8D6C;
    case 89u: goto L_001A8DA0;
    case 90u: goto L_001A8DC0;
    case 91u: goto L_001A8E08;
    case 92u: goto L_001A8EFC;
    case 93u: goto L_001A8F54;
    case 94u: goto L_001A8F8C;
    case 95u: goto L_001A8FA4;
    case 96u: goto L_001A901C;
    case 97u: goto L_001A903C;
    case 98u: goto L_001A906C;
    case 99u: goto L_001A9084;
    case 100u: goto L_001A90A0;
    case 101u: goto L_001A90E0;
    case 102u: goto L_001A9108;
    case 103u: goto L_001A9204;
    case 104u: goto L_001A9220;
    case 105u: goto L_001A9248;
    case 106u: goto L_001A9338;
    case 107u: goto L_001A9364;
    case 108u: goto L_001A9454;
    case 109u: goto L_001A9494;
    case 110u: goto L_001A9530;
    case 111u: goto L_001A956C;
    case 112u: goto L_001A959C;
    case 113u: goto L_001A95DC;
    case 114u: goto L_001A9670;
    case 115u: goto L_001A96A8;
    case 116u: goto L_001A96E0;
    case 117u: goto L_001A9720;
    case 118u: goto L_001A97B8;
    case 119u: goto L_001A97D8;
    case 120u: goto L_001A97FC;
    case 121u: goto L_001A981C;
    case 122u: goto L_001A982C;
    case 123u: goto L_001A9848;
    case 124u: goto L_001A985C;
    case 125u: goto L_001A9878;
    case 126u: goto L_001A989C;
    case 127u: goto L_001A98AC;
    case 128u: goto L_001A98C0;
    case 129u: goto L_001A98D8;
    case 130u: goto L_001A98FC;
    case 131u: goto L_001A991C;
    case 132u: goto L_001A9934;
    case 133u: goto L_001A9954;
    case 134u: goto L_001A9968;
    case 135u: goto L_001A9984;
    case 136u: goto L_001A99A0;
    case 137u: goto L_001A99B8;
    case 138u: goto L_001A99E4;
    case 139u: goto L_001A9A60;
    case 140u: goto L_001A9A6C;
    case 141u: goto L_001A9A9C;
    case 142u: goto L_001A9AB8;
    case 143u: goto L_001A9AE8;
    case 144u: goto L_001A9AF8;
    case 145u: goto L_001A9B10;
    case 146u: goto L_001A9B50;
    case 147u: goto L_001A9B80;
    case 148u: goto L_001A9BC4;
    case 149u: goto L_001A9C40;
    case 150u: goto L_001A9C54;
    case 151u: goto L_001A9C88;
    case 152u: goto L_001A9C98;
    case 153u: goto L_001A9CD4;
    case 154u: goto L_001A9D00;
    case 155u: goto L_001A9D10;
    case 156u: goto L_001A9D7C;
    case 157u: goto L_001A9D8C;
    case 158u: goto L_001A9DC0;
    case 159u: goto L_001A9DD0;
    case 160u: goto L_001A9F68;
    case 161u: goto L_001A9F7C;
    case 162u: goto L_001AA024;
    case 163u: goto L_001AA034;
    case 164u: goto L_001AA064;
    case 165u: goto L_001AA074;
    case 166u: goto L_001AA0A8;
    case 167u: goto L_001AA0DC;
    case 168u: goto L_001AA0F4;
    case 169u: goto L_001AA1B8;
    case 170u: goto L_001AA1D4;
    case 171u: goto L_001AA204;
    case 172u: goto L_001AA21C;
    case 173u: goto L_001AA240;
    case 174u: goto L_001AA280;
    case 175u: goto L_001AA318;
    case 176u: goto L_001AA328;
    case 177u: goto L_001AA358;
    case 178u: goto L_001AA370;
    case 179u: goto L_001AA3D8;
    case 180u: goto L_001AA3E4;
    case 181u: goto L_001AA448;
    case 182u: goto L_001AA4B8;
    case 183u: goto L_001AA4D0;
    case 184u: goto L_001AA504;
    case 185u: goto L_001AA518;
    case 186u: goto L_001AA530;
    case 187u: goto L_001AA5A8;
    case 188u: goto L_001AA670;
    case 189u: goto L_001AA6E0;
    case 190u: goto L_001AA700;
    case 191u: goto L_001AA784;
    case 192u: goto L_001AA794;
    case 193u: goto L_001AA7C4;
    case 194u: goto L_001AA7D4;
    case 195u: goto L_001AA830;
    case 196u: goto L_001AA840;
    case 197u: goto L_001AA870;
    case 198u: goto L_001AA880;
    case 199u: goto L_001AA89C;
    case 200u: goto L_001AA8AC;
    case 201u: goto L_001AA8E8;
    case 202u: goto L_001AA8F8;
    case 203u: goto L_001AAA10;
    case 204u: goto L_001AAA70;
    case 205u: goto L_001AAB68;
    case 206u: goto L_001AAB98;
    case 207u: goto L_001AABCC;
    case 208u: goto L_001AAC50;
    case 209u: goto L_001AAC84;
    case 210u: goto L_001AAC9C;
    case 211u: goto L_001AAD3C;
    case 212u: goto L_001AAD58;
    case 213u: goto L_001AAD88;
    case 214u: goto L_001AADA0;
    case 215u: goto L_001AADC0;
    case 216u: goto L_001AAE00;
    case 217u: goto L_001AAE54;
    case 218u: goto L_001AAE64;
    case 219u: goto L_001AAE94;
    case 220u: goto L_001AAEA4;
    case 221u: goto L_001AAF00;
    case 222u: goto L_001AAF34;
    case 223u: goto L_001AAF4C;
    case 224u: goto L_001AAFD8;
    case 225u: goto L_001AAFF4;
    case 226u: goto L_001AB020;
    case 227u: goto L_001AB038;
    case 228u: goto L_001AB054;
    case 229u: goto L_001AB094;
    case 230u: goto L_001AB0A8;
    case 231u: goto L_001AB140;
    case 232u: goto L_001AB1D0;
    case 233u: goto L_001AB200;
    case 234u: goto L_001AB210;
    case 235u: goto L_001AB240;
    case 236u: goto L_001AB250;
    case 237u: goto L_001AB278;
    case 238u: goto L_001AB288;
    case 239u: goto L_001AB2B8;
    case 240u: goto L_001AB2C8;
    case 241u: goto L_001AB2E0;
    case 242u: goto L_001AB320;
    case 243u: goto L_001AB368;
    case 244u: goto L_001AB388;
    case 245u: goto L_001AB390;
    case 246u: goto L_001AB3B4;
    case 247u: goto L_001AB414;
    case 248u: goto L_001AB46C;
    case 249u: goto L_001AB478;
    case 250u: goto L_001AB484;
    case 251u: goto L_001AB49C;
    case 252u: goto L_001AB5F0;
    case 253u: goto L_001AB644;
    case 254u: goto L_001AB678;
    case 255u: goto L_001AB68C;
    case 256u: goto L_001AB69C;
    case 257u: goto L_001AB6B0;
    case 258u: goto L_001AB6C4;
    case 259u: goto L_001AB6DC;
    case 260u: goto L_001AB6FC;
    case 261u: goto L_001AB714;
    case 262u: goto L_001AB728;
    case 263u: goto L_001AB74C;
    case 264u: goto L_001AB7B4;
    case 265u: goto L_001AB7E4;
    case 266u: goto L_001AB7FC;
    case 267u: goto L_001AB86C;
    case 268u: goto L_001AB888;
    case 269u: goto L_001AB8B4;
    case 270u: goto L_001AB8CC;
    case 271u: goto L_001AB8E8;
    case 272u: goto L_001AB928;
    case 273u: goto L_001AB968;
    case 274u: goto L_001AB978;
    case 275u: goto L_001AB9A8;
    case 276u: goto L_001AB9B8;
    case 277u: goto L_001AB9E4;
    case 278u: goto L_001ABA14;
    case 279u: goto L_001ABA2C;
    case 280u: goto L_001ABAA0;
    case 281u: goto L_001ABABC;
    case 282u: goto L_001ABAE8;
    case 283u: goto L_001ABB00;
    case 284u: goto L_001ABB1C;
    case 285u: goto L_001ABB5C;
    case 286u: goto L_001ABBF8;
    case 287u: goto L_001ABC04;
    case 288u: goto L_001ABC10;
    case 289u: goto L_001ABC28;
    case 290u: goto L_001ABC58;
    case 291u: goto L_001ABC80;
    case 292u: goto L_001ABC90;
    case 293u: goto L_001ABCD4;
    case 294u: goto L_001ABCE4;
    case 295u: goto L_001ABD14;
    case 296u: goto L_001ABD24;
    case 297u: goto L_001ABD5C;
    case 298u: goto L_001ABDBC;
    case 299u: goto L_001ABE28;
    case 300u: goto L_001ABE60;
    case 301u: goto L_001ABE70;
    case 302u: goto L_001ABEA0;
    case 303u: goto L_001ABEB0;
    case 304u: goto L_001ABEE0;
    case 305u: goto L_001ABEF0;
    case 306u: goto L_001ABF10;
    case 307u: goto L_001ABF24;
    case 308u: goto L_001ABF30;
    case 309u: goto L_001ABF3C;
    case 310u: goto L_001ABF70;
    case 311u: goto L_001ABF88;
    case 312u: goto L_001ABFB0;
    case 313u: goto L_001ABFEC;
    default: bad_entry(c, 0x001A8000u); return;
    }
L_001A8000:
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[30], 0u + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8030; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8028u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8028u) [[unlikely]] return; }
L_001A8028:
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 2;
L_001A8030:
    c.r[1].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A807C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8058; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8058u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8058u) [[unlikely]] return; }
L_001A8058:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 280u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8070u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A8070u) [[unlikely]] return; }
L_001A8070:
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
L_001A807C:
    set32(c.r[18], ld32((c.r[29].w[0] + 276u)));
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80ACu);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x001A80ACu) [[unlikely]] return; }
L_001A80AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80C4u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x001A80C4u) [[unlikely]] return; }
L_001A80C4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80D4u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x001A80D4u) [[unlikely]] return; }
L_001A80D4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 30124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A80E8u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x001A80E8u) [[unlikely]] return; }
L_001A80E8:
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 384u), c.f[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[23], 0u + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A813C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8134u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8134u) [[unlikely]] return; }
L_001A8134:
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_001A813C:
    c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A8188; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8164; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8164u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8164u) [[unlikely]] return; }
L_001A8164:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A817Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A817Cu) [[unlikely]] return; }
L_001A817C:
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 3;
L_001A8188:
    set32(c.r[17], ld32((c.r[29].w[0] + 244u)));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81B8u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x001A81B8u) [[unlikely]] return; }
L_001A81B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81D0u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x001A81D0u) [[unlikely]] return; }
L_001A81D0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81E0u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x001A81E0u) [[unlikely]] return; }
L_001A81E0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 30113u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81F4u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x001A81F4u) [[unlikely]] return; }
L_001A81F4:
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 364u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 368u), c.f[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[22], 0u + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8248; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8240u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8240u) [[unlikely]] return; }
L_001A8240:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_001A8248:
    c.r[1].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A8294; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8270; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8270u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8270u) [[unlikely]] return; }
L_001A8270:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8288u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A8288u) [[unlikely]] return; }
L_001A8288:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
L_001A8294:
    set32(c.r[16], ld32((c.r[29].w[0] + 212u)));
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 364u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82C4u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x001A82C4u) [[unlikely]] return; }
L_001A82C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82DCu);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x001A82DCu) [[unlikely]] return; }
L_001A82DC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82ECu);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x001A82ECu) [[unlikely]] return; }
L_001A82EC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 30103u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8300u);  if (depth < kMaxDepth) unit_000C(c, 234u, depth + 1u); else { c.pc = 0x00132A20u; return; } if (c.pc != 0x001A8300u) [[unlikely]] return; }
L_001A8300:
    set32(c.r[2], 0u + 2u);
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[21], 0u + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8330; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8328u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8328u) [[unlikely]] return; }
L_001A8328:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_001A8330:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001A8378; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8354; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8354u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8354u) [[unlikely]] return; }
L_001A8354:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A836Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A836Cu) [[unlikely]] return; }
L_001A836C:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
L_001A8378:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8394u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x001A8394u) [[unlikely]] return; }
L_001A8394:
    set32(c.r[3], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A83ACu);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x001A83ACu) [[unlikely]] return; }
L_001A83AC:
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
    set32(c.r[29], c.r[29].w[0] + 480u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A83E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A844C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16624u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A842C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16600u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 4;
L_001A842C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A844C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A844Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001A844Cu) [[unlikely]] return; }
L_001A844C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16624u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16600u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st32((c.r[2].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0])));
    st8((c.r[2].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A84D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A851C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16600u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A851C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A851Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001A851Cu) [[unlikely]] return; }
L_001A851C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A85C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[22], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A85AC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[20], c.r[2].w[0] + 4u);
    set32(c.r[19], c.r[20].w[0] + 1u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A85BC; } }
L_001A85AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    set32(c.r[17], c.r[18].w[0] + 8u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_001A85BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A85D0; } }
L_001A85C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 30000u);
    c.budget -= 2;
L_001A85D0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29984u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A86E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16576u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A86C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17776u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A86C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 18208u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A86C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A86C4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86C4u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A86C4u) [[unlikely]] return; }
L_001A86C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A86E4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A86E4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001A86E4u) [[unlikely]] return; }
L_001A86E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A8700:
    set32(c.r[29], c.r[29].w[0] - 992u);
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
    st32((c.r[29].w[0] + 912u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 928u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 944u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 960u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 976u), c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 944u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 20;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001A8788; } }
    set32(c.r[4], 0u + 284u);
    set32(c.r[5], ld32((c.r[29].w[0] + 928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8760u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x001A8760u) [[unlikely]] return; }
L_001A8760:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001A8784; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 928u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8780u);  if (depth < kMaxDepth) unit_002B(c, 45u, depth + 1u); else { c.pc = 0x001ACE30u; return; } if (c.pc != 0x001A8780u) [[unlikely]] return; }
L_001A8780:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A8784:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001A8788:
    set32(c.r[4], ld32((c.r[29].w[0] + 912u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 928u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 960u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 976u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87A4u);  if (depth < kMaxDepth) unit_0024(c, 155u, depth + 1u); else { c.pc = 0x00192610u; return; } if (c.pc != 0x001A87A4u) [[unlikely]] return; }
L_001A87A4:
    set32(c.r[6], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87B4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001A87B4u) [[unlikely]] return; }
L_001A87B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29936u);
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87D8u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A87D8u) [[unlikely]] return; }
L_001A87D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8C08; } }
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29925u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87F8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A87F8u) [[unlikely]] return; }
L_001A87F8:
    set32(c.r[3], c.r[29].w[0] + 512u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8810u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8810u) [[unlikely]] return; }
L_001A8810:
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 528u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 512u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8830u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A8830u) [[unlikely]] return; }
L_001A8830:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8864u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8864u) [[unlikely]] return; }
L_001A8864:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8874u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8874u) [[unlikely]] return; }
L_001A8874:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29903u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8888u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8888u) [[unlikely]] return; }
L_001A8888:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A889Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A889Cu) [[unlikely]] return; }
L_001A889C:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 496u);
    set32(c.r[6], c.r[29].w[0] + 480u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A88B4u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A88B4u) [[unlikely]] return; }
L_001A88B4:
    c.r[5].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 196u));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A88E8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A88E8u) [[unlikely]] return; }
L_001A88E8:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A88F8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A88F8u) [[unlikely]] return; }
L_001A88F8:
    set32(c.r[6], c.r[29].w[0] + 464u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 29893u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8914u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8914u) [[unlikely]] return; }
L_001A8914:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8928u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8928u) [[unlikely]] return; }
L_001A8928:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[6], c.r[29].w[0] + 448u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8940u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A8940u) [[unlikely]] return; }
L_001A8940:
    c.r[3].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], 0u - 9u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8974u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8974u) [[unlikely]] return; }
L_001A8974:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8984u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8984u) [[unlikely]] return; }
L_001A8984:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29883u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8998u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8998u) [[unlikely]] return; }
L_001A8998:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A89ACu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A89ACu) [[unlikely]] return; }
L_001A89AC:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A89C4u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A89C4u) [[unlikely]] return; }
L_001A89C4:
    c.r[5].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[6].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 196u));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[5], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[7].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A89F8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A89F8u) [[unlikely]] return; }
L_001A89F8:
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A0Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8A0Cu) [[unlikely]] return; }
L_001A8A0C:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29865u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A20u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8A20u) [[unlikely]] return; }
L_001A8A20:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A34u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8A34u) [[unlikely]] return; }
L_001A8A34:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A4Cu);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A8A4Cu) [[unlikely]] return; }
L_001A8A4C:
    c.r[3].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[16].w[0] + 254u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A68u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8A68u) [[unlikely]] return; }
L_001A8A68:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A78u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8A78u) [[unlikely]] return; }
L_001A8A78:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29852u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A8Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8A8Cu) [[unlikely]] return; }
L_001A8A8C:
    set32(c.r[7], c.r[29].w[0] + 352u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AA4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8AA4u) [[unlikely]] return; }
L_001A8AA4:
    set32(c.r[6], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 368u);
    set32(c.r[6], c.r[29].w[0] + 352u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AC0u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A8AC0u) [[unlikely]] return; }
L_001A8AC0:
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 253u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AE0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8AE0u) [[unlikely]] return; }
L_001A8AE0:
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AF4u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8AF4u) [[unlikely]] return; }
L_001A8AF4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29835u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B08u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8B08u) [[unlikely]] return; }
L_001A8B08:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B1Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8B1Cu) [[unlikely]] return; }
L_001A8B1C:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B34u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A8B34u) [[unlikely]] return; }
L_001A8B34:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[4].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 196u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], c.r[4].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 196u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B68u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8B68u) [[unlikely]] return; }
L_001A8B68:
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B7Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8B7Cu) [[unlikely]] return; }
L_001A8B7C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29815u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B90u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8B90u) [[unlikely]] return; }
L_001A8B90:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BA4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A8BA4u) [[unlikely]] return; }
L_001A8BA4:
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 288u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BC8u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A8BC8u) [[unlikely]] return; }
L_001A8BC8:
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A8BE4u) [[unlikely]] return; }
L_001A8BE4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BF4u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8BF4u) [[unlikely]] return; }
L_001A8BF4:
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C08u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A8C08u) [[unlikely]] return; }
L_001A8C08:
    set32(c.r[3], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29802u);
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C2Cu);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A8C2Cu) [[unlikely]] return; }
L_001A8C2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 100u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 96u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 29792u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C5Cu);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A8C5Cu) [[unlikely]] return; }
L_001A8C5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8D70; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 911u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 911u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8CB4; } }
    c.r[20].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[2].d[0] = c.r[20].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    st8((c.r[29].w[0] + 910u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 910u));
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    st32((c.r[29].w[0] + 840u), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8CC8; } }
L_001A8CB4:
    set32(c.r[2], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 836u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 836u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[29].w[0] + 840u), c.r[2].w[0]);
    c.budget -= 5;
L_001A8CC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 840u)));
    st32((c.r[29].w[0] + 832u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 832u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A8D70; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 608u)));
    c.r[7].d[0] = c.r[6].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[7].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 909u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 909u));
    c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8D20; } }
    set32(c.r[2], c.r[29].w[0] + 609u);
    st32((c.r[29].w[0] + 828u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 828u)));
    st32((c.r[29].w[0] + 824u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8D34; } }
L_001A8D20:
    set32(c.r[2], c.r[29].w[0] + 616u);
    st32((c.r[29].w[0] + 820u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 820u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[29].w[0] + 824u), c.r[2].w[0]);
    c.budget -= 5;
L_001A8D34:
    set32(c.r[4], ld32((c.r[29].w[0] + 824u)));
    st32((c.r[29].w[0] + 816u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[5], c.r[29].w[0] + 884u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D4Cu);  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x001A8D4Cu) [[unlikely]] return; }
L_001A8D4C:
    set32(c.r[5], ld32((c.r[29].w[0] + 884u)));
    st32((c.r[29].w[0] + 856u), c.r[5].w[0]);
    set32(c.r[6], c.r[16].w[0] + 268u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 856u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D6Cu);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x001A8D6Cu) [[unlikely]] return; }
L_001A8D6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A8D70:
    set32(c.r[5], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 100u)));
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29777u);
    set32(c.r[2], c.r[29].w[0] + 608u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8DA0u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A8DA0u) [[unlikely]] return; }
L_001A8DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8DDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28968u)));
    st32((c.r[29].w[0] + 812u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8DC0u);  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0014D0F0u; return; } if (c.pc != 0x001A8DC0u) [[unlikely]] return; }
L_001A8DC0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 880u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 880u)));
    c.r[2].d[0] = c.r[7].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 880u)));
    st32((c.r[16].w[0] + 228u), c.r[5].w[0]);
    c.budget -= 7;
L_001A8DDC:
    set32(c.r[5], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 100u)));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29767u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E08u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A8E08u) [[unlikely]] return; }
L_001A8E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A90E0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 608u)));
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 908u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 908u));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8E60; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] >> 57;
    st8((c.r[29].w[0] + 907u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 907u));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 808u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8E74; } }
L_001A8E60:
    set32(c.r[2], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 804u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    st32((c.r[29].w[0] + 808u), c.r[5].w[0]);
    c.budget -= 5;
L_001A8E74:
    set32(c.r[2], ld32((c.r[29].w[0] + 808u)));
    st32((c.r[29].w[0] + 800u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 800u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A90E0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 608u)));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 906u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 906u));
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8ECC; } }
    set32(c.r[3], c.r[29].w[0] + 609u);
    st32((c.r[29].w[0] + 796u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 796u)));
    st32((c.r[29].w[0] + 792u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8EE0; } }
L_001A8ECC:
    set32(c.r[5], c.r[29].w[0] + 616u);
    st32((c.r[29].w[0] + 788u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 788u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 792u), c.r[2].w[0]);
    c.budget -= 5;
L_001A8EE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 792u)));
    st32((c.r[29].w[0] + 784u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 784u)));
    set32(c.r[2], c.r[29].w[0] + 876u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EFCu);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x001A8EFCu) [[unlikely]] return; }
L_001A8EFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 576u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 600u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 1u);
    st16((c.r[29].w[0] + 602u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[7], c.r[29].w[0] + 580u);
    st32((c.r[29].w[0] + 596u), c.r[7].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 876u));
    st32((c.r[29].w[0] + 852u), c.f[0]);
    set32(c.r[2], 0u + 8u);
    st16((c.r[29].w[0] + 602u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 16u);
    st32((c.r[29].w[0] + 848u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[2], c.r[29].w[0] + 580u);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001A8F60; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8F54u) [[unlikely]] return; }
L_001A8F54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 580u);
    st32((c.r[29].w[0] + 596u), c.r[6].w[0]);
    c.budget -= 3;
L_001A8F60:
    set32(c.r[2], ld32((c.r[29].w[0] + 848u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A8FB0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[2], c.r[29].w[0] + 580u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8F8C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F8Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A8F8Cu) [[unlikely]] return; }
L_001A8F8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 600u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FA4u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A8FA4u) [[unlikely]] return; }
L_001A8FA4:
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 580u), c.r[4].w[0]);
    c.budget -= 3;
L_001A8FB0:
    c.f[0] = ld32((c.r[29].w[0] + 852u));
    set32(c.r[2], ld32((c.r[29].w[0] + 596u)));
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[29].w[0] + 844u), c.r[4].w[0]);
    set32(c.r[2], c.r[16].w[0] + 76u);
    st32((c.r[29].w[0] + 780u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 780u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 776u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 776u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 602u)));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[6], c.r[29].w[0] + 580u);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_001A904C; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 580u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A901Cu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001A901Cu) [[unlikely]] return; }
L_001A901C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001A903C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A903Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A903Cu) [[unlikely]] return; }
L_001A903C:
    set32(c.r[7], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9088; } }
L_001A904C:
    set32(c.r[4], ld32((c.r[29].w[0] + 580u)));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A906Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001A906Cu) [[unlikely]] return; }
L_001A906C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 596u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9084u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001A9084u) [[unlikely]] return; }
L_001A9084:
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_001A9088:
    set32(c.r[4], c.r[16].w[0] + 60u);
    set32(c.r[5], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A90A0u) [[unlikely]] return; }
L_001A90A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    st32((c.r[29].w[0] + 576u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 602u)));
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].d[0] = c.r[6].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A90E0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[2], c.r[29].w[0] + 580u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A90E0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001A90E0u) [[unlikely]] return; }
L_001A90E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29756u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9108u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A9108u) [[unlikely]] return; }
L_001A9108:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A9210; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[6].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[6].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 905u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 905u));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A9164; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = c.r[2].d[0] >> 57;
    st8((c.r[29].w[0] + 904u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 904u));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[29].w[0] + 772u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9178; } }
L_001A9164:
    set32(c.r[5], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 768u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 768u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 772u), c.r[4].w[0]);
    c.budget -= 5;
L_001A9178:
    set32(c.r[5], ld32((c.r[29].w[0] + 772u)));
    st32((c.r[29].w[0] + 764u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 764u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9210; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    c.r[5].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 903u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 903u));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A91D0; } }
    set32(c.r[5], c.r[29].w[0] + 609u);
    st32((c.r[29].w[0] + 760u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 760u)));
    st32((c.r[29].w[0] + 756u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A91E4; } }
L_001A91D0:
    set32(c.r[4], c.r[29].w[0] + 616u);
    st32((c.r[29].w[0] + 752u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 752u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 756u), c.r[4].w[0]);
    c.budget -= 5;
L_001A91E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 756u)));
    st32((c.r[29].w[0] + 748u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 748u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 872u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9204u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x001A9204u) [[unlikely]] return; }
L_001A9204:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 872u));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.budget -= 3;
L_001A9210:
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9220u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001A9220u) [[unlikely]] return; }
L_001A9220:
    set32(c.r[4], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 96u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29738u);
    set32(c.r[7], c.r[29].w[0] + 560u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9248u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A9248u) [[unlikely]] return; }
L_001A9248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9340; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    c.r[5].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 902u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 902u));
    c.r[2].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A92A0; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[4].d[0] >> 57;
    st8((c.r[29].w[0] + 901u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 901u));
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    st32((c.r[29].w[0] + 744u), c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A92B4; } }
L_001A92A0:
    set32(c.r[2], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 740u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 740u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 744u), c.r[2].w[0]);
    c.budget -= 5;
L_001A92B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 744u)));
    st32((c.r[29].w[0] + 736u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A9340; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 560u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 900u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 900u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A930C; } }
    set32(c.r[2], c.r[29].w[0] + 561u);
    st32((c.r[29].w[0] + 732u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 732u)));
    st32((c.r[29].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9320; } }
L_001A930C:
    set32(c.r[2], c.r[29].w[0] + 568u);
    st32((c.r[29].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 724u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[29].w[0] + 728u), c.r[2].w[0]);
    c.budget -= 5;
L_001A9320:
    set32(c.r[2], ld32((c.r[29].w[0] + 728u)));
    st32((c.r[29].w[0] + 720u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 720u)));
    set32(c.r[5], c.r[29].w[0] + 868u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9338u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x001A9338u) [[unlikely]] return; }
L_001A9338:
    c.f[0] = ld32((c.r[29].w[0] + 868u));
    st32((c.r[16].w[0] + 220u), c.f[0]);
    c.budget -= 2;
L_001A9340:
    set32(c.r[4], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 96u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29725u);
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9364u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A9364u) [[unlikely]] return; }
L_001A9364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9460; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 608u)));
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[5].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 899u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 899u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A93BC; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    st8((c.r[29].w[0] + 898u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 898u));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st32((c.r[29].w[0] + 716u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A93D0; } }
L_001A93BC:
    set32(c.r[5], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 712u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 712u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 716u), c.r[5].w[0]);
    c.budget -= 5;
L_001A93D0:
    set32(c.r[6], ld32((c.r[29].w[0] + 716u)));
    st32((c.r[29].w[0] + 708u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9460; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    c.r[5].d[0] = c.r[4].d[0] & 1ull;
    c.r[7].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[7].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[8].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 897u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 897u));
    c.r[2].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9428; } }
    set32(c.r[3], c.r[29].w[0] + 609u);
    st32((c.r[29].w[0] + 704u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 704u)));
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A943C; } }
L_001A9428:
    set32(c.r[5], c.r[29].w[0] + 616u);
    st32((c.r[29].w[0] + 700u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 700u)));
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
L_001A943C:
    st32((c.r[29].w[0] + 696u), c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 696u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 864u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9454u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x001A9454u) [[unlikely]] return; }
L_001A9454:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 864u));
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.budget -= 3;
L_001A9460:
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 100u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 29712u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 608u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9494u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A9494u) [[unlikely]] return; }
L_001A9494:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A95B4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 896u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 896u));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A94F0; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[4].d[0] >> 57;
    st8((c.r[29].w[0] + 895u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 895u));
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9504; } }
L_001A94F0:
    set32(c.r[4], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 692u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 692u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001A9504:
    st32((c.r[29].w[0] + 688u), c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 688u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A95B4; } }
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29693u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9530u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A9530u) [[unlikely]] return; }
L_001A9530:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 684u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 684u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A9554; } }
    set32(c.r[6], 0u + 2u);
    st32((c.r[16].w[0] + 248u), c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A95B4; } }
L_001A9554:
    set32(c.r[2], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29686u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A956Cu);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A956Cu) [[unlikely]] return; }
L_001A956C:
    st32((c.r[29].w[0] + 680u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 680u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9588; } }
    st32((c.r[16].w[0] + 248u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A95B4; } }
L_001A9588:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29682u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A959Cu);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A959Cu) [[unlikely]] return; }
L_001A959C:
    st32((c.r[29].w[0] + 676u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 676u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A95B4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 2;
L_001A95B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29675u);
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A95DCu);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A95DCu) [[unlikely]] return; }
L_001A95DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A96F8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    c.r[5].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 894u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 894u));
    c.r[2].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9634; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[4].d[0] >> 57;
    st8((c.r[29].w[0] + 893u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 893u));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9648; } }
L_001A9634:
    set32(c.r[4], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 672u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_001A9648:
    st32((c.r[29].w[0] + 668u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 668u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A96F8; } }
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29693u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9670u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A9670u) [[unlikely]] return; }
L_001A9670:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 664u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 664u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A9694; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A96F8; } }
L_001A9694:
    set32(c.r[4], c.r[29].w[0] + 608u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A96A8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A96A8u) [[unlikely]] return; }
L_001A96A8:
    st32((c.r[29].w[0] + 660u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 660u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001A96C4; } }
    st32((c.r[16].w[0] + 212u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A96F8; } }
L_001A96C4:
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29651u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A96E0u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A96E0u) [[unlikely]] return; }
L_001A96E0:
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001A96F8; } }
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 212u), c.r[6].w[0]);
    c.budget -= 2;
L_001A96F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29645u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9720u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A9720u) [[unlikely]] return; }
L_001A9720:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001A99BC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 892u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 892u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A977C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 608u));
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[4].d[0] >> 57;
    st8((c.r[29].w[0] + 891u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 891u));
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9790; } }
L_001A977C:
    set32(c.r[3], c.r[29].w[0] + 612u);
    st32((c.r[29].w[0] + 652u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_001A9790:
    st32((c.r[29].w[0] + 648u), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A99BC; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29656u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97B8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A97B8u) [[unlikely]] return; }
L_001A97B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29905u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97D8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A97D8u) [[unlikely]] return; }
L_001A97D8:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97FCu);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A97FCu) [[unlikely]] return; }
L_001A97FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[16].w[0] + 262u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A981Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A981Cu) [[unlikely]] return; }
L_001A981C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A982Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A982Cu) [[unlikely]] return; }
L_001A982C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 240u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29651u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9848u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A9848u) [[unlikely]] return; }
L_001A9848:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A985Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A985Cu) [[unlikely]] return; }
L_001A985C:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9878u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A9878u) [[unlikely]] return; }
L_001A9878:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[6].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[16].w[0] + 263u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[29].w[0] + 224u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A989Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A989Cu) [[unlikely]] return; }
L_001A989C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98ACu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A98ACu) [[unlikely]] return; }
L_001A98AC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29686u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98C0u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A98C0u) [[unlikely]] return; }
L_001A98C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98D8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A98D8u) [[unlikely]] return; }
L_001A98D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98FCu);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A98FCu) [[unlikely]] return; }
L_001A98FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ~(c.r[4].d[0] | 0ull);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[16].w[0] + 260u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A991Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A991Cu) [[unlikely]] return; }
L_001A991C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9934u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A9934u) [[unlikely]] return; }
L_001A9934:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 29682u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9954u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A9954u) [[unlikely]] return; }
L_001A9954:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29905u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9968u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001A9968u) [[unlikely]] return; }
L_001A9968:
    set32(c.r[4], c.r[29].w[0] + 608u);
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9984u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x001A9984u) [[unlikely]] return; }
L_001A9984:
    c.r[3].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[16].w[0] + 261u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99A0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A99A0u) [[unlikely]] return; }
L_001A99A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99B8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A99B8u) [[unlikely]] return; }
L_001A99B8:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A99BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 29631u);
    set32(c.r[7], c.r[29].w[0] + 608u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99E4u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A99E4u) [[unlikely]] return; }
L_001A99E4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001A9A60; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 890u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 890u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9A30; } }
    set32(c.r[2], c.r[29].w[0] + 609u);
    st32((c.r[29].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9A44; } }
L_001A9A30:
    set32(c.r[2], c.r[29].w[0] + 616u);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_001A9A44:
    st32((c.r[29].w[0] + 636u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 636u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A9A60u) [[unlikely]] return; }
L_001A9A60:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A6Cu);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001A9A6Cu) [[unlikely]] return; }
L_001A9A6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 976u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[5].w[0] + 96u)));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 29619u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 544u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A9Cu);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x001A9A9Cu) [[unlikely]] return; }
L_001A9A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9AD4; } }
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29596u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AB8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001A9AB8u) [[unlikely]] return; }
L_001A9AB8:
    st32((c.r[29].w[0] + 632u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 632u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[29].w[0] + 889u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 889u));
    st8((c.r[16].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001A9AD4:
    st32((c.r[29].w[0] + 860u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AE8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A9AE8u) [[unlikely]] return; }
L_001A9AE8:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9AF8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A9AF8u) [[unlikely]] return; }
L_001A9AF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 608u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9B10u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001A9B10u) [[unlikely]] return; }
L_001A9B10:
    set32(c.r[5], ld32((c.r[29].w[0] + 860u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
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
    set32(c.r[29], c.r[29].w[0] + 992u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 16u));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st8((c.r[3].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9B80:
    set32(c.r[29], c.r[29].w[0] - 688u);
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
    st32((c.r[29].w[0] + 656u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 672u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 672u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9BC4u);  if (depth < kMaxDepth) unit_002C(c, 170u, depth + 1u); else { c.pc = 0x001B2E50u; return; } if (c.pc != 0x001A9BC4u) [[unlikely]] return; }
L_001A9BC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[29].w[0] + 572u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 572u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A9D14; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 620u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[29].w[0] + 624u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 568u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 568u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[23], c.r[2].w[0] << 5);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[23].w[0]);
    st32((c.r[29].w[0] + 564u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 564u)));
    st32((c.r[29].w[0] + 560u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    st32((c.r[29].w[0] + 556u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C40u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001A9C40u) [[unlikely]] return; }
L_001A9C40:
    set32(c.r[5], ld32((c.r[29].w[0] + 580u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C54u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001A9C54u) [[unlikely]] return; }
L_001A9C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9C88; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 580u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A9C88; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 580u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C88u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001A9C88u) [[unlikely]] return; }
L_001A9C88:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C98u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001A9C98u) [[unlikely]] return; }
L_001A9C98:
    set32(c.r[2], c.r[29].w[0] + 352u);
    st32((c.r[29].w[0] + 552u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    st32((c.r[2].w[0] + 216u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 228u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A9D04; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 656u)));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9CD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A9CD4u) [[unlikely]] return; }
L_001A9CD4:
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9CF4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 172u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001A9D04; } }
L_001A9CF4:
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D00u);  if (depth < kMaxDepth) unit_002A(c, 231u, depth + 1u); else { c.pc = 0x001AB140u; return; } if (c.pc != 0x001A9D00u) [[unlikely]] return; }
L_001A9D00:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A9D04:
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D10u);  if (depth < kMaxDepth) unit_002A(c, 190u, depth + 1u); else { c.pc = 0x001AA700u; return; } if (c.pc != 0x001A9D10u) [[unlikely]] return; }
L_001A9D10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001A9D14:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    st32((c.r[29].w[0] + 548u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001AA2A0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 120u)));
    st32((c.r[29].w[0] + 640u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[4], c.r[3].w[0] + 76u);
    st32((c.r[29].w[0] + 544u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 540u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 540u)));
    st32((c.r[29].w[0] + 536u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 536u)));
    st32((c.r[29].w[0] + 644u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D7Cu);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x001A9D7Cu) [[unlikely]] return; }
L_001A9D7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9D8Cu);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x001A9D8Cu) [[unlikely]] return; }
L_001A9D8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9DC0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 644u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 26u)));
    c.r[3].d[0] = c.r[4].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 64u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A9DC0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9DC0u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x001A9DC0u) [[unlikely]] return; }
L_001A9DC0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9DD0u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x001A9DD0u) [[unlikely]] return; }
L_001A9DD0:
    set32(c.r[3], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 532u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 532u)));
    st32((c.r[29].w[0] + 576u), c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 576u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9E1C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9E30; } }
L_001A9E1C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 5;
L_001A9E30:
    set32(c.r[5], c.r[3].w[0] << 24);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9E6C; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9E80; } }
L_001A9E6C:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_001A9E80:
    set32(c.r[3], c.r[4].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9EC0; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9ED4; } }
L_001A9EC0:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_001A9ED4:
    set32(c.r[3], c.r[4].w[0] << 8);
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A9F14; } }
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9F28; } }
L_001A9F14:
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
L_001A9F28:
    c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[29].w[0] + 636u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 636u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    st32((c.r[3].w[0] + 208u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    c.r[17].d[0] = ld8((c.r[4].w[0] + 252u));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001A9F70; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 228u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001A9F70; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F68u);  if (depth < kMaxDepth) unit_002A(c, 231u, depth + 1u); else { c.pc = 0x001AB140u; return; } if (c.pc != 0x001A9F68u) [[unlikely]] return; }
L_001A9F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA2A0; } }
L_001A9F70:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA284; } }
L_001A9F7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], c.r[3].w[0] + 280u);
    st32((c.r[29].w[0] + 528u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 524u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 524u)));
    st32((c.r[29].w[0] + 520u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA280; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 600u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], c.r[3].w[0] + 76u);
    st32((c.r[29].w[0] + 516u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 512u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    st32((c.r[29].w[0] + 508u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 508u)));
    st32((c.r[29].w[0] + 504u), c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA024u);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x001AA024u) [[unlikely]] return; }
L_001AA024:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA034u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x001AA034u) [[unlikely]] return; }
L_001AA034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA064; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 64u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA064; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA064u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x001AA064u) [[unlikely]] return; }
L_001AA064:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA074u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x001AA074u) [[unlikely]] return; }
L_001AA074:
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 500u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 632u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA0B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AA0A8u) [[unlikely]] return; }
L_001AA0A8:
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_001AA0B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 632u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AA100; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA0DC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0DCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AA0DCu) [[unlikely]] return; }
L_001AA0DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0F4u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AA0F4u) [[unlikely]] return; }
L_001AA0F4:
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 3;
L_001AA100:
    set32(c.r[19], ld32((c.r[29].w[0] + 244u)));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[2], c.r[2].w[0] + 280u);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    set32(c.r[3], c.r[21].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 492u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 492u)));
    st32((c.r[29].w[0] + 488u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 628u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 120u)));
    st32((c.r[29].w[0] + 616u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    set32(c.r[2], c.r[2].w[0] + 76u);
    st32((c.r[29].w[0] + 484u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 480u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AA1E4; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 228u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1B8u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AA1B8u) [[unlikely]] return; }
L_001AA1B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA1D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AA1D4u) [[unlikely]] return; }
L_001AA1D4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA224; } }
L_001AA1E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[29].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 584u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA204u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AA204u) [[unlikely]] return; }
L_001AA204:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 584u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA21Cu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AA21Cu) [[unlikely]] return; }
L_001AA21C:
    set32(c.r[2], ld32((c.r[29].w[0] + 584u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_001AA224:
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    set32(c.r[4], c.r[2].w[0] + 60u);
    set32(c.r[5], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA240u) [[unlikely]] return; }
L_001AA240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA280; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[3], c.r[29].w[0] + 228u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AA280; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA280u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AA280u) [[unlikely]] return; }
L_001AA280:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_001AA284:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 276u)));
    st32((c.r[29].w[0] + 476u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9F7Cu | kUnwind; return; } goto L_001A9F7C; } }
L_001AA2A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    st32((c.r[29].w[0] + 472u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 472u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001AA3E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 608u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    st32((c.r[29].w[0] + 612u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    st32((c.r[29].w[0] + 460u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 460u)));
    st32((c.r[29].w[0] + 456u), c.r[2].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 456u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA318u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001AA318u) [[unlikely]] return; }
L_001AA318:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA328u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001AA328u) [[unlikely]] return; }
L_001AA328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA35C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 26u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001AA35C; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA358u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001AA358u) [[unlikely]] return; }
L_001AA358:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA35C:
    set32(c.r[2], c.r[29].w[0] + 336u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA370u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001AA370u) [[unlikely]] return; }
L_001AA370:
    set32(c.r[3], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 452u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 448u)));
    st32((c.r[29].w[0] + 652u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AA3B4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA3BC; } }
L_001AA3B4:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 2;
L_001AA3BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 444u)));
    st32((c.r[29].w[0] + 648u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[6], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3D8u);  if (depth < kMaxDepth) unit_002A(c, 204u, depth + 1u); else { c.pc = 0x001AAA70u; return; } if (c.pc != 0x001AA3D8u) [[unlikely]] return; }
L_001AA3D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3E4u);  if (depth < kMaxDepth) unit_002A(c, 190u, depth + 1u); else { c.pc = 0x001AA700u; return; } if (c.pc != 0x001AA3E4u) [[unlikely]] return; }
L_001AA3E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA3E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[29].w[0] + 440u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 440u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AA43C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 436u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AA43C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[29].w[0] + 432u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AA448; } }
L_001AA43C:
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA448u);  if (depth < kMaxDepth) unit_002A(c, 190u, depth + 1u); else { c.pc = 0x001AA700u; return; } if (c.pc != 0x001AA448u) [[unlikely]] return; }
L_001AA448:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    st32((c.r[29].w[0] + 428u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 428u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001AA690; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    st32((c.r[29].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[5], c.r[4].w[0] + 76u);
    st32((c.r[29].w[0] + 424u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 604u)));
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    st32((c.r[29].w[0] + 416u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 416u)));
    st32((c.r[29].w[0] + 412u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 412u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4B8u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001AA4B8u) [[unlikely]] return; }
L_001AA4B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4D0u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001AA4D0u) [[unlikely]] return; }
L_001AA4D0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA508; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 26u)));
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[3], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_001AA508; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA504u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001AA504u) [[unlikely]] return; }
L_001AA504:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001AA508:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA518u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001AA518u) [[unlikely]] return; }
L_001AA518:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 408u), c.r[3].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA674; } }
L_001AA530:
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], c.r[4].w[0] + 280u);
    st32((c.r[29].w[0] + 404u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[5], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 400u)));
    st32((c.r[29].w[0] + 396u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 396u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AA670; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], c.r[5].w[0] + 280u);
    st32((c.r[29].w[0] + 392u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 388u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 388u)));
    st32((c.r[29].w[0] + 384u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA5A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA5A8u) [[unlikely]] return; }
L_001AA5A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 588u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 588u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 104u));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], c.r[4].w[0] + 280u);
    st32((c.r[29].w[0] + 380u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 376u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 372u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 50;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA670u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA670u) [[unlikely]] return; }
L_001AA670:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001AA674:
    set32(c.r[3], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 276u)));
    st32((c.r[29].w[0] + 368u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 368u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA530u | kUnwind; return; } goto L_001AA530; } }
L_001AA690:
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
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
    set32(c.r[29], c.r[29].w[0] + 688u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA6E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AA700:
    set32(c.r[29], c.r[29].w[0] - 352u);
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
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[30], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA784u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001AA784u) [[unlikely]] return; }
L_001AA784:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA794u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001AA794u) [[unlikely]] return; }
L_001AA794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA7C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA7C4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7C4u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001AA7C4u) [[unlikely]] return; }
L_001AA7C4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA7D4u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001AA7D4u) [[unlikely]] return; }
L_001AA7D4:
    set32(c.r[2], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[23], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA830u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001AA830u) [[unlikely]] return; }
L_001AA830:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA840u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001AA840u) [[unlikely]] return; }
L_001AA840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA870; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA870; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA870u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001AA870u) [[unlikely]] return; }
L_001AA870:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA880u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001AA880u) [[unlikely]] return; }
L_001AA880:
    set32(c.r[2], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA89Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA89Cu) [[unlikely]] return; }
L_001AA89C:
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAA14; } }
L_001AA8AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[22], c.r[3].w[0] + 280u);
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AAA10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA8E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AA8E8u) [[unlikely]] return; }
L_001AA8E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA8F8u);  if (depth < kMaxDepth) unit_0029(c, 180u, depth + 1u); else { c.pc = 0x001A6D80u; return; } if (c.pc != 0x001AA8F8u) [[unlikely]] return; }
L_001AA8F8:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 332u));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 70;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAA10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AAA10u) [[unlikely]] return; }
L_001AAA10:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001AAA14:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 276u)));
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AA8ACu | kUnwind; return; } goto L_001AA8AC; } }
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
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AAA70:
    set32(c.r[29], c.r[29].w[0] - 432u);
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
    st32((c.r[29].w[0] + 384u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 416u), c.r[6].w[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 380u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AAAE8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAB24; } }
L_001AAAE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 248u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AAB24; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.budget -= 10;
L_001AAB24:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    st32((c.r[29].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 76u);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    set32(c.r[22], ld32((c.r[29].w[0] + 328u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB68u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x001AAB68u) [[unlikely]] return; }
L_001AAB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAB98; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 26u)));
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], 0u + 8u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AAB98; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 320u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB98u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x001AAB98u) [[unlikely]] return; }
L_001AAB98:
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 380u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 380u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB0EC; } }
L_001AABCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[3].w[0] + 280u);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001AB0E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAC58; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AAC50u) [[unlikely]] return; }
L_001AAC50:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_001AAC58:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AACA8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAC84; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AAC84u) [[unlikely]] return; }
L_001AAC84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC9Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AAC9Cu) [[unlikely]] return; }
L_001AAC9C:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
L_001AACA8:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 280u);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[23].w[0] + 124u)));
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] + 76u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 288u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AAD68; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 196u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD3Cu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AAD3Cu) [[unlikely]] return; }
L_001AAD3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAD58; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD58u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AAD58u) [[unlikely]] return; }
L_001AAD58:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AADA8; } }
L_001AAD68:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 336u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAD88u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AAD88u) [[unlikely]] return; }
L_001AAD88:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AADA0u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AADA0u) [[unlikely]] return; }
L_001AADA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_001AADA8:
    set32(c.r[4], c.r[23].w[0] + 60u);
    set32(c.r[5], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AADC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AADC0u) [[unlikely]] return; }
L_001AADC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AAE00; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAE00; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE00u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AAE00u) [[unlikely]] return; }
L_001AAE00:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE54u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001AAE54u) [[unlikely]] return; }
L_001AAE54:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE64u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001AAE64u) [[unlikely]] return; }
L_001AAE64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AAE94; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAE94; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE94u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001AAE94u) [[unlikely]] return; }
L_001AAE94:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAEA4u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001AAEA4u) [[unlikely]] return; }
L_001AAEA4:
    set32(c.r[2], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAF08; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF00u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AAF00u) [[unlikely]] return; }
L_001AAF00:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_001AAF08:
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AAF58; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAF34; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF34u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AAF34u) [[unlikely]] return; }
L_001AAF34:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAF4Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AAF4Cu) [[unlikely]] return; }
L_001AAF4C:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 3;
L_001AAF58:
    set32(c.r[19], ld32((c.r[29].w[0] + 180u)));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 260u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AB004; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAFD8u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AAFD8u) [[unlikely]] return; }
L_001AAFD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AAFF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAFF4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AAFF4u) [[unlikely]] return; }
L_001AAFF4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB03C; } }
L_001AB004:
    set32(c.r[30], ld32((c.r[29].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB020u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AB020u) [[unlikely]] return; }
L_001AB020:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB038u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AB038u) [[unlikely]] return; }
L_001AB038:
    st32((c.r[16].w[0] + 4u), c.r[30].w[0]);
    c.budget -= 1;
L_001AB03C:
    set32(c.r[4], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB054u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB054u) [[unlikely]] return; }
L_001AB054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB094; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB094; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB094u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AB094u) [[unlikely]] return; }
L_001AB094:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB0A8u) [[unlikely]] return; }
L_001AB0A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    c.f[1] = ld32((c.r[3].w[0] + 156u));
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 376u));
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.budget -= 16;
L_001AB0E8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_001AB0EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 276u)));
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AABCCu | kUnwind; return; } goto L_001AABCC; } }
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
    set32(c.r[29], c.r[29].w[0] + 432u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB140:
    set32(c.r[29], c.r[29].w[0] - 816u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = 0u;
    st32((c.r[20].w[0] + 160u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[20].w[0] + 164u), c.f[0]);
    st8((c.r[20].w[0] + 252u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AB1B4; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB1B8; } }
L_001AB1B4:
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_001AB1B8:
    st8((c.r[20].w[0] + 172u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[20].w[0] + 180u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29591u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB1D0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001AB1D0u) [[unlikely]] return; }
L_001AB1D0:
    st32((c.r[20].w[0] + 200u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 680u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB200u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001AB200u) [[unlikely]] return; }
L_001AB200:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB210u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001AB210u) [[unlikely]] return; }
L_001AB210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB240; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB240; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB240u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001AB240u) [[unlikely]] return; }
L_001AB240:
    set32(c.r[4], c.r[29].w[0] + 792u);
    set32(c.r[5], c.r[29].w[0] + 680u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB250u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001AB250u) [[unlikely]] return; }
L_001AB250:
    set32(c.r[2], c.r[29].w[0] + 792u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 664u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB278u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001AB278u) [[unlikely]] return; }
L_001AB278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB288u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001AB288u) [[unlikely]] return; }
L_001AB288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB2B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB2B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2B8u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001AB2B8u) [[unlikely]] return; }
L_001AB2B8:
    set32(c.r[4], c.r[29].w[0] + 776u);
    set32(c.r[5], c.r[29].w[0] + 664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2C8u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001AB2C8u) [[unlikely]] return; }
L_001AB2C8:
    set32(c.r[2], c.r[29].w[0] + 776u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB2E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB2E0u) [[unlikely]] return; }
L_001AB2E0:
    c.f[21] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 776u));
    st32((c.r[20].w[0] + 216u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[20] = 0u;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB320u);  if (depth < kMaxDepth) unit_0013(c, 84u, depth + 1u); else { c.pc = 0x0014CB80u; return; } if (c.pc != 0x001AB320u) [[unlikely]] return; }
L_001AB320:
    c.f[1] = ld32((c.r[20].w[0] + 156u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = c.r[19].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 780u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AB350; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AB350:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 624u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB368u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x001AB368u) [[unlikely]] return; }
L_001AB368:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29952u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB388u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001AB388u) [[unlikely]] return; }
L_001AB388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABEF4; } }
L_001AB390:
    set32(c.r[3], c.r[29].w[0] + 592u);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 172u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[5], c.r[20].w[0] + 180u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3B4u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x001AB3B4u) [[unlikely]] return; }
L_001AB3B4:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[20].w[0] + 180u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB3FC; } }
    set32(c.r[2], c.r[20].w[0] + 180u);
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB408; } }
L_001AB3FC:
    set32(c.r[2], c.r[20].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_001AB408:
    set32(c.r[4], c.r[20].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB414u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001AB414u) [[unlikely]] return; }
L_001AB414:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 254u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB43C; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB43C; } }
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_001AB43C:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 196u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 196u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[29].w[0] + 480u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB46Cu);  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x001AC370u; return; } if (c.pc != 0x001AB46Cu) [[unlikely]] return; }
L_001AB46C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB478u);  if (depth < kMaxDepth) unit_002B(c, 6u, depth + 1u); else { c.pc = 0x001AC1D0u; return; } if (c.pc != 0x001AB478u) [[unlikely]] return; }
L_001AB478:
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB484u);  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x001AC0E0u; return; } if (c.pc != 0x001AB484u) [[unlikely]] return; }
L_001AB484:
    set32(c.r[4], c.r[20].w[0] + 140u);
    set32(c.r[5], c.r[20].w[0] + 196u);
    set32(c.r[6], c.r[20].w[0] + 172u);
    set32(c.r[7], c.r[29].w[0] + 480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB49Cu);  if (depth < kMaxDepth) unit_0014(c, 8u, depth + 1u); else { c.pc = 0x00150180u; return; } if (c.pc != 0x001AB49Cu) [[unlikely]] return; }
L_001AB49C:
    c.f[0] = ld32((c.r[29].w[0] + 792u));
    st32((c.r[29].w[0] + 540u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 796u));
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 800u));
    st32((c.r[29].w[0] + 548u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 784u));
    c.f[1] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[29].w[0] + 780u));
    c.f[2] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[29].w[0] + 776u));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 744u), c.f[0]);
    st32((c.r[29].w[0] + 748u), c.f[2]);
    st32((c.r[29].w[0] + 752u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 800u));
    c.f[0] = ld32((c.r[29].w[0] + 752u));
    c.f[2] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 796u));
    c.f[0] = ld32((c.r[29].w[0] + 748u));
    c.f[3] = fp::add(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 792u));
    c.f[0] = ld32((c.r[29].w[0] + 744u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 760u), c.f[0]);
    st32((c.r[29].w[0] + 764u), c.f[3]);
    st32((c.r[29].w[0] + 768u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 760u));
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 764u));
    st32((c.r[29].w[0] + 556u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 768u));
    st32((c.r[29].w[0] + 560u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 261u));
    st8((c.r[29].w[0] + 569u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 262u));
    st8((c.r[29].w[0] + 570u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 263u));
    st8((c.r[29].w[0] + 571u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 260u));
    st8((c.r[29].w[0] + 568u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 584u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[29].w[0] + 584u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 584u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[29].w[0] + 584u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 584u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[29].w[0] + 584u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 536u));
    c.budget -= 69;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB5C0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 252u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB5C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AB5C0:
    st8((c.r[20].w[0] + 252u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 28816u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001AB5D4; } }
    set32(c.r[16], c.r[16].w[0] + 1432u);
    c.budget -= 1;
L_001AB5D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001ABE78; } }
    set32(c.r[4], c.r[16].w[0] + 1408u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 29590u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB5F0u);  if (depth < kMaxDepth) unit_0023(c, 112u, depth + 1u); else { c.pc = 0x0018DCE0u; return; } if (c.pc != 0x001AB5F0u) [[unlikely]] return; }
L_001AB5F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001AB618; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB61C; } }
L_001AB618:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AB61C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001ABE38; } }
    st32((c.r[29].w[0] + 812u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 276u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB6CC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 228u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB644u);  if (depth < kMaxDepth) unit_0013(c, 84u, depth + 1u); else { c.pc = 0x0014CB80u; return; } if (c.pc != 0x001AB644u) [[unlikely]] return; }
L_001AB644:
    c.f[1] = ld32((c.r[20].w[0] + 216u));
    st32((c.r[29].w[0] + 728u), c.f[1]);
    st32((c.r[29].w[0] + 732u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 736u), c.f[0]);
    set32(c.r[8], c.r[29].w[0] + 728u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 168u)));
    set32(c.r[6], c.r[29].w[0] + 480u);
    set32(c.r[7], c.r[20].w[0] + 196u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB678u);  if (depth < kMaxDepth) unit_002B(c, 86u, depth + 1u); else { c.pc = 0x001ADA60u; return; } if (c.pc != 0x001AB678u) [[unlikely]] return; }
L_001AB678:
    st32((c.r[29].w[0] + 812u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB68Cu);  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x001AB68Cu) [[unlikely]] return; }
L_001AB68C:
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB69Cu);  if (depth < kMaxDepth) unit_002B(c, 203u, depth + 1u); else { c.pc = 0x001AEE40u; return; } if (c.pc != 0x001AB69Cu) [[unlikely]] return; }
L_001AB69C:
    set32(c.r[4], c.r[20].w[0] + 280u);
    set32(c.r[2], ld32((c.r[20].w[0] + 276u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001AB6B0:
    set32(c.r[4], c.r[20].w[0] + 268u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 812u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6C4u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x001AB6C4u) [[unlikely]] return; }
L_001AB6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB714; } }
L_001AB6CC:
    set32(c.r[4], c.r[20].w[0] + 268u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6DCu);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x001AB6DCu) [[unlikely]] return; }
L_001AB6DC:
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 812u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB6FCu) [[unlikely]] return; }
L_001AB6FC:
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[5], c.r[20].w[0] + 196u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB714u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB714u) [[unlikely]] return; }
L_001AB714:
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB728u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB728u) [[unlikely]] return; }
L_001AB728:
    c.f[1] = ld32((c.r[20].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AB750; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB74Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB74Cu) [[unlikely]] return; }
L_001AB74C:
    st32((c.r[20].w[0] + 160u), c.f[0]);
    c.budget -= 1;
L_001AB750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 472u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 474u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 452u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 712u), c.f[0]);
    st32((c.r[29].w[0] + 716u), c.f[20]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 720u), c.f[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 474u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], 0u + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], c.r[29].w[0] + 452u);
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB7BC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7B4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AB7B4u) [[unlikely]] return; }
L_001AB7B4:
    set32(c.r[2], c.r[29].w[0] + 452u);
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 2;
L_001AB7BC:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AB808; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], c.r[29].w[0] + 452u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB7E4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AB7E4u) [[unlikely]] return; }
L_001AB7E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 472u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7FCu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AB7FCu) [[unlikely]] return; }
L_001AB7FC:
    st32((c.r[29].w[0] + 468u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    c.budget -= 3;
L_001AB808:
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    c.f[0] = ld32((c.r[29].w[0] + 712u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 716u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 720u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[21].w[0] + 16u);
    set32(c.r[3], c.r[22].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 474u)));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], c.r[29].w[0] + 452u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AB898; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 452u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB86Cu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AB86Cu) [[unlikely]] return; }
L_001AB86C:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB888; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB888u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AB888u) [[unlikely]] return; }
L_001AB888:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB8D0; } }
L_001AB898:
    set32(c.r[16], ld32((c.r[29].w[0] + 452u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8B4u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001AB8B4u) [[unlikely]] return; }
L_001AB8B4:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 468u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8CCu);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001AB8CCu) [[unlikely]] return; }
L_001AB8CC:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_001AB8D0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AB8E8u) [[unlikely]] return; }
L_001AB8E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 448u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 474u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB928; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[2], c.r[29].w[0] + 452u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB928; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB928u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AB928u) [[unlikely]] return; }
L_001AB928:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 440u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 442u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 420u);
    st32((c.r[29].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[2], c.r[20].w[0] + 76u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB968u);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x001AB968u) [[unlikely]] return; }
L_001AB968:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB978u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x001AB978u) [[unlikely]] return; }
L_001AB978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB9A8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 64u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB9A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9A8u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x001AB9A8u) [[unlikely]] return; }
L_001AB9A8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9B8u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x001AB9B8u) [[unlikely]] return; }
L_001AB9B8:
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[2], 0u + 64u);
    st16((c.r[29].w[0] + 442u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], 0u + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[2], c.r[29].w[0] + 420u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AB9EC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001AB9E4u) [[unlikely]] return; }
L_001AB9E4:
    set32(c.r[2], c.r[29].w[0] + 420u);
    st32((c.r[29].w[0] + 436u), c.r[2].w[0]);
    c.budget -= 2;
L_001AB9EC:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ABA38; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[2], c.r[29].w[0] + 420u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ABA14; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA14u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001ABA14u) [[unlikely]] return; }
L_001ABA14:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 440u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABA2Cu);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001ABA2Cu) [[unlikely]] return; }
L_001ABA2C:
    st32((c.r[29].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABA38:
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[22], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[2], c.r[17].w[0] + 76u);
    set32(c.r[3], c.r[22].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 442u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[2], c.r[29].w[0] + 420u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ABACC; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 420u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAA0u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001ABAA0u) [[unlikely]] return; }
L_001ABAA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ABABC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABABCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001ABABCu) [[unlikely]] return; }
L_001ABABC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABB04; } }
L_001ABACC:
    set32(c.r[21], ld32((c.r[29].w[0] + 420u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAE8u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001ABAE8u) [[unlikely]] return; }
L_001ABAE8:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 436u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB00u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001ABB00u) [[unlikely]] return; }
L_001ABB00:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_001ABB04:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABB1Cu) [[unlikely]] return; }
L_001ABB1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 442u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABB5C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[2], c.r[29].w[0] + 420u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ABB5C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB5Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001ABB5Cu) [[unlikely]] return; }
L_001ABB5C:
    set32(c.r[5], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 128u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[2] = ld32((c.r[20].w[0] + 156u));
    c.f[0] = c.r[19].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[20]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = ld32((c.r[29].w[0] + 780u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ABBD8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 253u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABBD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ABBD8:
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001ABD64; } }
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBF8u);  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x001AC370u; return; } if (c.pc != 0x001ABBF8u) [[unlikely]] return; }
L_001ABBF8:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC04u);  if (depth < kMaxDepth) unit_002B(c, 6u, depth + 1u); else { c.pc = 0x001AC1D0u; return; } if (c.pc != 0x001ABC04u) [[unlikely]] return; }
L_001ABC04:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC10u);  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x001AC0E0u; return; } if (c.pc != 0x001ABC10u) [[unlikely]] return; }
L_001ABC10:
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABC28u) [[unlikely]] return; }
L_001ABC28:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001ABC98; } }
    set32(c.r[2], c.r[29].w[0] + 388u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABC48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABC48:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC58u);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x001ABC58u) [[unlikely]] return; }
L_001ABC58:
    set32(c.r[2], c.r[29].w[0] + 564u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABC70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[29].w[0] + 564u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABC70:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC80u);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x001ABC80u) [[unlikely]] return; }
L_001ABC80:
    set32(c.r[4], c.r[29].w[0] + 600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC90u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001ABC90u) [[unlikely]] return; }
L_001ABC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABFB4; } }
L_001ABC98:
    set32(c.r[4], c.r[20].w[0] + 280u);
    set32(c.r[2], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 648u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCD4u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x001ABCD4u) [[unlikely]] return; }
L_001ABCD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCE4u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x001ABCE4u) [[unlikely]] return; }
L_001ABCE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABD14; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ABD14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD14u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x001ABD14u) [[unlikely]] return; }
L_001ABD14:
    set32(c.r[4], c.r[29].w[0] + 696u);
    set32(c.r[5], c.r[29].w[0] + 648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD24u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x001ABD24u) [[unlikely]] return; }
L_001ABD24:
    set32(c.r[2], c.r[29].w[0] + 696u);
    c.f[20] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[18], c.r[18].w[0] - 2u);
    st8((c.r[20].w[0] + 172u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 388u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABD4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABD4C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD5Cu);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x001ABD5Cu) [[unlikely]] return; }
L_001ABD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABDBC; } }
L_001ABD64:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 592u));
    st8((c.r[29].w[0] + 624u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 596u)));
    st32((c.r[29].w[0] + 628u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 600u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABDA8; } }
    set32(c.r[5], c.r[29].w[0] + 601u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABDB0; } }
L_001ABDA8:
    set32(c.r[2], c.r[29].w[0] + 608u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001ABDB0:
    set32(c.r[4], c.r[29].w[0] + 632u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDBCu);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001ABDBCu) [[unlikely]] return; }
L_001ABDBC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 172u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABEB8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001ABE28; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 624u));
    st8((c.r[20].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    st32((c.r[20].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 632u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE14; } }
    set32(c.r[5], c.r[29].w[0] + 633u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABE1C; } }
L_001ABE14:
    set32(c.r[2], c.r[29].w[0] + 640u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_001ABE1C:
    set32(c.r[4], c.r[20].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE28u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001ABE28u) [[unlikely]] return; }
L_001ABE28:
    set32(c.r[2], ld32((c.r[20].w[0] + 176u)));
    st32((c.r[20].w[0] + 200u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABEB8; } }
L_001ABE38:
    set32(c.r[2], c.r[29].w[0] + 564u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[29].w[0] + 564u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABE50:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE60u);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x001ABE60u) [[unlikely]] return; }
L_001ABE60:
    set32(c.r[4], c.r[29].w[0] + 600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE70u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001ABE70u) [[unlikely]] return; }
L_001ABE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABFB4; } }
L_001ABE78:
    set32(c.r[2], c.r[29].w[0] + 564u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABE90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[29].w[0] + 564u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABE90:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEA0u);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x001ABEA0u) [[unlikely]] return; }
L_001ABEA0:
    set32(c.r[4], c.r[29].w[0] + 600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEB0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001ABEB0u) [[unlikely]] return; }
L_001ABEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABFB4; } }
L_001ABEB8:
    set32(c.r[2], c.r[29].w[0] + 564u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[29].w[0] + 564u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABED0:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEE0u);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x001ABEE0u) [[unlikely]] return; }
L_001ABEE0:
    set32(c.r[4], c.r[29].w[0] + 600u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEF0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001ABEF0u) [[unlikely]] return; }
L_001ABEF0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001ABEF4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 172u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABFB4; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB390u | kUnwind; return; } goto L_001AB390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABFB4; } }
L_001ABF10:
    set32(c.r[16], c.r[29].w[0] + 192u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF24u);  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x001AC370u; return; } if (c.pc != 0x001ABF24u) [[unlikely]] return; }
L_001ABF24:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF30u);  if (depth < kMaxDepth) unit_002B(c, 6u, depth + 1u); else { c.pc = 0x001AC1D0u; return; } if (c.pc != 0x001ABF30u) [[unlikely]] return; }
L_001ABF30:
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF3Cu);  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x001AC0E0u; return; } if (c.pc != 0x001ABF3Cu) [[unlikely]] return; }
L_001ABF3C:
    set32(c.r[2], c.r[20].w[0] + 280u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001ABF88; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABF70u) [[unlikely]] return; }
L_001ABF70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 196u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ABF88u) [[unlikely]] return; }
L_001ABF88:
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABFA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16544u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 3;
L_001ABFA0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABFB0u);  if (depth < kMaxDepth) unit_0014(c, 158u, depth + 1u); else { c.pc = 0x00151F10u; return; } if (c.pc != 0x001ABFB0u) [[unlikely]] return; }
L_001ABFB0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001ABFB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 276u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABF10u | kUnwind; return; } goto L_001ABF10; } }
    st32((c.r[20].w[0] + 164u), c.f[20]);
    set32(c.r[3], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[2], c.r[20].w[0] + 76u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 808u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABFECu);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x001ABFECu) [[unlikely]] return; }
L_001ABFEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
    [[clang::musttail]] return unit_002B(c, 1u, depth);
}

}
