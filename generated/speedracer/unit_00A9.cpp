#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A9[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128,
    0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0,
    192, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0,
    0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266,
    0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0,
    0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361,
    0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0,
    0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378,
    0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0,
    0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0,
    0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0,
    0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412,
    0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0,
    431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 438, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0,
    0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455,
    0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0,
    464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0,
    0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 480, 0,
    0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0,
    0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 497,
    0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0,
    506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0,
};

void unit_00A9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A4000;
    case 2u: goto L_003A4038;
    case 3u: goto L_003A4088;
    case 4u: goto L_003A409C;
    case 5u: goto L_003A40F0;
    case 6u: goto L_003A4108;
    case 7u: goto L_003A4178;
    case 8u: goto L_003A4190;
    case 9u: goto L_003A4198;
    case 10u: goto L_003A41A8;
    case 11u: goto L_003A41C0;
    case 12u: goto L_003A4228;
    case 13u: goto L_003A4260;
    case 14u: goto L_003A4278;
    case 15u: goto L_003A4284;
    case 16u: goto L_003A4294;
    case 17u: goto L_003A42B0;
    case 18u: goto L_003A4300;
    case 19u: goto L_003A4320;
    case 20u: goto L_003A4330;
    case 21u: goto L_003A4340;
    case 22u: goto L_003A4360;
    case 23u: goto L_003A43C8;
    case 24u: goto L_003A43EC;
    case 25u: goto L_003A43F4;
    case 26u: goto L_003A4410;
    case 27u: goto L_003A4428;
    case 28u: goto L_003A4434;
    case 29u: goto L_003A4444;
    case 30u: goto L_003A4460;
    case 31u: goto L_003A44C8;
    case 32u: goto L_003A4504;
    case 33u: goto L_003A450C;
    case 34u: goto L_003A4528;
    case 35u: goto L_003A4540;
    case 36u: goto L_003A454C;
    case 37u: goto L_003A455C;
    case 38u: goto L_003A4578;
    case 39u: goto L_003A45A4;
    case 40u: goto L_003A45DC;
    case 41u: goto L_003A45F8;
    case 42u: goto L_003A4624;
    case 43u: goto L_003A4648;
    case 44u: goto L_003A4690;
    case 45u: goto L_003A46A8;
    case 46u: goto L_003A46B4;
    case 47u: goto L_003A46C4;
    case 48u: goto L_003A46E0;
    case 49u: goto L_003A4728;
    case 50u: goto L_003A4750;
    case 51u: goto L_003A4768;
    case 52u: goto L_003A4774;
    case 53u: goto L_003A4784;
    case 54u: goto L_003A47A0;
    case 55u: goto L_003A481C;
    case 56u: goto L_003A4864;
    case 57u: goto L_003A486C;
    case 58u: goto L_003A4874;
    case 59u: goto L_003A4898;
    case 60u: goto L_003A48C8;
    case 61u: goto L_003A48E0;
    case 62u: goto L_003A48F0;
    case 63u: goto L_003A4918;
    case 64u: goto L_003A4940;
    case 65u: goto L_003A499C;
    case 66u: goto L_003A49C0;
    case 67u: goto L_003A4A1C;
    case 68u: goto L_003A4A30;
    case 69u: goto L_003A4A44;
    case 70u: goto L_003A4A5C;
    case 71u: goto L_003A4AC0;
    case 72u: goto L_003A4AE0;
    case 73u: goto L_003A4B10;
    case 74u: goto L_003A4B3C;
    case 75u: goto L_003A4B70;
    case 76u: goto L_003A4BB8;
    case 77u: goto L_003A4BE4;
    case 78u: goto L_003A4BF8;
    case 79u: goto L_003A4C24;
    case 80u: goto L_003A4C4C;
    case 81u: goto L_003A4C54;
    case 82u: goto L_003A4C64;
    case 83u: goto L_003A4CA0;
    case 84u: goto L_003A4D10;
    case 85u: goto L_003A4D54;
    case 86u: goto L_003A4D5C;
    case 87u: goto L_003A4D90;
    case 88u: goto L_003A4DB4;
    case 89u: goto L_003A4DE0;
    case 90u: goto L_003A4DF8;
    case 91u: goto L_003A4E1C;
    case 92u: goto L_003A4E38;
    case 93u: goto L_003A4E7C;
    case 94u: goto L_003A4EB0;
    case 95u: goto L_003A4F58;
    case 96u: goto L_003A4FCC;
    case 97u: goto L_003A4FF0;
    case 98u: goto L_003A5068;
    case 99u: goto L_003A50B8;
    case 100u: goto L_003A50E0;
    case 101u: goto L_003A5110;
    case 102u: goto L_003A512C;
    case 103u: goto L_003A513C;
    case 104u: goto L_003A5160;
    case 105u: goto L_003A5178;
    case 106u: goto L_003A51CC;
    case 107u: goto L_003A51F4;
    case 108u: goto L_003A5218;
    case 109u: goto L_003A5268;
    case 110u: goto L_003A5270;
    case 111u: goto L_003A5298;
    case 112u: goto L_003A52B0;
    case 113u: goto L_003A52D8;
    case 114u: goto L_003A5348;
    case 115u: goto L_003A5358;
    case 116u: goto L_003A536C;
    case 117u: goto L_003A5388;
    case 118u: goto L_003A53B8;
    case 119u: goto L_003A5410;
    case 120u: goto L_003A5440;
    case 121u: goto L_003A54B0;
    case 122u: goto L_003A54C8;
    case 123u: goto L_003A54E0;
    case 124u: goto L_003A54FC;
    case 125u: goto L_003A5528;
    case 126u: goto L_003A5558;
    case 127u: goto L_003A5570;
    case 128u: goto L_003A557C;
    case 129u: goto L_003A5588;
    case 130u: goto L_003A5590;
    case 131u: goto L_003A5598;
    case 132u: goto L_003A55A8;
    case 133u: goto L_003A55C8;
    case 134u: goto L_003A55F8;
    case 135u: goto L_003A5600;
    case 136u: goto L_003A562C;
    case 137u: goto L_003A5648;
    case 138u: goto L_003A5688;
    case 139u: goto L_003A56A0;
    case 140u: goto L_003A56C4;
    case 141u: goto L_003A56E0;
    case 142u: goto L_003A56F0;
    case 143u: goto L_003A5718;
    case 144u: goto L_003A5758;
    case 145u: goto L_003A5764;
    case 146u: goto L_003A5784;
    case 147u: goto L_003A5794;
    case 148u: goto L_003A57B0;
    case 149u: goto L_003A57B8;
    case 150u: goto L_003A57D8;
    case 151u: goto L_003A57EC;
    case 152u: goto L_003A580C;
    case 153u: goto L_003A5818;
    case 154u: goto L_003A5878;
    case 155u: goto L_003A58CC;
    case 156u: goto L_003A58E8;
    case 157u: goto L_003A5910;
    case 158u: goto L_003A5924;
    case 159u: goto L_003A5998;
    case 160u: goto L_003A59B0;
    case 161u: goto L_003A59C8;
    case 162u: goto L_003A59E0;
    case 163u: goto L_003A5A18;
    case 164u: goto L_003A5A28;
    case 165u: goto L_003A5A38;
    case 166u: goto L_003A5A58;
    case 167u: goto L_003A5A64;
    case 168u: goto L_003A5A90;
    case 169u: goto L_003A5AA8;
    case 170u: goto L_003A5ABC;
    case 171u: goto L_003A5ACC;
    case 172u: goto L_003A5AE0;
    case 173u: goto L_003A5AE8;
    case 174u: goto L_003A5B08;
    case 175u: goto L_003A5B1C;
    case 176u: goto L_003A5B40;
    case 177u: goto L_003A5B48;
    case 178u: goto L_003A5B90;
    case 179u: goto L_003A5BA4;
    case 180u: goto L_003A5BE4;
    case 181u: goto L_003A5BF8;
    case 182u: goto L_003A5C14;
    case 183u: goto L_003A5C28;
    case 184u: goto L_003A5C54;
    case 185u: goto L_003A5C60;
    case 186u: goto L_003A5C68;
    case 187u: goto L_003A5C7C;
    case 188u: goto L_003A5CA8;
    case 189u: goto L_003A5CC8;
    case 190u: goto L_003A5CF0;
    case 191u: goto L_003A5CF8;
    case 192u: goto L_003A5D00;
    case 193u: goto L_003A5D08;
    case 194u: goto L_003A5D24;
    case 195u: goto L_003A5D38;
    case 196u: goto L_003A5D58;
    case 197u: goto L_003A5D64;
    case 198u: goto L_003A5D90;
    case 199u: goto L_003A5DA8;
    case 200u: goto L_003A5DBC;
    case 201u: goto L_003A5DCC;
    case 202u: goto L_003A5DE0;
    case 203u: goto L_003A5DE8;
    case 204u: goto L_003A5E08;
    case 205u: goto L_003A5E1C;
    case 206u: goto L_003A5E40;
    case 207u: goto L_003A5E48;
    case 208u: goto L_003A5F40;
    case 209u: goto L_003A5F78;
    case 210u: goto L_003A5F8C;
    case 211u: goto L_003A6000;
    case 212u: goto L_003A6014;
    case 213u: goto L_003A6034;
    case 214u: goto L_003A6040;
    case 215u: goto L_003A607C;
    case 216u: goto L_003A60A8;
    case 217u: goto L_003A60C8;
    case 218u: goto L_003A61A8;
    case 219u: goto L_003A61B0;
    case 220u: goto L_003A61E0;
    case 221u: goto L_003A61E8;
    case 222u: goto L_003A6228;
    case 223u: goto L_003A626C;
    case 224u: goto L_003A6274;
    case 225u: goto L_003A628C;
    case 226u: goto L_003A6294;
    case 227u: goto L_003A62A0;
    case 228u: goto L_003A62B4;
    case 229u: goto L_003A62C4;
    case 230u: goto L_003A62E0;
    case 231u: goto L_003A62E8;
    case 232u: goto L_003A6308;
    case 233u: goto L_003A631C;
    case 234u: goto L_003A633C;
    case 235u: goto L_003A6348;
    case 236u: goto L_003A6398;
    case 237u: goto L_003A63C4;
    case 238u: goto L_003A63D8;
    case 239u: goto L_003A63FC;
    case 240u: goto L_003A6410;
    case 241u: goto L_003A6440;
    case 242u: goto L_003A6480;
    case 243u: goto L_003A6488;
    case 244u: goto L_003A6494;
    case 245u: goto L_003A64AC;
    case 246u: goto L_003A64C0;
    case 247u: goto L_003A64D0;
    case 248u: goto L_003A64F4;
    case 249u: goto L_003A6508;
    case 250u: goto L_003A6528;
    case 251u: goto L_003A6530;
    case 252u: goto L_003A6570;
    case 253u: goto L_003A6584;
    case 254u: goto L_003A659C;
    case 255u: goto L_003A65CC;
    case 256u: goto L_003A65E0;
    case 257u: goto L_003A6600;
    case 258u: goto L_003A6608;
    case 259u: goto L_003A6620;
    case 260u: goto L_003A6634;
    case 261u: goto L_003A6660;
    case 262u: goto L_003A66B0;
    case 263u: goto L_003A66C4;
    case 264u: goto L_003A675C;
    case 265u: goto L_003A6770;
    case 266u: goto L_003A677C;
    case 267u: goto L_003A6788;
    case 268u: goto L_003A679C;
    case 269u: goto L_003A67E0;
    case 270u: goto L_003A67FC;
    case 271u: goto L_003A6818;
    case 272u: goto L_003A6840;
    case 273u: goto L_003A6854;
    case 274u: goto L_003A6894;
    case 275u: goto L_003A68A8;
    case 276u: goto L_003A68C4;
    case 277u: goto L_003A68D8;
    case 278u: goto L_003A68E8;
    case 279u: goto L_003A6900;
    case 280u: goto L_003A6914;
    case 281u: goto L_003A6954;
    case 282u: goto L_003A6968;
    case 283u: goto L_003A6984;
    case 284u: goto L_003A6998;
    case 285u: goto L_003A69B0;
    case 286u: goto L_003A69FC;
    case 287u: goto L_003A6A10;
    case 288u: goto L_003A6A38;
    case 289u: goto L_003A6A50;
    case 290u: goto L_003A6A78;
    case 291u: goto L_003A6A94;
    case 292u: goto L_003A6AD4;
    case 293u: goto L_003A6AE8;
    case 294u: goto L_003A6B04;
    case 295u: goto L_003A6B20;
    case 296u: goto L_003A6B34;
    case 297u: goto L_003A6B48;
    case 298u: goto L_003A6B64;
    case 299u: goto L_003A6BA4;
    case 300u: goto L_003A6BB8;
    case 301u: goto L_003A6BEC;
    case 302u: goto L_003A6C08;
    case 303u: goto L_003A6C7C;
    case 304u: goto L_003A6CB4;
    case 305u: goto L_003A6CCC;
    case 306u: goto L_003A6CD8;
    case 307u: goto L_003A6D28;
    case 308u: goto L_003A6D98;
    case 309u: goto L_003A6DA8;
    case 310u: goto L_003A6DBC;
    case 311u: goto L_003A6DD4;
    case 312u: goto L_003A6E10;
    case 313u: goto L_003A6E40;
    case 314u: goto L_003A6E78;
    case 315u: goto L_003A6EB8;
    case 316u: goto L_003A6F08;
    case 317u: goto L_003A6F38;
    case 318u: goto L_003A6F78;
    case 319u: goto L_003A6FDC;
    case 320u: goto L_003A6FF4;
    case 321u: goto L_003A700C;
    case 322u: goto L_003A7024;
    case 323u: goto L_003A703C;
    case 324u: goto L_003A7054;
    case 325u: goto L_003A706C;
    case 326u: goto L_003A7084;
    case 327u: goto L_003A709C;
    case 328u: goto L_003A70B4;
    case 329u: goto L_003A70CC;
    case 330u: goto L_003A7158;
    case 331u: goto L_003A7174;
    case 332u: goto L_003A7188;
    case 333u: goto L_003A7194;
    case 334u: goto L_003A71B0;
    case 335u: goto L_003A71BC;
    case 336u: goto L_003A71D0;
    case 337u: goto L_003A71DC;
    case 338u: goto L_003A71F8;
    case 339u: goto L_003A7210;
    case 340u: goto L_003A721C;
    case 341u: goto L_003A7238;
    case 342u: goto L_003A7248;
    case 343u: goto L_003A7258;
    case 344u: goto L_003A72C8;
    case 345u: goto L_003A72CC;
    case 346u: goto L_003A72F4;
    case 347u: goto L_003A7304;
    case 348u: goto L_003A7310;
    case 349u: goto L_003A7348;
    case 350u: goto L_003A735C;
    case 351u: goto L_003A736C;
    case 352u: goto L_003A7378;
    case 353u: goto L_003A7388;
    case 354u: goto L_003A7394;
    case 355u: goto L_003A73A4;
    case 356u: goto L_003A73B0;
    case 357u: goto L_003A73C0;
    case 358u: goto L_003A73CC;
    case 359u: goto L_003A73DC;
    case 360u: goto L_003A73E8;
    case 361u: goto L_003A73FC;
    case 362u: goto L_003A740C;
    case 363u: goto L_003A7418;
    case 364u: goto L_003A7428;
    case 365u: goto L_003A7434;
    case 366u: goto L_003A7444;
    case 367u: goto L_003A7450;
    case 368u: goto L_003A7460;
    case 369u: goto L_003A746C;
    case 370u: goto L_003A7478;
    case 371u: goto L_003A7488;
    case 372u: goto L_003A7494;
    case 373u: goto L_003A74A0;
    case 374u: goto L_003A74A8;
    case 375u: goto L_003A74C8;
    case 376u: goto L_003A74D8;
    case 377u: goto L_003A74EC;
    case 378u: goto L_003A74FC;
    case 379u: goto L_003A7508;
    case 380u: goto L_003A7518;
    case 381u: goto L_003A7524;
    case 382u: goto L_003A7534;
    case 383u: goto L_003A7540;
    case 384u: goto L_003A7550;
    case 385u: goto L_003A755C;
    case 386u: goto L_003A756C;
    case 387u: goto L_003A7578;
    case 388u: goto L_003A758C;
    case 389u: goto L_003A759C;
    case 390u: goto L_003A75A8;
    case 391u: goto L_003A75B8;
    case 392u: goto L_003A75C4;
    case 393u: goto L_003A75D4;
    case 394u: goto L_003A75E0;
    case 395u: goto L_003A75EC;
    case 396u: goto L_003A75F8;
    case 397u: goto L_003A7608;
    case 398u: goto L_003A7614;
    case 399u: goto L_003A7624;
    case 400u: goto L_003A7630;
    case 401u: goto L_003A763C;
    case 402u: goto L_003A765C;
    case 403u: goto L_003A766C;
    case 404u: goto L_003A7678;
    case 405u: goto L_003A7694;
    case 406u: goto L_003A76A0;
    case 407u: goto L_003A76B0;
    case 408u: goto L_003A76BC;
    case 409u: goto L_003A76D0;
    case 410u: goto L_003A76E0;
    case 411u: goto L_003A76EC;
    case 412u: goto L_003A76FC;
    case 413u: goto L_003A7708;
    case 414u: goto L_003A7718;
    case 415u: goto L_003A7724;
    case 416u: goto L_003A7734;
    case 417u: goto L_003A7740;
    case 418u: goto L_003A7750;
    case 419u: goto L_003A775C;
    case 420u: goto L_003A7770;
    case 421u: goto L_003A7780;
    case 422u: goto L_003A778C;
    case 423u: goto L_003A779C;
    case 424u: goto L_003A77A8;
    case 425u: goto L_003A77B8;
    case 426u: goto L_003A77C4;
    case 427u: goto L_003A77D0;
    case 428u: goto L_003A77DC;
    case 429u: goto L_003A77E8;
    case 430u: goto L_003A77F4;
    case 431u: goto L_003A7800;
    case 432u: goto L_003A780C;
    case 433u: goto L_003A7818;
    case 434u: goto L_003A7838;
    case 435u: goto L_003A788C;
    case 436u: goto L_003A78A0;
    case 437u: goto L_003A78A8;
    case 438u: goto L_003A78B0;
    case 439u: goto L_003A78B4;
    case 440u: goto L_003A78EC;
    case 441u: goto L_003A78FC;
    case 442u: goto L_003A7908;
    case 443u: goto L_003A7940;
    case 444u: goto L_003A7950;
    case 445u: goto L_003A7964;
    case 446u: goto L_003A7974;
    case 447u: goto L_003A7984;
    case 448u: goto L_003A7998;
    case 449u: goto L_003A79A8;
    case 450u: goto L_003A79B4;
    case 451u: goto L_003A79C4;
    case 452u: goto L_003A79D0;
    case 453u: goto L_003A79E0;
    case 454u: goto L_003A79EC;
    case 455u: goto L_003A79FC;
    case 456u: goto L_003A7A08;
    case 457u: goto L_003A7A18;
    case 458u: goto L_003A7A24;
    case 459u: goto L_003A7A38;
    case 460u: goto L_003A7A48;
    case 461u: goto L_003A7A54;
    case 462u: goto L_003A7A64;
    case 463u: goto L_003A7A70;
    case 464u: goto L_003A7A80;
    case 465u: goto L_003A7A8C;
    case 466u: goto L_003A7A98;
    case 467u: goto L_003A7AA4;
    case 468u: goto L_003A7AC4;
    case 469u: goto L_003A7AD0;
    case 470u: goto L_003A7ADC;
    case 471u: goto L_003A7AE8;
    case 472u: goto L_003A7AF8;
    case 473u: goto L_003A7B04;
    case 474u: goto L_003A7B0C;
    case 475u: goto L_003A7B20;
    case 476u: goto L_003A7B40;
    case 477u: goto L_003A7B4C;
    case 478u: goto L_003A7B5C;
    case 479u: goto L_003A7B68;
    case 480u: goto L_003A7B78;
    case 481u: goto L_003A7B88;
    case 482u: goto L_003A7B94;
    case 483u: goto L_003A7BA4;
    case 484u: goto L_003A7BB4;
    case 485u: goto L_003A7BC0;
    case 486u: goto L_003A7BD0;
    case 487u: goto L_003A7BE4;
    case 488u: goto L_003A7BF0;
    case 489u: goto L_003A7C04;
    case 490u: goto L_003A7C18;
    case 491u: goto L_003A7C28;
    case 492u: goto L_003A7C34;
    case 493u: goto L_003A7C44;
    case 494u: goto L_003A7C50;
    case 495u: goto L_003A7C60;
    case 496u: goto L_003A7C6C;
    case 497u: goto L_003A7C7C;
    case 498u: goto L_003A7C88;
    case 499u: goto L_003A7C98;
    case 500u: goto L_003A7CA4;
    case 501u: goto L_003A7CB8;
    case 502u: goto L_003A7CC8;
    case 503u: goto L_003A7CD4;
    case 504u: goto L_003A7CE4;
    case 505u: goto L_003A7CF0;
    case 506u: goto L_003A7D00;
    case 507u: goto L_003A7D0C;
    case 508u: goto L_003A7D1C;
    case 509u: goto L_003A7D28;
    case 510u: goto L_003A7D34;
    case 511u: goto L_003A7D40;
    case 512u: goto L_003A7DBC;
    case 513u: goto L_003A7DC0;
    case 514u: goto L_003A7E20;
    case 515u: goto L_003A7E34;
    case 516u: goto L_003A7E3C;
    case 517u: goto L_003A7E70;
    case 518u: goto L_003A7EA0;
    case 519u: goto L_003A7EC0;
    case 520u: goto L_003A7EC8;
    case 521u: goto L_003A7ED4;
    case 522u: goto L_003A7EDC;
    case 523u: goto L_003A7EF4;
    case 524u: goto L_003A7F3C;
    case 525u: goto L_003A7F44;
    case 526u: goto L_003A7F4C;
    case 527u: goto L_003A7FC0;
    case 528u: goto L_003A7FF8;
    default: bad_entry(c, 0x003A4000u); return;
    }
