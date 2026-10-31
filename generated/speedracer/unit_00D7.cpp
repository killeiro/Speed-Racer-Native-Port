#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D7[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0,
    0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 227,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0,
    0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0,
    0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0,
    0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0,
    0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 385, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0,
    0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0045C000;
    case 2u: goto L_0045C0C4;
    case 3u: goto L_0045C160;
    case 4u: goto L_0045C17C;
    case 5u: goto L_0045C180;
    case 6u: goto L_0045C1C0;
    case 7u: goto L_0045C250;
    case 8u: goto L_0045C280;
    case 9u: goto L_0045C2A0;
    case 10u: goto L_0045C2BC;
    case 11u: goto L_0045C2E0;
    case 12u: goto L_0045C300;
    case 13u: goto L_0045C330;
    case 14u: goto L_0045C360;
    case 15u: goto L_0045C380;
    case 16u: goto L_0045C390;
    case 17u: goto L_0045C3D4;
    case 18u: goto L_0045C3F4;
    case 19u: goto L_0045C400;
    case 20u: goto L_0045C40C;
    case 21u: goto L_0045C418;
    case 22u: goto L_0045C424;
    case 23u: goto L_0045C43C;
    case 24u: goto L_0045C460;
    case 25u: goto L_0045C4A4;
    case 26u: goto L_0045C4BC;
    case 27u: goto L_0045C648;
    case 28u: goto L_0045C654;
    case 29u: goto L_0045C65C;
    case 30u: goto L_0045C6B0;
    case 31u: goto L_0045C6D4;
    case 32u: goto L_0045C6F0;
    case 33u: goto L_0045C714;
    case 34u: goto L_0045C72C;
    case 35u: goto L_0045C750;
    case 36u: goto L_0045C760;
    case 37u: goto L_0045C784;
    case 38u: goto L_0045C790;
    case 39u: goto L_0045C7A0;
    case 40u: goto L_0045C7B0;
    case 41u: goto L_0045C7CC;
    case 42u: goto L_0045C7E4;
    case 43u: goto L_0045C820;
    case 44u: goto L_0045C844;
    case 45u: goto L_0045C850;
    case 46u: goto L_0045C860;
    case 47u: goto L_0045C8B8;
    case 48u: goto L_0045CA9C;
    case 49u: goto L_0045CB08;
    case 50u: goto L_0045CB14;
    case 51u: goto L_0045CB3C;
    case 52u: goto L_0045CB5C;
    case 53u: goto L_0045CBB0;
    case 54u: goto L_0045CBD4;
    case 55u: goto L_0045CC00;
    case 56u: goto L_0045CC10;
    case 57u: goto L_0045CC34;
    case 58u: goto L_0045CC44;
    case 59u: goto L_0045CC50;
    case 60u: goto L_0045CC8C;
    case 61u: goto L_0045CCA0;
    case 62u: goto L_0045CCDC;
    case 63u: goto L_0045CD08;
    case 64u: goto L_0045CD38;
    case 65u: goto L_0045CD50;
    case 66u: goto L_0045CD80;
    case 67u: goto L_0045CDA4;
    case 68u: goto L_0045CDC0;
    case 69u: goto L_0045CDE0;
    case 70u: goto L_0045CDF0;
    case 71u: goto L_0045CE20;
    case 72u: goto L_0045CE30;
    case 73u: goto L_0045CE4C;
    case 74u: goto L_0045CF4C;
    case 75u: goto L_0045CF58;
    case 76u: goto L_0045CF80;
    case 77u: goto L_0045CFA0;
    case 78u: goto L_0045D0B0;
    case 79u: goto L_0045D0BC;
    case 80u: goto L_0045D0E4;
    case 81u: goto L_0045D104;
    case 82u: goto L_0045D130;
    case 83u: goto L_0045D154;
    case 84u: goto L_0045D190;
    case 85u: goto L_0045D1BC;
    case 86u: goto L_0045D1D0;
    case 87u: goto L_0045D1F0;
    case 88u: goto L_0045D20C;
    case 89u: goto L_0045D21C;
    case 90u: goto L_0045D228;
    case 91u: goto L_0045D260;
    case 92u: goto L_0045D270;
    case 93u: goto L_0045D27C;
    case 94u: goto L_0045D2B8;
    case 95u: goto L_0045D2D0;
    case 96u: goto L_0045D30C;
    case 97u: goto L_0045D324;
    case 98u: goto L_0045D350;
    case 99u: goto L_0045D380;
    case 100u: goto L_0045D3A0;
    case 101u: goto L_0045D3D0;
    case 102u: goto L_0045D3F4;
    case 103u: goto L_0045D410;
    case 104u: goto L_0045D430;
    case 105u: goto L_0045D440;
    case 106u: goto L_0045D470;
    case 107u: goto L_0045D480;
    case 108u: goto L_0045D4B8;
    case 109u: goto L_0045D4EC;
    case 110u: goto L_0045D4F8;
    case 111u: goto L_0045D51C;
    case 112u: goto L_0045D528;
    case 113u: goto L_0045D53C;
    case 114u: goto L_0045D55C;
    case 115u: goto L_0045D568;
    case 116u: goto L_0045D5C0;
    case 117u: goto L_0045D5D0;
    case 118u: goto L_0045D5F0;
    case 119u: goto L_0045D6A8;
    case 120u: goto L_0045D6F8;
    case 121u: goto L_0045D73C;
    case 122u: goto L_0045D768;
    case 123u: goto L_0045D790;
    case 124u: goto L_0045D7BC;
    case 125u: goto L_0045D7C8;
    case 126u: goto L_0045D7F4;
    case 127u: goto L_0045D830;
    case 128u: goto L_0045D84C;
    case 129u: goto L_0045D854;
    case 130u: goto L_0045D878;
    case 131u: goto L_0045D888;
    case 132u: goto L_0045D894;
    case 133u: goto L_0045D8AC;
    case 134u: goto L_0045D8BC;
    case 135u: goto L_0045D8C4;
    case 136u: goto L_0045D8CC;
    case 137u: goto L_0045D8D4;
    case 138u: goto L_0045D8E4;
    case 139u: goto L_0045D8FC;
    case 140u: goto L_0045D968;
    case 141u: goto L_0045D974;
    case 142u: goto L_0045D9C0;
    case 143u: goto L_0045D9FC;
    case 144u: goto L_0045DA28;
    case 145u: goto L_0045DA58;
    case 146u: goto L_0045DA70;
    case 147u: goto L_0045DAA0;
    case 148u: goto L_0045DAC4;
    case 149u: goto L_0045DAE0;
    case 150u: goto L_0045DB00;
    case 151u: goto L_0045DB10;
    case 152u: goto L_0045DB40;
    case 153u: goto L_0045DB50;
    case 154u: goto L_0045DBD4;
    case 155u: goto L_0045DBE0;
    case 156u: goto L_0045DBF0;
    case 157u: goto L_0045DC1C;
    case 158u: goto L_0045DC30;
    case 159u: goto L_0045DC64;
    case 160u: goto L_0045DC7C;
    case 161u: goto L_0045DC94;
    case 162u: goto L_0045DD04;
    case 163u: goto L_0045DD10;
    case 164u: goto L_0045DD2C;
    case 165u: goto L_0045DD40;
    case 166u: goto L_0045DD50;
    case 167u: goto L_0045DD9C;
    case 168u: goto L_0045DDB0;
    case 169u: goto L_0045DDC8;
    case 170u: goto L_0045DDD4;
    case 171u: goto L_0045DDE0;
    case 172u: goto L_0045DDEC;
    case 173u: goto L_0045DE5C;
    case 174u: goto L_0045DE68;
    case 175u: goto L_0045DE80;
    case 176u: goto L_0045DEBC;
    case 177u: goto L_0045DEEC;
    case 178u: goto L_0045DF10;
    case 179u: goto L_0045DF38;
    case 180u: goto L_0045DF9C;
    case 181u: goto L_0045E004;
    case 182u: goto L_0045E094;
    case 183u: goto L_0045E120;
    case 184u: goto L_0045E140;
    case 185u: goto L_0045E15C;
    case 186u: goto L_0045E180;
    case 187u: goto L_0045E190;
    case 188u: goto L_0045E1A0;
    case 189u: goto L_0045E1B0;
    case 190u: goto L_0045E1C0;
    case 191u: goto L_0045E1D0;
    case 192u: goto L_0045E1E0;
    case 193u: goto L_0045E1F0;
    case 194u: goto L_0045E224;
    case 195u: goto L_0045E234;
    case 196u: goto L_0045E25C;
    case 197u: goto L_0045E278;
    case 198u: goto L_0045E28C;
    case 199u: goto L_0045E2A8;
    case 200u: goto L_0045E2E0;
    case 201u: goto L_0045E2F0;
    case 202u: goto L_0045E2FC;
    case 203u: goto L_0045E334;
    case 204u: goto L_0045E390;
    case 205u: goto L_0045E398;
    case 206u: goto L_0045E404;
    case 207u: goto L_0045E458;
    case 208u: goto L_0045E504;
    case 209u: goto L_0045E55C;
    case 210u: goto L_0045E60C;
    case 211u: goto L_0045E650;
    case 212u: goto L_0045E670;
    case 213u: goto L_0045E680;
    case 214u: goto L_0045E69C;
    case 215u: goto L_0045E6B0;
    case 216u: goto L_0045E6C0;
    case 217u: goto L_0045E6D0;
    case 218u: goto L_0045E6DC;
    case 219u: goto L_0045E6E8;
    case 220u: goto L_0045E6F8;
    case 221u: goto L_0045E704;
    case 222u: goto L_0045E710;
    case 223u: goto L_0045E718;
    case 224u: goto L_0045E724;
    case 225u: goto L_0045E738;
    case 226u: goto L_0045E778;
    case 227u: goto L_0045E77C;
    case 228u: goto L_0045E78C;
    case 229u: goto L_0045E7B0;
    case 230u: goto L_0045E7C4;
    case 231u: goto L_0045E7DC;
    case 232u: goto L_0045E7EC;
    case 233u: goto L_0045E7F8;
    case 234u: goto L_0045E804;
    case 235u: goto L_0045E814;
    case 236u: goto L_0045E820;
    case 237u: goto L_0045E82C;
    case 238u: goto L_0045E834;
    case 239u: goto L_0045E844;
    case 240u: goto L_0045E858;
    case 241u: goto L_0045E864;
    case 242u: goto L_0045E87C;
    case 243u: goto L_0045E89C;
    case 244u: goto L_0045E8AC;
    case 245u: goto L_0045E8C8;
    case 246u: goto L_0045E8DC;
    case 247u: goto L_0045E8EC;
    case 248u: goto L_0045E904;
    case 249u: goto L_0045E90C;
    case 250u: goto L_0045E92C;
    case 251u: goto L_0045E940;
    case 252u: goto L_0045E948;
    case 253u: goto L_0045E954;
    case 254u: goto L_0045E960;
    case 255u: goto L_0045E970;
    case 256u: goto L_0045E9C4;
    case 257u: goto L_0045E9D0;
    case 258u: goto L_0045E9E8;
    case 259u: goto L_0045EA04;
    case 260u: goto L_0045EA1C;
    case 261u: goto L_0045EA28;
    case 262u: goto L_0045EA3C;
    case 263u: goto L_0045EA50;
    case 264u: goto L_0045EA60;
    case 265u: goto L_0045EA7C;
    case 266u: goto L_0045EA88;
    case 267u: goto L_0045EAC0;
    case 268u: goto L_0045EB40;
    case 269u: goto L_0045EB68;
    case 270u: goto L_0045EBBC;
    case 271u: goto L_0045EC30;
    case 272u: goto L_0045EC40;
    case 273u: goto L_0045EC50;
    case 274u: goto L_0045EC78;
    case 275u: goto L_0045ECB0;
    case 276u: goto L_0045ECD8;
    case 277u: goto L_0045ECE4;
    case 278u: goto L_0045ECF8;
    case 279u: goto L_0045ED08;
    case 280u: goto L_0045ED14;
    case 281u: goto L_0045ED20;
    case 282u: goto L_0045ED34;
    case 283u: goto L_0045ED40;
    case 284u: goto L_0045ED4C;
    case 285u: goto L_0045ED58;
    case 286u: goto L_0045ED60;
    case 287u: goto L_0045ED80;
    case 288u: goto L_0045ED98;
    case 289u: goto L_0045EDA8;
    case 290u: goto L_0045EDDC;
    case 291u: goto L_0045EDF0;
    case 292u: goto L_0045EDF8;
    case 293u: goto L_0045EE04;
    case 294u: goto L_0045EE0C;
    case 295u: goto L_0045EE1C;
    case 296u: goto L_0045EE80;
    case 297u: goto L_0045EECC;
    case 298u: goto L_0045EEEC;
    case 299u: goto L_0045EEFC;
    case 300u: goto L_0045EF18;
    case 301u: goto L_0045EF2C;
    case 302u: goto L_0045EF3C;
    case 303u: goto L_0045EF64;
    case 304u: goto L_0045EF74;
    case 305u: goto L_0045EF90;
    case 306u: goto L_0045EF9C;
    case 307u: goto L_0045EFBC;
    case 308u: goto L_0045EFCC;
    case 309u: goto L_0045EFE8;
    case 310u: goto L_0045F008;
    case 311u: goto L_0045F018;
    case 312u: goto L_0045F034;
    case 313u: goto L_0045F070;
    case 314u: goto L_0045F090;
    case 315u: goto L_0045F0B8;
    case 316u: goto L_0045F0C8;
    case 317u: goto L_0045F0E4;
    case 318u: goto L_0045F0F8;
    case 319u: goto L_0045F108;
    case 320u: goto L_0045F124;
    case 321u: goto L_0045F134;
    case 322u: goto L_0045F150;
    case 323u: goto L_0045F164;
    case 324u: goto L_0045F174;
    case 325u: goto L_0045F190;
    case 326u: goto L_0045F1A0;
    case 327u: goto L_0045F1BC;
    case 328u: goto L_0045F1D0;
    case 329u: goto L_0045F1E0;
    case 330u: goto L_0045F1F4;
    case 331u: goto L_0045F204;
    case 332u: goto L_0045F220;
    case 333u: goto L_0045F230;
    case 334u: goto L_0045F24C;
    case 335u: goto L_0045F260;
    case 336u: goto L_0045F270;
    case 337u: goto L_0045F28C;
    case 338u: goto L_0045F29C;
    case 339u: goto L_0045F2B8;
    case 340u: goto L_0045F2CC;
    case 341u: goto L_0045F2DC;
    case 342u: goto L_0045F2F8;
    case 343u: goto L_0045F308;
    case 344u: goto L_0045F324;
    case 345u: goto L_0045F338;
    case 346u: goto L_0045F348;
    case 347u: goto L_0045F354;
    case 348u: goto L_0045F370;
    case 349u: goto L_0045F39C;
    case 350u: goto L_0045F3A4;
    case 351u: goto L_0045F3B8;
    case 352u: goto L_0045F3C4;
    case 353u: goto L_0045F3CC;
    case 354u: goto L_0045F3E0;
    case 355u: goto L_0045F3EC;
    case 356u: goto L_0045F3FC;
    case 357u: goto L_0045F40C;
    case 358u: goto L_0045F428;
    case 359u: goto L_0045F434;
    case 360u: goto L_0045F440;
    case 361u: goto L_0045F44C;
    case 362u: goto L_0045F458;
    case 363u: goto L_0045F464;
    case 364u: goto L_0045F488;
    case 365u: goto L_0045F498;
    case 366u: goto L_0045F4B4;
    case 367u: goto L_0045F4C8;
    case 368u: goto L_0045F4D8;
    case 369u: goto L_0045F52C;
    case 370u: goto L_0045F540;
    case 371u: goto L_0045F560;
    case 372u: goto L_0045F570;
    case 373u: goto L_0045F58C;
    case 374u: goto L_0045F5A0;
    case 375u: goto L_0045F5B0;
    case 376u: goto L_0045F5BC;
    case 377u: goto L_0045F5E0;
    case 378u: goto L_0045F5F0;
    case 379u: goto L_0045F67C;
    case 380u: goto L_0045F68C;
    case 381u: goto L_0045F6A8;
    case 382u: goto L_0045F6BC;
    case 383u: goto L_0045F6CC;
    case 384u: goto L_0045F6EC;
    case 385u: goto L_0045F6F0;
    case 386u: goto L_0045F6FC;
    case 387u: goto L_0045F79C;
    case 388u: goto L_0045F7AC;
    case 389u: goto L_0045F850;
    case 390u: goto L_0045F998;
    case 391u: goto L_0045F9A8;
    case 392u: goto L_0045FA34;
    case 393u: goto L_0045FB64;
    case 394u: goto L_0045FB78;
    case 395u: goto L_0045FB94;
    case 396u: goto L_0045FBC4;
    case 397u: goto L_0045FC44;
    case 398u: goto L_0045FC50;
    case 399u: goto L_0045FC64;
    case 400u: goto L_0045FC84;
    case 401u: goto L_0045FC94;
    case 402u: goto L_0045FCB0;
    case 403u: goto L_0045FCC4;
    case 404u: goto L_0045FCD4;
    case 405u: goto L_0045FCE0;
    case 406u: goto L_0045FD04;
    case 407u: goto L_0045FD14;
    case 408u: goto L_0045FDA0;
    case 409u: goto L_0045FDB0;
    case 410u: goto L_0045FDCC;
    case 411u: goto L_0045FDE0;
    case 412u: goto L_0045FDF0;
    case 413u: goto L_0045FE10;
    case 414u: goto L_0045FE20;
    case 415u: goto L_0045FEC0;
    case 416u: goto L_0045FED0;
    case 417u: goto L_0045FF74;
    default: bad_entry(c, 0x0045C000u); return;
    }
