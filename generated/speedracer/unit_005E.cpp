#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005E[4096] = {
    1, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0,
    0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00278000;
    case 2u: goto L_00278004;
    case 3u: goto L_00278008;
    case 4u: goto L_00278010;
    case 5u: goto L_00278090;
    case 6u: goto L_002780F0;
    case 7u: goto L_00278124;
    case 8u: goto L_002781EC;
    case 9u: goto L_00278230;
    case 10u: goto L_00278410;
    case 11u: goto L_0027843C;
    case 12u: goto L_00278484;
    case 13u: goto L_00278498;
    case 14u: goto L_002784C0;
    case 15u: goto L_00278558;
    case 16u: goto L_002785A8;
    case 17u: goto L_00278660;
    case 18u: goto L_00278698;
    case 19u: goto L_002786D8;
    case 20u: goto L_002786E8;
    case 21u: goto L_00278704;
    case 22u: goto L_00278724;
    case 23u: goto L_00278740;
    case 24u: goto L_00278760;
    case 25u: goto L_00278770;
    case 26u: goto L_002787C0;
    case 27u: goto L_002787E0;
    case 28u: goto L_00278814;
    case 29u: goto L_00278840;
    case 30u: goto L_00278898;
    case 31u: goto L_002788A8;
    case 32u: goto L_002788C4;
    case 33u: goto L_002788E4;
    case 34u: goto L_00278900;
    case 35u: goto L_00278920;
    case 36u: goto L_00278930;
    case 37u: goto L_00278944;
    case 38u: goto L_00278950;
    case 39u: goto L_00278964;
    case 40u: goto L_00278980;
    case 41u: goto L_00278990;
    case 42u: goto L_002789A0;
    case 43u: goto L_002789B0;
    case 44u: goto L_002789D0;
    case 45u: goto L_002789F0;
    case 46u: goto L_00278A00;
    case 47u: goto L_00278A18;
    case 48u: goto L_00278A38;
    case 49u: goto L_00278A48;
    case 50u: goto L_00278A64;
    case 51u: goto L_00278A78;
    case 52u: goto L_00278A88;
    case 53u: goto L_00278A9C;
    case 54u: goto L_00278AC0;
    case 55u: goto L_00278AD4;
    case 56u: goto L_00278AF4;
    case 57u: goto L_00278B10;
    case 58u: goto L_00278B28;
    case 59u: goto L_00278B38;
    case 60u: goto L_00278B60;
    case 61u: goto L_00278B88;
    case 62u: goto L_00278B98;
    case 63u: goto L_00278BB4;
    case 64u: goto L_00278BD0;
    case 65u: goto L_00278BE0;
    case 66u: goto L_00278C00;
    case 67u: goto L_00278C24;
    case 68u: goto L_00278C30;
    case 69u: goto L_00278C60;
    case 70u: goto L_00278CE0;
    case 71u: goto L_00278D40;
    case 72u: goto L_00278DD4;
    case 73u: goto L_00278E24;
    case 74u: goto L_00278E50;
    case 75u: goto L_00278E84;
    case 76u: goto L_00278EA0;
    case 77u: goto L_00278F38;
    case 78u: goto L_00278F54;
    case 79u: goto L_00278F6C;
    case 80u: goto L_00278F88;
    case 81u: goto L_00278FB0;
    case 82u: goto L_00278FE4;
    case 83u: goto L_00278FF0;
    case 84u: goto L_0027902C;
    case 85u: goto L_00279098;
    case 86u: goto L_002790A8;
    case 87u: goto L_002790B4;
    case 88u: goto L_002790C0;
    case 89u: goto L_002790D0;
    case 90u: goto L_002790DC;
    case 91u: goto L_002790E8;
    case 92u: goto L_002790F8;
    case 93u: goto L_00279104;
    case 94u: goto L_00279120;
    case 95u: goto L_00279174;
    case 96u: goto L_00279180;
    case 97u: goto L_002791A8;
    case 98u: goto L_002791C0;
    case 99u: goto L_0027920C;
    case 100u: goto L_00279220;
    case 101u: goto L_0027923C;
    case 102u: goto L_00279288;
    case 103u: goto L_0027929C;
    case 104u: goto L_002792B0;
    case 105u: goto L_002792C4;
    case 106u: goto L_002792F0;
    case 107u: goto L_00279300;
    case 108u: goto L_0027931C;
    case 109u: goto L_00279328;
    case 110u: goto L_0027933C;
    case 111u: goto L_0027934C;
    case 112u: goto L_00279360;
    case 113u: goto L_00279370;
    case 114u: goto L_00279384;
    case 115u: goto L_00279394;
    case 116u: goto L_002793A8;
    case 117u: goto L_002793C0;
    case 118u: goto L_002793E4;
    case 119u: goto L_002794A4;
    case 120u: goto L_002794BC;
    case 121u: goto L_002794FC;
    case 122u: goto L_00279514;
    case 123u: goto L_00279554;
    case 124u: goto L_0027956C;
    case 125u: goto L_002795B0;
    case 126u: goto L_002795CC;
    case 127u: goto L_002795D8;
    case 128u: goto L_002795F0;
    case 129u: goto L_00279618;
    case 130u: goto L_00279624;
    case 131u: goto L_0027963C;
    case 132u: goto L_00279664;
    case 133u: goto L_00279670;
    case 134u: goto L_00279688;
    case 135u: goto L_002796B0;
    case 136u: goto L_002796D0;
    case 137u: goto L_002796E0;
    case 138u: goto L_002796F0;
    case 139u: goto L_0027971C;
    case 140u: goto L_00279728;
    case 141u: goto L_00279740;
    case 142u: goto L_00279774;
    case 143u: goto L_002797A0;
    case 144u: goto L_002797C8;
    case 145u: goto L_002797F0;
    case 146u: goto L_0027983C;
    case 147u: goto L_00279854;
    case 148u: goto L_00279888;
    case 149u: goto L_002798B4;
    case 150u: goto L_002798E4;
    case 151u: goto L_00279930;
    case 152u: goto L_00279948;
    case 153u: goto L_0027997C;
    case 154u: goto L_002799A8;
    case 155u: goto L_002799D8;
    case 156u: goto L_00279A40;
    case 157u: goto L_00279A58;
    case 158u: goto L_00279A68;
    case 159u: goto L_00279AC0;
    case 160u: goto L_00279B04;
    case 161u: goto L_00279B18;
    case 162u: goto L_00279B28;
    case 163u: goto L_00279B3C;
    case 164u: goto L_00279B50;
    case 165u: goto L_00279B70;
    case 166u: goto L_00279BA4;
    case 167u: goto L_00279BD4;
    case 168u: goto L_00279BFC;
    case 169u: goto L_00279C68;
    case 170u: goto L_00279CA0;
    case 171u: goto L_00279D0C;
    case 172u: goto L_00279D44;
    case 173u: goto L_00279D98;
    case 174u: goto L_00279DA8;
    case 175u: goto L_00279DBC;
    case 176u: goto L_00279DCC;
    case 177u: goto L_00279DE8;
    case 178u: goto L_00279E20;
    case 179u: goto L_00279E64;
    case 180u: goto L_00279E9C;
    case 181u: goto L_00279ED4;
    case 182u: goto L_00279F00;
    case 183u: goto L_00279F50;
    case 184u: goto L_00279FA0;
    case 185u: goto L_00279FF0;
    case 186u: goto L_0027A050;
    case 187u: goto L_0027A0A0;
    case 188u: goto L_0027A100;
    case 189u: goto L_0027A14C;
    case 190u: goto L_0027A174;
    case 191u: goto L_0027A1E0;
    case 192u: goto L_0027A22C;
    case 193u: goto L_0027A254;
    case 194u: goto L_0027A280;
    case 195u: goto L_0027A2AC;
    case 196u: goto L_0027A2B8;
    case 197u: goto L_0027A2D4;
    case 198u: goto L_0027A2F0;
    case 199u: goto L_0027A338;
    case 200u: goto L_0027A348;
    case 201u: goto L_0027A364;
    case 202u: goto L_0027A370;
    case 203u: goto L_0027A38C;
    case 204u: goto L_0027A3B0;
    case 205u: goto L_0027A3C0;
    case 206u: goto L_0027A3DC;
    case 207u: goto L_0027A3E8;
    case 208u: goto L_0027A3FC;
    case 209u: goto L_0027A408;
    case 210u: goto L_0027A424;
    case 211u: goto L_0027A440;
    case 212u: goto L_0027A45C;
    case 213u: goto L_0027A5B4;
    case 214u: goto L_0027A5E0;
    case 215u: goto L_0027A5FC;
    case 216u: goto L_0027A608;
    case 217u: goto L_0027A61C;
    case 218u: goto L_0027A630;
    case 219u: goto L_0027A64C;
    case 220u: goto L_0027A674;
    case 221u: goto L_0027A690;
    case 222u: goto L_0027A6A0;
    case 223u: goto L_0027A6C0;
    case 224u: goto L_0027A6CC;
    case 225u: goto L_0027A6D4;
    case 226u: goto L_0027A6F4;
    case 227u: goto L_0027A704;
    case 228u: goto L_0027A720;
    case 229u: goto L_0027A734;
    case 230u: goto L_0027A744;
    case 231u: goto L_0027A760;
    case 232u: goto L_0027A77C;
    case 233u: goto L_0027A78C;
    case 234u: goto L_0027A80C;
    case 235u: goto L_0027A81C;
    case 236u: goto L_0027A840;
    case 237u: goto L_0027A86C;
    case 238u: goto L_0027A87C;
    case 239u: goto L_0027A8FC;
    case 240u: goto L_0027A90C;
    case 241u: goto L_0027A928;
    case 242u: goto L_0027A970;
    case 243u: goto L_0027A980;
    case 244u: goto L_0027A99C;
    case 245u: goto L_0027A9B0;
    case 246u: goto L_0027A9C0;
    case 247u: goto L_0027AA00;
    case 248u: goto L_0027AAB4;
    case 249u: goto L_0027AB30;
    case 250u: goto L_0027ABCC;
    case 251u: goto L_0027AC28;
    case 252u: goto L_0027ACC4;
    case 253u: goto L_0027AD78;
    case 254u: goto L_0027ADE0;
    case 255u: goto L_0027AE38;
    case 256u: goto L_0027AE88;
    case 257u: goto L_0027AEE4;
    case 258u: goto L_0027AEF4;
    case 259u: goto L_0027AF10;
    case 260u: goto L_0027AF24;
    case 261u: goto L_0027AF34;
    case 262u: goto L_0027AF80;
    case 263u: goto L_0027AFD4;
    case 264u: goto L_0027B020;
    case 265u: goto L_0027B06C;
    case 266u: goto L_0027B0B0;
    case 267u: goto L_0027B1AC;
    case 268u: goto L_0027B20C;
    case 269u: goto L_0027B270;
    case 270u: goto L_0027B330;
    case 271u: goto L_0027B35C;
    case 272u: goto L_0027B378;
    case 273u: goto L_0027B398;
    case 274u: goto L_0027B3A8;
    case 275u: goto L_0027B3C4;
    case 276u: goto L_0027B3D8;
    case 277u: goto L_0027B3E8;
    case 278u: goto L_0027B414;
    case 279u: goto L_0027B424;
    case 280u: goto L_0027B440;
    case 281u: goto L_0027B470;
    case 282u: goto L_0027B48C;
    case 283u: goto L_0027B4A0;
    case 284u: goto L_0027B570;
    case 285u: goto L_0027B6C0;
    case 286u: goto L_0027B730;
    case 287u: goto L_0027B7A0;
    case 288u: goto L_0027B7E0;
    case 289u: goto L_0027B850;
    case 290u: goto L_0027B8C0;
    case 291u: goto L_0027B8D0;
    case 292u: goto L_0027B8E0;
    case 293u: goto L_0027B8FC;
    case 294u: goto L_0027B920;
    case 295u: goto L_0027B980;
    case 296u: goto L_0027B990;
    case 297u: goto L_0027B9C0;
    case 298u: goto L_0027B9DC;
    case 299u: goto L_0027BA58;
    case 300u: goto L_0027BA68;
    case 301u: goto L_0027BA90;
    case 302u: goto L_0027BAF8;
    case 303u: goto L_0027BB08;
    case 304u: goto L_0027BB24;
    case 305u: goto L_0027BB44;
    case 306u: goto L_0027BB60;
    case 307u: goto L_0027BB80;
    case 308u: goto L_0027BB90;
    case 309u: goto L_0027BBA4;
    case 310u: goto L_0027BBB0;
    case 311u: goto L_0027BBC4;
    case 312u: goto L_0027BBE0;
    case 313u: goto L_0027BBF0;
    case 314u: goto L_0027BC00;
    case 315u: goto L_0027BC10;
    case 316u: goto L_0027BC30;
    case 317u: goto L_0027BC50;
    case 318u: goto L_0027BC60;
    case 319u: goto L_0027BC78;
    case 320u: goto L_0027BC98;
    case 321u: goto L_0027BCA8;
    case 322u: goto L_0027BCC4;
    case 323u: goto L_0027BCD8;
    case 324u: goto L_0027BCE8;
    case 325u: goto L_0027BCFC;
    case 326u: goto L_0027BD20;
    case 327u: goto L_0027BD34;
    case 328u: goto L_0027BD54;
    case 329u: goto L_0027BD70;
    case 330u: goto L_0027BD88;
    case 331u: goto L_0027BD98;
    case 332u: goto L_0027BDC0;
    case 333u: goto L_0027BDE8;
    case 334u: goto L_0027BDF8;
    case 335u: goto L_0027BE14;
    case 336u: goto L_0027BE30;
    case 337u: goto L_0027BEB0;
    case 338u: goto L_0027BF10;
    case 339u: goto L_0027BF44;
    case 340u: goto L_0027BF90;
    case 341u: goto L_0027BFB0;
    case 342u: goto L_0027BFD4;
    case 343u: goto L_0027BFE0;
    default: bad_entry(c, 0x00278000u); return;
    }