L_003A4000:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[23].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A4038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = ld32((c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    c.r[10].d[0] = ld64((c.r[4].w[0] + 22952u));
    c.r[9].d[0] = c.r[8].d[0] & 2048ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[9], 0u + 2u);  if (t) { goto L_003A4064; } }
    c.r[2].d[0] = ld32((c.r[3].w[0]));
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_003A4064:
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    if (c.r[8].d[0] == 0) c.r[9].d[0] = 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] << (c.r[8].w[0] & 63u);
    c.r[2].d[0] = c.r[2].d[0] << (c.r[9].w[0] & 63u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A4088:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A409Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A409Cu) [[unlikely]] return; }
L_003A409C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[16].d[0] = ld32((c.r[3].w[0]));
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    c.r[10].d[0] = ld64((c.r[4].w[0] + 22952u));
    c.r[9].d[0] = c.r[8].d[0] & 2048ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[9], 0u + 2u);  if (t) { goto L_003A40C8; } }
    c.r[16].d[0] = ld32((c.r[3].w[0]));
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_003A40C8:
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    if (c.r[8].d[0] == 0) c.r[9].d[0] = 0ull;
    c.r[16].d[0] = c.r[16].d[0] | c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] << (c.r[8].w[0] & 63u);
    c.r[16].d[0] = c.r[16].d[0] << (c.r[9].w[0] & 63u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A40F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A40F0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A40F0u) [[unlikely]] return; }
L_003A40F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A40F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[2].w[0] + 22952u);
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003A4128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 32773ull;  c.pc = t; return; }
L_003A4128:
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 40u), 0u);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    st64((c.r[6].w[0] + 24u), 0ull);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[7].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] & 1022ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_003A4178:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4190u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4190u) [[unlikely]] return; }
L_003A4190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4198u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 6u, depth + 1u); else { c.pc = 0x003A4108u; return; } if (c.pc != 0x003A4198u) [[unlikely]] return; }
L_003A4198:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A41A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A41A8u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A41A8u) [[unlikely]] return; }
L_003A41A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A41C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_003A41EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_003A41F8; }
L_003A41EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_003A424C; } }
L_003A41F8:
    set32(c.r[17], c.r[2].w[0] + 22952u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_003A4214; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_003A424C; } }
L_003A4214:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4228u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 413u, depth + 1u); else { c.pc = 0x003A3D58u; return; } if (c.pc != 0x003A4228u) [[unlikely]] return; }
L_003A4228:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
L_003A424C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4278u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4278u) [[unlikely]] return; }
L_003A4278:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4284u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 11u, depth + 1u); else { c.pc = 0x003A41C0u; return; } if (c.pc != 0x003A4284u) [[unlikely]] return; }
L_003A4284:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A4294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4294u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4294u) [[unlikely]] return; }
L_003A4294:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A42B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[2].w[0] + 22952u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003A42D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  c.pc = t; return; }
L_003A42D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003A42E0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003A42E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003A42F8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003A42F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A4300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4320u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4320u) [[unlikely]] return; }
L_003A4320:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4330u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 17u, depth + 1u); else { c.pc = 0x003A42B0u; return; } if (c.pc != 0x003A4330u) [[unlikely]] return; }
L_003A4330:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A4340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4340u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4340u) [[unlikely]] return; }
L_003A4340:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A4360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_003A438C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_003A4398; }
L_003A438C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_003A43F8; } }
L_003A4398:
    set32(c.r[2], c.r[2].w[0] + 22952u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_003A43B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_003A43F8; } }