L_0045C000:
    c.f[23] = ld32((c.r[29].w[0] + 232u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[21] = ld32((c.r[29].w[0] + 236u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.facc = fp::mul(c.f[27], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C0C4u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x0045C0C4u) [[unlikely]] return; }
L_0045C0C4:
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[16].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[16].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[16].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[16].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[16].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[16].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[16].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[16].w[0] + 192u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 35;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 200u)));  goto L_0045C164; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C160u) [[unlikely]] return; }
L_0045C160:
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 1;
L_0045C164:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045C17C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C17Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C17Cu) [[unlikely]] return; }
L_0045C17C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0045C180:
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_0045C1C0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[4].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    c.budget -= 33;
    { st32((c.r[4].w[0] + 128u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045BB40u | kUnwind; return; } [[clang::musttail]] return unit_00D6(c, 472u, depth); }
L_0045C250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045C280; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C280u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C280u) [[unlikely]] return; }
L_0045C280:
    st32((c.r[17].w[0] + 200u), 0u);
    st32((c.r[17].w[0] + 200u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 324u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C2A0u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00D8(c, 194u, depth + 1u); else { c.pc = 0x00462030u; return; } if (c.pc != 0x0045C2A0u) [[unlikely]] return; }
L_0045C2A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 200u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 392u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C2BCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C2BCu) [[unlikely]] return; }
L_0045C2BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 4u);  if (t) { goto L_0045C310; } }
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 80u)));  goto L_0045C2F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C2E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0045C2E0u) [[unlikely]] return; }
L_0045C2E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 5;
L_0045C2F4:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C300u) [[unlikely]] return; }
L_0045C300:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0045C310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045C330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045C360; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C360u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C360u) [[unlikely]] return; }
L_0045C360:
    st32((c.r[17].w[0] + 196u), 0u);
    st32((c.r[17].w[0] + 196u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045C380:
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_0045C390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045C43C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29472u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 200u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 200u), 0u);  goto L_0045C3D8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C3D4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C3D4u) [[unlikely]] return; }
L_0045C3D4:
    st32((c.r[17].w[0] + 200u), 0u);
    c.budget -= 1;
