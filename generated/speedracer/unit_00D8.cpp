#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D8[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0,
    19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153,
    0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0,
    0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0,
    185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    367, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00460000;
    case 2u: goto L_00460030;
    case 3u: goto L_004600C8;
    case 4u: goto L_004600D8;
    case 5u: goto L_00460164;
    case 6u: goto L_004602A0;
    case 7u: goto L_004602B4;
    case 8u: goto L_004602D0;
    case 9u: goto L_00460300;
    case 10u: goto L_00460380;
    case 11u: goto L_0046038C;
    case 12u: goto L_00460394;
    case 13u: goto L_004603A4;
    case 14u: goto L_004603B0;
    case 15u: goto L_004603C0;
    case 16u: goto L_004603DC;
    case 17u: goto L_004603E8;
    case 18u: goto L_004603F4;
    case 19u: goto L_00460400;
    case 20u: goto L_0046040C;
    case 21u: goto L_00460418;
    case 22u: goto L_0046043C;
    case 23u: goto L_0046044C;
    case 24u: goto L_00460468;
    case 25u: goto L_0046047C;
    case 26u: goto L_0046048C;
    case 27u: goto L_004604D0;
    case 28u: goto L_004604E4;
    case 29u: goto L_00460504;
    case 30u: goto L_00460514;
    case 31u: goto L_00460530;
    case 32u: goto L_00460544;
    case 33u: goto L_00460554;
    case 34u: goto L_00460560;
    case 35u: goto L_00460584;
    case 36u: goto L_00460594;
    case 37u: goto L_00460620;
    case 38u: goto L_00460630;
    case 39u: goto L_0046064C;
    case 40u: goto L_00460660;
    case 41u: goto L_00460670;
    case 42u: goto L_0046067C;
    case 43u: goto L_00460718;
    case 44u: goto L_00460728;
    case 45u: goto L_004607D0;
    case 46u: goto L_004607E0;
    case 47u: goto L_00460800;
    case 48u: goto L_00460880;
    case 49u: goto L_00460890;
    case 50u: goto L_00460920;
    case 51u: goto L_0046093C;
    case 52u: goto L_0046098C;
    case 53u: goto L_004609A8;
    case 54u: goto L_004609DC;
    case 55u: goto L_00460A04;
    case 56u: goto L_00460A1C;
    case 57u: goto L_00460A60;
    case 58u: goto L_00460A80;
    case 59u: goto L_00460A90;
    case 60u: goto L_00460AAC;
    case 61u: goto L_00460AC0;
    case 62u: goto L_00460AD0;
    case 63u: goto L_00460AF4;
    case 64u: goto L_00460B20;
    case 65u: goto L_00460B50;
    case 66u: goto L_00460B74;
    case 67u: goto L_00460B90;
    case 68u: goto L_00460BB0;
    case 69u: goto L_00460BC0;
    case 70u: goto L_00460BF0;
    case 71u: goto L_00460C00;
    case 72u: goto L_00460C30;
    case 73u: goto L_00460C38;
    case 74u: goto L_00460C4C;
    case 75u: goto L_00460C68;
    case 76u: goto L_00460C84;
    case 77u: goto L_00460CB0;
    case 78u: goto L_00460CC0;
    case 79u: goto L_00460CE0;
    case 80u: goto L_00460CF4;
    case 81u: goto L_00460D08;
    case 82u: goto L_00460D14;
    case 83u: goto L_00460D20;
    case 84u: goto L_00460D40;
    case 85u: goto L_00460D50;
    case 86u: goto L_00460DDC;
    case 87u: goto L_00460DEC;
    case 88u: goto L_00460E08;
    case 89u: goto L_00460E1C;
    case 90u: goto L_00460E2C;
    case 91u: goto L_00460E38;
    case 92u: goto L_00460F90;
    case 93u: goto L_00460FA0;
    case 94u: goto L_00461004;
    case 95u: goto L_00461018;
    case 96u: goto L_0046101C;
    case 97u: goto L_00461024;
    case 98u: goto L_00461040;
    case 99u: goto L_00461050;
    case 100u: goto L_00461060;
    case 101u: goto L_00461090;
    case 102u: goto L_004610B0;
    case 103u: goto L_004610CC;
    case 104u: goto L_004610FC;
    case 105u: goto L_0046110C;
    case 106u: goto L_0046112C;
    case 107u: goto L_004611A8;
    case 108u: goto L_004611D0;
    case 109u: goto L_00461220;
    case 110u: goto L_00461268;
    case 111u: goto L_004612FC;
    case 112u: goto L_0046130C;
    case 113u: goto L_00461318;
    case 114u: goto L_00461320;
    case 115u: goto L_0046132C;
    case 116u: goto L_00461340;
    case 117u: goto L_00461350;
    case 118u: goto L_00461360;
    case 119u: goto L_0046136C;
    case 120u: goto L_00461394;
    case 121u: goto L_004613C0;
    case 122u: goto L_004613D4;
    case 123u: goto L_004613F0;
    case 124u: goto L_00461434;
    case 125u: goto L_0046144C;
    case 126u: goto L_00461458;
    case 127u: goto L_00461494;
    case 128u: goto L_004614B0;
    case 129u: goto L_004614E0;
    case 130u: goto L_00461504;
    case 131u: goto L_00461520;
    case 132u: goto L_00461540;
    case 133u: goto L_00461550;
    case 134u: goto L_00461580;
    case 135u: goto L_00461590;
    case 136u: goto L_004615E0;
    case 137u: goto L_004615F8;
    case 138u: goto L_0046160C;
    case 139u: goto L_00461624;
    case 140u: goto L_00461644;
    case 141u: goto L_00461654;
    case 142u: goto L_00461670;
    case 143u: goto L_004616BC;
    case 144u: goto L_004616D0;
    case 145u: goto L_00461704;
    case 146u: goto L_00461754;
    case 147u: goto L_00461764;
    case 148u: goto L_00461778;
    case 149u: goto L_00461788;
    case 150u: goto L_00461798;
    case 151u: goto L_004617B0;
    case 152u: goto L_004617F4;
    case 153u: goto L_004617FC;
    case 154u: goto L_00461804;
    case 155u: goto L_0046180C;
    case 156u: goto L_0046181C;
    case 157u: goto L_00461840;
    case 158u: goto L_00461860;
    case 159u: goto L_0046187C;
    case 160u: goto L_004618A0;
    case 161u: goto L_004618B0;
    case 162u: goto L_004618C0;
    case 163u: goto L_004618D0;
    case 164u: goto L_004618E0;
    case 165u: goto L_004618F0;
    case 166u: goto L_00461900;
    case 167u: goto L_00461980;
    case 168u: goto L_004619AC;
    case 169u: goto L_004619E8;
    case 170u: goto L_00461A70;
    case 171u: goto L_00461A8C;
    case 172u: goto L_00461AA8;
    case 173u: goto L_00461AC4;
    case 174u: goto L_00461BD0;
    case 175u: goto L_00461BD8;
    case 176u: goto L_00461BE0;
    case 177u: goto L_00461BE8;
    case 178u: goto L_00461BF8;
    case 179u: goto L_00461C04;
    case 180u: goto L_00461C0C;
    case 181u: goto L_00461C1C;
    case 182u: goto L_00461C3C;
    case 183u: goto L_00461C64;
    case 184u: goto L_00461C74;
    case 185u: goto L_00461C80;
    case 186u: goto L_00461C8C;
    case 187u: goto L_00461C9C;
    case 188u: goto L_00461CA8;
    case 189u: goto L_00461CB4;
    case 190u: goto L_00461ECC;
    case 191u: goto L_00461FA0;
    case 192u: goto L_00461FE4;
    case 193u: goto L_0046200C;
    case 194u: goto L_00462030;
    case 195u: goto L_00462064;
    case 196u: goto L_00462070;
    case 197u: goto L_004620A4;
    case 198u: goto L_004620B0;
    case 199u: goto L_004620E8;
    case 200u: goto L_00462100;
    case 201u: goto L_00462120;
    case 202u: goto L_00462160;
    case 203u: goto L_00462190;
    case 204u: goto L_004621B0;
    case 205u: goto L_004621C0;
    case 206u: goto L_004621E8;
    case 207u: goto L_00462270;
    case 208u: goto L_004623B0;
    case 209u: goto L_004623C4;
    case 210u: goto L_004623F0;
    case 211u: goto L_00462410;
    case 212u: goto L_0046248C;
    case 213u: goto L_004624A4;
    case 214u: goto L_004624D4;
    case 215u: goto L_00462564;
    case 216u: goto L_004625E0;
    case 217u: goto L_00462600;
    case 218u: goto L_00462674;
    case 219u: goto L_0046269C;
    case 220u: goto L_004626B4;
    case 221u: goto L_004626DC;
    case 222u: goto L_004626E4;
    case 223u: goto L_00462710;
    case 224u: goto L_00462730;
    case 225u: goto L_00462784;
    case 226u: goto L_004627D4;
    case 227u: goto L_004627F8;
    case 228u: goto L_00462804;
    case 229u: goto L_0046281C;
    case 230u: goto L_00462848;
    case 231u: goto L_00462868;
    case 232u: goto L_004628BC;
    case 233u: goto L_00462920;
    case 234u: goto L_00462958;
    case 235u: goto L_00462A08;
    case 236u: goto L_00462A28;
    case 237u: goto L_00462A70;
    case 238u: goto L_00462AB4;
    case 239u: goto L_00462B34;
    case 240u: goto L_00462B6C;
    case 241u: goto L_00462BA4;
    case 242u: goto L_00462C08;
    case 243u: goto L_00462C40;
    case 244u: goto L_00462CB0;
    case 245u: goto L_00462CF4;
    case 246u: goto L_00462D60;
    case 247u: goto L_00462D98;
    case 248u: goto L_00462DCC;
    case 249u: goto L_00462E28;
    case 250u: goto L_00462E60;
    case 251u: goto L_00462ED0;
    case 252u: goto L_00462F10;
    case 253u: goto L_00462FA8;
    case 254u: goto L_00462FC0;
    case 255u: goto L_00462FD4;
    case 256u: goto L_00463020;
    case 257u: goto L_00463024;
    case 258u: goto L_00463044;
    case 259u: goto L_00463054;
    case 260u: goto L_004630C0;
    case 261u: goto L_004630F0;
    case 262u: goto L_00463130;
    case 263u: goto L_00463154;
    case 264u: goto L_00463160;
    case 265u: goto L_00463178;
    case 266u: goto L_00463190;
    case 267u: goto L_004631CC;
    case 268u: goto L_004631F0;
    case 269u: goto L_00463204;
    case 270u: goto L_00463218;
    case 271u: goto L_0046323C;
    case 272u: goto L_00463254;
    case 273u: goto L_0046326C;
    case 274u: goto L_00463290;
    case 275u: goto L_004632C0;
    case 276u: goto L_00463310;
    case 277u: goto L_00463334;
    case 278u: goto L_00463350;
    case 279u: goto L_00463374;
    case 280u: goto L_0046338C;
    case 281u: goto L_004633B0;
    case 282u: goto L_004633C0;
    case 283u: goto L_004633E4;
    case 284u: goto L_004633F0;
    case 285u: goto L_00463400;
    case 286u: goto L_00463460;
    case 287u: goto L_00463468;
    case 288u: goto L_004634B4;
    case 289u: goto L_004634F4;
    case 290u: goto L_00463540;
    case 291u: goto L_004635AC;
    case 292u: goto L_004635D4;
    case 293u: goto L_00463628;
    case 294u: goto L_00463654;
    case 295u: goto L_00463674;
    case 296u: goto L_004636B4;
    case 297u: goto L_004636F0;
    case 298u: goto L_00463790;
    case 299u: goto L_004637B0;
    case 300u: goto L_004637C0;
    case 301u: goto L_004637FC;
    case 302u: goto L_00463814;
    case 303u: goto L_00463830;
    case 304u: goto L_00463840;
    case 305u: goto L_00463878;
    case 306u: goto L_004638A4;
    case 307u: goto L_004638C0;
    case 308u: goto L_00463900;
    case 309u: goto L_00463910;
    case 310u: goto L_00463934;
    case 311u: goto L_0046394C;
    case 312u: goto L_00463968;
    case 313u: goto L_00463974;
    case 314u: goto L_00463990;
    case 315u: goto L_004639A8;
    case 316u: goto L_004639B4;
    case 317u: goto L_004639C0;
    case 318u: goto L_00463A10;
    case 319u: goto L_00463A2C;
    case 320u: goto L_00463A40;
    case 321u: goto L_00463A54;
    case 322u: goto L_00463A74;
    case 323u: goto L_00463A88;
    case 324u: goto L_00463A98;
    case 325u: goto L_00463AA8;
    case 326u: goto L_00463AC0;
    case 327u: goto L_00463AD0;
    case 328u: goto L_00463AD4;
    case 329u: goto L_00463ADC;
    case 330u: goto L_00463AEC;
    case 331u: goto L_00463B0C;
    case 332u: goto L_00463B18;
    case 333u: goto L_00463B34;
    case 334u: goto L_00463B48;
    case 335u: goto L_00463B54;
    case 336u: goto L_00463B80;
    case 337u: goto L_00463BC0;
    case 338u: goto L_00463BD8;
    case 339u: goto L_00463BF0;
    case 340u: goto L_00463C10;
    case 341u: goto L_00463C2C;
    case 342u: goto L_00463C50;
    case 343u: goto L_00463C60;
    case 344u: goto L_00463C70;
    case 345u: goto L_00463C80;
    case 346u: goto L_00463CC4;
    case 347u: goto L_00463CD0;
    case 348u: goto L_00463D0C;
    case 349u: goto L_00463D20;
    case 350u: goto L_00463D40;
    case 351u: goto L_00463D68;
    case 352u: goto L_00463DA0;
    case 353u: goto L_00463DF0;
    case 354u: goto L_00463E08;
    case 355u: goto L_00463E20;
    case 356u: goto L_00463E54;
    case 357u: goto L_00463E5C;
    case 358u: goto L_00463E8C;
    case 359u: goto L_00463EC0;
    case 360u: goto L_00463F08;
    case 361u: goto L_00463F1C;
    case 362u: goto L_00463F28;
    case 363u: goto L_00463F34;
    case 364u: goto L_00463F3C;
    case 365u: goto L_00463F4C;
    case 366u: goto L_00463F6C;
    case 367u: goto L_00463F80;
    case 368u: goto L_00463F8C;
    case 369u: goto L_00463F98;
    case 370u: goto L_00463FA0;
    case 371u: goto L_00463FB0;
    case 372u: goto L_00463FBC;
    case 373u: goto L_00463FC8;
    case 374u: goto L_00463FD0;
    case 375u: goto L_00463FE0;
    default: bad_entry(c, 0x00460000u); return;
    }