L_003A43B4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A43F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43C8u);  if (depth < kMaxDepth) unit_00A9(c, 2u, depth + 1u); else { c.pc = 0x003A4038u; return; } if (c.pc != 0x003A43C8u) [[unlikely]] return; }
L_003A43C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st64((c.r[16].w[0] + 16u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003A43F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 411u, depth + 1u); else { c.pc = 0x003A3CD0u; return; } if (c.pc != 0x003A43ECu) [[unlikely]] return; }
L_003A43EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A43F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 406u, depth + 1u); else { c.pc = 0x003A3B40u; return; } if (c.pc != 0x003A43F4u) [[unlikely]] return; }
L_003A43F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A43F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4428u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4428u) [[unlikely]] return; }
L_003A4428:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4434u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 22u, depth + 1u); else { c.pc = 0x003A4360u; return; } if (c.pc != 0x003A4434u) [[unlikely]] return; }
L_003A4434:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A4444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4444u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4444u) [[unlikely]] return; }
L_003A4444:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_003A448C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_003A4498; }
L_003A448C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_003A4510; } }
L_003A4498:
    set32(c.r[2], c.r[2].w[0] + 22952u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_003A44B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_003A4510; } }
L_003A44B4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A4510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A44C8u);  if (depth < kMaxDepth) unit_00A9(c, 2u, depth + 1u); else { c.pc = 0x003A4038u; return; } if (c.pc != 0x003A44C8u) [[unlikely]] return; }
L_003A44C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    c.r[4].d[0] = c.r[17].d[0] - c.r[4].d[0];
    c.r[6].d[0] = c.r[5].d[0] & 2ull;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st64((c.r[16].w[0] + 24u), c.r[3].d[0]);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003A450C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4504u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 413u, depth + 1u); else { c.pc = 0x003A3D58u; return; } if (c.pc != 0x003A4504u) [[unlikely]] return; }
L_003A4504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A450Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 406u, depth + 1u); else { c.pc = 0x003A3B40u; return; } if (c.pc != 0x003A450Cu) [[unlikely]] return; }
L_003A450C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A4510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4528:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4540u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4540u) [[unlikely]] return; }
L_003A4540:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A454Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 30u, depth + 1u); else { c.pc = 0x003A4460u; return; } if (c.pc != 0x003A454Cu) [[unlikely]] return; }
L_003A454C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A455C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A455Cu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A455Cu) [[unlikely]] return; }
L_003A455C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4578:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] >> 10);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A45A4u); set32(c.r[16], c.r[2].w[0] << 6);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A45A4u) [[unlikely]] return; }
L_003A45A4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A45CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] & 1023ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A45CC; } }
    set32(c.r[2], c.r[2].w[0] + 22952u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_003A45E4; }
L_003A45CC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A4628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A45DCu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A45DCu) [[unlikely]] return; }
L_003A45DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A4628; } }
L_003A45E4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = ld64((c.r[16].w[0] + 24u));  if (t) { goto L_003A4610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A45F8u);  if (depth < kMaxDepth) unit_00A9(c, 2u, depth + 1u); else { c.pc = 0x003A4038u; return; } if (c.pc != 0x003A45F8u) [[unlikely]] return; }
L_003A45F8:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    st64((c.r[16].w[0] + 24u), c.r[18].d[0]);
    c.r[3].d[0] = c.r[2].d[0] - c.r[3].d[0];
    st64((c.r[16].w[0] + 16u), c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] + c.r[3].d[0];  if (t) { goto L_003A4614; } }
L_003A4610:
    st64((c.r[16].w[0] + 24u), c.r[18].d[0]);
    c.budget -= 1;
L_003A4614:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A4628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4624u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4624u) [[unlikely]] return; }
L_003A4624:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A4628:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A4648:
    set32(c.r[2], c.r[4].w[0] >> 10);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], c.r[2].w[0] << 6);  if (t) { goto L_003A4664; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 12u)));  goto L_003A466C; }
L_003A4664:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003A466C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4688; } }
    c.r[3].d[0] = ld64((c.r[5].w[0] + 24u));
    c.r[2].d[0] = ld64((c.r[5].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];  c.pc = t; return; }
L_003A4688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A4690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46A8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A46A8u) [[unlikely]] return; }
L_003A46A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46B4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 43u, depth + 1u); else { c.pc = 0x003A4648u; return; } if (c.pc != 0x003A46B4u) [[unlikely]] return; }
L_003A46B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A46C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A46C4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A46C4u) [[unlikely]] return; }
L_003A46C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A46E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], c.r[2].w[0] << 6);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A470C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_003A4714; }
L_003A470C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A4738; } }
L_003A4714:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[17].w[0] + 24u));  if (t) { goto L_003A4734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4728u);  if (depth < kMaxDepth) unit_00A9(c, 2u, depth + 1u); else { c.pc = 0x003A4038u; return; } if (c.pc != 0x003A4728u) [[unlikely]] return; }
L_003A4728:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[16].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_003A4734:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A4738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A4750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4768u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4768u) [[unlikely]] return; }
L_003A4768:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4774u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 48u, depth + 1u); else { c.pc = 0x003A46E0u; return; } if (c.pc != 0x003A4774u) [[unlikely]] return; }
L_003A4774:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A4784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4784u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4784u) [[unlikely]] return; }
L_003A4784:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A47A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[4].w[0] >> 10);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[16], c.r[2].w[0] << 6);  if (t) { goto L_003A47E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 1023ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_003A47EC; }
L_003A47E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_003A4878; } }
L_003A47EC:
    set32(c.r[2], c.r[2].w[0] + 22952u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_003A4808; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_003A4878; } }
L_003A4808:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A481Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 413u, depth + 1u); else { c.pc = 0x003A3D58u; return; } if (c.pc != 0x003A481Cu) [[unlikely]] return; }
L_003A481C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003A4820:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[16].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_003A483C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003A4864; } }
L_003A483C:
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    st64((c.r[16].w[0] + 32u), c.r[18].d[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[28].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[19].w[0]);  if (t) { goto L_003A4864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 411u, depth + 1u); else { c.pc = 0x003A3CD0u; return; } if (c.pc != 0x003A4864u) [[unlikely]] return; }
L_003A4864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A486Cu);  if (depth < kMaxDepth) unit_00A9(c, 2u, depth + 1u); else { c.pc = 0x003A4038u; return; } if (c.pc != 0x003A486Cu) [[unlikely]] return; }
L_003A486C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4874u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 406u, depth + 1u); else { c.pc = 0x003A3B40u; return; } if (c.pc != 0x003A4874u) [[unlikely]] return; }
L_003A4874:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A4878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A4898:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A48C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A48C8u) [[unlikely]] return; }
L_003A48C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A48E0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 54u, depth + 1u); else { c.pc = 0x003A47A0u; return; } if (c.pc != 0x003A48E0u) [[unlikely]] return; }
L_003A48E0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A48F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A48F0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A48F0u) [[unlikely]] return; }
L_003A48F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A4918:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4940u); c.r[5].sd[0] = static_cast<std::int32_t>(0x08CA0000u);  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003A4940u) [[unlikely]] return; }
L_003A4940:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003A4950; }
L_003A4950:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x08CA0000u);  if (t) { goto L_003A49A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x08CA0000u);
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[17].d[0] - c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] << 5;
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 6;
    c.r[4].d[0] = c.r[4].d[0] - c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 3;
    c.r[4].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A499Cu); c.r[4].d[0] = c.r[4].d[0] << 6;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003A499Cu) [[unlikely]] return; }
L_003A499C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003A49A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A49C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08CA0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    mmi::multu(c, 1, c.r[16].w[0], c.r[2].w[0]);
    mmi::multu(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 16960ull;
    c.r[16].d[0] = c.hi.d[1];
    c.r[6].d[0] = c.lo.d[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = c.hi.d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[6].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A1Cu); c.r[16].d[0] = c.r[16].d[0] | c.r[6].d[0];  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003A4A1Cu) [[unlikely]] return; }
L_003A4A1C:
    c.r[2].d[0] = c.r[16].d[0] + c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A4A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A44u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x003A4A44u) [[unlikely]] return; }
L_003A4A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_003A4A60; } }
L_003A4A4C:
    c.r[2].d[0] = c.r[4].d[0] >> 1;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4A5Cu); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x003A4A5Cu) [[unlikely]] return; }
L_003A4A5C:
    c.f[1] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003A4A60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4D0C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[0] = c.r[1].w[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A4AC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[5].w[0] - 10048u);
    set32(c.r[4], 0u + 63u);
    st32((c.r[3].w[0] - 9024u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + 1024u);
    set32(c.r[2], c.r[2].w[0] + 1008u);
    c.budget -= 8;
L_003A4AE0:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A4AE0u | kUnwind; return; } goto L_003A4AE0; } }
    set32(c.r[3], c.r[5].w[0] - 10048u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 1008u), 0u);  c.pc = t; return; }
L_003A4B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[4].d[0] & 254ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4B3Cu); c.r[4].d[0] = c.r[3].d[0] | 1ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A4B3Cu) [[unlikely]] return; }
L_003A4B3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A4B60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] - 9024u)));
    st32((c.r[3].w[0] - 9024u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
L_003A4B60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4B70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[20].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A4BB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 22ull;  if (t) { goto L_003A4C74; } }
L_003A4BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BB8u); c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4BB8u) [[unlikely]] return; }
L_003A4BB8:
    set32(c.r[16], ld32((c.r[18].w[0] - 9024u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A4BCC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0] - 9024u), c.r[2].w[0]);
    c.budget -= 2;
L_003A4BCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A4BF0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003A4BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BE4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4BE4u) [[unlikely]] return; }
L_003A4BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32773ull;  if (t) { goto L_003A4C74; } }
L_003A4BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4BF8u);  if (depth < kMaxDepth) unit_00A9(c, 7u, depth + 1u); else { c.pc = 0x003A4178u; return; } if (c.pc != 0x003A4BF8u) [[unlikely]] return; }
L_003A4BF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 8u), c.r[20].w[0]);  goto L_003A4C2C; }
    set32(c.r[2], ld32((c.r[18].w[0] - 9024u)));
    st32((c.r[18].w[0] - 9024u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A4C74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C24u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4C24u) [[unlikely]] return; }
L_003A4C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A4C74; } }
L_003A4C2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19216u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C4Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 59u, depth + 1u); else { c.pc = 0x003A4898u; return; } if (c.pc != 0x003A4C4Cu) [[unlikely]] return; }
L_003A4C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 26u, depth + 1u); else { c.pc = 0x003A4410u; return; } if (c.pc != 0x003A4C54u) [[unlikely]] return; }
L_003A4C54:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] << 4);  if (t) { goto L_003A4C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4C64u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4C64u) [[unlikely]] return; }
L_003A4C64:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 1;
L_003A4C68:
    c.r[3].d[0] = c.r[17].d[0] & 254ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 3;
L_003A4C74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A4CA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A4CDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 22ull;  if (t) { goto L_003A4D6C; } }
L_003A4CDC:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], ld32((c.r[18].w[0] - 9024u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003A4CF4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[18].w[0] - 9024u), c.r[2].w[0]);
    c.budget -= 2;
L_003A4CF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A4D08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32773ull;  if (t) { goto L_003A4D6C; } }
L_003A4D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D10u);  if (depth < kMaxDepth) unit_00A9(c, 6u, depth + 1u); else { c.pc = 0x003A4108u; return; } if (c.pc != 0x003A4D10u) [[unlikely]] return; }
L_003A4D10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 8u), c.r[19].w[0]);  goto L_003A4D34; }
    set32(c.r[3], ld32((c.r[18].w[0] - 9024u)));
    st32((c.r[18].w[0] - 9024u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003A4D70; } }
L_003A4D34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[6], c.r[6].w[0] + 19216u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D54u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 54u, depth + 1u); else { c.pc = 0x003A47A0u; return; } if (c.pc != 0x003A4D54u) [[unlikely]] return; }
L_003A4D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4D5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 22u, depth + 1u); else { c.pc = 0x003A4360u; return; } if (c.pc != 0x003A4D5Cu) [[unlikely]] return; }
L_003A4D5C:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[3].d[0] = c.r[17].d[0] & 254ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
L_003A4D6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003A4D70:
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A4D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], c.r[16].w[0] >> 8);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DB4u); set32(c.r[17], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4DB4u) [[unlikely]] return; }
L_003A4DB4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A4DD0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4DEC; } }
L_003A4DD0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003A4DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DE0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4DE0u) [[unlikely]] return; }
L_003A4DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_003A4E20; } }
L_003A4DEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4DF8u);  if (depth < kMaxDepth) unit_00A9(c, 13u, depth + 1u); else { c.pc = 0x003A4260u; return; } if (c.pc != 0x003A4DF8u) [[unlikely]] return; }
L_003A4DF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 9024u)));
    st32((c.r[3].w[0] - 9024u), c.r[17].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A4E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E1Cu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4E1Cu) [[unlikely]] return; }