L_0045C3D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 24u);  goto L_0045C3F8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C3F4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C3F4u) [[unlikely]] return; }
L_0045C3F4:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_0045C3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C400u); st32((c.r[17].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_00D8(c, 194u, depth + 1u); else { c.pc = 0x00462030u; return; } if (c.pc != 0x0045C400u) [[unlikely]] return; }
L_0045C400:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C40Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 56u, depth + 1u); else { c.pc = 0x004645D0u; return; } if (c.pc != 0x0045C40Cu) [[unlikely]] return; }
L_0045C40C:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C418u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D8(c, 198u, depth + 1u); else { c.pc = 0x004620B0u; return; } if (c.pc != 0x0045C418u) [[unlikely]] return; }
L_0045C418:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 304u, depth + 1u); else { c.pc = 0x00463840u; return; } if (c.pc != 0x0045C424u) [[unlikely]] return; }
L_0045C424:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045C440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C43Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045C43Cu) [[unlikely]] return; }
L_0045C43C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045C440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045C460:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C4A4u); set32(c.r[7], c.r[7].w[0] + 32337u);  if (depth < kMaxDepth) unit_00D8(c, 307u, depth + 1u); else { c.pc = 0x004638C0u; return; } if (c.pc != 0x0045C4A4u) [[unlikely]] return; }
L_0045C4A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 29472u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C4BCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D8(c, 201u, depth + 1u); else { c.pc = 0x00462120u; return; } if (c.pc != 0x0045C4BCu) [[unlikely]] return; }
L_0045C4BC:
    st32((c.r[17].w[0] + 60u), c.r[18].w[0]);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[17].w[0] + 64u), c.r[19].w[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[22], 0u - 3u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + 24u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[17].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] - 7040u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] - 7036u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] - 7032u));
    st32((c.r[17].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] - 7028u));
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[25].w[0] - 7024u));
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[24].w[0] - 7020u));
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[15].w[0] - 7016u));
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[14].w[0] - 7012u));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] - 7008u));
    st32((c.r[17].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] - 7004u));
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] - 7000u));
    st32((c.r[17].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] - 6996u));
    st32((c.r[17].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] - 6992u));
    st32((c.r[17].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] - 6988u));
    st32((c.r[17].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] - 6984u));
    st32((c.r[17].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] - 6980u));
    st32((c.r[17].w[0] + 192u), c.f[0]);
    st32((c.r[17].w[0] + 196u), 0u);
    st32((c.r[17].w[0] + 200u), 0u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 204u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 204u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 99;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C648u); st8((c.r[17].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D8(c, 194u, depth + 1u); else { c.pc = 0x00462030u; return; } if (c.pc != 0x0045C648u) [[unlikely]] return; }
L_0045C648:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C654u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 59u, depth + 1u); else { c.pc = 0x00464650u; return; } if (c.pc != 0x0045C654u) [[unlikely]] return; }
L_0045C654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C65Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 472u, depth + 1u); else { c.pc = 0x0045BB40u; return; } if (c.pc != 0x0045C65Cu) [[unlikely]] return; }
L_0045C65C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045C688; }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 204u));
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
L_0045C688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0045C6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29972u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0045C6CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0045C6DC; } }
L_0045C6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C6D4u);  if (depth < kMaxDepth) unit_00D8(c, 339u, depth + 1u); else { c.pc = 0x00463BF0u; return; } if (c.pc != 0x0045C6D4u) [[unlikely]] return; }
L_0045C6D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0045C6DC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045C6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C714u); set32(c.r[4], c.r[4].w[0] + 32160u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045C714u) [[unlikely]] return; }
L_0045C714:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045C724; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045C734; } }
L_0045C724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C72Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 340u, depth + 1u); else { c.pc = 0x00463C10u; return; } if (c.pc != 0x0045C72Cu) [[unlikely]] return; }
L_0045C72C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0045C734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045C750:
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0045C760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29972u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0045C77C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045C784; } }
L_0045C77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C784u);  if (depth < kMaxDepth) unit_00D8(c, 343u, depth + 1u); else { c.pc = 0x00463C60u; return; } if (c.pc != 0x0045C784u) [[unlikely]] return; }
L_0045C784:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045C790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29972u)));  c.pc = t; return; }
L_0045C7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045C7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0045C7F4; } }
L_0045C7CC:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31824u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C7E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045C7E4u) [[unlikely]] return; }
L_0045C7E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0045C7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0045C804; } }
L_0045C7F4:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045C7CCu | kUnwind; return; } goto L_0045C7CC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045C804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045C820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0045C834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045C844; } }
L_0045C834:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C844u); set32(c.r[5], ld32((c.r[28].w[0] - 29948u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045C844u) [[unlikely]] return; }
L_0045C844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045C850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32432u);  c.pc = t; return; }
L_0045C860:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.f[31]);
    set32(c.r[5], c.r[17].w[0] + 28u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + 132u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045C8B8u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00BF(c, 24u, depth + 1u); else { c.pc = 0x003FC2A0u; return; } if (c.pc != 0x0045C8B8u) [[unlikely]] return; }
L_0045C8B8:
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.f[18] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[29].w[0] + 172u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[17] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[29].w[0] + 168u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.f[16] = ld32((c.r[29].w[0] + 232u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[3]));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[15] = ld32((c.r[29].w[0] + 236u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[2]));
    c.f[8] = ld32((c.r[16].w[0] + 20u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[1]));
    c.f[7] = ld32((c.r[16].w[0] + 4u));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[16].w[0] + 36u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[7]));
    c.f[5] = ld32((c.r[16].w[0] + 52u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[6]));
    c.f[20] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[5]));
    c.f[11] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[16].w[0] + 40u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[11]));
    c.f[9] = ld32((c.r[16].w[0] + 56u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[28] = ld32((c.r[16].w[0] + 28u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.f[26] = ld32((c.r[16].w[0] + 12u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[16].w[0] + 44u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[26]));
    c.f[22] = ld32((c.r[16].w[0] + 60u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 244u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 240u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 248u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[3]));
    c.f[19] = ld32((c.r[29].w[0] + 252u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[1]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 276u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[25] = ld32((c.r[29].w[0] + 272u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[29] = ld32((c.r[29].w[0] + 164u));
    c.f[21] = ld32((c.r[29].w[0] + 284u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[1]));
    st32((c.r[29].w[0]), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[7]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 164u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::mul(c.f[0], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[11]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 164u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[0], c.f[28]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.facc = fp::mul(c.f[27], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 121;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CA9Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x0045CA9Cu) [[unlikely]] return; }
L_0045CA9C:
    set32(c.r[16], ld32((c.r[17].w[0] + 40u)));
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[29].w[0] + 180u), c.f[2]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 320u));
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    st32((c.r[29].w[0] + 184u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st32((c.r[29].w[0] + 188u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[29].w[0] + 204u), 0u);
    c.f[13] = ld32((c.r[29].w[0] + 340u));
    c.f[14] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CB08u); st32((c.r[29].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x0045CB08u) [[unlikely]] return; }
L_0045CB08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CB14u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x003275C0u; return; } if (c.pc != 0x0045CB14u) [[unlikely]] return; }
L_0045CB14:
    set32(c.r[16], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_0045CB70; }
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_0045CB50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CB3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0045CB3Cu) [[unlikely]] return; }
L_0045CB3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_0045CB50:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CB5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045CB5Cu) [[unlikely]] return; }
L_0045CB5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 5;
L_0045CB70:
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_0045CBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045CBD4u) [[unlikely]] return; }
L_0045CBD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045CC00:
    set32(c.r[3], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 1194u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0045CC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CC34u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 63u, depth + 1u); else { c.pc = 0x00366A40u; return; } if (c.pc != 0x0045CC34u) [[unlikely]] return; }
L_0045CC34:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CC44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x0045CC44u) [[unlikely]] return; }
L_0045CC44:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CC50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x0045CC50u) [[unlikely]] return; }
L_0045CC50:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], 0u - 1u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    st64((c.r[5].w[0] + 64u), c.r[6].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    st64((c.r[2].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CC8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045CC8Cu) [[unlikely]] return; }
L_0045CC8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045CCA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045CD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29520u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045CCE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CCDCu);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x0045CCDCu) [[unlikely]] return; }
L_0045CCDC:
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 1;
L_0045CCE0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0045CD24; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29712u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045CD0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD08u);  if (depth < kMaxDepth) unit_008E(c, 217u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0045CD08u) [[unlikely]] return; }
L_0045CD08:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0045CD0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045CD20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0045CD20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0045CD24:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045CD3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CD38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045CD38u) [[unlikely]] return; }
L_0045CD38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045CD3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045CD50:
    set32(c.r[2], ld32((c.r[28].w[0] - 29956u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));  goto L_0045CD64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045CD70; } }
L_0045CD64:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0045CD6C; }
L_0045CD6C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0045CD70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045CD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CDA4u); set32(c.r[4], c.r[4].w[0] + 32384u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045CDA4u) [[unlikely]] return; }
L_0045CDA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0045CDB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045CDCC; } }
L_0045CDB4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CDC0u); set32(c.r[4], c.r[4].w[0] + 32672u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045CDC0u) [[unlikely]] return; }
L_0045CDC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0045CDC8; }
L_0045CDC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045CDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045CDE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0045CDF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29956u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));  goto L_0045CE04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045CE10; } }
L_0045CE04:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0045CE10; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0045CE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045CE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29956u)));  c.pc = t; return; }
L_0045CE30:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CE4Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00D7(c, 39u, depth + 1u); else { c.pc = 0x0045C7A0u; return; } if (c.pc != 0x0045CE4Cu) [[unlikely]] return; }
L_0045CE4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[20] = c.f[0];
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    c.f[2] = ld32((c.r[2].w[0] + 176u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 172u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 204u), c.f[2]);
    c.f[11] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 188u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 180u));
    c.f[10] = ld32((c.r[2].w[0] + 140u));
    c.f[9] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.f[8] = ld32((c.r[2].w[0] + 152u));
    c.f[7] = ld32((c.r[2].w[0] + 156u));
    c.f[6] = ld32((c.r[2].w[0] + 164u));
    c.f[5] = ld32((c.r[2].w[0] + 168u));
    c.f[4] = ld32((c.r[2].w[0] + 172u));
    c.f[3] = ld32((c.r[2].w[0] + 184u));
    c.f[2] = ld32((c.r[2].w[0] + 188u));
    c.f[1] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[29].w[0] + 160u), c.f[12]);
    st32((c.r[29].w[0] + 164u), c.f[11]);
    st32((c.r[29].w[0] + 112u), c.f[12]);
    st32((c.r[29].w[0] + 128u), c.f[11]);
    st32((c.r[29].w[0] + 144u), c.f[10]);
    st32((c.r[29].w[0] + 116u), c.f[9]);
    st32((c.r[29].w[0] + 132u), c.f[8]);
    st32((c.r[29].w[0] + 148u), c.f[7]);
    st32((c.r[29].w[0] + 120u), c.f[6]);
    st32((c.r[29].w[0] + 136u), c.f[5]);
    st32((c.r[29].w[0] + 152u), c.f[4]);
    st32((c.r[29].w[0] + 168u), c.f[10]);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 176u), c.f[9]);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 180u), c.f[8]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 184u), c.f[7]);
    st32((c.r[29].w[0] + 192u), c.f[6]);
    st32((c.r[29].w[0] + 196u), c.f[5]);
    st32((c.r[29].w[0] + 200u), c.f[4]);
    st32((c.r[29].w[0] + 212u), c.f[3]);
    st32((c.r[29].w[0] + 216u), c.f[2]);
    st32((c.r[29].w[0] + 220u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[4] = ld32((c.r[29].w[0] + 200u));
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.f[6] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 212u));
    c.f[3] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[13] = fp::add(c.f[5], c.f[6]);
    c.f[14] = fp::add(c.f[3], c.f[4]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[13]);
    st32((c.r[29].w[0] + 216u), c.f[14]);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CF4Cu); st32((c.r[29].w[0] + 208u), c.f[12]);  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x0045CF4Cu) [[unlikely]] return; }