L_00278000:
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_00278004:
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 1;
L_00278008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_00278044; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_00278100; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_00278044:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002780CC; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_00278078; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00278074; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002780CC; } }
L_00278074:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_00278078:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_002780C0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278090u) [[unlikely]] return; }
L_00278090:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_002780BC; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002780B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002780CC; } }
L_002780B8:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_002780BC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_002780C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002780CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_00278104; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00278400; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002780F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002780F0u) [[unlikely]] return; }
L_002780F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002783FC; } }
L_00278100:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_00278104:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002783FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278124u); set32(c.r[6], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278124u) [[unlikely]] return; }
L_00278124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002783FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  goto L_00278144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002781CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_00278144:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));  goto L_00278158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002781CC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 1;
L_00278158:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  goto L_002781A0; }
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (t) { goto L_0027817C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_00278188; }
L_0027817C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00278194; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_00278188:
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_00278194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_002781B4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_002781A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 5;
L_002781B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002781CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002781CC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002781CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002783FC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 72u)));  goto L_00278240; }
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002781ECu) [[unlikely]] return; }
L_002781EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_00278238; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.f[12] = 0u;
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 2u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278230u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0085(c, 314u, depth + 1u); else { c.pc = 0x00317860u; return; } if (c.pc != 0x00278230u) [[unlikely]] return; }
L_00278230:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_00278238:
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_00278240:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));  goto L_002783B0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));  goto L_0027835C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));  goto L_0027832C; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));  goto L_002782D8; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));  goto L_00278284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002783FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 1;
L_00278284:
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = ld32((c.r[4].w[0] + 4u));  if (t) { goto L_002782C4; } }
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002782A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002782A8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] ^ 1ull;  goto L_002782C4; }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_002782C0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002782C0:
    c.r[3].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 1;
L_002782C4:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[1]);  if (t) { goto L_002783FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 1;
L_002782D8:
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = ld32((c.r[4].w[0]));  if (t) { goto L_00278318; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002782F8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002782F8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = c.r[5].d[0] ^ 1ull;  goto L_00278318; }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_00278314; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278314:
    c.r[3].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 1;
L_00278318:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[2]);  if (t) { goto L_002783FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 1;
L_0027832C:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = ld32((c.r[29].w[0] + 60u));  if (t) { goto L_0027834C; } }
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0027834C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027834C:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[1]);  if (t) { goto L_002783FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 1;
L_0027835C:
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = ld32((c.r[4].w[0] + 16u));  if (t) { goto L_0027839C; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00278380; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278380:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_0027839C; }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00278398; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278398:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_0027839C:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.f[1]);  if (t) { goto L_002783FC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 1;
L_002783B0:
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = ld32((c.r[4].w[0] + 12u));  if (t) { goto L_002783F0; } }
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002783D0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002783D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_002783F0; }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002783EC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002783EC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_002783F0:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[2]);
    c.budget -= 3;