L_003A4E1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A4E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A4E38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[4].w[0] >> 8);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[16], c.r[2].w[0] << 4);  if (t) { goto L_003A4E64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A4E70; } }
L_003A4E64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32770ull;  if (t) { goto L_003A4EA0; } }
L_003A4E70:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4E7Cu);  if (depth < kMaxDepth) unit_00A9(c, 11u, depth + 1u); else { c.pc = 0x003A41C0u; return; } if (c.pc != 0x003A4E7Cu) [[unlikely]] return; }
L_003A4E7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A4EA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9024u)));
    st32((c.r[2].w[0] - 9024u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_003A4EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A4EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] + 22984u), 0u);
    st32((c.r[3].w[0] + 22988u), 0u);
    set32(c.r[4], c.r[4].w[0] - 9016u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { set32(c.r[6], 0u + 512u);  [[clang::musttail]] return unit_00AE(c, 14u, depth); }
L_003A4F58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_003A4F9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[17], c.r[3].w[0] - 9016u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_003A4FAC; } }
L_003A4F9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 22984u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 22988u)));
    c.budget -= 4;
L_003A4FAC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A4FC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 105ull;  if (t) { goto L_003A4FF4; } }
L_003A4FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4FCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A4FCCu) [[unlikely]] return; }
L_003A4FCC:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_003A4FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A4FF0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A4FF0u) [[unlikely]] return; }
L_003A4FF0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A4FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A5068:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A5098; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 32u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 9016u);  if (t) { goto L_003A50A8; } }
L_003A5098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 22984u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 22988u)));
    c.budget -= 4;
L_003A50A8:
    c.r[18].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A50EC; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003A50B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003A50E4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A50E0u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A50E0u) [[unlikely]] return; }
L_003A50E0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_003A50E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A50B8u | kUnwind; return; } goto L_003A50B8; } }
L_003A50EC:
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A5110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A512Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x003A512Cu) [[unlikely]] return; }
L_003A512C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A513Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A513Cu) [[unlikely]] return; }
L_003A513C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 8448u)));
    st32((c.r[3].w[0] - 8448u), c.r[17].w[0]);
    st32((c.r[4].w[0] - 8444u), c.r[28].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A5164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5160u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A5160u) [[unlikely]] return; }
L_003A5160:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A5164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 23136u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 23136u)));
    st32((c.r[4].w[0] + 23140u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 23136u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A51C0; } }
    st32((c.r[16].w[0] + 23136u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 23092u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A520C; } }
L_003A51C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 23080u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A51CCu);  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x003A51CCu) [[unlikely]] return; }
L_003A51CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23060u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A51FC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 8448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A51FC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 23072u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A51F4u);  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x003A51F4u) [[unlikely]] return; }
L_003A51F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A5204; } }
L_003A51FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 23092u), 0u);
    c.budget -= 2;
L_003A5204:
    st32((c.r[16].w[0] + 23136u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003A520C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5218:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 20;
L_003A5268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5270u); set32(c.r[4], ld32((c.r[2].w[0] + 23072u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A5270u) [[unlikely]] return; }
L_003A5270:
    set32(c.r[3], ld32((c.r[20].w[0] + 23136u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[23].w[0] + 23056u)));  if (t) { goto L_003A529C; } }
    st32((c.r[19].w[0] + 23092u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 23136u), 0u);
    st32((c.r[2].w[0] + 23060u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5298u); st32((c.r[30].w[0] - 8428u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 126u, depth + 1u); else { c.pc = 0x00398C60u; return; } if (c.pc != 0x003A5298u) [[unlikely]] return; }
L_003A5298:
    set32(c.r[2], ld32((c.r[23].w[0] + 23056u)));
    c.budget -= 1;
L_003A529C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[22].w[0] + 26392u);  if (t) { goto L_003A52B0; } }
    set32(c.r[5], ld32((c.r[18].w[0] - 8448u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A52B0u); set32(c.r[6], ld32((c.r[17].w[0] + 23140u)));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A52B0u) [[unlikely]] return; }
L_003A52B0:
    set32(c.r[3], ld32((c.r[18].w[0] - 8448u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A52DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 23140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A52DC; } }
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[21].w[0] - 8444u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A52D8u); set32(c.r[4], ld32((c.r[17].w[0] + 23140u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A52D8u) [[unlikely]] return; }
L_003A52D8:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A52DC:
    st32((c.r[19].w[0] + 23092u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5268u | kUnwind; return; } goto L_003A5268; } }
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 23060u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003A5360; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 8424u);
    set32(c.r[3], c.r[3].w[0] + 21016u);
    set32(c.r[5], c.r[5].w[0] + 26432u);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5348u); st32((c.r[2].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 120u, depth + 1u); else { c.pc = 0x00398C20u; return; } if (c.pc != 0x003A5348u) [[unlikely]] return; }
L_003A5348:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 23060u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5358u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 300u, depth + 1u); else { c.pc = 0x00399F60u; return; } if (c.pc != 0x003A5358u) [[unlikely]] return; }
L_003A5358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A5370; } }
L_003A5360:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A536Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 130u, depth + 1u); else { c.pc = 0x00398CB0u; return; } if (c.pc != 0x003A536Cu) [[unlikely]] return; }
L_003A536C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A5370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003A53E8; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[5].d[0];  if (t) { goto L_003A53E8; } }
    set32(c.r[8], c.r[7].w[0] + 16u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_003A53B8:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A53B8u | kUnwind; return; } goto L_003A53B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 4u)));  if (t) { goto L_003A53F0; } }
L_003A53E8:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 2;
L_003A53F0:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A5438; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[9].d[0] | c.r[2].d[0];  if (t) { goto L_003A5438; } }
    set32(c.r[8], c.r[7].w[0] + 80u);
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_003A5410:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5410u | kUnwind; return; } goto L_003A5410; } }
L_003A5438:
    c.budget -= 2;
    { set32(c.r[4], c.r[11].w[0] + 23136u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5178u | kUnwind; return; } goto L_003A5178; }
L_003A5440:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 23080u)));
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_003A5488; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 23084u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A548C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 23088u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003A5510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A5494; } }
L_003A5488:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 1;
L_003A548C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003A5494:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 26456u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54B0u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A54B0u) [[unlikely]] return; }
L_003A54B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[17].w[0] + 23080u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26472u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54C8u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A54C8u) [[unlikely]] return; }
L_003A54C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 23084u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26488u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54E0u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A54E0u) [[unlikely]] return; }
L_003A54E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[18].w[0] + 23088u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26504u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A54FCu); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A54FCu) [[unlikely]] return; }
L_003A54FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 23072u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 23092u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
L_003A5510:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A5528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23060u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A5560; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 23136u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5558u); set32(c.r[4], ld32((c.r[16].w[0] + 23072u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A5558u) [[unlikely]] return; }
L_003A5558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5568; } }
L_003A5560:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 2;
L_003A5568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5570u); set32(c.r[4], ld32((c.r[2].w[0] + 23080u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A5570u) [[unlikely]] return; }
L_003A5570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A557Cu); set32(c.r[4], ld32((c.r[3].w[0] + 23084u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A557Cu) [[unlikely]] return; }
L_003A557C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5588u); set32(c.r[4], ld32((c.r[3].w[0] + 23088u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A5588u) [[unlikely]] return; }
L_003A5588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5590u); set32(c.r[4], ld32((c.r[16].w[0] + 23072u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A5590u) [[unlikely]] return; }
L_003A5590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5598u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A5598u) [[unlikely]] return; }
L_003A5598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A55A8u); c.r[4].d[0] = c.r[4].d[0] | 18ull;  if (depth < kMaxDepth) unit_00A6(c, 506u, depth + 1u); else { c.pc = 0x0039BFE0u; return; } if (c.pc != 0x003A55A8u) [[unlikely]] return; }
L_003A55A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A55BC; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2F30u | kUnwind; return; } [[clang::musttail]] return unit_00A8(c, 280u, depth); }
L_003A55BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A55C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 23112u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_003A55F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A55F8u);  if (depth < kMaxDepth) unit_00A9(c, 139u, depth + 1u); else { c.pc = 0x003A56A0u; return; } if (c.pc != 0x003A55F8u) [[unlikely]] return; }
L_003A55F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5600u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A5600u) [[unlikely]] return; }
L_003A5600:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], ld32((c.r[5].w[0] - 8440u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[4].w[0] - 8432u), c.r[16].w[0]);
    st32((c.r[5].w[0] - 8440u), c.r[18].w[0]);
    st32((c.r[3].w[0] - 8436u), c.r[28].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A5630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A562Cu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A562Cu) [[unlikely]] return; }
L_003A562C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A5630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A5648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] - 8440u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A568C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23076u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A5690; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[2].w[0] - 8436u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5688u); set32(c.r[4], ld32((c.r[3].w[0] - 8432u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A5688u) [[unlikely]] return; }
L_003A5688:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A568C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A5690:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A56A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A56C4u); st32((c.r[17].w[0] + 23076u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A56C4u) [[unlikely]] return; }
L_003A56C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22088u);
    c.r[4].d[0] = c.r[4].d[0] | 18ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A56E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 505u, depth + 1u); else { c.pc = 0x0039BF68u; return; } if (c.pc != 0x003A56E0u) [[unlikely]] return; }
L_003A56E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A56F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A56F0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A56F0u) [[unlikely]] return; }
L_003A56F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 1;
L_003A56F4:
    st32((c.r[17].w[0] + 23076u), 0u);
    st32((c.r[2].w[0] + 23112u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A5718:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5758u); st32((c.r[29].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 120u, depth + 1u); else { c.pc = 0x003A5440u; return; } if (c.pc != 0x003A5758u) [[unlikely]] return; }
L_003A5758:
    set32(c.r[4], ld32((c.r[22].w[0] + 23080u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5764u);  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003A5764u) [[unlikely]] return; }
L_003A5764:
    set32(c.r[3], ld32((c.r[22].w[0] + 23080u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A59E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 23068u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5784u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x003A5784u) [[unlikely]] return; }
L_003A5784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A5918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5794u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003A5794u) [[unlikely]] return; }
L_003A5794:
    set32(c.r[2], ld32((c.r[17].w[0] + 23116u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A584C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A57D4; } }
L_003A57B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003A57B8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A57B8u | kUnwind; return; } goto L_003A57B8; } }
L_003A57D4:
    set32(c.r[16], c.r[23].w[0] - 7936u);
    c.budget -= 1;
L_003A57D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1431ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A57ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A57ECu) [[unlikely]] return; }
L_003A57EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003A583C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_003A5810; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A580Cu); set32(c.r[4], c.r[4].w[0] + 26528u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A580Cu) [[unlikely]] return; }
L_003A580C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_003A5810:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003A5818:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5818u | kUnwind; return; } goto L_003A5818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[23].w[0] - 7936u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A57D8u | kUnwind; return; } goto L_003A57D8; } }
L_003A583C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A57B0u | kUnwind; return; } goto L_003A57B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 23116u), 0u);  if (t) { goto L_003A5858; } }
L_003A584C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
L_003A5858:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[21].w[0] - 8320u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003A589C; } }
    set32(c.r[6], c.r[4].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003A5878:
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_003A589C; } }
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5878u | kUnwind; return; } goto L_003A5878; }
L_003A589C:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[20].w[0] + 23056u)));  if (t) { goto L_003A58B4; } }
    set32(c.r[2], c.r[21].w[0] - 8320u);
    st8((c.r[2].w[0] + 291u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 23056u)));
    c.budget -= 3;
L_003A58B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A58CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] + 26560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A58CCu); set32(c.r[5], c.r[5].w[0] - 8284u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A58CCu) [[unlikely]] return; }
L_003A58CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[16], c.r[21].w[0] - 8320u);
    set32(c.r[5], 0u + 300u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A58E8u); st32((c.r[16].w[0] + 292u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A58E8u) [[unlikely]] return; }
L_003A58E8:
    set32(c.r[4], c.r[23].w[0] - 7936u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 300u);
    set32(c.r[9], c.r[30].w[0] - 8000u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5910u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A5910u) [[unlikely]] return; }
L_003A5910:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A592C; } }
L_003A5918:
    set32(c.r[4], ld32((c.r[22].w[0] + 23080u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5924u);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A5924u) [[unlikely]] return; }
L_003A5924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A59E4; } }
L_003A592C:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    ldl(c.r[4], (c.r[2].w[0] + 15u));
    ldr(c.r[4], (c.r[2].w[0] + 8u));
    ldl(c.r[5], (c.r[2].w[0] + 23u));
    ldr(c.r[5], (c.r[2].w[0] + 16u));
    ldl(c.r[6], (c.r[2].w[0] + 31u));
    ldr(c.r[6], (c.r[2].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 7u));
    sdr(c.r[3], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[19].w[0] + 15u));
    sdr(c.r[4], (c.r[19].w[0] + 8u));
    sdl(c.r[5], (c.r[19].w[0] + 23u));
    sdr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[6], (c.r[19].w[0] + 31u));
    sdr(c.r[6], (c.r[19].w[0] + 24u));
    lwl(c.r[3], (c.r[2].w[0] + 35u));
    lwr(c.r[3], (c.r[2].w[0] + 32u));
    swl(c.r[3], (c.r[19].w[0] + 35u));
    swr(c.r[3], (c.r[19].w[0] + 32u));
    set32(c.r[3], ld32((c.r[20].w[0] + 23056u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A59C8; } }
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5998u); set32(c.r[4], c.r[4].w[0] + 26584u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A5998u) [[unlikely]] return; }
L_003A5998:
    set32(c.r[2], ld32((c.r[20].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A59C8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A59B0u); set32(c.r[4], c.r[4].w[0] + 26600u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A59B0u) [[unlikely]] return; }
L_003A59B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A59C8; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A59C8u); set32(c.r[4], c.r[4].w[0] + 26616u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A59C8u) [[unlikely]] return; }
L_003A59C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[30].w[0] - 8000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[22].w[0] + 23080u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A59E0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A59E0u) [[unlikely]] return; }
L_003A59E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A59E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003A5A18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 143u, depth + 1u); else { c.pc = 0x003A5718u; return; } if (c.pc != 0x003A5A28u) [[unlikely]] return; }
L_003A5A28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A5A38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A58u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 120u, depth + 1u); else { c.pc = 0x003A5440u; return; } if (c.pc != 0x003A5A58u) [[unlikely]] return; }
L_003A5A58:
    set32(c.r[4], ld32((c.r[16].w[0] + 23080u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A64u);  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003A5A64u) [[unlikely]] return; }