L_0045CF4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CF58u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x003275C0u; return; } if (c.pc != 0x0045CF58u) [[unlikely]] return; }
L_0045CF58:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0045CFB4; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_0045CF94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CF80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0045CF80u) [[unlikely]] return; }
L_0045CF80:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_0045CF94:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045CFA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045CFA0u) [[unlikely]] return; }
L_0045CFA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
L_0045CFB4:
    c.f[6] = c.f[20] ^ fp::kSign;
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.f[0] = ld32((c.r[2].w[0] + 144u));
    c.f[1] = ld32((c.r[2].w[0] + 176u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 160u));
    st32((c.r[29].w[0] + 204u), c.f[1]);
    c.f[11] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 180u));
    c.f[10] = ld32((c.r[2].w[0] + 140u));
    c.f[9] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[8] = ld32((c.r[2].w[0] + 152u));
    c.f[7] = ld32((c.r[2].w[0] + 156u));
    c.f[5] = ld32((c.r[2].w[0] + 164u));
    c.f[4] = ld32((c.r[2].w[0] + 168u));
    c.f[3] = ld32((c.r[2].w[0] + 172u));
    c.f[2] = ld32((c.r[2].w[0] + 184u));
    c.f[1] = ld32((c.r[2].w[0] + 188u));
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    st32((c.r[29].w[0] + 160u), c.f[12]);
    st32((c.r[29].w[0] + 164u), c.f[11]);
    st32((c.r[29].w[0] + 64u), c.f[12]);
    st32((c.r[29].w[0] + 80u), c.f[11]);
    st32((c.r[29].w[0] + 96u), c.f[10]);
    st32((c.r[29].w[0] + 68u), c.f[9]);
    st32((c.r[29].w[0] + 84u), c.f[8]);
    st32((c.r[29].w[0] + 100u), c.f[7]);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    st32((c.r[29].w[0] + 88u), c.f[4]);
    st32((c.r[29].w[0] + 104u), c.f[3]);
    st32((c.r[29].w[0] + 168u), c.f[10]);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 176u), c.f[9]);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 180u), c.f[8]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 184u), c.f[7]);
    st32((c.r[29].w[0] + 192u), c.f[5]);
    st32((c.r[29].w[0] + 196u), c.f[4]);
    st32((c.r[29].w[0] + 200u), c.f[3]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[1]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.f[3] = ld32((c.r[29].w[0] + 200u));
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[5] = fp::mul(c.f[0], c.f[6]);
    c.f[4] = ld32((c.r[29].w[0] + 212u));
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[13] = fp::add(c.f[4], c.f[5]);
    c.f[14] = fp::add(c.f[2], c.f[3]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 212u), c.f[13]);
    st32((c.r[29].w[0] + 216u), c.f[14]);
    c.budget -= 63;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D0B0u); st32((c.r[29].w[0] + 208u), c.f[12]);  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x0045D0B0u) [[unlikely]] return; }
L_0045D0B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D0BCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x003275C0u; return; } if (c.pc != 0x0045D0BCu) [[unlikely]] return; }
L_0045D0BC:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0045D118; }
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_0045D0F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D0E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x0045D0E4u) [[unlikely]] return; }
L_0045D0E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_0045D0F8:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D104u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045D104u) [[unlikely]] return; }
L_0045D104:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
L_0045D118:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0045D130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D154u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045D154u) [[unlikely]] return; }
L_0045D154:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045D190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045D1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045D1C0; } }
L_0045D1AC:
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D1BCu); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 31u, depth + 1u); else { c.pc = 0x004D8710u; return; } if (c.pc != 0x0045D1BCu) [[unlikely]] return; }
L_0045D1BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045D1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045D1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D1F0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00D7(c, 39u, depth + 1u); else { c.pc = 0x0045C7A0u; return; } if (c.pc != 0x0045D1F0u) [[unlikely]] return; }
L_0045D1F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F900000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D20Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x0045D20Cu) [[unlikely]] return; }
L_0045D20C:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D21Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x0045D21Cu) [[unlikely]] return; }
L_0045D21C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D228u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x0045D228u) [[unlikely]] return; }
L_0045D228:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    st64((c.r[5].w[0] + 64u), c.r[6].d[0]);
    c.f[12] = c.f[20];
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st64((c.r[2].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D260u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x0045D260u) [[unlikely]] return; }
L_0045D260:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D270u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x0045D270u) [[unlikely]] return; }
L_0045D270:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D27Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x00327980u; return; } if (c.pc != 0x0045D27Cu) [[unlikely]] return; }
L_0045D27C:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], 0u - 1u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    st64((c.r[5].w[0] + 64u), c.r[6].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st64((c.r[2].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D2B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045D2B8u) [[unlikely]] return; }
L_0045D2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045D2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045D380; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0045D314; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D30Cu);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x0045D30Cu) [[unlikely]] return; }
L_0045D30C:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 2;
L_0045D314:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045D328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D324u);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x0045D324u) [[unlikely]] return; }
L_0045D324:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0045D328:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0045D36C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29712u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045D354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D350u);  if (depth < kMaxDepth) unit_008E(c, 217u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0045D350u) [[unlikely]] return; }
L_0045D350:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0045D354:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045D368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0045D368:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0045D36C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045D384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D380u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045D380u) [[unlikely]] return; }
L_0045D380:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045D384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045D3A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29960u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));  goto L_0045D3B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045D3C0; } }
L_0045D3B4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0045D3BC; }
L_0045D3BC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0045D3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045D3D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D3F4u); set32(c.r[4], c.r[4].w[0] + 32480u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045D3F4u) [[unlikely]] return; }
L_0045D3F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0045D404; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045D41C; } }
L_0045D404:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D410u); set32(c.r[4], c.r[4].w[0] + 32672u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045D410u) [[unlikely]] return; }
L_0045D410:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0045D418; }
L_0045D418:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045D41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045D430:
    set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0045D440:
    set32(c.r[2], ld32((c.r[28].w[0] - 29960u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));  goto L_0045D454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045D460; } }
L_0045D454:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0045D460; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0045D460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045D470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29960u)));  c.pc = t; return; }
L_0045D480:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045D4C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D4B8u); set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x0033AB40u; return; } if (c.pc != 0x0045D4B8u) [[unlikely]] return; }
L_0045D4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045D80C; } }
L_0045D4C0:
    c.f[20] = ld32((c.r[19].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { st8((c.r[20].w[0] + 13u), static_cast<std::uint8_t>(0u));  goto L_0045D4E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045D80C; } }
L_0045D4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D4ECu); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D7(c, 15u, depth + 1u); else { c.pc = 0x0045C380u; return; } if (c.pc != 0x0045D4ECu) [[unlikely]] return; }
L_0045D4EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D4F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 293u, depth + 1u); else { c.pc = 0x0041A090u; return; } if (c.pc != 0x0045D4F8u) [[unlikely]] return; }
L_0045D4F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 32768u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045D514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_0045D51C; } }
L_0045D514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D51Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0045D51Cu) [[unlikely]] return; }
L_0045D51C:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D528u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_00D7(c, 15u, depth + 1u); else { c.pc = 0x0045C380u; return; } if (c.pc != 0x0045D528u) [[unlikely]] return; }
L_0045D528:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D53Cu); set32(c.r[5], c.r[29].w[0] + 156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045D53Cu) [[unlikely]] return; }
L_0045D53C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_0045D550; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0045D594; } }
L_0045D550:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D55Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045D55Cu) [[unlikely]] return; }
L_0045D55C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_0045D578; } }
L_0045D568:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0045D578; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0045D584; } }
L_0045D578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045D568u | kUnwind; return; } goto L_0045D568; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045D584:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0045D594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045D594; } }
L_0045D594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0045D5F0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D5C0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045D5C0u) [[unlikely]] return; }
L_0045D5C0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D5D0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045D5D0u) [[unlikely]] return; }
L_0045D5D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0045D5F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D5F0u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0045D5F0u) [[unlikely]] return; }
L_0045D5F0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  goto L_0045D6AC; }
    c.f[4] = ld32((c.r[19].w[0] + 96u));
    c.f[1] = ld32((c.r[19].w[0] + 100u));
    c.f[3] = ld32((c.r[19].w[0] + 104u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 31844u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 144u), 0u);  goto L_0045D654; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_0045D65C; } }
L_0045D654:
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 2;
L_0045D65C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.f[14] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 144u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.f[13] = c.f[20];
    set32(c.r[9], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 152u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D6A8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 254u, depth + 1u); else { c.pc = 0x003F64D0u; return; } if (c.pc != 0x0045D6A8u) [[unlikely]] return; }
L_0045D6A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_0045D6AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[20], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[20] = fp::min(c.f[0], c.f[2]);
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 15;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0045D6FC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D6F8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x0045D6F8u) [[unlikely]] return; }
L_0045D6F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_0045D6FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.f[1] = ld32((c.r[3].w[0] + 184u));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0] + 188u));
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.f[2] = ld32((c.r[3].w[0] + 180u));  if (t) { goto L_0045D768; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.f[12] = 0u;
    st32((c.r[2].w[0] + 96u), c.f[2]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D73Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0045D73Cu) [[unlikely]] return; }
L_0045D73C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[20];  goto L_0045D754; }
L_0045D754:
    st32((c.r[16].w[0] + 84u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045D768u) [[unlikely]] return; }