L_00460000:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0046002C; }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460028; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460028:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0046002C:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00460030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0046009C; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046006C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046006C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00460098; }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460094; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460094:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00460098:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0046009C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 20u), c.r[17].w[0]);  goto L_0046014C; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004600C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004600C8u) [[unlikely]] return; }
L_004600C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004600DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004600D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004600D8u) [[unlikely]] return; }
L_004600D8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004600DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00460100; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460140; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460140; } }
L_00460100:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00460128; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00460144; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460140; } }
L_00460128:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00460140; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00460140:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00460144:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 2;
L_0046014C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24460u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00460380; } }
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460164u) [[unlikely]] return; }
L_00460164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004601BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31000u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[2].w[0] + 31004u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 20;
L_004601BC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0046021C; }
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004601EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004601EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00460218; }
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460214; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460214:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00460218:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0046021C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_00460288; }
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460258; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460258:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00460284; }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460280; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460280:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00460284:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00460288:
    set32(c.r[4], 0u + 24u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004602A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004602A0u) [[unlikely]] return; }
L_004602A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));  goto L_004602D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004602B4u); set32(c.r[4], ld32((c.r[28].w[0] - 24460u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004602B4u) [[unlikely]] return; }
L_004602B4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004602D0u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0086(c, 15u, depth + 1u); else { c.pc = 0x003181E0u; return; } if (c.pc != 0x004602D0u) [[unlikely]] return; }
L_004602D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));
    c.budget -= 2;
L_004602D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00460378; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_00460304; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460300u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460300u) [[unlikely]] return; }
L_00460300:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_00460304:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0046032C; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0046036C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0046036C; } }
L_0046032C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00460354; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00460370; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0046036C; } }
L_00460354:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0046036C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0046036C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00460370:
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00460378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460380u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 384u, depth + 1u); else { c.pc = 0x0031B670u; return; } if (c.pc != 0x00460380u) [[unlikely]] return; }
L_00460380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046038Cu); set32(c.r[4], c.r[4].w[0] - 32352u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0046038Cu) [[unlikely]] return; }
L_0046038C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460394u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x00460394u) [[unlikely]] return; }
L_00460394:
    st32((c.r[28].w[0] - 24440u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004603A4u) [[unlikely]] return; }
L_004603A4:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004603B0u) [[unlikely]] return; }
L_004603B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00460420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004603C0u) [[unlikely]] return; }
L_004603C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603DCu); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004603DCu) [[unlikely]] return; }
L_004603DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603E8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004603E8u) [[unlikely]] return; }
L_004603E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004603F4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004603F4u) [[unlikely]] return; }
L_004603F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460400u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x00460400u) [[unlikely]] return; }
L_00460400:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046040Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x0046040Cu) [[unlikely]] return; }
L_0046040C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460418u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x00460418u) [[unlikely]] return; }
L_00460418:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00460420:
    set32(c.r[17], ld32((c.r[28].w[0] - 24436u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 24436u)));  goto L_00460490; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 24436u), c.r[16].w[0]);  goto L_0046046C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046043Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0046043Cu) [[unlikely]] return; }
L_0046043C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046044Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0046044Cu) [[unlikely]] return; }
L_0046044C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460468; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460468u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460468u) [[unlikely]] return; }
L_00460468:
    st32((c.r[28].w[0] - 24436u), c.r[16].w[0]);
    c.budget -= 1;
L_0046046C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0046048C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046047Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0046047Cu) [[unlikely]] return; }
L_0046047C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046048Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0046048Cu) [[unlikely]] return; }
L_0046048C:
    set32(c.r[6], ld32((c.r[28].w[0] - 24436u)));
    c.budget -= 1;
L_00460490:
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24436u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24436u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004604D0u); st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004604D0u) [[unlikely]] return; }
L_004604D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 24432u)));  goto L_004604EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004604E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004604E4u) [[unlikely]] return; }
L_004604E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 24432u)));
    c.budget -= 2;
L_004604EC:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 24440u)));  goto L_00460558; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 24432u), c.r[16].w[0]);  goto L_00460534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460504u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460504u) [[unlikely]] return; }
L_00460504:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460514u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460514u) [[unlikely]] return; }
L_00460514:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460530; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460530u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460530u) [[unlikely]] return; }
L_00460530:
    st32((c.r[28].w[0] - 24432u), c.r[16].w[0]);
    c.budget -= 1;
L_00460534:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00460554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460544u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460544u) [[unlikely]] return; }
L_00460544:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460554u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460554u) [[unlikely]] return; }
L_00460554:
    set32(c.r[4], ld32((c.r[28].w[0] - 24440u)));
    c.budget -= 1;