L_003A5A64:
    set32(c.r[3], ld32((c.r[16].w[0] + 23080u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5A98; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5ABC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 23068u)));
    set32(c.r[4], c.r[4].w[0] + 26640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5A90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A5A90u) [[unlikely]] return; }
L_003A5A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5B78; } }
L_003A5A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5AA8u); st32((c.r[2].w[0] + 23068u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x003A5AA8u) [[unlikely]] return; }
L_003A5AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A5AC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 23080u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5ABCu);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A5ABCu) [[unlikely]] return; }
L_003A5ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5B78; } }
L_003A5AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5ACCu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003A5ACCu) [[unlikely]] return; }
L_003A5ACC:
    set32(c.r[2], ld32((c.r[18].w[0] + 23100u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A5B78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5B04; } }
L_003A5AE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003A5AE8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5AE8u | kUnwind; return; } goto L_003A5AE8; } }
L_003A5B04:
    set32(c.r[16], c.r[17].w[0] + 27600u);
    c.budget -= 1;
L_003A5B08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1429ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A5B1Cu) [[unlikely]] return; }
L_003A5B1C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003A5B6C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23056u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_003A5B44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5B40u); set32(c.r[4], c.r[4].w[0] + 26680u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A5B40u) [[unlikely]] return; }
L_003A5B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_003A5B44:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003A5B48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5B48u | kUnwind; return; } goto L_003A5B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 27600u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5B08u | kUnwind; return; } goto L_003A5B08; } }
L_003A5B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5AE0u | kUnwind; return; } goto L_003A5AE0; } }
    st32((c.r[18].w[0] + 23100u), 0u);
    c.budget -= 1;
L_003A5B78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A5B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5BA4u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 165u, depth + 1u); else { c.pc = 0x003A5A38u; return; } if (c.pc != 0x003A5BA4u) [[unlikely]] return; }
L_003A5BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5C18; } }
L_003A5BB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[2].w[0] + 23168u);
    set32(c.r[4], c.r[4].w[0] + 27600u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5BE4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A5BE4u) [[unlikely]] return; }
L_003A5BE4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5C00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5BF8u); set32(c.r[4], ld32((c.r[2].w[0] + 23080u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A5BF8u) [[unlikely]] return; }
L_003A5BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5C18; } }
L_003A5C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 23080u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C14u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A5C14u) [[unlikely]] return; }
L_003A5C14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A5C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5C28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A5C8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23056u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A5C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C54u); set32(c.r[4], c.r[4].w[0] + 26704u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A5C54u) [[unlikely]] return; }
L_003A5C54:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5C68; } }
L_003A5C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C68u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_00A6(c, 293u, depth + 1u); else { c.pc = 0x00399E98u; return; } if (c.pc != 0x003A5C68u) [[unlikely]] return; }
L_003A5C68:
    set32(c.r[2], ld32((c.r[17].w[0] + 23092u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5C60u | kUnwind; return; } goto L_003A5C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5C7Cu); set32(c.r[4], c.r[16].w[0] + 27600u);  if (depth < kMaxDepth) unit_00A7(c, 101u, depth + 1u); else { c.pc = 0x0039CF68u; return; } if (c.pc != 0x003A5C7Cu) [[unlikely]] return; }
L_003A5C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5C60u | kUnwind; return; } goto L_003A5C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003A5CB8; } }
L_003A5C8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23092u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A5CB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5CA8u); set32(c.r[4], c.r[4].w[0] + 27600u);  if (depth < kMaxDepth) unit_00A7(c, 101u, depth + 1u); else { c.pc = 0x0039CF68u; return; } if (c.pc != 0x003A5CA8u) [[unlikely]] return; }
L_003A5CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A5CB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A5CB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003A5CB8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A5CC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A5D18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23056u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A5CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5CF0u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A5CF0u) [[unlikely]] return; }
L_003A5CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5D00; } }
L_003A5CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D00u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_00A6(c, 293u, depth + 1u); else { c.pc = 0x00399E98u; return; } if (c.pc != 0x003A5D00u) [[unlikely]] return; }
L_003A5D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D08u); set32(c.r[4], c.r[16].w[0] + 30080u);  if (depth < kMaxDepth) unit_00A7(c, 101u, depth + 1u); else { c.pc = 0x0039CF68u; return; } if (c.pc != 0x003A5D08u) [[unlikely]] return; }
L_003A5D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5CF8u | kUnwind; return; } goto L_003A5CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A5D28; } }
L_003A5D18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D24u); set32(c.r[4], c.r[4].w[0] + 30080u);  if (depth < kMaxDepth) unit_00A7(c, 101u, depth + 1u); else { c.pc = 0x0039CF68u; return; } if (c.pc != 0x003A5D24u) [[unlikely]] return; }
L_003A5D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003A5D28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A5D38:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D58u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 120u, depth + 1u); else { c.pc = 0x003A5440u; return; } if (c.pc != 0x003A5D58u) [[unlikely]] return; }
L_003A5D58:
    set32(c.r[4], ld32((c.r[16].w[0] + 23084u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D64u);  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003A5D64u) [[unlikely]] return; }
L_003A5D64:
    set32(c.r[3], ld32((c.r[16].w[0] + 23084u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5D98; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5DBC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 23064u)));
    set32(c.r[4], c.r[4].w[0] + 26736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5D90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A5D90u) [[unlikely]] return; }
L_003A5D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5E78; } }
L_003A5D98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DA8u); st32((c.r[2].w[0] + 23064u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 189u, depth + 1u); else { c.pc = 0x003A5CC8u; return; } if (c.pc != 0x003A5DA8u) [[unlikely]] return; }
L_003A5DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A5DC4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 23084u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DBCu);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A5DBCu) [[unlikely]] return; }
L_003A5DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A5E78; } }
L_003A5DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5DCCu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003A5DCCu) [[unlikely]] return; }
L_003A5DCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 23124u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A5E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A5E04; } }
L_003A5DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003A5DE8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5DE8u | kUnwind; return; } goto L_003A5DE8; } }
L_003A5E04:
    set32(c.r[16], c.r[17].w[0] + 30080u);
    c.budget -= 1;
L_003A5E08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1427ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A5E1Cu) [[unlikely]] return; }
L_003A5E1C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003A5E6C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23056u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_003A5E44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5E40u); set32(c.r[4], c.r[4].w[0] + 26776u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A5E40u) [[unlikely]] return; }
L_003A5E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_003A5E44:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003A5E48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5E48u | kUnwind; return; } goto L_003A5E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 30080u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5E08u | kUnwind; return; } goto L_003A5E08; } }
L_003A5E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A5DE0u | kUnwind; return; } goto L_003A5DE0; } }
    st32((c.r[18].w[0] + 23124u), 0u);
    c.budget -= 1;
L_003A5E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A5F40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F78u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 189u, depth + 1u); else { c.pc = 0x003A5CC8u; return; } if (c.pc != 0x003A5F78u) [[unlikely]] return; }
L_003A5F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A61F8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A5F8Cu); c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003A5F8Cu) [[unlikely]] return; }
L_003A5F8C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 23076u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 23132u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 23112u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[5].w[0] + 23116u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 23100u), c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] - 7896u);
    st32((c.r[7].w[0] + 23124u), c.r[3].w[0]);
    set32(c.r[18], c.r[16].w[0] - 7808u);
    st32((c.r[9].w[0] + 23120u), c.r[3].w[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[8].w[0] + 23096u), 0u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[21].w[0] + 23132u), c.r[4].w[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[20].w[0] + 23128u), c.r[3].w[0]);
    c.budget -= 29;
L_003A6000:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1426ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6014u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A6014u) [[unlikely]] return; }
L_003A6014:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_003A6064; }
    set32(c.r[2], ld32((c.r[23].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], ld32((c.r[21].w[0] + 23132u)));  if (t) { goto L_003A6034; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6034u); set32(c.r[4], c.r[22].w[0] + 26800u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6034u) [[unlikely]] return; }
L_003A6034:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_003A6040:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6040u | kUnwind; return; } goto L_003A6040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6000u | kUnwind; return; } goto L_003A6000; } }
L_003A6064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003A60BC; } }
    st32((c.r[16].w[0] - 7808u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 23128u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A607Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A607Cu) [[unlikely]] return; }
L_003A607C:
    set32(c.r[16], c.r[30].w[0] + 27648u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A60A8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A60A8u) [[unlikely]] return; }
L_003A60A8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A60EC; } }
    st32((c.r[2].w[0] + 23076u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A61F8; } }
L_003A60BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_003A60C8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A60C8u | kUnwind; return; } goto L_003A60C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6000u | kUnwind; return; } goto L_003A6000; } }
L_003A60EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 255u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_003A6174; } }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_003A6138; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 23056u), c.r[16].w[0]);  if (t) { goto L_003A6174; } }
L_003A6138:
    set32(c.r[2], c.r[5].w[0] + 255u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_003A6174; }
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6178; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_003A6174:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 1;
L_003A6178:
    st32((c.r[3].w[0] + 23076u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A61D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003A61D8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A61D8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A61A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A61A8u); set32(c.r[4], c.r[4].w[0] + 26832u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A61A8u) [[unlikely]] return; }
L_003A61A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A61B0u);  if (depth < kMaxDepth) unit_00A9(c, 125u, depth + 1u); else { c.pc = 0x003A5528u; return; } if (c.pc != 0x003A61B0u) [[unlikely]] return; }
L_003A61B0:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 23080u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 23084u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 23072u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 23108u), 0u);  if (t) { goto L_003A61F4; } }
L_003A61D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A61E0u);  if (depth < kMaxDepth) unit_00A9(c, 120u, depth + 1u); else { c.pc = 0x003A5440u; return; } if (c.pc != 0x003A61E0u) [[unlikely]] return; }
L_003A61E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A61E8u);  if (depth < kMaxDepth) unit_00A9(c, 139u, depth + 1u); else { c.pc = 0x003A56A0u; return; } if (c.pc != 0x003A61E8u) [[unlikely]] return; }
L_003A61E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 23108u), c.r[2].w[0]);
    c.budget -= 3;
L_003A61F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A61F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003A6228:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 23056u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_003A626C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A626Cu); set32(c.r[4], c.r[4].w[0] + 26848u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A626Cu) [[unlikely]] return; }
L_003A626C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6274u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A6274u) [[unlikely]] return; }
L_003A6274:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 23104u), c.r[3].w[0]);  if (t) { goto L_003A628C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A628Cu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A628Cu) [[unlikely]] return; }
L_003A628C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6294u); c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A9(c, 120u, depth + 1u); else { c.pc = 0x003A5440u; return; } if (c.pc != 0x003A6294u) [[unlikely]] return; }
L_003A6294:
    set32(c.r[4], ld32((c.r[19].w[0] + 23084u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62A0u);  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003A62A0u) [[unlikely]] return; }
L_003A62A0:
    set32(c.r[3], ld32((c.r[19].w[0] + 23084u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_003A6414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 189u, depth + 1u); else { c.pc = 0x003A5CC8u; return; } if (c.pc != 0x003A62B4u) [[unlikely]] return; }
L_003A62B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A63CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A62C4u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003A62C4u) [[unlikely]] return; }
L_003A62C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 23120u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A637C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6304; } }
    c.budget -= 1;
L_003A62E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003A62E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A62E8u | kUnwind; return; } goto L_003A62E8; } }
L_003A6304:
    set32(c.r[16], c.r[21].w[0] - 7856u);
    c.budget -= 1;
L_003A6308:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1434ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A631Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A631Cu) [[unlikely]] return; }
L_003A631C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003A636C; }
    set32(c.r[2], ld32((c.r[22].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_003A6340; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A633Cu); set32(c.r[4], c.r[4].w[0] + 26872u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A633Cu) [[unlikely]] return; }
L_003A633C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_003A6340:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003A6348:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6348u | kUnwind; return; } goto L_003A6348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] - 7856u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6308u | kUnwind; return; } goto L_003A6308; } }
L_003A636C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A62E0u | kUnwind; return; } goto L_003A62E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 23120u), 0u);  if (t) { goto L_003A6384; } }
L_003A637C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 2;
L_003A6384:
    set32(c.r[16], c.r[20].w[0] - 7792u);
    st32((c.r[20].w[0] - 7792u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6398u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A6398u) [[unlikely]] return; }