L_002783FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00278400:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00278410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[4].w[0] + 60u), c.r[16].w[0]);  if (t) { goto L_00278448; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027843Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0027843Cu) [[unlikely]] return; }
L_0027843C:
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00278644; } }
L_00278448:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 44u)));  goto L_00278468; }
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00278644; } }
L_00278464:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_00278468:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 44u)));  goto L_00278488; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278484u) [[unlikely]] return; }
L_00278484:
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_00278488:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld16((c.r[6].w[0] + 42u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[6].w[0] + 32u);  if (t) { goto L_00278540; } }
L_00278498:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00278540; }
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 68u), c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002784C0u) [[unlikely]] return; }
L_002784C0:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00278644; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00278534; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 36u)));  goto L_00278520; }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 68u)));  if (t) { goto L_00278504; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_0027850C; }
L_00278504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00278518; } }
L_0027850C:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00278518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00278534; } }
L_00278520:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 5;
L_00278534:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278644; } }
L_00278540:
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00278498u | kUnwind; return; } goto L_00278498; }
    set32(c.r[4], ld32((c.r[6].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00278628; } }
L_00278558:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00278588; }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_0027857C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278588; } }
L_0027857C:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00278588:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00278628; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002785A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002785A8u) [[unlikely]] return; }
L_002785A8:
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00278644; }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027861C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 36u)));  goto L_00278608; }
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 68u)));  if (t) { goto L_002785EC; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_002785F4; }
L_002785EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00278600; } }
L_002785F4:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00278600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0027861C; } }
L_00278608:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 5;
L_0027861C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278644; } }
L_00278628:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00278634; }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    c.budget -= 1;
L_00278634:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278558u | kUnwind; return; } goto L_00278558; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00278740; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5456u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00278698u) [[unlikely]] return; }
L_00278698:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { goto L_00278724; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 1344u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00278724; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 5104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00278704; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00278704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002786D8u) [[unlikely]] return; }
L_002786D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786E8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002786E8u) [[unlikely]] return; }
L_002786E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278704; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278704u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278704u) [[unlikely]] return; }
L_00278704:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00278728; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278724u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x00278724u) [[unlikely]] return; }
L_00278724:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00278728:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00278744; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278740u); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00278740u) [[unlikely]] return; }
L_00278740:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00278744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00278760:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_00278780; }
L_00278770:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002787E0; }
L_00278780:
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002787C0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002787C0u) [[unlikely]] return; }
L_002787C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002787E0:
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278814u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278814u) [[unlikely]] return; }
L_00278814:
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
L_00278840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00278900; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5632u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002788E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 5104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002788C4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002788C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278898u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00278898u) [[unlikely]] return; }
L_00278898:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002788A8u) [[unlikely]] return; }
L_002788A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002788C4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002788C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002788C4u) [[unlikely]] return; }
L_002788C4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002788E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788E4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x002788E4u) [[unlikely]] return; }
L_002788E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002788E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00278904; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278900u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00278900u) [[unlikely]] return; }
L_00278900:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00278904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00278920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14864u);  c.pc = t; return; }
L_00278930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278944u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 254u, depth + 1u); else { c.pc = 0x00272B50u; return; } if (c.pc != 0x00278944u) [[unlikely]] return; }
L_00278944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278950u); set32(c.r[4], ld32((c.r[2].w[0] + 14864u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00278950u) [[unlikely]] return; }
L_00278950:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278964u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00278964u) [[unlikely]] return; }
L_00278964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278980:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272BC0u | kUnwind; return; } [[clang::musttail]] return unit_005C(c, 259u, depth); }
L_00278990:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272C60u | kUnwind; return; } [[clang::musttail]] return unit_005C(c, 262u, depth); }
L_002789A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272CB0u | kUnwind; return; } [[clang::musttail]] return unit_005C(c, 265u, depth); }
L_002789B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789D0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 268u, depth + 1u); else { c.pc = 0x00272D10u; return; } if (c.pc != 0x002789D0u) [[unlikely]] return; }
L_002789D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00278AA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002789F0u) [[unlikely]] return; }
L_002789F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00278A00u) [[unlikely]] return; }
L_00278A00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_00278A20; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A18u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 297u, depth + 1u); else { c.pc = 0x0027B9C0u; return; } if (c.pc != 0x00278A18u) [[unlikely]] return; }
L_00278A18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_00278A20:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_00278A8C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  goto L_00278A68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00278A38u) [[unlikely]] return; }
L_00278A38:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A48u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00278A48u) [[unlikely]] return; }
L_00278A48:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278A64; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278A64u) [[unlikely]] return; }
L_00278A64:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_00278A68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00278A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00278A78u) [[unlikely]] return; }
L_00278A78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00278A88u) [[unlikely]] return; }
L_00278A88:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_00278A8C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278A9Cu) [[unlikely]] return; }
L_00278A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00278AA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00278AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AD4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272D50u; return; } if (c.pc != 0x00278AD4u) [[unlikely]] return; }
L_00278AD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00278AF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x00278AF4u) [[unlikely]] return; }
L_00278AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00278AF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00278B28u) [[unlikely]] return; }
L_00278B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x00278B38u) [[unlikely]] return; }
L_00278B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00278B44:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00278B88u) [[unlikely]] return; }
L_00278B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x00278B98u) [[unlikely]] return; }
L_00278B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00278BA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 281u, depth + 1u); else { c.pc = 0x00272E70u; return; } if (c.pc != 0x00278BB4u) [[unlikely]] return; }
L_00278BB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00278BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00278BE0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00278C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00278C14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00278C50; } }
L_00278C14:
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C24u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278C24u) [[unlikely]] return; }
L_00278C24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_00278C40; } }
L_00278C30:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00278C40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00278C4C; } }
L_00278C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278C30u | kUnwind; return; } goto L_00278C30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00278C4C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00278C50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00278C60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_00278C94; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_00278D50; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_00278C94:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00278D1C; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_00278CC8; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00278CC4; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278D1C; } }
L_00278CC4:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_00278CC8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_00278D10; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278CE0u) [[unlikely]] return; }
L_00278CE0:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_00278D0C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00278D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00278D1C; } }
L_00278D08:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_00278D0C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_00278D10:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00278D1C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_00278D54; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00278E44; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278D40u) [[unlikely]] return; }
L_00278D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278E40; } }
L_00278D50:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_00278D54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00278E40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14400u));
    c.f[1] = ld32((c.r[3].w[0] + 14404u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[2].w[0] + 14408u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 14416u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 14420u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14424u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[2].w[0] + 14428u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14432u));
    st32((c.r[29].w[0] + 60u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 30;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DD4u); set32(c.r[6], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278DD4u) [[unlikely]] return; }
L_00278DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278E40; } }
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_00278E04; } }
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_00278E04:
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[29].w[0] + 64u));  goto L_00278E28; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E24u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_002F(c, 166u, depth + 1u); else { c.pc = 0x001BE1F0u; return; } if (c.pc != 0x00278E24u) [[unlikely]] return; }
L_00278E24:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00278E28:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00278E40; } }
    c.f[0] = c.f[1] & fp::kAbs;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_00278E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00278E44:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00278E50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[7].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00278F60; } }
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00278E84u) [[unlikely]] return; }
L_00278E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00278F58; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 282u, depth + 1u); else { c.pc = 0x00242FE0u; return; } if (c.pc != 0x00278EA0u) [[unlikely]] return; }
L_00278EA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 4560u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14400u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[8].w[0] + 14404u));
    c.f[0] = ld32((c.r[2].w[0] + 14432u));
    st32((c.r[16].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 14408u));
    st32((c.r[16].w[0] + 56u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 14416u));
    st32((c.r[16].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14420u));
    st32((c.r[16].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 14424u));
    st32((c.r[16].w[0] + 72u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[16].w[0] + 76u), c.f[1]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 32;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_00278F58; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F38u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00278F38u) [[unlikely]] return; }
L_00278F38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10640u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F54u); set32(c.r[7], 0u + 160u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00278F54u) [[unlikely]] return; }
L_00278F54:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_00278F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00278F88; } }
L_00278F60:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00278F6Cu) [[unlikely]] return; }
L_00278F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278F88; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 48u, depth + 1u); else { c.pc = 0x00244AF0u; return; } if (c.pc != 0x00278F88u) [[unlikely]] return; }
L_00278F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00278FB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00278FD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027901C; } }
L_00278FD4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278FE4u) [[unlikely]] return; }
L_00278FE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14976u);  if (t) { goto L_00279000; } }
L_00278FF0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00279000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027900C; } }
L_00279000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278FF0u | kUnwind; return; } goto L_00278FF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027900C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027901C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027901C; } }
L_0027901C:
    set32(c.r[17], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027902Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0072(c, 209u, depth + 1u); else { c.pc = 0x002C96B0u; return; } if (c.pc != 0x0027902Cu) [[unlikely]] return; }