L_00460558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460560u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x00460560u) [[unlikely]] return; }
L_00460560:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[28].w[0] - 24432u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 8u)));  goto L_00460608; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460584u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460584u) [[unlikely]] return; }
L_00460584:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_00460598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460594u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00460594u) [[unlikely]] return; }
L_00460594:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_00460598:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004605BC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004605FC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004605FC; } }
L_004605BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004605E4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00460600; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004605FC; } }
L_004605E4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004605FC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004605FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00460600:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 2;
L_00460608:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[4], 0u + 96u);  goto L_00460674; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), c.r[17].w[0]);  goto L_00460650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460620u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460620u) [[unlikely]] return; }
L_00460620:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460630u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460630u) [[unlikely]] return; }
L_00460630:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046064C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046064Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046064Cu) [[unlikely]] return; }
L_0046064C:
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_00460650:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00460670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460660u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460660u) [[unlikely]] return; }
L_00460660:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460670u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460670u) [[unlikely]] return; }
L_00460670:
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_00460674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046067Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0046067Cu) [[unlikely]] return; }
L_0046067C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));  goto L_004606DC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31000u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[2].w[0] + 31004u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.budget -= 21;
L_004606DC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_004606F4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004606F4:
    st32((c.r[17].w[0] + 80u), 0u);
    set32(c.r[16], ld32((c.r[28].w[0] - 24432u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 20u), c.r[17].w[0]);  goto L_0046079C; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460718u) [[unlikely]] return; }
L_00460718:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0046072C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460728u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00460728u) [[unlikely]] return; }
L_00460728:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0046072C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00460750; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460790; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460790; } }
L_00460750:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00460778; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00460794; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460790; } }
L_00460778:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00460790; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00460790:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_00460794:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 2;
L_0046079C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24432u)));
    set32(c.r[2], 0u - 15u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 24432u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_00460854; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004607D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004607D0u) [[unlikely]] return; }
L_004607D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_004607E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004607E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004607E0u) [[unlikely]] return; }
L_004607E0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_004607E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00460808; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460848; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_00460800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460848; } }
L_00460808:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_00460830; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0046084C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460848; } }
L_00460830:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00460848; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00460848:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0046084C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_00460854:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 24432u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[2].w[0]));  goto L_00460904; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460880u) [[unlikely]] return; }
L_00460880:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_00460894; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460890u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00460890u) [[unlikely]] return; }
L_00460890:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_00460894:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004608B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004608F8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004608F8; } }
L_004608B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004608E0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_004608FC; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004608F8; } }
L_004608E0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004608F8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004608F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_004608FC:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_00460904:
    set32(c.r[3], 0u - 3841u);
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 1280ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460920u); st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00460920u) [[unlikely]] return; }
L_00460920:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046093Cu); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0046093Cu) [[unlikely]] return; }
L_0046093C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xC0200000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40600000u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[4], 0u + 48u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046098Cu); st32((c.r[2].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0046098Cu) [[unlikely]] return; }
L_0046098C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004609A8u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004609A8u) [[unlikely]] return; }
L_004609A8:
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], 0u + 8u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004609DCu); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x004609DCu) [[unlikely]] return; }
L_004609DC:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460A04u); st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00460A04u) [[unlikely]] return; }
L_00460A04:
    set32(c.r[3], 0u + 4u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460A1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460A1Cu) [[unlikely]] return; }
L_00460A1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 24444u)));  goto L_00460A68; }
    set32(c.r[2], 0u + 2u);
    set32(c.r[10], 0u + 1u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460A60u); st64((c.r[29].w[0] + 24u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0088(c, 90u, depth + 1u); else { c.pc = 0x00320B00u; return; } if (c.pc != 0x00460A60u) [[unlikely]] return; }
L_00460A60:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 24444u)));
    c.budget -= 2;
L_00460A68:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 24444u)));  goto L_00460AD4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[28].w[0] - 24444u), c.r[18].w[0]);  goto L_00460AB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460A80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460A80u) [[unlikely]] return; }
L_00460A80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460A90u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460A90u) [[unlikely]] return; }
L_00460A90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460AAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460AACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460AACu) [[unlikely]] return; }
L_00460AAC:
    st32((c.r[28].w[0] - 24444u), c.r[18].w[0]);
    c.budget -= 1;
L_00460AB0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00460AD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460AC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460AC0u) [[unlikely]] return; }
L_00460AC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460AD0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460AD0u) [[unlikely]] return; }
L_00460AD0:
    set32(c.r[5], ld32((c.r[28].w[0] - 24444u)));
    c.budget -= 1;
L_00460AD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460AF4u); st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00460AF4u) [[unlikely]] return; }
L_00460AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00460B20:
    set32(c.r[2], ld32((c.r[28].w[0] - 29940u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));  goto L_00460B34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00460B40; } }
L_00460B34:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00460B3C; }
L_00460B3C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00460B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460B74u); set32(c.r[4], c.r[4].w[0] - 32688u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00460B74u) [[unlikely]] return; }
L_00460B74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00460B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00460B9C; } }
L_00460B84:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460B90u); set32(c.r[4], c.r[4].w[0] - 32496u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00460B90u) [[unlikely]] return; }
L_00460B90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00460B98; }
L_00460B98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00460B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00460BB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00460BC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29940u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));  goto L_00460BD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460BE0; } }
L_00460BD4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00460BE0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00460BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00460BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29940u)));  c.pc = t; return; }
L_00460C00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C30u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00460C30u) [[unlikely]] return; }
L_00460C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C38u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x00460C38u) [[unlikely]] return; }
L_00460C38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0046101C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x00460C4Cu) [[unlikely]] return; }
L_00460C4C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00460C60; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00460C68; } }
L_00460C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C68u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00460C68u) [[unlikely]] return; }
L_00460C68:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460C84u); set32(c.r[5], c.r[29].w[0] + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460C84u) [[unlikely]] return; }
L_00460C84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00460CE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[18], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460CB0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460CB0u) [[unlikely]] return; }
L_00460CB0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460CC0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460CC0u) [[unlikely]] return; }
L_00460CC0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00460CE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460CE0u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00460CE0u) [[unlikely]] return; }
L_00460CE0:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00460CF8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460CF4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x00460CF4u) [[unlikely]] return; }
L_00460CF4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00460CF8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00461020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460D08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00460D08u) [[unlikely]] return; }
L_00460D08:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460D14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00460D14u) [[unlikely]] return; }
L_00460D14:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460D20u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x00460D20u) [[unlikely]] return; }
L_00460D20:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[20].d[0] != 0ull) { set32(c.r[19], ld32((c.r[20].w[0] + 8u)));  goto L_00460DC4; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460D40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460D40u) [[unlikely]] return; }
L_00460D40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_00460D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460D50u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00460D50u) [[unlikely]] return; }
L_00460D50:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_00460D54:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00460D78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460DB8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460DB8; } }
L_00460D78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_00460DA0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_00460DBC; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00460DB8; } }
L_00460DA0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00460DB8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00460DB8:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00460DBC:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 2;
L_00460DC4:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[17].d[0]) { set32(c.r[4], 0u + 96u);  goto L_00460E30; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[17].w[0]);  goto L_00460E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460DDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460DDCu) [[unlikely]] return; }
L_00460DDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460DECu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460DECu) [[unlikely]] return; }
L_00460DEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00460E08; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00460E08u) [[unlikely]] return; }
L_00460E08:
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_00460E0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00460E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00460E1Cu) [[unlikely]] return; }
L_00460E1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E2Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00460E2Cu) [[unlikely]] return; }
L_00460E2C:
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_00460E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460E38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460E38u) [[unlikely]] return; }
L_00460E38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 16u));  goto L_00460E98; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31000u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[3], 0u + 2u);
    c.f[0] = ld32((c.r[2].w[0] + 31004u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 21;
L_00460E98:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_00460EC4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00460EC4:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.f[3] = ld32((c.r[16].w[0] + 12u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[2] = ld32((c.r[16].w[0] + 8u));  if (t) { goto L_00460F18; } }
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460EF8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460EF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00460F18; }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460F14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460F14:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00460F18:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.f[1] = c.f[1] ^ fp::kSign;  if (t) { goto L_00460F68; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460F48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460F48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00460F68; }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00460F64; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00460F64:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00460F68:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 12u), c.f[4]);
    st32((c.r[17].w[0] + 16u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  goto L_00461014; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460F90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00460F90u) [[unlikely]] return; }
L_00460F90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_00460FA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00460FA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00460FA0u) [[unlikely]] return; }
L_00460FA0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_00460FA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00460FC8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00461008; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00461008; } }
L_00460FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_00460FF0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_0046100C; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00461008; } }
L_00460FF0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00461008; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 2;
L_00461004:
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00461008:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_0046100C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 2;
L_00461014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046101Cu); st32((c.r[2].w[0] + 20u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0046101Cu) [[unlikely]] return; }
    goto L_0046101C;
L_00461018:
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_0046101C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00461020:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 1;
L_00461024:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00461040:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 32u)));  c.pc = t; return; }
L_00461050:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { set32(c.r[4], c.r[2].w[0] + 24u);  goto L_00462030; }
L_00461060:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461090u); set32(c.r[5], c.r[2].w[0] + 132u);  if (depth < kMaxDepth) unit_00C6(c, 294u, depth + 1u); else { c.pc = 0x0041A0B0u; return; } if (c.pc != 0x00461090u) [[unlikely]] return; }
L_00461090:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004610A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004610B0; } }
L_004610A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004610B0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004610B0u) [[unlikely]] return; }
L_004610B0:
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004610CCu); set32(c.r[5], c.r[29].w[0] + 316u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004610CCu) [[unlikely]] return; }
L_004610CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0046112C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004610FCu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004610FCu) [[unlikely]] return; }
L_004610FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046110Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0046110Cu) [[unlikely]] return; }
L_0046110C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0046112C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046112Cu); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0046112Cu) [[unlikely]] return; }
L_0046112C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_004613C4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24476u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24472u)));  goto L_00461168; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] - 32728u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 32724u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 32720u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24476u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24472u)));
    c.budget -= 10;