L_003A6398:
    set32(c.r[17], c.r[23].w[0] + 27648u);
    set32(c.r[4], c.r[21].w[0] - 7856u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63C4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A63C4u) [[unlikely]] return; }
L_003A63C4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] + 23056u)));  goto L_003A63EC; }
L_003A63CC:
    set32(c.r[4], ld32((c.r[19].w[0] + 23084u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63D8u);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A63D8u) [[unlikely]] return; }
L_003A63D8:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003A6414; } }
L_003A63EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A63FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A63FCu); set32(c.r[4], c.r[4].w[0] + 26904u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A63FCu) [[unlikely]] return; }
L_003A63FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 23084u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6410u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6410u) [[unlikely]] return; }
L_003A6410:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003A6440:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 23056u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_003A6480; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6480u); set32(c.r[4], c.r[4].w[0] + 26928u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6480u) [[unlikely]] return; }
L_003A6480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6488u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A9(c, 120u, depth + 1u); else { c.pc = 0x003A5440u; return; } if (c.pc != 0x003A6488u) [[unlikely]] return; }
L_003A6488:
    set32(c.r[4], ld32((c.r[20].w[0] + 23088u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6494u);  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003A6494u) [[unlikely]] return; }
L_003A6494:
    set32(c.r[3], ld32((c.r[20].w[0] + 23088u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] ^ 8ull;  if (t) { goto L_003A65E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A64ACu); c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003A64ACu) [[unlikely]] return; }
L_003A64AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 23120u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A6564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A64F0; } }
L_003A64C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_003A65F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_003A64D0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A64D0u | kUnwind; return; } goto L_003A64D0; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A64F0:
    set32(c.r[16], c.r[21].w[0] - 7856u);
    c.budget -= 1;
L_003A64F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1436ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A6508u) [[unlikely]] return; }
L_003A6508:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003A6554; }
    set32(c.r[2], ld32((c.r[22].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_003A652C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6528u); set32(c.r[4], c.r[4].w[0] + 26872u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6528u) [[unlikely]] return; }
L_003A6528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_003A652C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003A6530:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6530u | kUnwind; return; } goto L_003A6530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] - 7856u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A64F4u | kUnwind; return; } goto L_003A64F4; } }
L_003A6554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 17ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A64C0u | kUnwind; return; } goto L_003A64C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 23120u), 0u);  if (t) { goto L_003A6568; } }
L_003A6564:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 1;
L_003A6568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6570u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A6570u) [[unlikely]] return; }
L_003A6570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 23104u), 0u);  if (t) { goto L_003A6584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6584u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A6584u) [[unlikely]] return; }
L_003A6584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[16], c.r[2].w[0] - 7792u);
    st32((c.r[2].w[0] - 7792u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A659Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A659Cu) [[unlikely]] return; }
L_003A659C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[21].w[0] - 7856u);
    set32(c.r[17], c.r[2].w[0] + 29824u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65CCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A65CCu) [[unlikely]] return; }
L_003A65CC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] + 23056u)));  goto L_003A6610; }
    set32(c.r[4], ld32((c.r[20].w[0] + 23088u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A65E0u);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A65E0u) [[unlikely]] return; }
L_003A65E0:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    c.budget -= 1;
L_003A65E4:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003A6638; } }
L_003A65F4:
    set32(c.r[4], ld32((c.r[20].w[0] + 23088u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6600u);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6600u) [[unlikely]] return; }
L_003A6600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6608u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 222u, depth + 1u); else { c.pc = 0x003A6228u; return; } if (c.pc != 0x003A6608u) [[unlikely]] return; }
L_003A6608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_003A663C; } }
L_003A6610:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A6620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6620u); set32(c.r[4], c.r[4].w[0] + 26904u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6620u) [[unlikely]] return; }
L_003A6620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 23088u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6634u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6634u) [[unlikely]] return; }
L_003A6634:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_003A663C:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A6660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 23096u)));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] + 23296u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003A66BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66B0u);  if (depth < kMaxDepth) unit_00A9(c, 178u, depth + 1u); else { c.pc = 0x003A5B90u; return; } if (c.pc != 0x003A66B0u) [[unlikely]] return; }
L_003A66B0:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A681C; } }
L_003A66BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A66C4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A9(c, 165u, depth + 1u); else { c.pc = 0x003A5A38u; return; } if (c.pc != 0x003A66C4u) [[unlikely]] return; }
L_003A66C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A67FC; } }
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[4], c.r[19].w[0] + 27392u);
    set32(c.r[5], c.r[8].w[0] + 27584u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 18;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A6730; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] << 11);  if (t) { goto L_003A6740; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2340u);  if (t) { goto L_003A673C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A6740; } }
L_003A6730:
    set32(c.r[2], 0u + 2328u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (t) { goto L_003A6740; } }
L_003A673C:
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_003A6740:
    set32(c.r[2], ld32((c.r[21].w[0] + 23096u)));
    set32(c.r[16], c.r[8].w[0] + 27584u);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[8].w[0] + 27584u), 0u);  if (t) { goto L_003A675C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A675Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A675Cu) [[unlikely]] return; }
L_003A675C:
    set32(c.r[19], c.r[19].w[0] + 27392u);
    set32(c.r[5], 0u + 144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6770u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A6770u) [[unlikely]] return; }
L_003A6770:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A677Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A677Cu) [[unlikely]] return; }
L_003A677C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6788u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A6788u) [[unlikely]] return; }
L_003A6788:
    set32(c.r[2], ld32((c.r[20].w[0] + 23056u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A679C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A679Cu); set32(c.r[4], c.r[4].w[0] + 26952u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A679Cu) [[unlikely]] return; }
L_003A679C:
    set32(c.r[2], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 23136u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[17].w[0] + 23092u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 27600u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] + 21384u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 24u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67E0u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A67E0u) [[unlikely]] return; }
L_003A67E0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 23056u)));  goto L_003A6804; }
    st32((c.r[16].w[0] + 23136u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 23092u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A67FCu); set32(c.r[4], ld32((c.r[2].w[0] + 23080u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A67FCu) [[unlikely]] return; }
L_003A67FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A681C; } }
L_003A6804:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A681C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6818u); set32(c.r[4], c.r[4].w[0] + 26976u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6818u) [[unlikely]] return; }
L_003A6818:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A681C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A6840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6854u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 195u, depth + 1u); else { c.pc = 0x003A5D38u; return; } if (c.pc != 0x003A6854u) [[unlikely]] return; }
L_003A6854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A68C8; } }
L_003A6864:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[2].w[0] + 27648u);
    set32(c.r[4], c.r[4].w[0] + 30080u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6894u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A6894u) [[unlikely]] return; }
L_003A6894:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A68B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68A8u); set32(c.r[4], ld32((c.r[2].w[0] + 23084u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A68A8u) [[unlikely]] return; }
L_003A68A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A68C8; } }
L_003A68B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 23084u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68C4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A68C4u) [[unlikely]] return; }
L_003A68C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A68C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A68D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A68E8u);  if (depth < kMaxDepth) unit_00A9(c, 272u, depth + 1u); else { c.pc = 0x003A6840u; return; } if (c.pc != 0x003A68E8u) [[unlikely]] return; }
L_003A68E8:
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6914u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 195u, depth + 1u); else { c.pc = 0x003A5D38u; return; } if (c.pc != 0x003A6914u) [[unlikely]] return; }
L_003A6914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A6988; } }
L_003A6924:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[2].w[0] + 27648u);
    set32(c.r[4], c.r[4].w[0] + 30080u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6954u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A6954u) [[unlikely]] return; }
L_003A6954:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6970; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6968u); set32(c.r[4], ld32((c.r[2].w[0] + 23084u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6968u) [[unlikely]] return; }
L_003A6968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A6988; } }
L_003A6970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 23084u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6984u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6984u) [[unlikely]] return; }
L_003A6984:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A6998:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 30u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A69B0u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A9(c, 195u, depth + 1u); else { c.pc = 0x003A5D38u; return; } if (c.pc != 0x003A69B0u) [[unlikely]] return; }
L_003A69B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A69C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6A3C; } }
L_003A69C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], c.r[2].w[0] + 27648u);
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 23136u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 30080u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A69FCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A69FCu) [[unlikely]] return; }
L_003A69FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6A1C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 23084u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A10u);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6A10u) [[unlikely]] return; }
L_003A6A10:
    st32((c.r[16].w[0] + 23136u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6A3C; } }
L_003A6A1C:
    st32((c.r[16].w[0] + 23136u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 23084u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A38u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6A38u) [[unlikely]] return; }
L_003A6A38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A6A50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[17].w[0] + 28736u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A78u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_00A9(c, 195u, depth + 1u); else { c.pc = 0x003A5D38u; return; } if (c.pc != 0x003A6A78u) [[unlikely]] return; }
L_003A6A78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 28736u), c.r[16].w[0]);  goto L_003A6A88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6B08; } }
L_003A6A88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6A94u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A6A94u) [[unlikely]] return; }
L_003A6A94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], ld32((c.r[4].w[0] + 30124u)));
    set32(c.r[16], c.r[2].w[0] + 27648u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[10], ld32((c.r[6].w[0] + 30128u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 30120u)));
    set32(c.r[4], c.r[4].w[0] + 30080u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AD4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A6AD4u) [[unlikely]] return; }
L_003A6AD4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6AF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6AE8u); set32(c.r[4], ld32((c.r[2].w[0] + 23084u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6AE8u) [[unlikely]] return; }
L_003A6AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6B08; } }
L_003A6AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 23084u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B04u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6B04u) [[unlikely]] return; }
L_003A6B04:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6B08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A6B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B34u); set32(c.r[4], c.r[4].w[0] + 26992u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6B34u) [[unlikely]] return; }
L_003A6B34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A6B48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6B64u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_00A9(c, 195u, depth + 1u); else { c.pc = 0x003A5D38u; return; } if (c.pc != 0x003A6B64u) [[unlikely]] return; }
L_003A6B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A6B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6BF0; } }
L_003A6B74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[2].w[0] + 27648u);
    set32(c.r[4], c.r[4].w[0] + 30080u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BA4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A6BA4u) [[unlikely]] return; }
L_003A6BA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A6BC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BB8u); set32(c.r[4], ld32((c.r[2].w[0] + 23084u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6BB8u) [[unlikely]] return; }
L_003A6BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A6BF0; } }
L_003A6BC0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    ldl(c.r[4], (c.r[2].w[0] + 7u));
    ldr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[17].w[0] + 7u));
    c.r[3].d[0] = c.r[16].d[0] | c.r[3].d[0];
    sdr(c.r[4], (c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 23084u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6BECu); set32(c.r[16], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A6BECu) [[unlikely]] return; }
L_003A6BEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003A6BF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A6C08:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[4], c.r[4].w[0] << 16);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[5], c.r[5].w[0] << 16);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[7], c.r[7].w[0] << 16);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[2], 0u + 1u);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));  if (t) { goto L_003A6D08; } }
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_003A6C64; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003A6C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A6D84; } }
L_003A6C64:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003A6D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A6D84; } }
L_003A6C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6C7Cu);  if (depth < kMaxDepth) unit_00A9(c, 308u, depth + 1u); else { c.pc = 0x003A6D98u; return; } if (c.pc != 0x003A6C7Cu) [[unlikely]] return; }
L_003A6C7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[4], 0u + 512u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].d[0] = 0ull | 65280ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CB4u); st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A6(c, 174u, depth + 1u); else { c.pc = 0x00399160u; return; } if (c.pc != 0x003A6CB4u) [[unlikely]] return; }
L_003A6CB4:
    c.r[3].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003A6CE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CCCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 245u, depth + 1u); else { c.pc = 0x00399900u; return; } if (c.pc != 0x003A6CCCu) [[unlikely]] return; }