L_0027902C:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[4] = ld32((c.r[17].w[0] + 96u));
    c.f[5] = ld32((c.r[17].w[0] + 108u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    c.f[3] = ld32((c.r[17].w[0] + 100u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 96u));
    c.f[2] = ld32((c.r[17].w[0] + 104u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 52u), c.f[3]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[5]);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279098u); st32((c.r[29].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_0054(c, 107u, depth + 1u); else { c.pc = 0x00250BF0u; return; } if (c.pc != 0x00279098u) [[unlikely]] return; }
L_00279098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_002790B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790A8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 106u, depth + 1u); else { c.pc = 0x00250BE0u; return; } if (c.pc != 0x002790A8u) [[unlikely]] return; }
L_002790A8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 98u, depth + 1u); else { c.pc = 0x002791C0u; return; } if (c.pc != 0x002790B4u) [[unlikely]] return; }
L_002790B4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002790B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790C0u);  if (depth < kMaxDepth) unit_0054(c, 105u, depth + 1u); else { c.pc = 0x00250BC0u; return; } if (c.pc != 0x002790C0u) [[unlikely]] return; }
L_002790C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_002790E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790D0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 104u, depth + 1u); else { c.pc = 0x00250BB0u; return; } if (c.pc != 0x002790D0u) [[unlikely]] return; }
L_002790D0:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 96u, depth + 1u); else { c.pc = 0x00279180u; return; } if (c.pc != 0x002790DCu) [[unlikely]] return; }
L_002790DC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_002790E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790E8u);  if (depth < kMaxDepth) unit_0054(c, 109u, depth + 1u); else { c.pc = 0x00250C20u; return; } if (c.pc != 0x002790E8u) [[unlikely]] return; }
L_002790E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00279108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790F8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 108u, depth + 1u); else { c.pc = 0x00250C10u; return; } if (c.pc != 0x002790F8u) [[unlikely]] return; }
L_002790F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279104u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 94u, depth + 1u); else { c.pc = 0x00279120u; return; } if (c.pc != 0x00279104u) [[unlikely]] return; }
L_00279104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00279108:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00279120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[4].w[0] + 16u), c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 17;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00279178; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279174u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 186u, depth + 1u); else { c.pc = 0x0027A050u; return; } if (c.pc != 0x00279174u) [[unlikely]] return; }
L_00279174:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00279178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 48u), c.f[12]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002791AC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 184u, depth + 1u); else { c.pc = 0x00279FA0u; return; } if (c.pc != 0x002791A8u) [[unlikely]] return; }
L_002791A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002791AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002791C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 15;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00279210; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027920Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 188u, depth + 1u); else { c.pc = 0x0027A100u; return; } if (c.pc != 0x0027920Cu) [[unlikely]] return; }
L_0027920C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00279210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279220:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027923Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0072(c, 209u, depth + 1u); else { c.pc = 0x002C96B0u; return; } if (c.pc != 0x0027923Cu) [[unlikely]] return; }
L_0027923C:
    c.f[5] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[4], 0u + 80u);
    c.f[4] = ld32((c.r[16].w[0] + 96u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 32u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 36u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[29].w[0] + 40u), c.f[4]);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279288u); st32((c.r[29].w[0] + 64u), c.f[5]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00279288u) [[unlikely]] return; }
L_00279288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002792A0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027929Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005E(c, 292u, depth + 1u); else { c.pc = 0x0027B8E0u; return; } if (c.pc != 0x0027929Cu) [[unlikely]] return; }
L_0027929C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002792A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002792B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x002792C4u) [[unlikely]] return; }
L_002792C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 5632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002792F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14904u);  c.pc = t; return; }
L_00279300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027931Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x0027931Cu) [[unlikely]] return; }
L_0027931C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279328u); set32(c.r[4], ld32((c.r[2].w[0] + 14904u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00279328u) [[unlikely]] return; }
L_00279328:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027933Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027933Cu) [[unlikely]] return; }
L_0027933C:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027934Cu); set32(c.r[4], c.r[4].w[0] + 14912u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0027934Cu) [[unlikely]] return; }
L_0027934C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279360u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00279360u) [[unlikely]] return; }
L_00279360:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279370u); set32(c.r[4], c.r[4].w[0] + 14927u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00279370u) [[unlikely]] return; }
L_00279370:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279384u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00279384u) [[unlikely]] return; }
L_00279384:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279394u); set32(c.r[4], c.r[4].w[0] + 14942u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00279394u) [[unlikely]] return; }
L_00279394:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793A8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002793A8u) [[unlikely]] return; }
L_002793A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002793C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002793E4u) [[unlikely]] return; }
L_002793E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_002793F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00279590; } }
L_002793F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00279590; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00279480; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279480; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279480; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279480; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279480; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279480; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279480; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 52u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 52u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0027948C; }
L_00279480:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279590; } }
L_0027948C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002794CC; } }
L_002794A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002794BCu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002794BCu) [[unlikely]] return; }
L_002794BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002794CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00279590; } }
L_002794CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[17].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002794A4u | kUnwind; return; } goto L_002794A4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00279524; } }
L_002794FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279514u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279514u) [[unlikely]] return; }
L_00279514:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00279524; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00279590; } }
L_00279524:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[17].w[0] + 36u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002794FCu | kUnwind; return; } goto L_002794FC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13952u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0027957C; } }
L_00279554:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[18].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027956Cu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027956Cu) [[unlikely]] return; }
L_0027956C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0027957C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00279590; } }
L_0027957C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[17].w[0] + 52u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00279554u | kUnwind; return; } goto L_00279554; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00279590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002795B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002795CCu) [[unlikely]] return; }
L_002795CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795D8u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002795D8u) [[unlikely]] return; }
L_002795D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0027961C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795F0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x002795F0u) [[unlikely]] return; }
L_002795F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14144u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279618u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279618u) [[unlikely]] return; }
L_00279618:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0027961C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279624u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00279624u) [[unlikely]] return; }
L_00279624:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00279668; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027963Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x0027963Cu) [[unlikely]] return; }
L_0027963C:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14120u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279664u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279664u) [[unlikely]] return; }
L_00279664:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00279668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279670u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00279670u) [[unlikely]] return; }
L_00279670:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002796B4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279688u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x00279688u) [[unlikely]] return; }
L_00279688:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14096u);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002796B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002796B0u) [[unlikely]] return; }
L_002796B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002796B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002796D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_002796E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_002796F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027971Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0027971Cu) [[unlikely]] return; }
L_0027971C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279728u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00279728u) [[unlikely]] return; }
L_00279728:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00279834; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279740u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x00279740u) [[unlikely]] return; }
L_00279740:
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14972u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13280u);
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[18].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279774u) [[unlikely]] return; }
L_00279774:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 14864u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002797A0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002797A0u) [[unlikely]] return; }
L_002797A0:
    set32(c.r[20], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_002797C8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002797C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 169u, depth + 1u); else { c.pc = 0x00259580u; return; } if (c.pc != 0x002797C8u) [[unlikely]] return; }
L_002797C8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002797F0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002797F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002797F0u) [[unlikely]] return; }
L_002797F0:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_00279804; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[17].w[0] + 8u), c.r[18].w[0]);  goto L_00279814; }
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_00279804:
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279830; } }
L_00279814:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14972u);
    st32((c.r[17].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00279830:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00279834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027983Cu); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0027983Cu) [[unlikely]] return; }
L_0027983C:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00279928; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279854u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x00279854u) [[unlikely]] return; }
L_00279854:
    set32(c.r[7], ld32((c.r[29].w[0] + 116u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14966u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13256u);
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[18].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279888u) [[unlikely]] return; }
L_00279888:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 14840u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002798B4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002798B4u) [[unlikely]] return; }
L_002798B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_002798E4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002798E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002798E4u) [[unlikely]] return; }
L_002798E4:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_002798F8; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[17].w[0] + 24u), c.r[18].w[0]);  goto L_00279908; }
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_002798F8:
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279924; } }
L_00279908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14966u);
    st32((c.r[17].w[0] + 28u), c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00279924:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00279928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279930u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00279930u) [[unlikely]] return; }
L_00279930:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00279A1C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279948u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x00279948u) [[unlikely]] return; }
L_00279948:
    set32(c.r[7], ld32((c.r[29].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13232u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[16].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027997Cu); set32(c.r[5], ld32((c.r[29].w[0] + 124u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027997Cu) [[unlikely]] return; }
L_0027997C:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] + 14816u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002799A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002799A8u) [[unlikely]] return; }
L_002799A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_002799D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002799D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002799D8u) [[unlikely]] return; }
L_002799D8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 40u), 0u);  goto L_002799EC; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[17].w[0] + 40u), c.r[16].w[0]);  goto L_002799FC; }
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 1;
L_002799EC:
    st32((c.r[17].w[0] + 44u), 0u);
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), 0u);  if (t) { goto L_00279A18; } }
L_002799FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    st32((c.r[17].w[0] + 44u), c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00279A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00279A1C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00279A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00279A58u) [[unlikely]] return; }
L_00279A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00279AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00279A68u) [[unlikely]] return; }
L_00279A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5808u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_00279AA4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279AC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B04u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_006E(c, 432u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x00279B04u) [[unlikely]] return; }
L_00279B04:
    set32(c.r[16], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 156u), c.r[16].w[0]);  if (t) { goto L_00279B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00279B18u) [[unlikely]] return; }