L_00461168:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24468u)));  goto L_00461198; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 32712u), 0u);
    st32((c.r[2].w[0] - 32708u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 32704u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24472u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24468u)));
    c.budget -= 10;
L_00461198:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[18].w[0] + 112u);  goto L_004611BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004611A8u); c.f[12] = ld32((c.r[28].w[0] - 31824u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x004611A8u) [[unlikely]] return; }
L_004611A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 32696u), c.f[0]);
    st8((c.r[28].w[0] - 24468u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[18].w[0] + 112u);
    c.budget -= 5;
L_004611BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004611D0u); set32(c.r[6], c.r[6].w[0] - 32728u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004611D0u) [[unlikely]] return; }
L_004611D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[2].w[0] - 32728u));
    c.f[5] = ld32((c.r[29].w[0] + 304u));
    c.f[4] = ld32((c.r[29].w[0] + 308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[2].w[0] - 32724u));
    c.f[3] = ld32((c.r[29].w[0] + 312u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[2].w[0] - 32720u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 31820u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00461244; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 15184u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00461220:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461220u | kUnwind; return; } goto L_00461220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004613B4; } }
L_00461244:
    c.f[0] = ld32((c.r[2].w[0] - 32696u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004613B0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461268u); set32(c.r[6], c.r[6].w[0] - 32712u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00461268u) [[unlikely]] return; }
L_00461268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[7] = ld32((c.r[2].w[0] - 32728u));
    c.f[3] = ld32((c.r[29].w[0] + 288u));
    c.f[6] = ld32((c.r[3].w[0] - 32724u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[5] = ld32((c.r[2].w[0] - 32720u));
    c.f[4] = ld32((c.r[29].w[0] + 296u));
    c.facc = fp::mul(c.f[7], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = 0u;
    c.facc = fp::add(c.f[2], c.f[7]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[8], c.f[3]));
    c.facc = fp::add(c.f[2], c.f[6]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[8], c.f[1]));
    c.facc = fp::add(c.f[2], c.f[5]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[8], c.f[4]));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 272u), c.f[3]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[2]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[4], c.r[29].w[0] + 240u);
    fpu_rsqrt(c, 4u, c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004612FCu); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x004612FCu) [[unlikely]] return; }
L_004612FC:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046130Cu); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x0046130Cu) [[unlikely]] return; }
L_0046130C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461318u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x00461318u) [[unlikely]] return; }
L_00461318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461320u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x00461320u) [[unlikely]] return; }
L_00461320:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046132Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x0046132Cu) [[unlikely]] return; }
L_0046132C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461340u); set32(c.r[7], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_005F(c, 93u, depth + 1u); else { c.pc = 0x0027DBA0u; return; } if (c.pc != 0x00461340u) [[unlikely]] return; }
L_00461340:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461350u); set32(c.r[5], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_005F(c, 69u, depth + 1u); else { c.pc = 0x0027D020u; return; } if (c.pc != 0x00461350u) [[unlikely]] return; }
L_00461350:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461360u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x00461360u) [[unlikely]] return; }
L_00461360:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_0046136C:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046136Cu | kUnwind; return; } goto L_0046136C; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_00461394:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00461394u | kUnwind; return; } goto L_00461394; } }
L_004613B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004613B4:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004613C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004613C0u) [[unlikely]] return; }
L_004613C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_004613C4:
    c.f[12] = 0u;
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004613D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004613D4u) [[unlikely]] return; }
L_004613D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_004613F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00461494; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29824u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_00461438; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00461434u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00461434u) [[unlikely]] return; }
L_00461434:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_00461438:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00461450; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046144Cu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0046144Cu) [[unlikely]] return; }
L_0046144C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00461450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461458u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00461458u) [[unlikely]] return; }
L_00461458:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00461480; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29872u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0046147C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0046147C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00461480:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00461498; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00461494u) [[unlikely]] return; }
L_00461494:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00461498:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004614B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29948u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));  goto L_004614C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004614D0; } }
L_004614C4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_004614CC; }
L_004614CC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004614D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004614E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461504u); set32(c.r[4], c.r[4].w[0] - 32592u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00461504u) [[unlikely]] return; }
L_00461504:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00461514; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0046152C; } }
L_00461514:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461520u); set32(c.r[4], c.r[4].w[0] - 32496u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00461520u) [[unlikely]] return; }
L_00461520:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00461528; }
L_00461528:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046152C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00461540:
    set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00461550:
    set32(c.r[2], ld32((c.r[28].w[0] - 29948u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));  goto L_00461564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00461570; } }
L_00461564:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00461570; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00461570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00461580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29948u)));  c.pc = t; return; }
L_00461590:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004615C4; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004615C4:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00461600; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004615E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004615E0u) [[unlikely]] return; }
L_004615E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004615F8u); set32(c.r[6], c.r[6].w[0] - 32328u);  if (depth < kMaxDepth) unit_00C9(c, 105u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x004615F8u) [[unlikely]] return; }
L_004615F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00461628; } }
L_00461600:
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046160Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046160Cu) [[unlikely]] return; }
L_0046160C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461624u); set32(c.r[6], c.r[6].w[0] - 32309u);  if (depth < kMaxDepth) unit_00C9(c, 105u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x00461624u) [[unlikely]] return; }
L_00461624:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00461628:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00461648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461644u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C6(c, 292u, depth + 1u); else { c.pc = 0x0041A080u; return; } if (c.pc != 0x00461644u) [[unlikely]] return; }
L_00461644:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00461648:
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00461654u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00461654u) [[unlikely]] return; }
L_00461654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00461670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004616C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29872u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004616A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004616A4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004616BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004616BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004616BCu) [[unlikely]] return; }
L_004616BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004616C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004616D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004617A4; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461704u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00461704u) [[unlikely]] return; }
L_00461704:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00461814; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 26416u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 29872u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 29776u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_00461764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461754u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00461754u) [[unlikely]] return; }
L_00461754:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461764u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00461764u) [[unlikely]] return; }
L_00461764:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_00461788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461778u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00461778u) [[unlikely]] return; }
L_00461778:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461788u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00461788u) [[unlikely]] return; }
L_00461788:
    set32(c.r[2], 0u + 5u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461798u); st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D7(c, 193u, depth + 1u); else { c.pc = 0x0045E1F0u; return; } if (c.pc != 0x00461798u) [[unlikely]] return; }
L_00461798:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00461810; } }
L_004617A4:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004617B0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004617B0u) [[unlikely]] return; }
L_004617B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0046180C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29872u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29824u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004617F4u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004617F4u) [[unlikely]] return; }
L_004617F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004617FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0400u; return; } if (c.pc != 0x004617FCu) [[unlikely]] return; }
L_004617FC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00461804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046180Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0046180Cu) [[unlikely]] return; }
L_0046180C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00461810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00461814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046181Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 13u, depth + 1u); else { c.pc = 0x0045C330u; return; } if (c.pc != 0x0046181Cu) [[unlikely]] return; }
L_0046181C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00461840:
    set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0046184C; }
L_0046184C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00461860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046187Cu); set32(c.r[4], c.r[4].w[0] - 32496u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0046187Cu) [[unlikely]] return; }
L_0046187C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00461884; }
L_00461884:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004618A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004618B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004618C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));  c.pc = t; return; }
L_004618D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 32544u);  c.pc = t; return; }
L_004618E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 32448u);  c.pc = t; return; }
L_004618F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00461900:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 108u), c.f[31]);
    st32((c.r[29].w[0] + 104u), c.f[30]);
    st32((c.r[29].w[0] + 100u), c.f[29]);
    st32((c.r[29].w[0] + 96u), c.f[28]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[22]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 23;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00461964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00461984; } }
L_00461964:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 9u);  goto L_00461978; }
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00461978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461980u); set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_00FE(c, 380u, depth + 1u); else { c.pc = 0x004FAFB0u; return; } if (c.pc != 0x00461980u) [[unlikely]] return; }
L_00461980:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00461984:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 28u)));  goto L_00461994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00461F50; } }
L_00461994:
    c.f[12] = ld32((c.r[19].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004619ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x004619ACu) [[unlikely]] return; }
L_004619AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = ld32((c.r[19].w[0] + 32u));  if (t) { goto L_004619CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 4;
L_004619CC:
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[29].w[0] + 604u);
    set32(c.r[7], c.r[29].w[0] + 600u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004619E8u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x004619E8u) [[unlikely]] return; }
L_004619E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 604u)));
    c.f[26] = 0u;
    set32(c.r[4], ld32((c.r[29].w[0] + 600u)));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00461A20; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    st32((c.r[29].w[0] + 604u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 600u), c.r[3].w[0]);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
L_00461A20:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[2] = fp::sub(c.f[3], c.f[4]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_00461A68; }
    c.f[1] = fp::sub(c.f[20], c.f[3]);
    c.f[0] = fp::sub(c.f[4], c.f[3]);
    fpu_div(c, 26u, c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
L_00461A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461A70u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00461A70u) [[unlikely]] return; }
L_00461A70:
    set32(c.r[3], ld32((c.r[29].w[0] + 604u)));
    c.f[29] = ld32((c.r[2].w[0]));
    c.f[24] = ld32((c.r[2].w[0] + 4u));
    c.f[25] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461A8Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 138u, depth + 1u); else { c.pc = 0x0046E260u; return; } if (c.pc != 0x00461A8Cu) [[unlikely]] return; }