L_003A6CCC:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6CD8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 94u, depth + 1u); else { c.pc = 0x00398B20u; return; } if (c.pc != 0x003A6CD8u) [[unlikely]] return; }
L_003A6CD8:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_003A6CE0:
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398A20u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 82u, depth); }
L_003A6D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003A6D80; } }
L_003A6D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6D28u);  if (depth < kMaxDepth) unit_00A9(c, 308u, depth + 1u); else { c.pc = 0x003A6D98u; return; } if (c.pc != 0x003A6D28u) [[unlikely]] return; }
L_003A6D28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[6].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] & 1ull;
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[5].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 22;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398A20u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 82u, depth); }
L_003A6D80:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A6D84:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A6D98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 30160u);  c.pc = t; return; }
L_003A6DA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DBCu);  if (depth < kMaxDepth) unit_00A9(c, 308u, depth + 1u); else { c.pc = 0x003A6D98u; return; } if (c.pc != 0x003A6DBCu) [[unlikely]] return; }
L_003A6DBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A6E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6DD4u);  if (depth < kMaxDepth) unit_00A6(c, 199u, depth + 1u); else { c.pc = 0x003992B0u; return; } if (c.pc != 0x003A6DD4u) [[unlikely]] return; }
L_003A6DD4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A6E30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.r[2].d[0] = ld64((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A6E34; } }
L_003A6E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6E10u);  if (depth < kMaxDepth) unit_00A6(c, 204u, depth + 1u); else { c.pc = 0x00399340u; return; } if (c.pc != 0x003A6E10u) [[unlikely]] return; }
L_003A6E10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 13);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003A6E30; } }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_003A6E30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A6E34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A6E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A70D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003A6E94; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_003A6E78:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003A6F9C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6E78u | kUnwind; return; } goto L_003A6E78; } }
L_003A6E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003A6ED4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_003A6EB8:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003A6FA8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6EB8u | kUnwind; return; } goto L_003A6EB8; } }
L_003A6ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    c.r[4].d[0] = c.r[4].d[0] | 3ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);  if (t) { goto L_003A6F24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
L_003A6F08:
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003A6FB4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6F08u | kUnwind; return; } goto L_003A6F08; } }
L_003A6F24:
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);  if (t) { goto L_003A6F54; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003A6F38:
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003A6FC0; } }
    set32(c.r[6], cfc2(c, 29u));
    c.r[2].d[0] = c.r[6].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6F38u | kUnwind; return; } goto L_003A6F38; } }
L_003A6F54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 3072ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003A6F94; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_003A6F78:
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003A6FCC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A6F78u | kUnwind; return; } goto L_003A6F78; } }
L_003A6F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A7148; } }
L_003A6F9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 27032u);  if (t) { goto L_003A6FD4; } }
L_003A6FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 27256u);  if (t) { goto L_003A6FD4; } }
L_003A6FB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 27304u);  if (t) { goto L_003A6FD4; } }
L_003A6FC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 27352u);  if (t) { goto L_003A6FD4; } }
L_003A6FCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 27392u);
    c.budget -= 2;
L_003A6FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6FDCu);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6FDCu) [[unlikely]] return; }
L_003A6FDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36864ull;
    set32(c.r[4], c.r[4].w[0] + 27080u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A6FF4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A6FF4u) [[unlikely]] return; }
L_003A6FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36912ull;
    set32(c.r[4], c.r[4].w[0] + 27096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A700Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A700Cu) [[unlikely]] return; }
L_003A700C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36880ull;
    set32(c.r[4], c.r[4].w[0] + 27112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7024u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A7024u) [[unlikely]] return; }
L_003A7024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36896ull;
    set32(c.r[4], c.r[4].w[0] + 27128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A703Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A703Cu) [[unlikely]] return; }
L_003A703C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[4], c.r[4].w[0] + 27144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7054u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A7054u) [[unlikely]] return; }
L_003A7054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 41008ull;
    set32(c.r[4], c.r[4].w[0] + 27160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A706Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A706Cu) [[unlikely]] return; }
L_003A706C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40976ull;
    set32(c.r[4], c.r[4].w[0] + 27176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7084u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A7084u) [[unlikely]] return; }
L_003A7084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 40992ull;
    set32(c.r[4], c.r[4].w[0] + 27192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A709Cu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A709Cu) [[unlikely]] return; }
L_003A709C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 15360ull;
    set32(c.r[4], c.r[4].w[0] + 27208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70B4u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A70B4u) [[unlikely]] return; }
L_003A70B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 12320ull;
    set32(c.r[4], c.r[4].w[0] + 27232u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A70CCu); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A70CCu) [[unlikely]] return; }
L_003A70CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A7148; } }
L_003A70D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 36864ull;
    c.r[5].d[0] = c.r[5].d[0] | 40960ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | 15360ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[4].d[0] = c.r[2].d[0] | 2ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x1F000000u);
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] | 4ull;
    if (c.r[5].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[6], cfc2(c, 29u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = c.r[6].d[0] & 256ull;
    c.r[3].d[0] = c.r[3].d[0] | 12320ull;
    c.r[5].d[0] = c.r[2].d[0] | 8ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] | 16ull;
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 29;
L_003A7148:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7158:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7174u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 308u, depth + 1u); else { c.pc = 0x003A6D98u; return; } if (c.pc != 0x003A7174u) [[unlikely]] return; }
L_003A7174:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003A71A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7188u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 245u, depth + 1u); else { c.pc = 0x00399900u; return; } if (c.pc != 0x003A7188u) [[unlikely]] return; }
L_003A7188:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7194u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 94u, depth + 1u); else { c.pc = 0x00398B20u; return; } if (c.pc != 0x003A7194u) [[unlikely]] return; }
L_003A7194:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_003A71DC; } }
L_003A71A0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), c.r[17].w[0]);  goto L_003A71C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71B0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 245u, depth + 1u); else { c.pc = 0x00399900u; return; } if (c.pc != 0x003A71B0u) [[unlikely]] return; }
L_003A71B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71BCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 94u, depth + 1u); else { c.pc = 0x00398B20u; return; } if (c.pc != 0x003A71BCu) [[unlikely]] return; }
L_003A71BC:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_003A71C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71D0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00A6(c, 90u, depth + 1u); else { c.pc = 0x00398B00u; return; } if (c.pc != 0x003A71D0u) [[unlikely]] return; }
L_003A71D0:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A71DCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 249u, depth + 1u); else { c.pc = 0x00399968u; return; } if (c.pc != 0x003A71DCu) [[unlikely]] return; }
L_003A71DC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A71F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7210u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 172u, depth + 1u); else { c.pc = 0x00399140u; return; } if (c.pc != 0x003A7210u) [[unlikely]] return; }
L_003A7210:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A721Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 174u, depth + 1u); else { c.pc = 0x00399160u; return; } if (c.pc != 0x003A721Cu) [[unlikely]] return; }
L_003A721C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A7238:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7248u);  if (depth < kMaxDepth) unit_00A6(c, 172u, depth + 1u); else { c.pc = 0x00399140u; return; } if (c.pc != 0x003A7248u) [[unlikely]] return; }
L_003A7248:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7258:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3FEF0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[13].d[0] = c.r[12].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[14].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A7318; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xC0100000u);
    c.r[14].d[0] = c.r[4].d[0] << 32;
    set32(c.r[15], c.r[13].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003A72EC; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] > 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A72C8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = ld64((c.r[15].w[0] + 27544u));
    c.budget -= 2;
L_003A72C8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A72CC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A72EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A72F4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A72F4u) [[unlikely]] return; }
L_003A72F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7304u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7304u) [[unlikely]] return; }
L_003A7304:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7310u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7310u) [[unlikely]] return; }
L_003A7310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A72CCu | kUnwind; return; } goto L_003A72CC; } }
L_003A7318:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FDF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3C600000u);  if (t) { goto L_003A74B0; } }
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A7340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27552u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A72C8u | kUnwind; return; } goto L_003A72C8; } }
L_003A7340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7348u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7348u) [[unlikely]] return; }
L_003A7348:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27560u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A735Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A735Cu) [[unlikely]] return; }
L_003A735C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A736Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27568u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A736Cu) [[unlikely]] return; }
L_003A736C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7378u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7378u) [[unlikely]] return; }
L_003A7378:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7388u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27576u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7388u) [[unlikely]] return; }
L_003A7388:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7394u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7394u) [[unlikely]] return; }
L_003A7394:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73A4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27584u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A73A4u) [[unlikely]] return; }
L_003A73A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A73B0u) [[unlikely]] return; }
L_003A73B0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73C0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27592u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A73C0u) [[unlikely]] return; }
L_003A73C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A73CCu) [[unlikely]] return; }
L_003A73CC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73DCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27600u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A73DCu) [[unlikely]] return; }
L_003A73DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A73E8u) [[unlikely]] return; }
L_003A73E8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27608u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A73FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A73FCu) [[unlikely]] return; }
L_003A73FC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A740Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27616u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A740Cu) [[unlikely]] return; }
L_003A740C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7418u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7418u) [[unlikely]] return; }
L_003A7418:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7428u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27624u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7428u) [[unlikely]] return; }
L_003A7428:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7434u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7434u) [[unlikely]] return; }
L_003A7434:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7444u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27632u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7444u) [[unlikely]] return; }
L_003A7444:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7450u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7450u) [[unlikely]] return; }
L_003A7450:
    set32(c.r[5], 0u + 1023u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7460u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7460u) [[unlikely]] return; }
L_003A7460:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A746Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A746Cu) [[unlikely]] return; }
L_003A746C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7478u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7478u) [[unlikely]] return; }
L_003A7478:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7488u); c.r[4].d[0] = ld64((c.r[15].w[0] + 27640u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7488u) [[unlikely]] return; }
L_003A7488:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7494u) [[unlikely]] return; }
L_003A7494:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[15].w[0] + 27552u));
    c.budget -= 3;
L_003A74A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74A8u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A74A8u) [[unlikely]] return; }
L_003A74A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A72CCu | kUnwind; return; } goto L_003A72CC; } }
L_003A74B0:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; set32(c.r[18], 0u + 1023u);  if (t) { goto L_003A764C; } }
    set32(c.r[16], 0u + 1023u);
    c.r[16].d[0] = c.r[16].d[0] << 52;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A74C8u) [[unlikely]] return; }
L_003A74C8:
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74D8u); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A74D8u) [[unlikely]] return; }
L_003A74D8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27560u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A74ECu) [[unlikely]] return; }
L_003A74EC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A74FCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27568u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A74FCu) [[unlikely]] return; }
L_003A74FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7508u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7508u) [[unlikely]] return; }
L_003A7508:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7518u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27576u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7518u) [[unlikely]] return; }
L_003A7518:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7524u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7524u) [[unlikely]] return; }
L_003A7524:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7534u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27584u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7534u) [[unlikely]] return; }
L_003A7534:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7540u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7540u) [[unlikely]] return; }
L_003A7540:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7550u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27592u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7550u) [[unlikely]] return; }
L_003A7550:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A755Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A755Cu) [[unlikely]] return; }
L_003A755C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A756Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27600u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A756Cu) [[unlikely]] return; }
L_003A756C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7578u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7578u) [[unlikely]] return; }
L_003A7578:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27608u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A758Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A758Cu) [[unlikely]] return; }
L_003A758C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A759Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27616u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A759Cu) [[unlikely]] return; }
L_003A759C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A75A8u) [[unlikely]] return; }
L_003A75A8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75B8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27624u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A75B8u) [[unlikely]] return; }
L_003A75B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A75C4u) [[unlikely]] return; }
L_003A75C4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75D4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27632u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A75D4u) [[unlikely]] return; }
L_003A75D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A75E0u) [[unlikely]] return; }
L_003A75E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A75ECu) [[unlikely]] return; }
L_003A75EC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A75F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 332u, depth + 1u); else { c.pc = 0x003A9FB0u; return; } if (c.pc != 0x003A75F8u) [[unlikely]] return; }
L_003A75F8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7608u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7608u) [[unlikely]] return; }
L_003A7608:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7614u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7614u) [[unlikely]] return; }
L_003A7614:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7624u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27640u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7624u) [[unlikely]] return; }
L_003A7624:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7630u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7630u) [[unlikely]] return; }
L_003A7630:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A763Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A763Cu) [[unlikely]] return; }
L_003A763C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld64((c.r[15].w[0] + 27544u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A74A0u | kUnwind; return; } goto L_003A74A0; } }
L_003A764C:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[18].d[0] << 52;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A765Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A765Cu) [[unlikely]] return; }
L_003A765C:
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A766Cu); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A766Cu) [[unlikely]] return; }
L_003A766C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7678u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 332u, depth + 1u); else { c.pc = 0x003A9FB0u; return; } if (c.pc != 0x003A7678u) [[unlikely]] return; }
L_003A7678:
    set32(c.r[15], 0u - 1u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[17].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7694u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7694u) [[unlikely]] return; }
L_003A7694:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A76A0u) [[unlikely]] return; }
L_003A76A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A76B0u) [[unlikely]] return; }
L_003A76B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A76BCu) [[unlikely]] return; }
L_003A76BC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27560u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A76D0u) [[unlikely]] return; }
L_003A76D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76E0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27568u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A76E0u) [[unlikely]] return; }
L_003A76E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A76ECu) [[unlikely]] return; }
L_003A76EC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A76FCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27576u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A76FCu) [[unlikely]] return; }
L_003A76FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7708u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7708u) [[unlikely]] return; }
L_003A7708:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7718u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27584u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7718u) [[unlikely]] return; }
L_003A7718:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7724u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7724u) [[unlikely]] return; }
L_003A7724:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7734u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27592u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7734u) [[unlikely]] return; }
L_003A7734:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7740u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7740u) [[unlikely]] return; }
L_003A7740:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7750u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27600u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7750u) [[unlikely]] return; }
L_003A7750:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A775Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A775Cu) [[unlikely]] return; }
L_003A775C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27608u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7770u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7770u) [[unlikely]] return; }
L_003A7770:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7780u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27616u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7780u) [[unlikely]] return; }
L_003A7780:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A778Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A778Cu) [[unlikely]] return; }
L_003A778C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A779Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27624u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A779Cu) [[unlikely]] return; }
L_003A779C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A77A8u) [[unlikely]] return; }
L_003A77A8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77B8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27632u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A77B8u) [[unlikely]] return; }
L_003A77B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A77C4u) [[unlikely]] return; }
L_003A77C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77D0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A77D0u) [[unlikely]] return; }
L_003A77D0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A77DCu) [[unlikely]] return; }
L_003A77DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77E8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A77E8u) [[unlikely]] return; }
L_003A77E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A77F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A77F4u) [[unlikely]] return; }
L_003A77F4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7800u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7800u) [[unlikely]] return; }
L_003A7800:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A780Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A780Cu) [[unlikely]] return; }
L_003A780C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A72CCu | kUnwind; return; } goto L_003A72CC; } }
    c.budget -= 1;