L_00279B18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00279B28u) [[unlikely]] return; }
L_00279B28:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 152u), 0u);  goto L_00279B74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00279B3Cu) [[unlikely]] return; }
L_00279B3C:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B50u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00279B50u) [[unlikely]] return; }
L_00279B50:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279B70; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279B70u) [[unlikely]] return; }
L_00279B70:
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 1;
L_00279B74:
    st32((c.r[29].w[0] + 148u), 0u);
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[7].d[0] == 0ull) { set32(c.r[7], ld32((c.r[21].w[0] + 24u)));  goto L_00279C40; }
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], ld32((c.r[21].w[0] + 12u)));
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    set32(c.r[8], c.r[29].w[0] + 152u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BA4u); set32(c.r[9], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_004E(c, 271u, depth + 1u); else { c.pc = 0x0023ABD0u; return; } if (c.pc != 0x00279BA4u) [[unlikely]] return; }
L_00279BA4:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[20], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 16u)));  if (t) { goto L_00279BD4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BD4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 169u, depth + 1u); else { c.pc = 0x00259580u; return; } if (c.pc != 0x00279BD4u) [[unlikely]] return; }
L_00279BD4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00279BFC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BFCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279BFCu) [[unlikely]] return; }
L_00279BFC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_00279C10; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[16].w[0] + 8u), c.r[18].w[0]);  goto L_00279C20; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00279C10:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279C3C; } }
L_00279C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14972u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00279C3C:
    set32(c.r[7], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 1;
L_00279C40:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[7], ld32((c.r[21].w[0] + 40u)));  goto L_00279CE4; }
    set32(c.r[5], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], ld32((c.r[21].w[0] + 28u)));
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    set32(c.r[8], c.r[29].w[0] + 152u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C68u); set32(c.r[9], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_004E(c, 271u, depth + 1u); else { c.pc = 0x0023ABD0u; return; } if (c.pc != 0x00279C68u) [[unlikely]] return; }
L_00279C68:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 32u)));  if (t) { goto L_00279CA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279CA0u) [[unlikely]] return; }
L_00279CA0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_00279CB4; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), c.r[18].w[0]);  goto L_00279CC4; }
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_00279CB4:
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279CE0; } }
L_00279CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14966u);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00279CE0:
    set32(c.r[7], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_00279CE4:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 156u)));  goto L_00279D88; }
    set32(c.r[5], ld32((c.r[21].w[0] + 48u)));
    c.f[12] = c.f[21];
    set32(c.r[6], ld32((c.r[21].w[0] + 44u)));
    c.f[13] = c.f[20];
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 152u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D0Cu); set32(c.r[9], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_004E(c, 271u, depth + 1u); else { c.pc = 0x0023ABD0u; return; } if (c.pc != 0x00279D0Cu) [[unlikely]] return; }
L_00279D0C:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 48u)));  if (t) { goto L_00279D44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279D44u) [[unlikely]] return; }
L_00279D44:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), 0u);  goto L_00279D58; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[16].w[0] + 40u), c.r[18].w[0]);  goto L_00279D68; }
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_00279D58:
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_00279D84; } }
L_00279D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14960u);
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00279D84:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_00279D88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[22].w[0]), c.r[16].w[0]);  if (t) { goto L_00279DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00279D98u) [[unlikely]] return; }
L_00279D98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00279DA8u) [[unlikely]] return; }
L_00279DA8:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_00279DEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00279DBCu) [[unlikely]] return; }
L_00279DBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DCCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00279DCCu) [[unlikely]] return; }
L_00279DCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279DE8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279DE8u) [[unlikely]] return; }
L_00279DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00279DEC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00279E20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[21] = c.f[12];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[13];  if (t) { goto L_00279E6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E64u); set32(c.r[7], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_004E(c, 266u, depth + 1u); else { c.pc = 0x0023AA50u; return; } if (c.pc != 0x00279E64u) [[unlikely]] return; }
L_00279E64:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_00279E6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_00279EA8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 60u);
    set32(c.r[7], c.r[16].w[0] + 24u);
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E9Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_004E(c, 266u, depth + 1u); else { c.pc = 0x0023AA50u; return; } if (c.pc != 0x00279E9Cu) [[unlikely]] return; }
L_00279E9C:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
L_00279EA8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00279EE0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279ED4u); set32(c.r[7], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_004E(c, 266u, depth + 1u); else { c.pc = 0x0023AA50u; return; } if (c.pc != 0x00279ED4u) [[unlikely]] return; }
L_00279ED4:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_00279EE0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00279F00:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 40u), 0u);  goto L_00279F14; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[4].w[0] + 40u), c.r[6].w[0]);  goto L_00279F24; }
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 1;
L_00279F14:
    st32((c.r[4].w[0] + 44u), 0u);
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 48u), 0u);  if (t) { goto L_00279F40; } }
L_00279F24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00279F40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00279F50:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 24u), 0u);  goto L_00279F64; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[4].w[0] + 24u), c.r[6].w[0]);  goto L_00279F74; }
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 1;
L_00279F64:
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279F90; } }
L_00279F74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14966u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00279F90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00279FA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00279FF0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00279FF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00279FF0u) [[unlikely]] return; }
L_00279FF0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 40u), 0u);  goto L_0027A004; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[19].w[0] + 40u), c.r[17].w[0]);  goto L_0027A014; }
    st32((c.r[19].w[0] + 40u), 0u);
    c.budget -= 1;
L_0027A004:
    st32((c.r[19].w[0] + 44u), 0u);
    st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 48u), 0u);  if (t) { goto L_0027A030; } }
L_0027A014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14960u);
    st32((c.r[19].w[0] + 44u), c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0027A030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027A050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0027A0A0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A0A0u) [[unlikely]] return; }
L_0027A0A0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 24u), 0u);  goto L_0027A0B4; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[19].w[0] + 24u), c.r[17].w[0]);  goto L_0027A0C4; }
    st32((c.r[19].w[0] + 24u), 0u);
    c.budget -= 1;
L_0027A0B4:
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 32u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0027A0E0; } }
L_0027A0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14966u);
    st32((c.r[19].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 32u), c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0027A0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027A100:
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
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0027A14C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0027A14C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A14Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 169u, depth + 1u); else { c.pc = 0x00259580u; return; } if (c.pc != 0x0027A14Cu) [[unlikely]] return; }
L_0027A14C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027A174; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A174u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A174u) [[unlikely]] return; }
L_0027A174:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), 0u);  goto L_0027A188; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st32((c.r[20].w[0] + 8u), c.r[18].w[0]);  goto L_0027A198; }
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_0027A188:
    st32((c.r[20].w[0] + 12u), 0u);
    st32((c.r[20].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0027A1B4; } }
L_0027A198:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14972u);
    st32((c.r[20].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[20].w[0] + 16u), c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0027A1B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027A1E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027A2D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5808u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_0027A22C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027A22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A22Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 169u, depth + 1u); else { c.pc = 0x00259580u; return; } if (c.pc != 0x0027A22Cu) [[unlikely]] return; }