L_00461A8C:
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    c.f[21] = ld32((c.r[2].w[0]));
    c.f[22] = ld32((c.r[2].w[0] + 4u));
    c.f[23] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461AA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00461AA8u) [[unlikely]] return; }
L_00461AA8:
    set32(c.r[3], ld32((c.r[29].w[0] + 600u)));
    c.f[27] = ld32((c.r[2].w[0]));
    c.f[28] = ld32((c.r[2].w[0] + 4u));
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461AC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DB(c, 138u, depth + 1u); else { c.pc = 0x0046E260u; return; } if (c.pc != 0x00461AC4u) [[unlikely]] return; }
L_00461AC4:
    c.f[0] = fp::sub(c.f[27], c.f[29]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[3] = fp::add(c.f[29], c.f[0]);
    c.f[0] = fp::sub(c.f[28], c.f[24]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[2] = fp::add(c.f[24], c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[25]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[1] = fp::add(c.f[25], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    st32((c.r[29].w[0] + 588u), c.f[2]);
    c.f[2] = fp::add(c.f[21], c.f[0]);
    c.f[0] = fp::sub(c.f[5], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    st32((c.r[29].w[0] + 592u), c.f[1]);
    c.f[1] = fp::add(c.f[22], c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[23]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[0] = fp::add(c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 584u), c.f[3]);
    st32((c.r[29].w[0] + 552u), c.f[2]);
    st32((c.r[29].w[0] + 556u), c.f[1]);
    st32((c.r[29].w[0] + 560u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 36;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 568u), 0u);  goto L_00461B8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 560u));
    c.f[1] = ld32((c.r[29].w[0] + 556u));
    c.f[0] = ld32((c.r[29].w[0] + 552u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 576u), c.f[2]);
    st32((c.r[29].w[0] + 572u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 568u), c.f[0]);  if (t) { goto L_00461B94; } }
L_00461B8C:
    st32((c.r[29].w[0] + 572u), 0u);
    st32((c.r[29].w[0] + 576u), 0u);
    c.budget -= 2;
L_00461B94:
    c.f[3] = ld32((c.r[29].w[0] + 584u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 588u));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[4] = 0u;
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 592u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 536u), c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 540u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461BD0u); st32((c.r[29].w[0] + 544u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x00461BD0u) [[unlikely]] return; }
L_00461BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461BD8u); set32(c.r[4], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00461BD8u) [[unlikely]] return; }
L_00461BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461BE0u); set32(c.r[4], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00461BE0u) [[unlikely]] return; }
L_00461BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461BE8u); set32(c.r[4], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00461BE8u) [[unlikely]] return; }
L_00461BE8:
    set32(c.r[4], c.r[29].w[0] + 472u);
    set32(c.r[5], c.r[29].w[0] + 536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461BF8u); set32(c.r[6], c.r[29].w[0] + 584u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x00461BF8u) [[unlikely]] return; }
L_00461BF8:
    set32(c.r[4], c.r[29].w[0] + 520u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C04u); set32(c.r[5], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00461C04u) [[unlikely]] return; }
L_00461C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C0Cu); set32(c.r[4], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x00461C0Cu) [[unlikely]] return; }
L_00461C0C:
    c.f[20] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C1Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x00461C1Cu) [[unlikely]] return; }
L_00461C1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00461C44; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 520u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C3Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x00461C3Cu) [[unlikely]] return; }
L_00461C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 440u);  if (t) { goto L_00461C68; } }
L_00461C44:
    set32(c.r[4], c.r[29].w[0] + 520u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C64u);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x00461C64u) [[unlikely]] return; }
L_00461C64:
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 1;
L_00461C68:
    set32(c.r[5], c.r[29].w[0] + 568u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C74u); set32(c.r[6], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00461C74u) [[unlikely]] return; }
L_00461C74:
    set32(c.r[4], c.r[29].w[0] + 456u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C80u); set32(c.r[5], c.r[29].w[0] + 440u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00461C80u) [[unlikely]] return; }
L_00461C80:
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C8Cu); set32(c.r[5], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00461C8Cu) [[unlikely]] return; }
L_00461C8C:
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461C9Cu); set32(c.r[6], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x00461C9Cu) [[unlikely]] return; }
L_00461C9C:
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461CA8u); set32(c.r[5], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x00461CA8u) [[unlikely]] return; }
L_00461CA8:
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461CB4u); set32(c.r[5], c.r[29].w[0] + 424u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x00461CB4u) [[unlikely]] return; }
L_00461CB4:
    c.f[12] = ld32((c.r[29].w[0] + 384u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[16] = ld32((c.r[29].w[0] + 508u));
    st32((c.r[29].w[0] + 320u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[29].w[0] + 324u), 0u);
    st32((c.r[29].w[0] + 204u), c.f[12]);
    st32((c.r[29].w[0] + 328u), 0u);
    c.f[17] = ld32((c.r[29].w[0] + 504u));
    st32((c.r[29].w[0] + 284u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[29].w[0] + 300u), 0u);
    c.facc = fp::mul(c.f[16], c.f[1]);
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[15] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[12]));
    st32((c.r[29].w[0] + 200u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 204u));
    c.f[5] = ld32((c.r[29].w[0] + 356u));
    c.f[26] = 0u;
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[0]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[26], c.f[12]));
    c.f[4] = ld32((c.r[29].w[0] + 340u));
    c.facc = fp::mul(c.f[16], c.f[5]);
    c.f[3] = ld32((c.r[29].w[0] + 372u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[4]));
    c.f[2] = ld32((c.r[29].w[0] + 388u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[3]));
    c.f[30] = ld32((c.r[29].w[0] + 492u));
    c.f[31] = ld32((c.r[29].w[0] + 488u));
    c.f[9] = ld32((c.r[29].w[0] + 360u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[26], c.f[2]));
    c.f[19] = ld32((c.r[29].w[0] + 496u));
    c.f[8] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::mul(c.f[16], c.f[9]);
    c.f[7] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[8]));
    c.f[6] = ld32((c.r[29].w[0] + 392u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[7]));
    c.f[21] = ld32((c.r[29].w[0] + 364u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[26], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 348u));
    c.facc = fp::mul(c.f[16], c.f[21]);
    st32((c.r[29].w[0] + 276u), c.f[16]);
    c.f[11] = ld32((c.r[29].w[0] + 380u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[20]));
    c.f[28] = ld32((c.r[29].w[0] + 524u));
    c.f[29] = ld32((c.r[29].w[0] + 520u));
    c.f[10] = ld32((c.r[29].w[0] + 396u));
    c.f[27] = ld32((c.r[29].w[0] + 528u));
    st32((c.r[29].w[0] + 280u), c.f[15]);
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[11]));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[26], c.f[10]));
    c.f[24] = ld32((c.r[29].w[0] + 584u));
    c.f[23] = ld32((c.r[29].w[0] + 588u));
    c.f[22] = ld32((c.r[29].w[0] + 592u));
    c.f[16] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::mul(c.f[30], c.f[1]);
    st32((c.r[29].w[0] + 272u), c.f[17]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[16]));
    c.f[16] = ld32((c.r[29].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[19], c.f[0]));
    st32((c.r[29].w[0] + 292u), c.f[30]);
    c.f[16] = fp::add(c.facc, fp::mul(c.f[26], c.f[16]));
    c.facc = fp::mul(c.f[30], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[4]));
    c.facc = fp::add(c.facc, fp::mul(c.f[19], c.f[3]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[26], c.f[2]));
    c.facc = fp::mul(c.f[30], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[8]));
    c.facc = fp::add(c.facc, fp::mul(c.f[19], c.f[7]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[26], c.f[6]));
    c.facc = fp::mul(c.f[30], c.f[21]);
    c.facc = fp::add(c.facc, fp::mul(c.f[31], c.f[20]));
    st32((c.r[29].w[0] + 296u), c.f[19]);
    c.facc = fp::add(c.facc, fp::mul(c.f[19], c.f[11]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[26], c.f[10]));
    c.f[30] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::mul(c.f[28], c.f[1]);
    st32((c.r[29].w[0] + 288u), c.f[31]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[30]));
    c.f[30] = ld32((c.r[29].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[0]));
    st32((c.r[29].w[0] + 304u), c.f[29]);
    c.f[30] = fp::add(c.facc, fp::mul(c.f[26], c.f[30]));
    c.facc = fp::mul(c.f[28], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[4]));
    st32((c.r[29].w[0] + 308u), c.f[28]);
    st32((c.r[29].w[0] + 312u), c.f[27]);
    st32((c.r[29].w[0] + 320u), c.f[24]);
    st32((c.r[29].w[0] + 324u), c.f[23]);
    st32((c.r[29].w[0] + 328u), c.f[22]);
    st32((c.r[29].w[0]), c.f[30]);
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[3]));
    c.f[30] = fp::add(c.facc, fp::mul(c.f[26], c.f[2]));
    c.facc = fp::mul(c.f[28], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[8]));
    st32((c.r[29].w[0] + 8u), c.f[30]);
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[7]));
    c.f[30] = fp::add(c.facc, fp::mul(c.f[26], c.f[6]));
    c.facc = fp::mul(c.f[28], c.f[21]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[20]));
    c.facc = fp::add(c.facc, fp::mul(c.f[27], c.f[11]));
    c.f[26] = fp::add(c.facc, fp::mul(c.f[26], c.f[10]));
    c.facc = fp::mul(c.f[23], c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[29].w[0] + 16u), c.f[30]);
    c.f[25] = c.r[2].w[0];
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[1]));
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[0]));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.facc = fp::mul(c.f[23], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[4]));
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[3]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[25], c.f[2]));
    c.facc = fp::mul(c.f[23], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[8]));
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[7]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[25], c.f[6]));
    c.facc = fp::mul(c.f[23], c.f[21]);
    c.facc = fp::add(c.facc, fp::mul(c.f[24], c.f[20]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[11]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[25], c.f[10]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 134;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461ECCu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x00461ECCu) [[unlikely]] return; }