L_0045D768:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0045D7C0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D790u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 253u, depth + 1u); else { c.pc = 0x004FE210u; return; } if (c.pc != 0x0045D790u) [[unlikely]] return; }
L_0045D790:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0045D7A0; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0045D7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[13] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[28].w[0] - 32620u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D7BCu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00F0(c, 449u, depth + 1u); else { c.pc = 0x004C3800u; return; } if (c.pc != 0x0045D7BCu) [[unlikely]] return; }
L_0045D7BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0045D7C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D7C8u);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x0045D7C8u) [[unlikely]] return; }
L_0045D7C8:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 32752u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D7F4u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_00D5(c, 18u, depth + 1u); else { c.pc = 0x004541E0u; return; } if (c.pc != 0x0045D7F4u) [[unlikely]] return; }
L_0045D7F4:
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0045D80C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045D80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0045D830:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D84Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 168u, depth + 1u); else { c.pc = 0x0045DDB0u; return; } if (c.pc != 0x0045D84Cu) [[unlikely]] return; }
L_0045D84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D854u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_008E(c, 50u, depth + 1u); else { c.pc = 0x003396A0u; return; } if (c.pc != 0x0045D854u) [[unlikely]] return; }
L_0045D854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[13] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D878u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_008E(c, 40u, depth + 1u); else { c.pc = 0x00339410u; return; } if (c.pc != 0x0045D878u) [[unlikely]] return; }
L_0045D878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D888u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_008E(c, 34u, depth + 1u); else { c.pc = 0x00339300u; return; } if (c.pc != 0x0045D888u) [[unlikely]] return; }
L_0045D888:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D894u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_008E(c, 187u, depth + 1u); else { c.pc = 0x0033B010u; return; } if (c.pc != 0x0045D894u) [[unlikely]] return; }
L_0045D894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D8ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 61u, depth + 1u); else { c.pc = 0x00369DE0u; return; } if (c.pc != 0x0045D8ACu) [[unlikely]] return; }
L_0045D8AC:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D8BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 208u, depth + 1u); else { c.pc = 0x00327770u; return; } if (c.pc != 0x0045D8BCu) [[unlikely]] return; }
L_0045D8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D8C4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x0045D8C4u) [[unlikely]] return; }
L_0045D8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D8CCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x0045D8CCu) [[unlikely]] return; }
L_0045D8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D8D4u); c.f[12] = ld32((c.r[28].w[0] - 32028u));  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x0045D8D4u) [[unlikely]] return; }
L_0045D8D4:
    c.f[12] = ld32((c.r[28].w[0] - 32028u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D8E4u); st32((c.r[29].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x0045D8E4u) [[unlikely]] return; }
L_0045D8E4:
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D8FCu); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x0045D8FCu) [[unlikely]] return; }
L_0045D8FC:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 124u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[29].w[0] + 140u), 0u);
    c.f[13] = ld32((c.r[29].w[0] + 212u));
    c.f[14] = ld32((c.r[29].w[0] + 216u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D968u); st32((c.r[29].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0089(c, 180u, depth + 1u); else { c.pc = 0x00327390u; return; } if (c.pc != 0x0045D968u) [[unlikely]] return; }
L_0045D968:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D974u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0089(c, 173u, depth + 1u); else { c.pc = 0x003272D0u; return; } if (c.pc != 0x0045D974u) [[unlikely]] return; }
L_0045D974:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u - 1u);
    mmi::pcpyld(c.r[4], c.r[0], c.r[3]);
    st64((c.r[5].w[0] + 64u), c.r[6].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st64((c.r[3].w[0] + 72u), c.r[4].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0045D9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045DA58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29648u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045DA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045D9FCu);  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x0045D9FCu) [[unlikely]] return; }
L_0045D9FC:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_0045DA00:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0045DA44; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29712u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045DA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DA28u);  if (depth < kMaxDepth) unit_008E(c, 217u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0045DA28u) [[unlikely]] return; }
L_0045DA28:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0045DA2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045DA40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0045DA40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0045DA44:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045DA5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DA58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045DA58u) [[unlikely]] return; }
L_0045DA58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045DA5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045DA70:
    set32(c.r[2], ld32((c.r[28].w[0] - 29964u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));  goto L_0045DA84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045DA90; } }
L_0045DA84:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0045DA8C; }
L_0045DA8C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0045DA90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045DAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DAC4u); set32(c.r[4], c.r[4].w[0] + 32576u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045DAC4u) [[unlikely]] return; }
L_0045DAC4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0045DAD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045DAEC; } }
L_0045DAD4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DAE0u); set32(c.r[4], c.r[4].w[0] + 32672u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045DAE0u) [[unlikely]] return; }
L_0045DAE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0045DAE8; }
L_0045DAE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045DAEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045DB00:
    set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0045DB10:
    set32(c.r[2], ld32((c.r[28].w[0] - 29964u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));  goto L_0045DB24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045DB30; } }
L_0045DB24:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0045DB30; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0045DB30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045DB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29964u)));  c.pc = t; return; }
L_0045DB50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0045DBE4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.f[12] = ld32((c.r[2].w[0] + 180u));
    c.f[13] = ld32((c.r[2].w[0] + 184u));
    c.f[14] = ld32((c.r[2].w[0] + 188u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DBD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x0045DBD4u) [[unlikely]] return; }
L_0045DBD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DBE0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x0033B170u; return; } if (c.pc != 0x0045DBE0u) [[unlikely]] return; }
L_0045DBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0045DBE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045DBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0045DC20; }
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045DC1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DC1Cu);  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x0033AB40u; return; } if (c.pc != 0x0045DC1Cu) [[unlikely]] return; }
L_0045DC1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0045DC20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045DC30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045DD18; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0045DD30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DC64u);  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x0033AB40u; return; } if (c.pc != 0x0045DC64u) [[unlikely]] return; }
L_0045DC64:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DC7Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033B0D0u; return; } if (c.pc != 0x0045DC7Cu) [[unlikely]] return; }
L_0045DC7C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DC94u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x0045DC94u) [[unlikely]] return; }
L_0045DC94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.f[12] = ld32((c.r[2].w[0] + 180u));
    c.f[13] = ld32((c.r[2].w[0] + 184u));
    c.f[14] = ld32((c.r[2].w[0] + 188u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DD04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x0045DD04u) [[unlikely]] return; }
L_0045DD04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DD10u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x0033B170u; return; } if (c.pc != 0x0045DD10u) [[unlikely]] return; }
L_0045DD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045DD2C; } }
L_0045DD18:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045DD2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DD2Cu);  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x0033AB40u; return; } if (c.pc != 0x0045DD2Cu) [[unlikely]] return; }
L_0045DD2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0045DD30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045DD40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_0045DD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld64((c.r[5].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0045DD84; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045DD84; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045DD84; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0045DD84:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0045DD9C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DD9Cu); c.r[5].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045DD9Cu) [[unlikely]] return; }
L_0045DD9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045DDB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DDC8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 224u, depth + 1u); else { c.pc = 0x0033B350u; return; } if (c.pc != 0x0045DDC8u) [[unlikely]] return; }
L_0045DDC8:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DDD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 172u, depth + 1u); else { c.pc = 0x0033AB40u; return; } if (c.pc != 0x0045DDD4u) [[unlikely]] return; }
L_0045DDD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DDE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008E(c, 170u, depth + 1u); else { c.pc = 0x0033AAF0u; return; } if (c.pc != 0x0045DDE0u) [[unlikely]] return; }
L_0045DDE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DDECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 216u, depth + 1u); else { c.pc = 0x0033B250u; return; } if (c.pc != 0x0045DDECu) [[unlikely]] return; }
L_0045DDEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 8u)));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 140u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 156u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 164u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 168u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 172u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.f[12] = ld32((c.r[2].w[0] + 180u));
    c.f[13] = ld32((c.r[2].w[0] + 184u));
    c.f[14] = ld32((c.r[2].w[0] + 188u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DE5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x0045DE5Cu) [[unlikely]] return; }
L_0045DE5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DE68u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x0033B170u; return; } if (c.pc != 0x0045DE68u) [[unlikely]] return; }
L_0045DE68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045DE80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045DEEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29712u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045DEC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DEBCu);  if (depth < kMaxDepth) unit_008E(c, 217u, depth + 1u); else { c.pc = 0x0033B260u; return; } if (c.pc != 0x0045DEBCu) [[unlikely]] return; }
L_0045DEBC:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0045DEC0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0045DED8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0045DED8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045DEF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DEECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045DEECu) [[unlikely]] return; }
L_0045DEEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045DEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045DF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045DF84; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DF38u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045DF38u) [[unlikely]] return; }
L_0045DF38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0045E114; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] + 29712u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 29648u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045E110; } }
L_0045DF84:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0045DFF0; }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045DF9Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045DF9Cu) [[unlikely]] return; }
L_0045DF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045E110; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] + 29712u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 29584u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045E110; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0045DFF0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 5u);  goto L_0045E080; }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E004u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045E004u) [[unlikely]] return; }
L_0045E004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045E110; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] + 29712u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 31808u));
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 29520u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31804u));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[2].w[0] + 20u), c.f[1]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045E110; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_0045E080:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0045E110; }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E094u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045E094u) [[unlikely]] return; }
L_0045E094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045E110; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29712u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + 29520u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 31800u));
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x419C0000u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31976u));
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40600000u);
    st32((c.r[2].w[0] + 20u), c.f[1]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 28;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045E110; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045E110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0045E114:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045E120:
    set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_0045E12C; }
L_0045E12C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0045E140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E15Cu); set32(c.r[4], c.r[4].w[0] + 32672u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045E15Cu) [[unlikely]] return; }
L_0045E15C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045E164; }
L_0045E164:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045E180:
    set32(c.r[2], ld32((c.r[28].w[0] - 31172u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0045E190:
    set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0045E1A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));  c.pc = t; return; }
L_0045E1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32528u);  c.pc = t; return; }
L_0045E1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32624u);  c.pc = t; return; }
L_0045E1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32720u);  c.pc = t; return; }
L_0045E1E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 32640u);  c.pc = t; return; }
L_0045E1F0:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E224u); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0045E224u) [[unlikely]] return; }
L_0045E224:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E234u); st32((c.r[29].w[0] + 468u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045E234u) [[unlikely]] return; }
L_0045E234:
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 24u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E25Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0045E25Cu) [[unlikely]] return; }
L_0045E25C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E278u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0045E278u) [[unlikely]] return; }
L_0045E278:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E28Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0045E28Cu) [[unlikely]] return; }
L_0045E28C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E2A8u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0045E2A8u) [[unlikely]] return; }
L_0045E2A8:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E2E0u); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0045E2E0u) [[unlikely]] return; }
L_0045E2E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E2F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0045E2F0u) [[unlikely]] return; }
L_0045E2F0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0045E318; } }
L_0045E2FC:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 24u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[30].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0045E318:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E2FCu | kUnwind; return; } goto L_0045E2FC; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045E374; } }
L_0045E334:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[16].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] + 2u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    mmi::mult(c, 1, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 16;
L_0045E374:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]); c.r[8].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E334u | kUnwind; return; } goto L_0045E334; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0045E3E8; } }
L_0045E390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0045E3C8; } }
L_0045E398:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[16].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] + c.r[8].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_0045E3C8:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[8].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[7], c.r[3].w[0] << 1);
    c.r[7].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = c.r[4].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E398u | kUnwind; return; } goto L_0045E398; }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0045E3E8:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E390u | kUnwind; return; } goto L_0045E390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0045E4D0; } }