L_0027A22C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_0027A258; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A254u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A254u) [[unlikely]] return; }
L_0027A254:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0027A258:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  goto L_0027A284; }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A280u) [[unlikely]] return; }
L_0027A280:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_0027A284:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027A2B0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A2ACu) [[unlikely]] return; }
L_0027A2AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027A2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0027A2B8u) [[unlikely]] return; }
L_0027A2B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027A2D8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2D4u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027A2D4u) [[unlikely]] return; }
L_0027A2D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027A2D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027A2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027A38C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 5888u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0027A364; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0027A368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A338u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027A338u) [[unlikely]] return; }
L_0027A338:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A348u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027A348u) [[unlikely]] return; }
L_0027A348:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A364; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A364u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A364u) [[unlikely]] return; }
L_0027A364:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027A368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 274u, depth + 1u); else { c.pc = 0x002622E0u; return; } if (c.pc != 0x0027A370u) [[unlikely]] return; }
L_0027A370:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027A390; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A38Cu); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027A38Cu) [[unlikely]] return; }
L_0027A38C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027A390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027A3B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14976u);  c.pc = t; return; }
L_0027A3C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 253u, depth + 1u); else { c.pc = 0x00262040u; return; } if (c.pc != 0x0027A3DCu) [[unlikely]] return; }
L_0027A3DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3E8u); set32(c.r[4], ld32((c.r[2].w[0] + 14976u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0027A3E8u) [[unlikely]] return; }
L_0027A3E8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3FCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027A3FCu) [[unlikely]] return; }
L_0027A3FC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A408u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 102u, depth + 1u); else { c.pc = 0x00271080u; return; } if (c.pc != 0x0027A408u) [[unlikely]] return; }
L_0027A408:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0027A428; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A424u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A424u) [[unlikely]] return; }
L_0027A424:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0027A428:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027A440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A45Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00262090u; return; } if (c.pc != 0x0027A45Cu) [[unlikely]] return; }
L_0027A45C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 16u));  goto L_0027A46C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A5CC; } }
L_0027A46C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A480; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A4A0; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A4A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A4A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A4C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A4C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A540; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A4E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A500; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A500; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A520; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A520; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A540; } }
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A540; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A540:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0027A564; }
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027A560; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027A560:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0027A564:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0027A574; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A5CC; } }
L_0027A574:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027A588; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027A5CC; }
L_0027A588:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0027A59C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A5BC; } }
L_0027A59C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027A5CC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5B4u); set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A5B4u) [[unlikely]] return; }
L_0027A5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A5C8; } }
L_0027A5BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027A5CC; } }
L_0027A5C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027A5CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 258u, depth + 1u); else { c.pc = 0x002620A0u; return; } if (c.pc != 0x0027A5FCu) [[unlikely]] return; }
L_0027A5FC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A608u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 111u, depth + 1u); else { c.pc = 0x00271140u; return; } if (c.pc != 0x0027A608u) [[unlikely]] return; }
L_0027A608:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A61Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A61Cu) [[unlikely]] return; }
L_0027A61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A64Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 259u, depth + 1u); else { c.pc = 0x002620B0u; return; } if (c.pc != 0x0027A64Cu) [[unlikely]] return; }
L_0027A64C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0027A65C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A678; } }
L_0027A65C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027A678; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A674u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A674u) [[unlikely]] return; }
L_0027A674:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027A678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A690:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002620C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 260u, depth); }
L_0027A6A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6C0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 261u, depth + 1u); else { c.pc = 0x002620D0u; return; } if (c.pc != 0x0027A6C0u) [[unlikely]] return; }
L_0027A6C0:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 115u, depth + 1u); else { c.pc = 0x00271190u; return; } if (c.pc != 0x0027A6CCu) [[unlikely]] return; }
L_0027A6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0027A6D4u) [[unlikely]] return; }
L_0027A6D4:
    set32(c.r[17], ld32((c.r[18].w[0] + 64u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0027A748; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 64u), c.r[16].w[0]);  goto L_0027A724; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027A6F4u) [[unlikely]] return; }
L_0027A6F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A704u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027A704u) [[unlikely]] return; }
L_0027A704:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027A720; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A720u) [[unlikely]] return; }
L_0027A720:
    st32((c.r[18].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_0027A724:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027A744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A734u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027A734u) [[unlikely]] return; }
L_0027A734:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A744u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027A744u) [[unlikely]] return; }
L_0027A744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0027A748:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027A760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A77Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027A77Cu) [[unlikely]] return; }
L_0027A77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A78Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0027A78Cu) [[unlikely]] return; }
L_0027A78C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 5888u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14400u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[8].w[0] + 14404u));
    c.f[0] = ld32((c.r[2].w[0] + 14432u));
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 14408u));
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 14416u));
    st32((c.r[17].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14420u));
    st32((c.r[17].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 14424u));
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[17].w[0] + 44u), c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 30;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_0027A81C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A80Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027A80Cu) [[unlikely]] return; }
L_0027A80C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A81Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027A81Cu) [[unlikely]] return; }
L_0027A81C:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 3;
L_0027A828:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027A840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A86Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027A86Cu) [[unlikely]] return; }
L_0027A86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027A918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A87Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0027A87Cu) [[unlikely]] return; }
L_0027A87C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 5888u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14400u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[8].w[0] + 14404u));
    c.f[0] = ld32((c.r[2].w[0] + 14432u));
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 14408u));
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 14416u));
    st32((c.r[17].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14420u));
    st32((c.r[17].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 14424u));
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[17].w[0] + 44u), c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 30;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_0027A90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A8FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027A8FCu) [[unlikely]] return; }
L_0027A8FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A90Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027A90Cu) [[unlikely]] return; }
L_0027A90C:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 3;
L_0027A918:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A928u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x002620E0u; return; } if (c.pc != 0x0027A928u) [[unlikely]] return; }
L_0027A928:
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[17].w[0] + 16u), c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    ld128((c.r[19].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 14;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 68u)));  goto L_0027A9C4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 64u)));  goto L_0027A9A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A970u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027A970u) [[unlikely]] return; }
L_0027A970:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A980u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027A980u) [[unlikely]] return; }
L_0027A980:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A99C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A99Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027A99Cu) [[unlikely]] return; }
L_0027A99C:
    set32(c.r[16], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_0027A9A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_0027A9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027A9B0u) [[unlikely]] return; }
L_0027A9B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027A9C0u) [[unlikely]] return; }
L_0027A9C0:
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 1;
L_0027A9C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027AA00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 13;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0027AF5C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 14400u));
    set32(c.r[13], ld32((c.r[4].w[0] + 24u)));
    c.f[0] = ld32((c.r[5].w[0] + 14404u));
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[12], ld32((c.r[4].w[0] + 28u)));
    c.f[2] = ld32((c.r[3].w[0] + 14408u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 14420u));
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 14424u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[20] = ld32((c.r[3].w[0] + 14432u));
    c.budget -= 28;
    { const bool t = c.r[13].d[0] != 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_0027AAE0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 186u, depth + 1u); else { c.pc = 0x0027A050u; return; } if (c.pc != 0x0027AAB4u) [[unlikely]] return; }
L_0027AAB4:
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0027AC04; }
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_0027AC00; } }
L_0027AAE0:
    c.f[21] = ld32((c.r[12].w[0] + 4u));
    set32(c.r[5], 0u + 1u);
    c.f[22] = ld32((c.r[12].w[0] + 8u));
    c.f[23] = ld32((c.r[12].w[0] + 12u));
    c.budget -= 6;
    { const bool t = c.r[13].d[0] != c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0027AB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0027ABB4; } }
L_0027AB00:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[5].d[0]) { set32(c.r[14], 0u + 1u);  goto L_0027AB18; }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0027ABB4; } }
    set32(c.r[14], 0u + 1u);
    c.budget -= 1;
L_0027AB18:
    c.r[11].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[8].d[0] = c.r[14].d[0] + 0ull;
    c.r[7].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_0027AB98; } }
L_0027AB30:
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[10], c.r[12].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], c.r[10].w[0] + 4u);  if (t) { goto L_0027AB4C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AB4C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0027AB68; } }
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0027AB68; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AB68:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = c.r[5].d[0] ^ 1ull;  goto L_0027AB88; }
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0027AB84; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AB84:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 1;
L_0027AB88:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[14], c.r[14].w[0] + 1u);  goto L_0027AB98; }
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 2;
L_0027AB98:
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0027ABB4; } }
    c.r[5].d[0] = c.r[14].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { mmi::mult(c, 0, c.r[14].w[0], c.r[11].w[0]); c.r[9].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AB30u | kUnwind; return; } goto L_0027AB30; }
L_0027ABB4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 16u));  goto L_0027ABDC; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABCCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 186u, depth + 1u); else { c.pc = 0x0027A050u; return; } if (c.pc != 0x0027ABCCu) [[unlikely]] return; }
L_0027ABCC:
    st32((c.r[29].w[0] + 80u), c.f[21]);
    st32((c.r[29].w[0] + 84u), c.f[22]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[23]);  if (t) { goto L_0027AC00; } }
L_0027ABDC:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027AC00; } }
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 5;
L_0027AC00:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_0027AC04:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 20u));
    set32(c.r[14], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_0027AC5C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 188u, depth + 1u); else { c.pc = 0x0027A100u; return; } if (c.pc != 0x0027AC28u) [[unlikely]] return; }
L_0027AC28:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0027ADBC; }
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_0027ADB8; } }
L_0027AC5C:
    c.f[21] = ld32((c.r[14].w[0] + 16u));
    set32(c.r[7], 0u + 1u);
    c.f[22] = ld32((c.r[14].w[0] + 20u));
    c.f[23] = ld32((c.r[14].w[0] + 24u));
    c.f[24] = ld32((c.r[14].w[0] + 28u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[7].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0027AC8C; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[6].d[0]) { set32(c.r[6], 0u + 1u);  goto L_0027AC90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_0027AD60; } }
L_0027AC8C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0027AC90:
    c.budget -= 2;
    if (c.r[9].d[0] == c.r[6].d[0]) { set32(c.r[15], 0u + 1u);  goto L_0027ACA8; }
    set32(c.r[6], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_0027AD60; } }
    set32(c.r[15], 0u + 1u);
    c.budget -= 1;
L_0027ACA8:
    c.r[13].d[0] = c.r[8].d[0] & 255ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[10].d[0] = c.r[15].d[0] + 0ull;
    c.r[9].d[0] = c.r[15].d[0] + 0ull;
    c.r[8].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[15].d[0] + 0ull;  if (t) { goto L_0027AD44; } }