L_00461ECC:
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 33;
L_00461F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_00461FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00461FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00461FE4; } }
L_00461FC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 9u);  goto L_00461FDC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00461FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00461FE4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00FE(c, 380u, depth + 1u); else { c.pc = 0x004FAFB0u; return; } if (c.pc != 0x00461FE4u) [[unlikely]] return; }
L_00461FE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 28u)));  goto L_00461FF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00462010; } }
L_00461FF4:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046200Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x0046200Cu) [[unlikely]] return; }
L_0046200C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00462010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00462030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_0046204C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00462068; } }
L_0046204C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[4].w[0] + 9u);  goto L_0046205C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_0046205C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462064u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00FE(c, 380u, depth + 1u); else { c.pc = 0x004FAFB0u; return; } if (c.pc != 0x00462064u) [[unlikely]] return; }
L_00462064:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00462068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00462070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  goto L_0046208C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004620A8; } }
L_0046208C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[4].w[0] + 9u);  goto L_0046209C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_0046209C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004620A4u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00FE(c, 380u, depth + 1u); else { c.pc = 0x004FAFB0u; return; } if (c.pc != 0x004620A4u) [[unlikely]] return; }
L_004620A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004620A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004620B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00462100; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 29920u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004620E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004620E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004620E8u) [[unlikely]] return; }
L_004620E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00462104; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462100u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00462100u) [[unlikely]] return; }
L_00462100:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00462104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00462120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 29920u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462160u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00462160u) [[unlikely]] return; }
L_00462160:
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 9u);  goto L_00462188; }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00462188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462190u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00FE(c, 380u, depth + 1u); else { c.pc = 0x004FAFB0u; return; } if (c.pc != 0x00462190u) [[unlikely]] return; }
L_00462190:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004621B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 32272u);  c.pc = t; return; }
L_004621C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00462244; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_00462220; } }
L_004621E8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 28u)));  goto L_00462200; }
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 1;
L_00462200:
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  goto L_004622D0; }
    c.r[3].d[0] = c.r[8].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[8], c.r[3].w[0] + 8u);
    c.budget -= 4;
L_00462220:
    c.r[3].d[0] = c.r[8].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[8].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004621E8u | kUnwind; return; } goto L_004621E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004622CC; } }
L_00462244:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[29].w[0] + 12u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 8u));  if (t) { goto L_004622A8; } }
L_00462270:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[6].w[0] - 8u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[7].w[0] + 28u)));  goto L_00462288; }
    set32(c.r[6], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 1;
L_00462288:
    set32(c.r[7], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_004622CC; } }
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 4;
L_004622A8:
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[7].d[0] ^ c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462270u | kUnwind; return; } goto L_00462270; }
L_004622CC:
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_004622D0:
    c.r[3].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004622E8; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 32u);  if (t) { goto L_004623A0; } }
L_004622E8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_004622FC; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00462314; } }
L_004622FC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_00462314:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[28].w[0] - 32220u));
    c.f[0] = 0u;
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00462364; } }
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[3], c.r[4].w[0] >> 1);  goto L_00462348; }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00462360; } }
L_00462348:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00462360:
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 1;
L_00462364:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[3], c.r[4].w[0] >> 1);  goto L_00462378; }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00462390; } }
L_00462378:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00462390:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
L_004623A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004623B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004623C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 211u, depth + 1u); else { c.pc = 0x00462410u; return; } if (c.pc != 0x004623C4u) [[unlikely]] return; }
L_004623C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[2].w[0] - 4u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004623F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] - 4u));  c.pc = t; return; }
L_00462410:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00462438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046245C; } }
L_00462438:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00462454; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_00462458; } }
L_00462454:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_00462458:
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0046245C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  goto L_004624B0; }
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32220u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004624AC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046248Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x0046248Cu) [[unlikely]] return; }
L_0046248C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = ld32((c.r[28].w[0] - 32220u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004624A4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004624A4u) [[unlikely]] return; }
L_004624A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[20], c.f[0]);  if (t) { goto L_004625E4; } }
L_004624AC:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_004624B0:
    c.f[20] = 0u;
    set32(c.r[5], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0046253C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[8].w[0] + c.r[5].w[0]);  if (t) { goto L_00462518; } }
L_004624D4:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[6].w[0] + 24u)));  goto L_004624EC; }
    set32(c.r[5], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 1;
L_004624EC:
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[8].d[0] << 32;  goto L_0046250C; }
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_004625CC; } }
L_0046250C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[8], c.r[5].w[0] + 8u);
    c.budget -= 3;
L_00462518:
    c.r[5].d[0] = c.r[8].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] ^ c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = c.r[8].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004624D4u | kUnwind; return; } goto L_004624D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_004625D0; } }
L_0046253C:
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 76u), c.f[1]);
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 72u));  if (t) { goto L_004625A8; } }
L_00462564:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[6].w[0] - 8u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[7].w[0] + 24u)));  goto L_0046257C; }
    set32(c.r[6], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 1;
L_0046257C:
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] << 32;  goto L_0046259C; }
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_004625CC; } }
L_0046259C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 3;
L_004625A8:
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[7].d[0] = c.r[5].d[0] << 32;
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[7].d[0] ^ c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462564u | kUnwind; return; } goto L_00462564; }
L_004625CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004625D0:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004625E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004625E0u) [[unlikely]] return; }
L_004625E0:
    c.f[0] = fp::add(c.f[20], c.f[0]);
    c.budget -= 1;
L_004625E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00462600:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 156u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0046263C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00462660; } }
L_0046263C:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00462658; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_0046265C; } }
L_00462658:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_0046265C:
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00462660:
    st32((c.r[20].w[0] + 48u), 0u);
    set32(c.r[4], c.r[20].w[0] + 40u);
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462674u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x00462674u) [[unlikely]] return; }
L_00462674:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32564u));  goto L_004627C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046269Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x0046269Cu) [[unlikely]] return; }
L_0046269C:
    c.f[12] = ld32((c.r[28].w[0] - 31936u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004626B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004626B4u) [[unlikely]] return; }
L_004626B4:
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    set32(c.r[4], c.r[20].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 156u);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004626DCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004626DCu) [[unlikely]] return; }
L_004626DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 36u)));  if (t) { goto L_00462790; } }
L_004626E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 24u)));  goto L_004626FC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_004626FC:
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.f[20] = 0u;
    set32(c.r[21], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0046273C; } }
L_00462710:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0046273C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462730u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x00462730u) [[unlikely]] return; }
L_00462730:
    c.f[20] = fp::max(c.f[20], c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_0046273C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462710u | kUnwind; return; } goto L_00462710; }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[17].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 156u));  goto L_0046275C; }
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 3;
L_0046275C:
    set32(c.r[4], c.r[20].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 156u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462784u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00462784u) [[unlikely]] return; }
L_00462784:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 8u);
    c.budget -= 3;
L_00462790:
    set32(c.r[5], ld32((c.r[20].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004626E4u | kUnwind; return; } goto L_004626E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004628FC; } }
L_004627C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004627D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004627D4u) [[unlikely]] return; }
L_004627D4:
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[4], c.r[20].w[0] + 40u);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[7], c.r[29].w[0] + 156u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004627F8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004627F8u) [[unlikely]] return; }
L_004627F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    c.budget -= 3;
L_00462804:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_004628C8; } }
L_0046281C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[2].w[0] - 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 24u)));  goto L_00462834; }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_00462834:
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.f[20] = 0u;
    set32(c.r[21], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00462874; } }
L_00462848:
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00462874; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462868u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x00462868u) [[unlikely]] return; }
L_00462868:
    c.f[20] = fp::max(c.f[20], c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_00462874:
    c.r[2].d[0] = c.r[18].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462848u | kUnwind; return; } goto L_00462848; }
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[17].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 156u));  goto L_00462894; }
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 3;
L_00462894:
    set32(c.r[4], c.r[20].w[0] + 40u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 156u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004628BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004628BCu) [[unlikely]] return; }
L_004628BC:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.budget -= 3;
L_004628C8:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046281Cu | kUnwind; return; } goto L_0046281C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_004628FC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00462920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00462940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00462A60; } }
L_00462940:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_00462A40; } }
L_00462958:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[6].w[0])));  goto L_00462974; }
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 28u)));  if (t) { goto L_00462978; } }
L_00462974:
    set32(c.r[6], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 1;
L_00462978:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[2].d[0] = c.r[2].d[0] << 32;  goto L_00462A38; }
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[4].d[0] << 32;  goto L_004629AC; }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 2;
L_004629AC:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_004629C8; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 24u)));  if (t) { goto L_004629CC; } }
L_004629C8:
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_004629CC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[5].w[0] + 28u)));  if (t) { goto L_004629F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004629F0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004629F0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004629F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00462A18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462A08u);  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00462A08u) [[unlikely]] return; }
L_00462A08:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00462A60; } }
L_00462A18:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00462A60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462A28u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00462A28u) [[unlikely]] return; }
L_00462A28:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00462A60; } }
L_00462A38:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 2;
L_00462A40:
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[2].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462958u | kUnwind; return; } goto L_00462958; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00462A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00462A70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00462C54; } }
L_00462AB4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_00462ACC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00462ACC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_00462AD8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00462AD8:
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[20].d[0]) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_00462C4C; }
    set32(c.r[5], ld32((c.r[6].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00462B0C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00462B10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00462B2C; } }
L_00462B0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00462B10:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00462B2C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00462B2C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00462B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462B34u);  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00462B34u) [[unlikely]] return; }
L_00462B34:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_00462C48; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_00462B50; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00462B50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00462B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00462B64; } }
L_00462B60:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00462B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462B6Cu);  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00462B6Cu) [[unlikely]] return; }
L_00462B6C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 40u)));  goto L_00462BA8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462BA4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x00462BA4u) [[unlikely]] return; }
L_00462BA4:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_00462BA8:
    c.r[5].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_00462C84; }
    set32(c.r[3], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00462C80; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 328u)));
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], 0u + 1u);  goto L_00462C14; }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00462C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462C08u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x00462C08u) [[unlikely]] return; }
L_00462C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00462C80; } }
L_00462C10:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00462C14:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00462C80; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00462C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462C40u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x00462C40u) [[unlikely]] return; }
L_00462C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00462C80; } }
L_00462C48:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_00462C4C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 8u);
    c.budget -= 2;