L_003A7818:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3FEF0000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 8;
L_003A7838:
    c.r[21].d[0] = c.r[23].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[14].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A7910; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xC0100000u);
    c.r[14].d[0] = c.r[4].d[0] << 32;
    set32(c.r[15], c.r[21].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003A78E4; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A788Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27768u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A788Cu) [[unlikely]] return; }
L_003A788C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27776u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A78A0u) [[unlikely]] return; }
L_003A78A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_003A78A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78B0u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A78B0u) [[unlikely]] return; }
L_003A78B0:
    c.r[15].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A78B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A78E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78ECu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A78ECu) [[unlikely]] return; }
L_003A78EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A78FCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A78FCu) [[unlikely]] return; }
L_003A78FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7908u) [[unlikely]] return; }
L_003A7908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A78B4u | kUnwind; return; } goto L_003A78B4; } }
L_003A7910:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FDF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[15].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003A795C; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3E3F0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A7BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7940u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27784u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7940u) [[unlikely]] return; }
L_003A7940:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7950u); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A7950u) [[unlikely]] return; }
L_003A7950:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[15].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A78B4u | kUnwind; return; } goto L_003A78B4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003A795C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7964u); set32(c.r[16], 0u + 1023u);  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003A7964u) [[unlikely]] return; }
L_003A7964:
    c.r[16].d[0] = c.r[16].d[0] << 52;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7974u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7974u) [[unlikely]] return; }
L_003A7974:
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7984u); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7984u) [[unlikely]] return; }
L_003A7984:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27792u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7998u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7998u) [[unlikely]] return; }
L_003A7998:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79A8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27800u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A79A8u) [[unlikely]] return; }
L_003A79A8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A79B4u) [[unlikely]] return; }
L_003A79B4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79C4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27808u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A79C4u) [[unlikely]] return; }
L_003A79C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A79D0u) [[unlikely]] return; }
L_003A79D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79E0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27816u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A79E0u) [[unlikely]] return; }
L_003A79E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A79ECu) [[unlikely]] return; }
L_003A79EC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A79FCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27824u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A79FCu) [[unlikely]] return; }
L_003A79FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7A08u) [[unlikely]] return; }
L_003A7A08:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A18u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27832u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7A18u) [[unlikely]] return; }
L_003A7A18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7A24u) [[unlikely]] return; }
L_003A7A24:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27840u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A38u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7A38u) [[unlikely]] return; }
L_003A7A38:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A48u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27848u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7A48u) [[unlikely]] return; }
L_003A7A48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7A54u) [[unlikely]] return; }
L_003A7A54:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A64u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27856u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7A64u) [[unlikely]] return; }
L_003A7A64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7A70u) [[unlikely]] return; }
L_003A7A70:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A80u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27864u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7A80u) [[unlikely]] return; }
L_003A7A80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7A8Cu) [[unlikely]] return; }
L_003A7A8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7A98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7A98u) [[unlikely]] return; }
L_003A7A98:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 332u, depth + 1u); else { c.pc = 0x003A9FB0u; return; } if (c.pc != 0x003A7AA4u) [[unlikely]] return; }
L_003A7AA4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 13106ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A7B28; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AC4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7AC4u) [[unlikely]] return; }
L_003A7AC4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AD0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7AD0u) [[unlikely]] return; }
L_003A7AD0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7ADCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7ADCu) [[unlikely]] return; }
L_003A7ADC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7AE8u) [[unlikely]] return; }
L_003A7AE8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7AF8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27776u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7AF8u) [[unlikely]] return; }
L_003A7AF8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[15].w[0] + 27768u));
    c.budget -= 3;
L_003A7B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B0Cu);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7B0Cu) [[unlikely]] return; }
L_003A7B0C:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] > 0; c.r[15].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A78B4u | kUnwind; return; } goto L_003A78B4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7B20u) [[unlikely]] return; }
L_003A7B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A78B4u | kUnwind; return; } goto L_003A78B4; } }
L_003A7B28:
    set32(c.r[15], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[18].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B40u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7B40u) [[unlikely]] return; }
L_003A7B40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B4Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7B4Cu) [[unlikely]] return; }
L_003A7B4C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7B5Cu) [[unlikely]] return; }
L_003A7B5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B68u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7B68u) [[unlikely]] return; }
L_003A7B68:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B78u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7B78u) [[unlikely]] return; }
L_003A7B78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B88u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7B88u) [[unlikely]] return; }
L_003A7B88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7B94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7B94u) [[unlikely]] return; }
L_003A7B94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BA4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7BA4u) [[unlikely]] return; }
L_003A7BA4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BB4u); c.r[4].d[0] = ld64((c.r[15].w[0] + 27776u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7BB4u) [[unlikely]] return; }
L_003A7BB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7BC0u) [[unlikely]] return; }
L_003A7BC0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BD0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7BD0u) [[unlikely]] return; }
L_003A7BD0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[15].w[0] + 27872u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7BE4u) [[unlikely]] return; }
L_003A7BE4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7BF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7BF0u) [[unlikely]] return; }
L_003A7BF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7B04u | kUnwind; return; } goto L_003A7B04; } }
L_003A7BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C04u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7C04u) [[unlikely]] return; }
L_003A7C04:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27792u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7C18u) [[unlikely]] return; }
L_003A7C18:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C28u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27800u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7C28u) [[unlikely]] return; }
L_003A7C28:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7C34u) [[unlikely]] return; }
L_003A7C34:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C44u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27808u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7C44u) [[unlikely]] return; }
L_003A7C44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7C50u) [[unlikely]] return; }
L_003A7C50:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C60u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27816u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7C60u) [[unlikely]] return; }
L_003A7C60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7C6Cu) [[unlikely]] return; }
L_003A7C6C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C7Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 27824u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7C7Cu) [[unlikely]] return; }
L_003A7C7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7C88u) [[unlikely]] return; }
L_003A7C88:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7C98u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27832u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7C98u) [[unlikely]] return; }
L_003A7C98:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7CA4u) [[unlikely]] return; }
L_003A7CA4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27840u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7CB8u) [[unlikely]] return; }
L_003A7CB8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CC8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27848u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7CC8u) [[unlikely]] return; }
L_003A7CC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7CD4u) [[unlikely]] return; }
L_003A7CD4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CE4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27856u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7CE4u) [[unlikely]] return; }
L_003A7CE4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7CF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7CF0u) [[unlikely]] return; }
L_003A7CF0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D00u); c.r[5].d[0] = ld64((c.r[15].w[0] + 27864u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7D00u) [[unlikely]] return; }
L_003A7D00:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7D0Cu) [[unlikely]] return; }
L_003A7D0C:
    set32(c.r[5], 0u + 1023u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D1Cu); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7D1Cu) [[unlikely]] return; }
L_003A7D1C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D28u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7D28u) [[unlikely]] return; }
L_003A7D28:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7D34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A7D34u) [[unlikely]] return; }
L_003A7D34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A78A8u | kUnwind; return; } goto L_003A78A8; } }
L_003A7D40:
    c.r[11].d[0] = c.r[5].d[0] << 32;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[15], 0u - c.r[11].w[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[15].d[0] = c.r[11].d[0] | c.r[15].d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[15], c.r[15].w[0] >> 31);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[8].d[0] = c.r[7].d[0] & c.r[14].d[0];
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[15].d[0] = c.r[8].d[0] | c.r[15].d[0];
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[12].d[0] = c.r[4].d[0] << 32;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[15].d[0] = c.r[10].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[15].d[0] != 0ull; c.r[3].d[0] = c.r[9].d[0] & c.r[14].d[0];  if (t) { goto L_003A7DB0; } }
    set32(c.r[15], 0u - c.r[12].w[0]);
    c.r[15].d[0] = c.r[12].d[0] | c.r[15].d[0];
    set32(c.r[15], c.r[15].w[0] >> 31);
    c.r[15].d[0] = c.r[3].d[0] | c.r[15].d[0];
    c.r[15].d[0] = c.r[10].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0xC0100000u);  if (t) { goto L_003A7DCC; } }
L_003A7DB0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7DBCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A7DBCu) [[unlikely]] return; }
L_003A7DBC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A7DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A7DCC:
    set32(c.r[15], c.r[7].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[11].d[0];
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 30));  if (t) { goto L_003A7DEC; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00AB(c, 247u, depth); }
L_003A7DEC:
    set32(c.r[13], c.r[9].w[0] >> 31);
    c.r[15].d[0] = c.r[15].d[0] & 2ull;
    c.r[14].d[0] = c.r[3].d[0] | c.r[12].d[0];
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != 0ull; c.r[16].d[0] = c.r[13].d[0] | c.r[15].d[0];  if (t) { goto L_003A7E1C; } }
    set32(c.r[15], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_003A7FCC; } }
    c.budget -= 2;
    if (c.r[15].d[0] == 0ull) { set32(c.r[15], 0u + 3u);  goto L_003A7FE4; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7E1C:
    c.r[15].d[0] = c.r[8].d[0] | c.r[11].d[0];
    c.budget -= 1;
L_003A7E20:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { goto L_003A7E44; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A7E3C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003A7E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27952u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27944u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7E44:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { goto L_003A7E70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[15], 0u + 1u);  if (t) { goto L_003A7F90; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A7F84; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003A7F5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A7F54; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.budget -= 1;
L_003A7E70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[15].d[0]; set32(c.r[15], c.r[3].w[0] - c.r[8].w[0]);  if (t) { goto L_003A7E88; } }
    c.budget -= 2;
    if (c.r[9].sd[0] >= 0) { c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7E34u | kUnwind; return; } goto L_003A7E34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7E3Cu | kUnwind; return; } goto L_003A7E3C; } }
L_003A7E88:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 20));
    c.r[14].d[0] = c.r[15].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_003A7F24; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = ld64((c.r[15].w[0] + 27952u));
    c.budget -= 2;
L_003A7EA0:
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A7F04; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003A7EE4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003A7EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7EC8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28000u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7EC8u) [[unlikely]] return; }
L_003A7EC8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 27928u));
    c.budget -= 3;
L_003A7ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7EDCu);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7EDCu) [[unlikely]] return; }
L_003A7EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DC0u | kUnwind; return; } goto L_003A7DC0; } }
L_003A7EE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7EC0u | kUnwind; return; } goto L_003A7EC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7EF4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28000u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A7EF4u) [[unlikely]] return; }
L_003A7EF4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld64((c.r[15].w[0] + 27928u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7ED4u | kUnwind; return; } goto L_003A7ED4; } }
L_003A7F04:
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[15].d[0] = c.r[15].d[0] ^ c.r[14].d[0];
    c.r[13].d[0] = c.r[4].d[0] << 32;
    c.r[13].d[0] = c.r[13].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[13].d[0] | c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7F24:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[15].d[0] = c.r[15].sd[0] < -60ll ? 1ull : 0ull;  if (t) { goto L_003A7F34; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7EA0u | kUnwind; return; } goto L_003A7EA0; } }
L_003A7F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7F3Cu); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A7F3Cu) [[unlikely]] return; }
L_003A7F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7F44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003A7F44u) [[unlikely]] return; }
L_003A7F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A7F4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 247u, depth + 1u); else { c.pc = 0x003AE068u; return; } if (c.pc != 0x003A7F4Cu) [[unlikely]] return; }
L_003A7F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7EA0u | kUnwind; return; } goto L_003A7EA0; } }
L_003A7F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27960u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7F5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 3u);  if (t) { goto L_003A7F78; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7E70u | kUnwind; return; } goto L_003A7E70; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27984u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7F78:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27976u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7F84:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27968u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7F90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003A7FD8; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003A7FB0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7E70u | kUnwind; return; } goto L_003A7E70; } }
L_003A7FB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 3u);  if (t) { goto L_003A7FCC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7E70u | kUnwind; return; } goto L_003A7E70; } }
L_003A7FC0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27936u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7FCC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27928u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7FD8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 27992u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7DBCu | kUnwind; return; } goto L_003A7DBC; } }
L_003A7FE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[8].d[0] | c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7FC0u | kUnwind; return; } goto L_003A7FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A7E20u | kUnwind; return; } goto L_003A7E20; } }
    c.budget -= 1;
L_003A7FF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_00AA(c, 1u, depth);
}

}