L_0027ACC4:
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[12], c.r[14].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[12].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[11], c.r[12].w[0] + 16u);  if (t) { goto L_0027ACE0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027ACE0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027ACFC; } }
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0027ACFC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027ACFC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027AD18; } }
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0027AD18; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AD18:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027AD34; } }
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0027AD34; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AD34:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[15], c.r[15].w[0] + 1u);  goto L_0027AD44; }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 2;
L_0027AD44:
    c.r[6].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027AD60; } }
    c.r[6].d[0] = c.r[15].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { mmi::mult(c, 0, c.r[15].w[0], c.r[13].w[0]); c.r[11].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ACC4u | kUnwind; return; } goto L_0027ACC4; }
L_0027AD60:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 36u));  goto L_0027AD8C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD78u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 188u, depth + 1u); else { c.pc = 0x0027A100u; return; } if (c.pc != 0x0027AD78u) [[unlikely]] return; }
L_0027AD78:
    st32((c.r[29].w[0] + 96u), c.f[21]);
    st32((c.r[29].w[0] + 100u), c.f[22]);
    st32((c.r[29].w[0] + 104u), c.f[23]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[24]);  if (t) { goto L_0027ADB8; } }
L_0027AD8C:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027ADB8; } }
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.budget -= 7;
L_0027ADB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_0027ADBC:
    set32(c.r[8], ld32((c.r[4].w[0] + 40u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 52u));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 48u)));  if (t) { goto L_0027ADFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 184u, depth + 1u); else { c.pc = 0x00279FA0u; return; } if (c.pc != 0x0027ADE0u) [[unlikely]] return; }
L_0027ADE0:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], ld32((c.r[17].w[0] + 64u)));  goto L_0027AEA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_0027AEA4; } }
L_0027ADFC:
    c.f[21] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[3].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0027AE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0027AE70; } }
L_0027AE14:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[5].d[0] & 255ull;  goto L_0027AE2C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0027AE70; } }
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_0027AE2C:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027AE54; } }
L_0027AE38:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0027AE54; }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0027AE54:
    c.r[3].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AE70; } }
    c.r[3].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[5].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AE38u | kUnwind; return; } goto L_0027AE38; }
L_0027AE70:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 48u));  goto L_0027AE90; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 184u, depth + 1u); else { c.pc = 0x00279FA0u; return; } if (c.pc != 0x0027AE88u) [[unlikely]] return; }
L_0027AE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[21];  if (t) { goto L_0027AEA4; } }
L_0027AE90:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027AEA4; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_0027AEA4:
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 1;
L_0027AEA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[2] = ld32((c.r[29].w[0] + 80u));  goto L_0027AF38; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AF34; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AF34; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027AF34; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0027AF14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AEE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027AEE4u) [[unlikely]] return; }
L_0027AEE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AEF4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027AEF4u) [[unlikely]] return; }
L_0027AEF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AF10; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AF10u) [[unlikely]] return; }
L_0027AF10:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AF14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_0027AF34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027AF24u) [[unlikely]] return; }
L_0027AF24:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF34u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027AF34u) [[unlikely]] return; }
L_0027AF34:
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0027AF38:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0] + 16u), c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    st32((c.r[17].w[0] + 48u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 9;
L_0027AF5C:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0027AF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027B050; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_0027B008; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_0027AFBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B0A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0027AFBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 16u));  goto L_0027AFE8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AFD4u) [[unlikely]] return; }
L_0027AFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AFE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B0A0; } }
L_0027AFE4:
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 1;
L_0027AFE8:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B0A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027B0A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0027B008:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 36u));  goto L_0027B034; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B020u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B020u) [[unlikely]] return; }
L_0027B020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B0A0; } }
L_0027B030:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 1;
L_0027B034:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B0A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B0A0; } }
L_0027B050:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 48u));  goto L_0027B080; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B06Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B06Cu) [[unlikely]] return; }
L_0027B06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B0A0; } }
L_0027B07C:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 1;
L_0027B080:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B0A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B0A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027B0A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B0B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0027B164; } }
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B11C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B11C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B13C; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B13C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B13C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0027B314; }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B15C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B310; } }
L_0027B164:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0027B188; }
    set32(c.r[6], ld32((c.r[2].w[0] + 32u)));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 36u));
    set32(c.r[5], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_0027B194; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B188:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0027B194:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  goto L_0027B1C8; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[8], c.r[17].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B1ACu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_005B(c, 374u, depth + 1u); else { c.pc = 0x0026FF10u; return; } if (c.pc != 0x0027B1ACu) [[unlikely]] return; }
L_0027B1AC:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 7;
L_0027B1C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0027B1E8; }
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0027B1F4; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B1E8:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0027B1F4:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 64u)));  goto L_0027B230; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[8], c.r[17].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B20Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_005C(c, 245u, depth + 1u); else { c.pc = 0x002728C0u; return; } if (c.pc != 0x0027B20Cu) [[unlikely]] return; }
L_0027B20C:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[17].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 9;
L_0027B230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0027B250; }
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 52u));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 40u)));  if (t) { goto L_0027B25C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B250:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0027B25C:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.f[3] = ld32((c.r[17].w[0] + 16u));  goto L_0027B278; }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B270u); set32(c.r[7], c.r[17].w[0] + 76u);  if (depth < kMaxDepth) unit_0057(c, 258u, depth + 1u); else { c.pc = 0x0025DF30u; return; } if (c.pc != 0x0027B270u) [[unlikely]] return; }
L_0027B270:
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 2;
L_0027B278:
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    ld128((c.r[17].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[16].w[0] + 16u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B2B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B2D4; } }
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B2D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B2D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0027B2F8; }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B2F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B2F4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0027B2F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.f[20]);  goto L_0027B30C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B310; } }
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 1;
L_0027B30C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027B310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0027B314:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027B330:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B35Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 223u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x0027B35Cu) [[unlikely]] return; }
L_0027B35C:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027B440; } }
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B378u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_005E(c, 159u, depth + 1u); else { c.pc = 0x00279AC0u; return; } if (c.pc != 0x0027B378u) [[unlikely]] return; }
L_0027B378:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { st32((c.r[17].w[0] + 72u), 0u);  goto L_0027B3EC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  goto L_0027B3C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B398u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027B398u) [[unlikely]] return; }
L_0027B398:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027B3A8u) [[unlikely]] return; }
L_0027B3A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B3C4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B3C4u) [[unlikely]] return; }
L_0027B3C4:
    st32((c.r[17].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_0027B3C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027B3E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027B3D8u) [[unlikely]] return; }
L_0027B3D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027B3E8u) [[unlikely]] return; }
L_0027B3E8:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_0027B3EC:
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 8;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027B444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B414u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027B414u) [[unlikely]] return; }
L_0027B414:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B424u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027B424u) [[unlikely]] return; }
L_0027B424:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B440; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B440u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B440u) [[unlikely]] return; }
L_0027B440:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027B444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027B470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0027B490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B48Cu);  if (depth < kMaxDepth) unit_005E(c, 178u, depth + 1u); else { c.pc = 0x00279E20u; return; } if (c.pc != 0x0027B48Cu) [[unlikely]] return; }
L_0027B48C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027B490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027B4A0:
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0027B4CC; } }
    c.r[9].d[0] = ld8((c.r[3].w[0] + 36u));
    set32(c.r[8], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[3].w[0] + 24u)));  if (t) { goto L_0027B4D8; } }
L_0027B4CC:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0027B4D8:
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 64u)));  goto L_0027B528; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[7], c.r[10].w[0] - 1u);  goto L_0027B4FC; }
    st32((c.r[5].w[0]), c.f[1]);
    set32(c.r[7], c.r[10].w[0] - 1u);
    c.budget -= 2;
L_0027B4FC:
    c.r[3].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0027B524; }
    st32((c.r[6].w[0]), c.f[1]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0027B524:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_0027B528:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[10].d[0] = 0ull + 0ull;  goto L_0027B544; }
    set32(c.r[10], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 16u)));
    c.r[9].d[0] = ld8((c.r[3].w[0] + 20u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_0027B550; } }
L_0027B544:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0027B550:
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 64u)));  goto L_0027B630; }
    set32(c.r[8], 0u + 4u);
    c.budget -= 3;
    if (c.r[11].d[0] != c.r[8].d[0]) { c.f[1] = ld32((c.r[3].w[0]));  goto L_0027B5EC; }
    c.r[12].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[11].d[0] = c.r[12].d[0] & 255ull;
    c.budget -= 3;