L_0045E404:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[6], c.r[5].w[0] >> 1);  goto L_0045E418; }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045E430; } }
L_0045E418:
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0045E430:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045E4B4; } }
L_0045E458:
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[23].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[7].w[0]), c.f[2]);  if (t) { goto L_0045E47C; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045E498; } }
L_0045E47C:
    set32(c.r[6], c.r[4].w[0] >> 1);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0045E498:
    set32(c.r[6], c.r[8].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.f[0] = c.r[6].w[0];
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_0045E4B4:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[6].d[0] != 0ull) { c.r[8].d[0] = c.r[3].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E458u | kUnwind; return; } goto L_0045E458; }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0045E4D0:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E404u | kUnwind; return; } goto L_0045E404; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[4] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0045E5F0; } }
L_0045E504:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0045E518; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045E534; } }
L_0045E518:
    set32(c.r[7], c.r[5].w[0] >> 1);
    c.r[6].d[0] = c.r[5].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0045E534:
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[5] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_0045E5D4; } }
L_0045E55C:
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[22].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.f[5]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[7].w[0] + 4u), c.r[8].w[0]);  if (t) { goto L_0045E58C; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045E5A8; } }
L_0045E58C:
    set32(c.r[6], c.r[4].w[0] >> 1);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0045E5A8:
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    set32(c.r[6], c.r[9].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.budget -= 11;
L_0045E5D4:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.r[6].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[6].d[0] != 0ull) { c.r[9].d[0] = c.r[3].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E55Cu | kUnwind; return; } goto L_0045E55C; }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0045E5F0:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E504u | kUnwind; return; } goto L_0045E504; } }
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E60Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045E60Cu) [[unlikely]] return; }
L_0045E60C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 16u)));  goto L_0045E658; }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[10], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[30].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E650u); st64((c.r[29].w[0] + 24u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0088(c, 24u, depth + 1u); else { c.pc = 0x00320280u; return; } if (c.pc != 0x0045E650u) [[unlikely]] return; }
L_0045E650:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 2;
L_0045E658:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 24452u)));  goto L_0045E6C4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 16u), c.r[18].w[0]);  goto L_0045E6A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E670u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045E670u) [[unlikely]] return; }
L_0045E670:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E680u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045E680u) [[unlikely]] return; }
L_0045E680:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045E69C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E69Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045E69Cu) [[unlikely]] return; }
L_0045E69C:
    st32((c.r[20].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_0045E6A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0045E6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E6B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045E6B0u) [[unlikely]] return; }
L_0045E6B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E6C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045E6C0u) [[unlikely]] return; }
L_0045E6C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 24452u)));
    c.budget -= 1;
L_0045E6C4:
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E6D0u); set32(c.r[4], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045E6D0u) [[unlikely]] return; }
L_0045E6D0:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E6DCu); set32(c.r[5], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0045E6DCu) [[unlikely]] return; }
L_0045E6DC:
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E6E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045E6E8u) [[unlikely]] return; }
L_0045E6E8:
    set32(c.r[5], ld32((c.r[28].w[0] - 24456u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E6F8u); set32(c.r[4], c.r[29].w[0] + 484u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045E6F8u) [[unlikely]] return; }
L_0045E6F8:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E704u); set32(c.r[5], c.r[29].w[0] + 484u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0045E704u) [[unlikely]] return; }
L_0045E704:
    set32(c.r[4], c.r[29].w[0] + 484u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045E710u) [[unlikely]] return; }
L_0045E710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E718u); set32(c.r[4], ld32((c.r[20].w[0] + 16u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x0045E718u) [[unlikely]] return; }
L_0045E718:
    set32(c.r[4], 0u + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E724u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045E724u) [[unlikely]] return; }
L_0045E724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045E76C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x0045E738u) [[unlikely]] return; }
L_0045E738:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 8u);
    set32(c.r[3], c.r[3].w[0] + 7424u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[16].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_0045E76C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 492u), c.r[16].w[0]);  if (t) { goto L_0045E78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E77Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045E77Cu) [[unlikely]] return; }
    goto L_0045E77C;
L_0045E778:
    c.budget -= 1;
L_0045E77C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E78Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045E78Cu) [[unlikely]] return; }
L_0045E78C:
    set32(c.r[6], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[2], 0u - 8u);
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[6].w[0] + 256u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E7B0u); st16((c.r[6].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045E7B0u) [[unlikely]] return; }
L_0045E7B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 492u)));  goto L_0045E7C8; }
    set32(c.r[5], ld32((c.r[28].w[0] - 24444u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E7C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 22u, depth + 1u); else { c.pc = 0x00320240u; return; } if (c.pc != 0x0045E7C4u) [[unlikely]] return; }
L_0045E7C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 1;
L_0045E7C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E7DCu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045E7DCu) [[unlikely]] return; }
L_0045E7DC:
    set32(c.r[5], ld32((c.r[28].w[0] - 24436u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E7ECu); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045E7ECu) [[unlikely]] return; }
L_0045E7EC:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E7F8u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0045E7F8u) [[unlikely]] return; }
L_0045E7F8:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E804u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045E804u) [[unlikely]] return; }
L_0045E804:
    set32(c.r[5], ld32((c.r[28].w[0] - 24432u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E814u); set32(c.r[4], c.r[29].w[0] + 476u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045E814u) [[unlikely]] return; }
L_0045E814:
    set32(c.r[4], c.r[16].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E820u); set32(c.r[5], c.r[29].w[0] + 476u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0045E820u) [[unlikely]] return; }
L_0045E820:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E82Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045E82Cu) [[unlikely]] return; }
L_0045E82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E834u); set32(c.r[4], ld32((c.r[29].w[0] + 492u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x0045E834u) [[unlikely]] return; }
L_0045E834:
    set32(c.r[4], ld32((c.r[29].w[0] + 492u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E844u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0045E844u) [[unlikely]] return; }
L_0045E844:
    set32(c.r[4], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E858u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045E858u) [[unlikely]] return; }
L_0045E858:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045E864u) [[unlikely]] return; }
L_0045E864:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 20u)));  goto L_0045E884; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E87Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x0045E87Cu) [[unlikely]] return; }
L_0045E87C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 2;
L_0045E884:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0045E8F0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 20u), c.r[17].w[0]);  goto L_0045E8CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E89Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045E89Cu) [[unlikely]] return; }
L_0045E89C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E8ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045E8ACu) [[unlikely]] return; }
L_0045E8AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045E8C8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E8C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045E8C8u) [[unlikely]] return; }
L_0045E8C8:
    st32((c.r[20].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_0045E8CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045E8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E8DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045E8DCu) [[unlikely]] return; }
L_0045E8DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E8ECu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045E8ECu) [[unlikely]] return; }
L_0045E8EC:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_0045E8F0:
    set32(c.r[5], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E904u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045E904u) [[unlikely]] return; }
L_0045E904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E90Cu);  if (depth < kMaxDepth) unit_00D7(c, 39u, depth + 1u); else { c.pc = 0x0045C7A0u; return; } if (c.pc != 0x0045E90Cu) [[unlikely]] return; }
L_0045E90C:
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.f[0] = ld32((c.r[28].w[0] - 32208u));
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E92Cu); c.f[14] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00C5(c, 74u, depth + 1u); else { c.pc = 0x00414BB0u; return; } if (c.pc != 0x0045E92Cu) [[unlikely]] return; }
L_0045E92C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E940u); set32(c.r[6], c.r[2].w[0] + 132u);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x0045E940u) [[unlikely]] return; }
L_0045E940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E948u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x0045E948u) [[unlikely]] return; }
L_0045E948:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E954u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00D7(c, 267u, depth + 1u); else { c.pc = 0x0045EAC0u; return; } if (c.pc != 0x0045E954u) [[unlikely]] return; }
L_0045E954:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E960u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x0045E960u) [[unlikely]] return; }
L_0045E960:
    set32(c.r[6], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[6].w[0] + 48u);
    c.budget -= 4;
L_0045E970:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045E970u | kUnwind; return; } goto L_0045E970; } }
    c.f[2] = ld32((c.r[29].w[0] + 448u));
    c.f[1] = ld32((c.r[29].w[0] + 452u));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.f[12] = 0u;
    st32((c.r[6].w[0] + 96u), c.f[2]);
    st32((c.r[6].w[0] + 100u), c.f[1]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[6].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[6].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E9C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0045E9C4u) [[unlikely]] return; }
L_0045E9C4:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E9D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045E9D0u) [[unlikely]] return; }
L_0045E9D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0045E9F0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045E9E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x0045E9E8u) [[unlikely]] return; }
L_0045E9E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0045E9F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA04u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045EA04u) [[unlikely]] return; }
L_0045EA04:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA1Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045EA1Cu) [[unlikely]] return; }
L_0045EA1C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA28u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045EA28u) [[unlikely]] return; }
L_0045EA28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 492u)));  goto L_0045EA40; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 218u, depth + 1u); else { c.pc = 0x00419980u; return; } if (c.pc != 0x0045EA3Cu) [[unlikely]] return; }
L_0045EA3C:
    set32(c.r[16], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 1;
L_0045EA40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0045EA7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045EA50u) [[unlikely]] return; }
L_0045EA50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045EA60u) [[unlikely]] return; }
L_0045EA60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 464u)));  goto L_0045EA80; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045EA7Cu) [[unlikely]] return; }
L_0045EA7C:
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 1;
L_0045EA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EA88u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045EA88u) [[unlikely]] return; }
L_0045EA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_0045EAC0:
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[2]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[2]);
    st32((c.r[5].w[0] + 44u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_0045EB40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] & 65535ull;  if (t) { goto L_0045EB9C; } }
L_0045EB68:
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 13;
L_0045EB9C:
    c.r[2].d[0] = c.r[8].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[8].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EB68u | kUnwind; return; } goto L_0045EB68; }
    c.r[5].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EBBCu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 25u, depth + 1u); else { c.pc = 0x0027C650u; return; } if (c.pc != 0x0045EBBCu) [[unlikely]] return; }