L_00462C54:
    set32(c.r[5], ld32((c.r[21].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462AB4u | kUnwind; return; } goto L_00462AB4; }
L_00462C80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00462C84:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00462CB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00462E74; } }
L_00462CF4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_00462D0C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00462D0C:
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[20].d[0]) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_00462E6C; }
    set32(c.r[5], ld32((c.r[6].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00462D3C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00462D40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00462D58; } }
L_00462D3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00462D40:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00462D58; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00462D58; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00462D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462D60u);  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00462D60u) [[unlikely]] return; }
L_00462D60:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_00462E68; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_00462D7C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00462D7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00462D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_00462D90; } }
L_00462D8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00462D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462D98u);  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00462D98u) [[unlikely]] return; }
L_00462D98:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[4], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 40u)));  goto L_00462DD0; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462DCCu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x00462DCCu) [[unlikely]] return; }
L_00462DCC:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 1;
L_00462DD0:
    c.r[5].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_00462EA4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00462EA0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 328u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00462E34; }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00462E30; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462E28u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x00462E28u) [[unlikely]] return; }
L_00462E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00462EA0; } }
L_00462E30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00462E34:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00462EA0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00462EA0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462E60u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x00462E60u) [[unlikely]] return; }
L_00462E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00462EA0; } }
L_00462E68:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_00462E6C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 8u);
    c.budget -= 2;
L_00462E74:
    set32(c.r[5], ld32((c.r[21].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462CF4u | kUnwind; return; } goto L_00462CF4; }
L_00462EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00462EA4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00462ED0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  goto L_00462EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00462F04; } }
L_00462EE4:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_00462EFC; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_00462F00; } }
L_00462EFC:
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_00462F00:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00462F04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00462F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[29].w[0] + 28u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 32u)));  goto L_00462F8C; }
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 28u));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] - 8u);  if (t) { goto L_00462F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 24u)));  if (t) { goto L_00462F54; } }
L_00462F50:
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 1;
L_00462F54:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 4u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  goto L_00462F70; }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 28u)));  if (t) { goto L_00462F74; } }
L_00462F70:
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 1;
L_00462F74:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00462F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00462FAC; } }
L_00462F88:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_00462F8C:
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[7], c.r[29].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00462FA8u); set32(c.r[4], c.r[4].w[0] + 24u);  if (depth < kMaxDepth) unit_00D8(c, 285u, depth + 1u); else { c.pc = 0x00463400u; return; } if (c.pc != 0x00462FA8u) [[unlikely]] return; }
L_00462FA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00462FAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00462FC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00462FEC; } }
L_00462FD4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 8u);  goto L_00462FEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046300C; } }
L_00462FEC:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00462FD4u | kUnwind; return; } goto L_00462FD4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046300C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00463020:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.budget -= 1;
L_00463024:
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0046306C; } }
L_00463044:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463054u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 38u, depth + 1u); else { c.pc = 0x00464330u; return; } if (c.pc != 0x00463054u) [[unlikely]] return; }
L_00463054:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_00463064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0046309C; } }
L_00463064:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 8u);
    c.budget -= 2;
L_0046306C:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00463044u | kUnwind; return; } goto L_00463044; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046309C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004630C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00463178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 29936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004630F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D8(c, 299u, depth + 1u); else { c.pc = 0x004637B0u; return; } if (c.pc != 0x004630F0u) [[unlikely]] return; }
L_004630F0:
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_00463130; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 24u);  goto L_00463134; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00463130; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00463130; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463130; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463130u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00463130u) [[unlikely]] return; }
L_00463130:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_00463134:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00463158; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463154; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 300u, depth + 1u); else { c.pc = 0x004637C0u; return; } if (c.pc != 0x00463154u) [[unlikely]] return; }
L_00463154:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00463158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463160u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 304u, depth + 1u); else { c.pc = 0x00463840u; return; } if (c.pc != 0x00463160u) [[unlikely]] return; }
L_00463160:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0046317C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463178u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00463178u) [[unlikely]] return; }
L_00463178:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0046317C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00463190:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004631CCu); set32(c.r[7], c.r[7].w[0] - 32256u);  if (depth < kMaxDepth) unit_00D8(c, 307u, depth + 1u); else { c.pc = 0x004638C0u; return; } if (c.pc != 0x004631CCu) [[unlikely]] return; }
L_004631CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 29936u);
    set32(c.r[17], c.r[20].w[0] + 24u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00463218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004631F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004631F0u) [[unlikely]] return; }
L_004631F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00463208; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463204u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00463204u) [[unlikely]] return; }
L_00463204:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00463208:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_0046321C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463218u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00463218u) [[unlikely]] return; }
L_00463218:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0046321C:
    set32(c.r[16], c.r[20].w[0] + 40u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00463270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046323Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0046323Cu) [[unlikely]] return; }
L_0046323C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0046325C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463254u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00463254u) [[unlikely]] return; }
L_00463254:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0046325C:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[19].w[0]);  goto L_00463274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046326Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0046326Cu) [[unlikely]] return; }
L_0046326C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00463270:
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00463274:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00463290; } }
    set32(c.r[5], c.r[18].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463290u); set32(c.r[4], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_00D8(c, 275u, depth + 1u); else { c.pc = 0x004632C0u; return; } if (c.pc != 0x00463290u) [[unlikely]] return; }
L_00463290:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004632C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00463308; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 16;
L_00463308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00463310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29936u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0046332C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0046333C; } }
L_0046332C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463334u);  if (depth < kMaxDepth) unit_00D8(c, 339u, depth + 1u); else { c.pc = 0x00463BF0u; return; } if (c.pc != 0x00463334u) [[unlikely]] return; }
L_00463334:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0046333C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00463350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463374u); set32(c.r[4], c.r[4].w[0] - 32288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00463374u) [[unlikely]] return; }
L_00463374:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00463384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00463394; } }
L_00463384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046338Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 340u, depth + 1u); else { c.pc = 0x00463C10u; return; } if (c.pc != 0x0046338Cu) [[unlikely]] return; }
L_0046338C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00463394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004633B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004633C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29936u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004633DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004633E4; } }
L_004633DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004633E4u);  if (depth < kMaxDepth) unit_00D8(c, 343u, depth + 1u); else { c.pc = 0x00463C60u; return; } if (c.pc != 0x004633E4u) [[unlikely]] return; }
L_004633E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004633F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29936u)));  c.pc = t; return; }
L_00463400:
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
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00463790; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_0046346C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463460u); set32(c.r[5], c.r[5].w[0] - 32248u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00463460u) [[unlikely]] return; }
L_00463460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463468u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00463468u) [[unlikely]] return; }
L_00463468:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0046346C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_004635F8; }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_004634A0; } }
    set32(c.r[4], c.r[4].w[0] + 7u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 2;
L_004634A0:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[17].w[0] << 3);  goto L_00463534; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_004634E0; } }
L_004634B4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_004634D0; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
L_004634D0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_004634E0:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004634B4u | kUnwind; return; } goto L_004634B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00463520; } }
L_004634F4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_00463510; }
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
L_00463510:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00463520:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004634F4u | kUnwind; return; } goto L_004634F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004635CC; } }
L_00463534:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_0046356C; } }
L_00463540:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0046355C; }
    set32(c.r[4], ld32((c.r[8].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 4u));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
L_0046355C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0046356C:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463540u | kUnwind; return; } goto L_00463540; } }
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  goto L_004635C0; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004635A0; } }
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_004635A0:
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004635C0; } }
L_004635AC:
    set32(c.r[3], c.r[3].w[0] - 8u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_004635C0:
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004635ACu | kUnwind; return; } goto L_004635AC; }
L_004635CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004635E8; } }
L_004635D4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 5;
L_004635E8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004635D4u | kUnwind; return; } goto L_004635D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00463794; } }
L_004635F8:
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00463618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00463620; } }
L_00463618:
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00463620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00463640; } }
L_00463628:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_0046363C; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0046363C:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00463640:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00463628u | kUnwind; return; } goto L_00463628; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463654u); set32(c.r[4], c.r[20].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00463654u) [[unlikely]] return; }
L_00463654:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[20].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_004636A0; } }
L_00463674:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_00463690; }
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 4u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00463690:
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 4;
L_004636A0:
    c.r[5].d[0] = c.r[3].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00463674u | kUnwind; return; } goto L_00463674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004636E0; } }