L_0027B570:
    set32(c.r[8], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[8].d[0] == 0ull) { set32(c.r[8], c.r[12].w[0] + 1u);  goto L_0027B5D4; }
    set32(c.r[10], ld32((c.r[10].w[0] + 60u)));
    set32(c.r[7], c.r[3].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[10].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[7].d[0] = ld8((c.r[7].w[0] + 56u));  if (t) { goto L_0027B5A4; } }
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 1;
L_0027B5A4:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[7].d[0] = c.r[9].d[0] + 0ull;  goto L_0027B5D0; }
    st32((c.r[6].w[0]), c.f[1]);
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 2;
L_0027B5D0:
    set32(c.r[8], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_0027B5D4:
    c.r[12].d[0] = c.r[8].d[0] & 255ull;
    c.r[8].d[0] = c.r[12].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[8].d[0] != 0ull) { c.r[11].d[0] = c.r[12].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B570u | kUnwind; return; } goto L_0027B570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B62C; } }
L_0027B5EC:
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[8], c.r[10].w[0] - 1u);  goto L_0027B604; }
    st32((c.r[5].w[0]), c.f[1]);
    set32(c.r[8], c.r[10].w[0] - 1u);
    c.budget -= 2;
L_0027B604:
    c.r[7].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0027B62C; }
    st32((c.r[6].w[0]), c.f[1]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0027B62C:
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 1;
L_0027B630:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0027B648; }
    c.r[8].d[0] = ld8((c.r[3].w[0] + 52u));
    set32(c.r[9], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 40u)));  if (t) { goto L_0027B650; } }
L_0027B648:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0027B650:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027B69C; } }
    c.f[1] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[4].w[0] - 1u);  goto L_0027B674; }
    st32((c.r[5].w[0]), c.f[1]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 2;
L_0027B674:
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0027B69C; }
    st32((c.r[6].w[0]), c.f[1]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0027B69C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0027B6AC; } }
    st32((c.r[5].w[0]), 0u);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 2;
L_0027B6AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027B6C0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027B6E4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B6DC; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 36u));
    c.budget -= 1;
L_0027B6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B71C; } }
L_0027B6E4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0027B704; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B6FC; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_0027B6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B71C; } }
L_0027B704:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B71C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B71C; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 52u));
    c.budget -= 1;
L_0027B71C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027B730:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027B754; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B74C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 1;
L_0027B74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B78C; } }
L_0027B754:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0027B774; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B76C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0027B76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B78C; } }
L_0027B774:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B78C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B78C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 1;
L_0027B78C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027B7A0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027B7B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B7D4; } }
L_0027B7B4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0027B7C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027B7D4; } }
L_0027B7C4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 6u);  goto L_0027B7D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B7D4; } }
L_0027B7D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027B7E0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027B804; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B7FC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 1;
L_0027B7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B83C; } }
L_0027B804:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0027B824; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B81C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0027B81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B83C; } }
L_0027B824:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B83C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B83C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 1;
L_0027B83C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027B850:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0027B874; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B86C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 1;
L_0027B86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B8AC; } }
L_0027B874:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0027B894; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B88C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0027B88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B8AC; } }
L_0027B894:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B8AC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0027B8AC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 1;
L_0027B8AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027B8C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_0027B8D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027B8E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 7;
L_0027B8FC:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B8FCu | kUnwind; return; } goto L_0027B8FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B920u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0027B920u) [[unlikely]] return; }
L_0027B920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5888u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[16].w[0] + 24u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[16].w[0] + 32u), c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 40u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0] + 44u), c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { goto L_0027B990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B980u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027B980u) [[unlikely]] return; }
L_0027B980:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B990u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027B990u) [[unlikely]] return; }
L_0027B990:
    st32((c.r[16].w[0] + 68u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027B9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0027B9DCu) [[unlikely]] return; }
L_0027B9DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 5888u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 14400u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[8].w[0] + 14404u));
    c.f[0] = ld32((c.r[2].w[0] + 14432u));
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 14408u));
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 14416u));
    st32((c.r[17].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 14420u));
    st32((c.r[17].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 14424u));
    st32((c.r[17].w[0] + 40u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[17].w[0] + 44u), c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 29;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_0027BA68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027BA58u) [[unlikely]] return; }
L_0027BA58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA68u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027BA68u) [[unlikely]] return; }
L_0027BA68:
    st32((c.r[17].w[0] + 68u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BA90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027BB60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6080u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0027BB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 2880u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0027BB44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 5104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0027BB24; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0027BB24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027BAF8u) [[unlikely]] return; }
L_0027BAF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB08u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027BB08u) [[unlikely]] return; }
L_0027BB08:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BB24; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BB24u) [[unlikely]] return; }
L_0027BB24:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0027BB48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB44u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x0027BB44u) [[unlikely]] return; }
L_0027BB44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0027BB48:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0027BB64; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB60u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027BB60u) [[unlikely]] return; }
L_0027BB60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0027BB64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027BB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 15016u);  c.pc = t; return; }
L_0027BB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 344u, depth + 1u); else { c.pc = 0x00247740u; return; } if (c.pc != 0x0027BBA4u) [[unlikely]] return; }
L_0027BBA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBB0u); set32(c.r[4], ld32((c.r[2].w[0] + 15016u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0027BBB0u) [[unlikely]] return; }
L_0027BBB0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBC4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0027BBC4u) [[unlikely]] return; }
L_0027BBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BBE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00247790u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 348u, depth); }
L_0027BBF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002477A0u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 349u, depth); }
L_0027BC00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002477B0u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 350u, depth); }
L_0027BC10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC30u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 351u, depth + 1u); else { c.pc = 0x002477C0u; return; } if (c.pc != 0x0027BC30u) [[unlikely]] return; }
L_0027BC30:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0027BD00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0027BC50u) [[unlikely]] return; }
L_0027BC50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027BC60u) [[unlikely]] return; }
L_0027BC60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 52u)));  goto L_0027BC80; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0052(c, 49u, depth + 1u); else { c.pc = 0x00248610u; return; } if (c.pc != 0x0027BC78u) [[unlikely]] return; }
L_0027BC78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 2;
L_0027BC80:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_0027BCEC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  goto L_0027BCC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027BC98u) [[unlikely]] return; }
L_0027BC98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCA8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027BCA8u) [[unlikely]] return; }
L_0027BCA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BCC4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BCC4u) [[unlikely]] return; }
L_0027BCC4:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_0027BCC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0027BCE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027BCD8u) [[unlikely]] return; }
L_0027BCD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027BCE8u) [[unlikely]] return; }
L_0027BCE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_0027BCEC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BCFCu) [[unlikely]] return; }
L_0027BCFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0027BD00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027BD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD34u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 353u, depth + 1u); else { c.pc = 0x00247800u; return; } if (c.pc != 0x0027BD34u) [[unlikely]] return; }
L_0027BD34:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0027BD58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0027BD54u) [[unlikely]] return; }
L_0027BD54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027BD58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 56u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027BD88u) [[unlikely]] return; }
L_0027BD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027BDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 369u, depth + 1u); else { c.pc = 0x002479C0u; return; } if (c.pc != 0x0027BD98u) [[unlikely]] return; }
L_0027BD98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6080u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0027BDA4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BDC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027BDE8u) [[unlikely]] return; }
L_0027BDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0027BE04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 369u, depth + 1u); else { c.pc = 0x002479C0u; return; } if (c.pc != 0x0027BDF8u) [[unlikely]] return; }
L_0027BDF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 6080u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0027BE04:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 355u, depth + 1u); else { c.pc = 0x00247840u; return; } if (c.pc != 0x0027BE14u) [[unlikely]] return; }
L_0027BE14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027BE30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 8ull;  goto L_0027BE64; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13528u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.f[0]);  if (t) { goto L_0027BF20; } }
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_0027BE64:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0027BEEC; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_0027BE98; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027BE94; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027BEEC; } }
L_0027BE94:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_0027BE98:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_0027BEE0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BEB0u) [[unlikely]] return; }
L_0027BEB0:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_0027BEDC; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027BED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027BEEC; } }
L_0027BED8:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_0027BEDC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_0027BEE0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0027BEEC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  goto L_0027BF24; }
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0027BF80; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BF10u) [[unlikely]] return; }
L_0027BF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027BF7C; } }
L_0027BF20:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_0027BF24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027BF7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF44u); set32(c.r[6], c.r[29].w[0] + 47u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BF44u) [[unlikely]] return; }
L_0027BF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BF7C; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 47u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (t) { goto L_0027BF70; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0027BF7C; } }
L_0027BF70:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0027BF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027BF80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BF90:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0027BFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0027BFC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_005F(c, 1u, depth); } }
L_0027BFC4:
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFD4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027BFD4u) [[unlikely]] return; }
L_0027BFD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_0027BFF0; } }
L_0027BFE0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0027BFF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027BFFC; } }
L_0027BFF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BFE0u | kUnwind; return; } goto L_0027BFE0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027BFFC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_005F(c, 1u, depth);
}

}