L_0045EBBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 4095ull;
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[4].w[0] + 16u), c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[4].d[0] = c.r[4].d[0] | 1ull;
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045EC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_0045EC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045EC50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EC78u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00D8(c, 194u, depth + 1u); else { c.pc = 0x00462030u; return; } if (c.pc != 0x0045EC78u) [[unlikely]] return; }
L_0045EC78:
    set32(c.r[3], ld32((c.r[2].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 218u));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 212u)));  goto L_0045ECA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0045ECA4; } }
L_0045ECA0:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0045ECA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ECB0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x0045ECB0u) [[unlikely]] return; }
L_0045ECB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045ECC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[28].w[0] - 24448u);  if (t) { goto L_0045ECC4; } }
L_0045ECC0:
    set32(c.r[3], c.r[28].w[0] - 24452u);
    c.budget -= 1;
L_0045ECC4:
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[18].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0045ED64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ECD8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0045ECD8u) [[unlikely]] return; }
L_0045ECD8:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ECE4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045ECE4u) [[unlikely]] return; }
L_0045ECE4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0045ED20; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ECF8u); set32(c.r[4], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045ECF8u) [[unlikely]] return; }
L_0045ECF8:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[17].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED08u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0060(c, 606u, depth + 1u); else { c.pc = 0x00283E70u; return; } if (c.pc != 0x0045ED08u) [[unlikely]] return; }
L_0045ED08:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045ED14u) [[unlikely]] return; }
L_0045ED14:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045ED20u) [[unlikely]] return; }
L_0045ED20:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045ED50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED34u); set32(c.r[4], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045ED34u) [[unlikely]] return; }
L_0045ED34:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED40u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x0045ED40u) [[unlikely]] return; }
L_0045ED40:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045ED4Cu) [[unlikely]] return; }
L_0045ED4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045ED50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED58u);  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x0045ED58u) [[unlikely]] return; }
L_0045ED58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED60u); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045ED60u) [[unlikely]] return; }
L_0045ED60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0045ED64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0045ED80:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ED98u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00D7(c, 39u, depth + 1u); else { c.pc = 0x0045C7A0u; return; } if (c.pc != 0x0045ED98u) [[unlikely]] return; }
L_0045ED98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EDA8u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_00D8(c, 194u, depth + 1u); else { c.pc = 0x00462030u; return; } if (c.pc != 0x0045EDA8u) [[unlikely]] return; }
L_0045EDA8:
    set32(c.r[3], ld32((c.r[2].w[0] + 328u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0045EDC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 4;
L_0045EDC8:
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[14] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EDDCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00C5(c, 74u, depth + 1u); else { c.pc = 0x00414BB0u; return; } if (c.pc != 0x0045EDDCu) [[unlikely]] return; }
L_0045EDDC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EDF0u); set32(c.r[6], c.r[2].w[0] + 132u);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x0045EDF0u) [[unlikely]] return; }
L_0045EDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EDF8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x0045EDF8u) [[unlikely]] return; }
L_0045EDF8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EE04u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00D7(c, 267u, depth + 1u); else { c.pc = 0x0045EAC0u; return; } if (c.pc != 0x0045EE04u) [[unlikely]] return; }
L_0045EE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EE0Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x0045EE0Cu) [[unlikely]] return; }
L_0045EE0C:
    set32(c.r[7], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[7].w[0] + 48u);
    c.budget -= 4;
L_0045EE1C:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EE1Cu | kUnwind; return; } goto L_0045EE1C; } }
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[7].w[0] + 96u), c.f[2]);
    st32((c.r[7].w[0] + 100u), c.f[1]);
    st32((c.r[7].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[7].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[7].w[0] + 108u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0045EE80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0045F070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29776u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_0045EED0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EECCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045EECCu) [[unlikely]] return; }
L_0045EECC:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_0045EED0:
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[19].w[0] + 12u)));  goto L_0045EF40; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045EF1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EEECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045EEECu) [[unlikely]] return; }
L_0045EEEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EEFCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045EEFCu) [[unlikely]] return; }
L_0045EEFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045EF18; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045EF18u) [[unlikely]] return; }
L_0045EF18:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045EF1C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 16u), 0u);  if (t) { goto L_0045EF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045EF2Cu) [[unlikely]] return; }
L_0045EF2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045EF3Cu) [[unlikely]] return; }
L_0045EF3C:
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_0045EF40:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 20u);  goto L_0045EFA0; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045EF94; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045EF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045EF64u) [[unlikely]] return; }
L_0045EF64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF74u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045EF74u) [[unlikely]] return; }
L_0045EF74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045EF90; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045EF90u) [[unlikely]] return; }
L_0045EF90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045EF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EF9Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045EF9Cu) [[unlikely]] return; }
L_0045EF9C:
    set32(c.r[2], c.r[19].w[0] + 20u);
    c.budget -= 1;
L_0045EFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 12u), 0u);  if (t) { goto L_0045EFE8; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 16u);  goto L_0045EFEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EFBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045EFBCu) [[unlikely]] return; }
L_0045EFBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EFCCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045EFCCu) [[unlikely]] return; }
L_0045EFCC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045EFE8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045EFE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045EFE8u) [[unlikely]] return; }
L_0045EFE8:
    set32(c.r[2], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_0045EFEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045F034; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045F034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F008u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F008u) [[unlikely]] return; }
L_0045F008:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F018u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F018u) [[unlikely]] return; }
L_0045F018:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F034; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F034u) [[unlikely]] return; }
L_0045F034:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_0045F05C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29872u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0045F058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0045F058:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_0045F05C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0045F074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F070u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045F070u) [[unlikely]] return; }
L_0045F070:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0045F074:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045F090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));  goto L_0045F10C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045F0E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F0B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F0B8u) [[unlikely]] return; }
L_0045F0B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F0C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F0C8u) [[unlikely]] return; }
L_0045F0C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F0E4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F0E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F0E4u) [[unlikely]] return; }
L_0045F0E4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F0E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24452u), 0u);  if (t) { goto L_0045F108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F0F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F0F8u) [[unlikely]] return; }
L_0045F0F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F108u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F108u) [[unlikely]] return; }
L_0045F108:
    set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));
    c.budget -= 1;
L_0045F10C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 24456u)));  goto L_0045F178; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045F154; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F124u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F124u) [[unlikely]] return; }
L_0045F124:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F134u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F134u) [[unlikely]] return; }
L_0045F134:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F150; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F150u) [[unlikely]] return; }
L_0045F150:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F154:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24448u), 0u);  if (t) { goto L_0045F174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F164u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F164u) [[unlikely]] return; }
L_0045F164:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F174u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F174u) [[unlikely]] return; }
L_0045F174:
    set32(c.r[16], ld32((c.r[28].w[0] - 24456u)));
    c.budget -= 1;
L_0045F178:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24460u)));  goto L_0045F1E4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045F1C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F190u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F190u) [[unlikely]] return; }
L_0045F190:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F1A0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F1A0u) [[unlikely]] return; }
L_0045F1A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F1BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F1BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F1BCu) [[unlikely]] return; }
L_0045F1BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F1C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24456u), 0u);  if (t) { goto L_0045F1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F1D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F1D0u) [[unlikely]] return; }
L_0045F1D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F1E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F1E0u) [[unlikely]] return; }
L_0045F1E0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24460u)));
    c.budget -= 1;
L_0045F1E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24464u)));  goto L_0045F1FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F1F4u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0045F1F4u) [[unlikely]] return; }
L_0045F1F4:
    st32((c.r[28].w[0] - 24460u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 24464u)));
    c.budget -= 2;
L_0045F1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F204u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0045F204u) [[unlikely]] return; }
L_0045F204:
    set32(c.r[16], ld32((c.r[28].w[0] - 24444u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24464u), 0u);  if (t) { goto L_0045F270; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045F250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F220u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F220u) [[unlikely]] return; }
L_0045F220:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F230u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F230u) [[unlikely]] return; }
L_0045F230:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F24C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F24Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F24Cu) [[unlikely]] return; }
L_0045F24C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F250:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24444u), 0u);  if (t) { goto L_0045F270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F260u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F260u) [[unlikely]] return; }
L_0045F260:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F270u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F270u) [[unlikely]] return; }
L_0045F270:
    set32(c.r[16], ld32((c.r[28].w[0] - 24432u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 24436u)));  goto L_0045F2E0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045F2BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F28Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F28Cu) [[unlikely]] return; }
L_0045F28C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F29Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F29Cu) [[unlikely]] return; }
L_0045F29C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F2B8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F2B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F2B8u) [[unlikely]] return; }
L_0045F2B8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F2BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24432u), 0u);  if (t) { goto L_0045F2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F2CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F2CCu) [[unlikely]] return; }
L_0045F2CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F2DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F2DCu) [[unlikely]] return; }
L_0045F2DC:
    set32(c.r[16], ld32((c.r[28].w[0] - 24436u)));
    c.budget -= 1;
L_0045F2E0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24440u)));  goto L_0045F34C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0045F328; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F2F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F2F8u) [[unlikely]] return; }
L_0045F2F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F308u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F308u) [[unlikely]] return; }
L_0045F308:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F324; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F324u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F324u) [[unlikely]] return; }
L_0045F324:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F328:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 24436u), 0u);  if (t) { goto L_0045F348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F338u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F338u) [[unlikely]] return; }
L_0045F338:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F348u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F348u) [[unlikely]] return; }
L_0045F348:
    set32(c.r[4], ld32((c.r[28].w[0] - 24440u)));
    c.budget -= 1;
L_0045F34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F354u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0045F354u) [[unlikely]] return; }
L_0045F354:
    st32((c.r[28].w[0] - 24440u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045F370:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F39Cu); set32(c.r[4], c.r[4].w[0] - 32385u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0045F39Cu) [[unlikely]] return; }