L_004636B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_004636D0; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_004636D0:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.budget -= 4;
L_004636E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004636B4u | kUnwind; return; } goto L_004636B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_00463720; } }
L_004636F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0046370C; }
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 4u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_0046370C:
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00463720:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004636F0u | kUnwind; return; } goto L_004636F0; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00463778; }
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
L_00463778:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_00463790; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463790u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00463790u) [[unlikely]] return; }
L_00463790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00463794:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004637B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_004637C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00463814; } }
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00463800; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004637FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004637FCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004637FCu) [[unlikely]] return; }
L_004637FC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00463800:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00463818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463814u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00463814u) [[unlikely]] return; }
L_00463814:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00463818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00463830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 32176u);  c.pc = t; return; }
L_00463840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004638A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 29984u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00463878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00463878u) [[unlikely]] return; }
L_00463878:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00463890; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00463890:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004638A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004638A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004638A4u) [[unlikely]] return; }
L_004638A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004638A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004638C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29984u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463900u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00463900u) [[unlikely]] return; }
L_00463900:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463910u); set32(c.r[5], c.r[5].w[0] - 32144u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00463910u) [[unlikely]] return; }
L_00463910:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  goto L_00463940; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 9u);  goto L_0046392C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0046392C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463934u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00FE(c, 383u, depth + 1u); else { c.pc = 0x004FB050u; return; } if (c.pc != 0x00463934u) [[unlikely]] return; }
L_00463934:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00463978; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00463940:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046394Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00D8(c, 317u, depth + 1u); else { c.pc = 0x004639C0u; return; } if (c.pc != 0x0046394Cu) [[unlikely]] return; }
L_0046394C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00463960; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00463960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463968u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00463968u) [[unlikely]] return; }
L_00463968:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00463974u) [[unlikely]] return; }
L_00463974:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00463978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00463990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004639A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 317u, depth + 1u); else { c.pc = 0x004639C0u; return; } if (c.pc != 0x004639A8u) [[unlikely]] return; }
L_004639A8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004639B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004639B4u) [[unlikely]] return; }
L_004639B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004639C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24380u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00463A34; } }
    set32(c.r[2], c.r[29].w[0] + 152u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] - 1376u);
    set32(c.r[6], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 148u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463A10u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D9(c, 30u, depth + 1u); else { c.pc = 0x004641E0u; return; } if (c.pc != 0x00463A10u) [[unlikely]] return; }
L_00463A10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00460000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 1376u);
    set32(c.r[5], c.r[5].w[0] + 15232u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463A2Cu); set32(c.r[6], c.r[6].w[0] - 1400u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x00463A2Cu) [[unlikely]] return; }
L_00463A2C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24380u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00463A34:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463A40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00463A40u) [[unlikely]] return; }
L_00463A40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[5], c.r[5].w[0] - 1376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463A54u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00D8(c, 355u, depth + 1u); else { c.pc = 0x00463E20u; return; } if (c.pc != 0x00463A54u) [[unlikely]] return; }
L_00463A54:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 1364u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463A74u); c.r[19].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00463A74u) [[unlikely]] return; }
L_00463A74:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00463AA8; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463A88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00463A88u) [[unlikely]] return; }
L_00463A88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463A98u); set32(c.r[4], c.r[4].w[0] - 1376u);  if (depth < kMaxDepth) unit_00D8(c, 345u, depth + 1u); else { c.pc = 0x00463C80u; return; } if (c.pc != 0x00463A98u) [[unlikely]] return; }
L_00463A98:
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463AA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00463AA8u) [[unlikely]] return; }
L_00463AA8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00463AC8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463AC0u); set32(c.r[5], c.r[5].w[0] - 32144u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00463AC0u) [[unlikely]] return; }
L_00463AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00463B5C; } }
L_00463AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463AD0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00463AD0u) [[unlikely]] return; }
L_00463AD0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00463AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463ADCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00463ADCu) [[unlikely]] return; }
L_00463ADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463AECu); set32(c.r[4], c.r[4].w[0] - 1376u);  if (depth < kMaxDepth) unit_00D8(c, 345u, depth + 1u); else { c.pc = 0x00463C80u; return; } if (c.pc != 0x00463AECu) [[unlikely]] return; }
L_00463AEC:
    set32(c.r[7], ld32((c.r[2].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] - 32143u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463B0Cu); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00463B0Cu) [[unlikely]] return; }
L_00463B0C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463B18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00463B18u) [[unlikely]] return; }
L_00463B18:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00463B2C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00463B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463B34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 383u, depth + 1u); else { c.pc = 0x004FB050u; return; } if (c.pc != 0x00463B34u) [[unlikely]] return; }
L_00463B34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00463AD4u | kUnwind; return; } goto L_00463AD4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463B48u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00463B48u) [[unlikely]] return; }
L_00463B48:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00463B54u) [[unlikely]] return; }
L_00463B54:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_00463B5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00463B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00463BD8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00463BC4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00463BC0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00463BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463BC0u);  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00463BC0u) [[unlikely]] return; }
L_00463BC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00463BC4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00463BDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463BD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00463BD8u) [[unlikely]] return; }
L_00463BD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00463BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00463BF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_00463BFC; }
L_00463BFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00463C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463C2Cu); set32(c.r[4], c.r[4].w[0] - 32208u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00463C2Cu) [[unlikely]] return; }
L_00463C2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00463C34; }
L_00463C34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00463C50:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00463C60:
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00463C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));  c.pc = t; return; }
L_00463C80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], c.r[20].w[0] + 12u);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00463CF0; } }
L_00463CC4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463CD0u); c.r[21].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00463CD0u) [[unlikely]] return; }
L_00463CD0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[18].d[0] = c.r[17].d[0] + 0ull;  goto L_00463CE4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00463CF0; } }
L_00463CE4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00463CF0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00463CC4u | kUnwind; return; } goto L_00463CC4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_00463D18; }
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463D0Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00463D0Cu) [[unlikely]] return; }
L_00463D0C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[18].w[0] + 12u);  goto L_00463D6C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00463D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463D20u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00463D20u) [[unlikely]] return; }
L_00463D20:
    set32(c.r[2], ld32((c.r[28].w[0] - 29928u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463D40u); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D9(c, 31u, depth + 1u); else { c.pc = 0x00464210u; return; } if (c.pc != 0x00463D40u) [[unlikely]] return; }
L_00463D40:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00463D6C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463D68u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00463D68u) [[unlikely]] return; }
L_00463D68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00463D6C:
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
L_00463DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00463E08; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00463DF4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00463DF0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00463DF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00463DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463DF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00463DF0u) [[unlikely]] return; }
L_00463DF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00463DF4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00463E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463E08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00463E08u) [[unlikely]] return; }
L_00463E08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00463E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00463E20:
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
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_00463E6C; } }
L_00463E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463E5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00463E5Cu) [[unlikely]] return; }
L_00463E5C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_00463E6C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_00463E6C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00463E54u | kUnwind; return; } goto L_00463E54; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_00463E98; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463E8Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00463E8Cu) [[unlikely]] return; }
L_00463E8C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_00463E9C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_00463E98:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00463E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00463EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00463FE0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00463F50; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00463F0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F08u);  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00463F08u) [[unlikely]] return; }
L_00463F08:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00463F0C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00463F20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00463F1Cu) [[unlikely]] return; }
L_00463F1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00463F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F28u);  if (depth < kMaxDepth) unit_00D9(c, 29u, depth + 1u); else { c.pc = 0x004641D0u; return; } if (c.pc != 0x00463F28u) [[unlikely]] return; }
L_00463F28:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F34u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D9(c, 27u, depth + 1u); else { c.pc = 0x00464180u; return; } if (c.pc != 0x00463F34u) [[unlikely]] return; }
L_00463F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 26u, depth + 1u); else { c.pc = 0x00464170u; return; } if (c.pc != 0x00463F3Cu) [[unlikely]] return; }
L_00463F3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F4Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 24u, depth + 1u); else { c.pc = 0x00464150u; return; } if (c.pc != 0x00463F4Cu) [[unlikely]] return; }
L_00463F4C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00463F50:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00463FB4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00463F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00463F6Cu) [[unlikely]] return; }
L_00463F6C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00463F70:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00463F84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00463F80u) [[unlikely]] return; }
L_00463F80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00463F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F8Cu);  if (depth < kMaxDepth) unit_00D9(c, 29u, depth + 1u); else { c.pc = 0x004641D0u; return; } if (c.pc != 0x00463F8Cu) [[unlikely]] return; }
L_00463F8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463F98u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D9(c, 27u, depth + 1u); else { c.pc = 0x00464180u; return; } if (c.pc != 0x00463F98u) [[unlikely]] return; }
L_00463F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 26u, depth + 1u); else { c.pc = 0x00464170u; return; } if (c.pc != 0x00463FA0u) [[unlikely]] return; }
L_00463FA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FB0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 24u, depth + 1u); else { c.pc = 0x00464150u; return; } if (c.pc != 0x00463FB0u) [[unlikely]] return; }
L_00463FB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00463FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FBCu);  if (depth < kMaxDepth) unit_00D9(c, 29u, depth + 1u); else { c.pc = 0x004641D0u; return; } if (c.pc != 0x00463FBCu) [[unlikely]] return; }
L_00463FBC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D8(c, 352u, depth + 1u); else { c.pc = 0x00463DA0u; return; } if (c.pc != 0x00463FC8u) [[unlikely]] return; }
L_00463FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 26u, depth + 1u); else { c.pc = 0x00464170u; return; } if (c.pc != 0x00463FD0u) [[unlikely]] return; }
L_00463FD0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_00463FE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00463FE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00463FE0u) [[unlikely]] return; }
L_00463FE0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00463FE4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  [[clang::musttail]] return unit_00D9(c, 21u, depth); }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  [[clang::musttail]] return unit_00D9(c, 10u, depth); }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  [[clang::musttail]] return unit_00D9(c, 4u, depth); }
    [[clang::musttail]] return unit_00D9(c, 2u, depth);
}

}