L_0045F39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F3A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x0045F3A4u) [[unlikely]] return; }
L_0045F3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 24464u), c.r[2].w[0]);  if (t) { goto L_0045F3B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F3B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0045F3B8u) [[unlikely]] return; }
L_0045F3B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F3C4u); set32(c.r[4], c.r[4].w[0] - 32371u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0045F3C4u) [[unlikely]] return; }
L_0045F3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F3CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x0045F3CCu) [[unlikely]] return; }
L_0045F3CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 24460u), c.r[2].w[0]);  if (t) { goto L_0045F3E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F3E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0045F3E0u) [[unlikely]] return; }
L_0045F3E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F3ECu); st32((c.r[29].w[0] + 140u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045F3ECu) [[unlikely]] return; }
L_0045F3EC:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[4], 0u + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F3FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045F3FCu) [[unlikely]] return; }
L_0045F3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045F46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F40Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x0045F40Cu) [[unlikely]] return; }
L_0045F40C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F428u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x0045F428u) [[unlikely]] return; }
L_0045F428:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F434u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x0045F434u) [[unlikely]] return; }
L_0045F434:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F440u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x0045F440u) [[unlikely]] return; }
L_0045F440:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F44Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x0045F44Cu) [[unlikely]] return; }
L_0045F44C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F458u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x0045F458u) [[unlikely]] return; }
L_0045F458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F464u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x0045F464u) [[unlikely]] return; }
L_0045F464:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0045F46C:
    set32(c.r[17], ld32((c.r[28].w[0] - 24456u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[6], ld32((c.r[28].w[0] - 24456u)));  goto L_0045F4DC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 24456u), c.r[16].w[0]);  goto L_0045F4B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F488u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F488u) [[unlikely]] return; }
L_0045F488:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F498u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F498u) [[unlikely]] return; }
L_0045F498:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F4B4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F4B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F4B4u) [[unlikely]] return; }
L_0045F4B4:
    st32((c.r[28].w[0] - 24456u), c.r[16].w[0]);
    c.budget -= 1;
L_0045F4B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045F4D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F4C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F4C8u) [[unlikely]] return; }
L_0045F4C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F4D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F4D8u) [[unlikely]] return; }
L_0045F4D8:
    set32(c.r[6], ld32((c.r[28].w[0] - 24456u)));
    c.budget -= 1;
L_0045F4DC:
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24456u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24456u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24456u)));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F52Cu); st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045F52Cu) [[unlikely]] return; }
L_0045F52C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 24452u)));  goto L_0045F548; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F540u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x0045F540u) [[unlikely]] return; }
L_0045F540:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 24452u)));
    c.budget -= 2;
L_0045F548:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 24464u)));  goto L_0045F5B4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 24452u), c.r[16].w[0]);  goto L_0045F590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F560u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F560u) [[unlikely]] return; }
L_0045F560:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F570u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F570u) [[unlikely]] return; }
L_0045F570:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F58C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F58Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F58Cu) [[unlikely]] return; }
L_0045F58C:
    st32((c.r[28].w[0] - 24452u), c.r[16].w[0]);
    c.budget -= 1;
L_0045F590:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045F5B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F5A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F5A0u) [[unlikely]] return; }
L_0045F5A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F5B0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F5B0u) [[unlikely]] return; }
L_0045F5B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24464u)));
    c.budget -= 1;
L_0045F5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F5BCu);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x0045F5BCu) [[unlikely]] return; }
L_0045F5BC:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 8u)));  goto L_0045F664; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F5E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045F5E0u) [[unlikely]] return; }
L_0045F5E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045F5F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F5F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0045F5F0u) [[unlikely]] return; }
L_0045F5F0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045F5F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045F618; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F658; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F658; } }
L_0045F618:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045F640; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045F65C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F658; } }
L_0045F640:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045F658; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045F658:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045F65C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 2;
L_0045F664:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));  goto L_0045F6D0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), c.r[17].w[0]);  goto L_0045F6AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F67Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F67Cu) [[unlikely]] return; }
L_0045F67C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F68Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F68Cu) [[unlikely]] return; }
L_0045F68C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045F6A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F6A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045F6A8u) [[unlikely]] return; }
L_0045F6A8:
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_0045F6AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045F6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F6BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045F6BCu) [[unlikely]] return; }
L_0045F6BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F6CCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045F6CCu) [[unlikely]] return; }
L_0045F6CC:
    set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));
    c.budget -= 1;
L_0045F6D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_0045F770; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F6ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045F6ECu) [[unlikely]] return; }
L_0045F6EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045F700; }
    goto L_0045F6F4;
L_0045F6F0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045F6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F6FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0045F6FCu) [[unlikely]] return; }
L_0045F6FC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045F700:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045F724; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F764; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F764; } }
L_0045F724:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045F74C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045F768; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F764; } }
L_0045F74C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045F764; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045F764:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045F768:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_0045F770:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[7].d[0] = ld16((c.r[2].w[0]));  goto L_0045F820; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F79Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045F79Cu) [[unlikely]] return; }
L_0045F79C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045F7B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F7ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0045F7ACu) [[unlikely]] return; }
L_0045F7AC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045F7B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045F7D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F814; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F814; } }
L_0045F7D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045F7FC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045F818; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045F814; } }
L_0045F7FC:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045F814; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045F814:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045F818:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_0045F820:
    set32(c.r[6], 0u - 3841u);
    set32(c.r[3], 0u - 15u);
    set32(c.r[4], 0u + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 1280ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24452u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F850u); st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045F850u) [[unlikely]] return; }
L_0045F850:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));  goto L_0045F8B0; }
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
L_0045F8B0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0045F90C; }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045F8DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F8DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0045F908; }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045F904; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F904:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0045F908:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0045F90C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0045F970; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045F944; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F944:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0045F96C; }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045F968; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045F968:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0045F96C:
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0045F970:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 20u), c.r[17].w[0]);  goto L_0045FA1C; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F998u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045F998u) [[unlikely]] return; }
L_0045F998:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045F9AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045F9A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0045F9A8u) [[unlikely]] return; }
L_0045F9A8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045F9AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045F9D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FA10; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FA10; } }
L_0045F9D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045F9F8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045FA14; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FA10; } }
L_0045F9F8:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045FA10; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045FA10:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045FA14:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 2;
L_0045FA1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24460u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 56u);  goto L_0045FC48; }
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FA34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045FA34u) [[unlikely]] return; }
L_0045FA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045FA8C; } }
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
L_0045FA8C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0045FAEC; }
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045FABC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045FABC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0045FAE8; }
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045FAE4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045FAE4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0045FAE8:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0045FAEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0045FB50; }
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045FB24; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045FB24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0045FB4C; }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045FB48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045FB48:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0045FB4C:
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0045FB50:
    set32(c.r[4], 0u + 24u);
    st32((c.r[16].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FB64u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045FB64u) [[unlikely]] return; }
L_0045FB64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));  goto L_0045FB9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FB78u); set32(c.r[4], ld32((c.r[28].w[0] - 24460u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x0045FB78u) [[unlikely]] return; }
L_0045FB78:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FB94u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0086(c, 15u, depth + 1u); else { c.pc = 0x003181E0u; return; } if (c.pc != 0x0045FB94u) [[unlikely]] return; }
L_0045FB94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[28].w[0] - 24452u)));
    c.budget -= 2;
L_0045FB9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0045FC3C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045FBC8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FBC4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045FBC4u) [[unlikely]] return; }
L_0045FBC4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045FBC8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0045FBF0; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0045FC30; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0045FC30; } }
L_0045FBF0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0045FC18; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0045FC34; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0045FC30; } }
L_0045FC18:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045FC30; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0045FC30:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045FC34:
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0045FC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FC44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 384u, depth + 1u); else { c.pc = 0x0031B670u; return; } if (c.pc != 0x0045FC44u) [[unlikely]] return; }
L_0045FC44:
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_0045FC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FC50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045FC50u) [[unlikely]] return; }
L_0045FC50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 24448u)));  goto L_0045FC6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FC64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x0045FC64u) [[unlikely]] return; }
L_0045FC64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 24448u)));
    c.budget -= 2;
L_0045FC6C:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 24464u)));  goto L_0045FCD8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 24448u), c.r[16].w[0]);  goto L_0045FCB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FC84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045FC84u) [[unlikely]] return; }
L_0045FC84:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FC94u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045FC94u) [[unlikely]] return; }
L_0045FC94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045FCB0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FCB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045FCB0u) [[unlikely]] return; }
L_0045FCB0:
    st32((c.r[28].w[0] - 24448u), c.r[16].w[0]);
    c.budget -= 1;
L_0045FCB4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045FCD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FCC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045FCC4u) [[unlikely]] return; }
L_0045FCC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FCD4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045FCD4u) [[unlikely]] return; }
L_0045FCD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24464u)));
    c.budget -= 1;
L_0045FCD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FCE0u);  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x0045FCE0u) [[unlikely]] return; }
L_0045FCE0:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 8u)));  goto L_0045FD88; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FD04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045FD04u) [[unlikely]] return; }
L_0045FD04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045FD18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FD14u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0045FD14u) [[unlikely]] return; }
L_0045FD14:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045FD18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045FD3C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FD7C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FD7C; } }
L_0045FD3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045FD64; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045FD80; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FD7C; } }
L_0045FD64:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045FD7C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045FD7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045FD80:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 2;
L_0045FD88:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));  goto L_0045FDF4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 8u), c.r[17].w[0]);  goto L_0045FDD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FDA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045FDA0u) [[unlikely]] return; }
L_0045FDA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FDB0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045FDB0u) [[unlikely]] return; }
L_0045FDB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045FDCC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FDCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045FDCCu) [[unlikely]] return; }
L_0045FDCC:
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_0045FDD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045FDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FDE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045FDE0u) [[unlikely]] return; }
L_0045FDE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FDF0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045FDF0u) [[unlikely]] return; }
L_0045FDF0:
    set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));
    c.budget -= 1;
L_0045FDF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_0045FE94; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FE10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045FE10u) [[unlikely]] return; }
L_0045FE10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045FE24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FE20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0045FE20u) [[unlikely]] return; }
L_0045FE20:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045FE24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045FE48; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FE88; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FE88; } }
L_0045FE48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045FE70; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045FE8C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FE88; } }
L_0045FE70:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045FE88; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045FE88:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045FE8C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_0045FE94:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 24448u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[7].d[0] = ld16((c.r[2].w[0]));  goto L_0045FF44; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FEC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045FEC0u) [[unlikely]] return; }
L_0045FEC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));  goto L_0045FED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FED0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x0045FED0u) [[unlikely]] return; }
L_0045FED0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0045FED4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0045FEF8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FF38; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FF38; } }
L_0045FEF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045FF20; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  goto L_0045FF3C; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0045FF38; } }
L_0045FF20:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045FF38; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045FF38:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0045FF3C:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_0045FF44:
    set32(c.r[6], 0u - 3841u);
    set32(c.r[3], 0u - 15u);
    set32(c.r[4], 0u + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 1280ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 24448u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045FF74u); st16((c.r[6].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045FF74u) [[unlikely]] return; }
L_0045FF74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 28u));  goto L_0045FFD4; }
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
L_0045FFD4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_00D8(c, 2u, depth); }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_00D8(c, 1u, depth); } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_00D8(c, 1u, depth);
}

}
