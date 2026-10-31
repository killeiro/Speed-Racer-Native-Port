#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00EA[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141,
    0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0,
    0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0,
    330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0,
    339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0,
    0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0,
    381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396,
    0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00EA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004A8000;
    case 2u: goto L_004A8010;
    case 3u: goto L_004A8030;
    case 4u: goto L_004A8040;
    case 5u: goto L_004A80A4;
    case 6u: goto L_004A80F0;
    case 7u: goto L_004A8110;
    case 8u: goto L_004A8120;
    case 9u: goto L_004A8178;
    case 10u: goto L_004A8190;
    case 11u: goto L_004A81AC;
    case 12u: goto L_004A81C0;
    case 13u: goto L_004A81D0;
    case 14u: goto L_004A81DC;
    case 15u: goto L_004A8200;
    case 16u: goto L_004A8220;
    case 17u: goto L_004A8280;
    case 18u: goto L_004A8298;
    case 19u: goto L_004A82B4;
    case 20u: goto L_004A82C8;
    case 21u: goto L_004A82D8;
    case 22u: goto L_004A82E4;
    case 23u: goto L_004A82F4;
    case 24u: goto L_004A8334;
    case 25u: goto L_004A834C;
    case 26u: goto L_004A8368;
    case 27u: goto L_004A837C;
    case 28u: goto L_004A83BC;
    case 29u: goto L_004A83D4;
    case 30u: goto L_004A83EC;
    case 31u: goto L_004A8400;
    case 32u: goto L_004A8418;
    case 33u: goto L_004A8448;
    case 34u: goto L_004A8470;
    case 35u: goto L_004A84C8;
    case 36u: goto L_004A84E0;
    case 37u: goto L_004A84FC;
    case 38u: goto L_004A8510;
    case 39u: goto L_004A8520;
    case 40u: goto L_004A852C;
    case 41u: goto L_004A8550;
    case 42u: goto L_004A8570;
    case 43u: goto L_004A85D0;
    case 44u: goto L_004A85E8;
    case 45u: goto L_004A8604;
    case 46u: goto L_004A8618;
    case 47u: goto L_004A8628;
    case 48u: goto L_004A8634;
    case 49u: goto L_004A8644;
    case 50u: goto L_004A8684;
    case 51u: goto L_004A869C;
    case 52u: goto L_004A86B8;
    case 53u: goto L_004A86CC;
    case 54u: goto L_004A870C;
    case 55u: goto L_004A8724;
    case 56u: goto L_004A873C;
    case 57u: goto L_004A8750;
    case 58u: goto L_004A8768;
    case 59u: goto L_004A8798;
    case 60u: goto L_004A87C0;
    case 61u: goto L_004A8800;
    case 62u: goto L_004A8810;
    case 63u: goto L_004A8840;
    case 64u: goto L_004A8858;
    case 65u: goto L_004A8870;
    case 66u: goto L_004A8880;
    case 67u: goto L_004A88B4;
    case 68u: goto L_004A88CC;
    case 69u: goto L_004A88D8;
    case 70u: goto L_004A88F0;
    case 71u: goto L_004A893C;
    case 72u: goto L_004A8958;
    case 73u: goto L_004A8964;
    case 74u: goto L_004A8990;
    case 75u: goto L_004A89B8;
    case 76u: goto L_004A89D0;
    case 77u: goto L_004A8A1C;
    case 78u: goto L_004A8A28;
    case 79u: goto L_004A8A58;
    case 80u: goto L_004A8A7C;
    case 81u: goto L_004A8AA0;
    case 82u: goto L_004A8AB4;
    case 83u: goto L_004A8B00;
    case 84u: goto L_004A8B28;
    case 85u: goto L_004A8B50;
    case 86u: goto L_004A8BA4;
    case 87u: goto L_004A8BB0;
    case 88u: goto L_004A8BDC;
    case 89u: goto L_004A8BE8;
    case 90u: goto L_004A8BF8;
    case 91u: goto L_004A8C20;
    case 92u: goto L_004A8C3C;
    case 93u: goto L_004A8C64;
    case 94u: goto L_004A8C74;
    case 95u: goto L_004A8C84;
    case 96u: goto L_004A8CB4;
    case 97u: goto L_004A8CC8;
    case 98u: goto L_004A8CEC;
    case 99u: goto L_004A8D0C;
    case 100u: goto L_004A8D50;
    case 101u: goto L_004A8D60;
    case 102u: goto L_004A8D74;
    case 103u: goto L_004A8D80;
    case 104u: goto L_004A8DC0;
    case 105u: goto L_004A8DD0;
    case 106u: goto L_004A8DF4;
    case 107u: goto L_004A8E04;
    case 108u: goto L_004A8E28;
    case 109u: goto L_004A8E38;
    case 110u: goto L_004A8E6C;
    case 111u: goto L_004A8EA8;
    case 112u: goto L_004A8EF8;
    case 113u: goto L_004A8F18;
    case 114u: goto L_004A8F6C;
    case 115u: goto L_004A8F7C;
    case 116u: goto L_004A8FD0;
    case 117u: goto L_004A8FF0;
    case 118u: goto L_004A9018;
    case 119u: goto L_004A905C;
    case 120u: goto L_004A9094;
    case 121u: goto L_004A90B4;
    case 122u: goto L_004A90C0;
    case 123u: goto L_004A90FC;
    case 124u: goto L_004A9144;
    case 125u: goto L_004A915C;
    case 126u: goto L_004A9174;
    case 127u: goto L_004A9188;
    case 128u: goto L_004A91A0;
    case 129u: goto L_004A91D0;
    case 130u: goto L_004A9200;
    case 131u: goto L_004A9248;
    case 132u: goto L_004A9260;
    case 133u: goto L_004A9278;
    case 134u: goto L_004A928C;
    case 135u: goto L_004A92A4;
    case 136u: goto L_004A92D4;
    case 137u: goto L_004A92EC;
    case 138u: goto L_004A9320;
    case 139u: goto L_004A935C;
    case 140u: goto L_004A9368;
    case 141u: goto L_004A937C;
    case 142u: goto L_004A9388;
    case 143u: goto L_004A939C;
    case 144u: goto L_004A93B8;
    case 145u: goto L_004A93D4;
    case 146u: goto L_004A9400;
    case 147u: goto L_004A9430;
    case 148u: goto L_004A9444;
    case 149u: goto L_004A9468;
    case 150u: goto L_004A9488;
    case 151u: goto L_004A949C;
    case 152u: goto L_004A94B0;
    case 153u: goto L_004A94C4;
    case 154u: goto L_004A94F0;
    case 155u: goto L_004A9500;
    case 156u: goto L_004A9514;
    case 157u: goto L_004A9520;
    case 158u: goto L_004A959C;
    case 159u: goto L_004A95B0;
    case 160u: goto L_004A95C4;
    case 161u: goto L_004A95D8;
    case 162u: goto L_004A95F0;
    case 163u: goto L_004A961C;
    case 164u: goto L_004A963C;
    case 165u: goto L_004A966C;
    case 166u: goto L_004A96A0;
    case 167u: goto L_004A9700;
    case 168u: goto L_004A9728;
    case 169u: goto L_004A973C;
    case 170u: goto L_004A9758;
    case 171u: goto L_004A9768;
    case 172u: goto L_004A9780;
    case 173u: goto L_004A97E0;
    case 174u: goto L_004A9844;
    case 175u: goto L_004A98A4;
    case 176u: goto L_004A9904;
    case 177u: goto L_004A9960;
    case 178u: goto L_004A99D0;
    case 179u: goto L_004A9A2C;
    case 180u: goto L_004A9A70;
    case 181u: goto L_004A9A8C;
    case 182u: goto L_004A9AE8;
    case 183u: goto L_004A9B60;
    case 184u: goto L_004A9BC0;
    case 185u: goto L_004A9C1C;
    case 186u: goto L_004A9C7C;
    case 187u: goto L_004A9CE0;
    case 188u: goto L_004A9D40;
    case 189u: goto L_004A9DA0;
    case 190u: goto L_004A9DF8;
    case 191u: goto L_004A9E18;
    case 192u: goto L_004A9E2C;
    case 193u: goto L_004A9E40;
    case 194u: goto L_004A9E54;
    case 195u: goto L_004A9EB8;
    case 196u: goto L_004A9F18;
    case 197u: goto L_004A9F74;
    case 198u: goto L_004A9FD0;
    case 199u: goto L_004A9FDC;
    case 200u: goto L_004A9FEC;
    case 201u: goto L_004AA010;
    case 202u: goto L_004AA054;
    case 203u: goto L_004AA064;
    case 204u: goto L_004AA070;
    case 205u: goto L_004AA090;
    case 206u: goto L_004AA0B8;
    case 207u: goto L_004AA0FC;
    case 208u: goto L_004AA14C;
    case 209u: goto L_004AA164;
    case 210u: goto L_004AA17C;
    case 211u: goto L_004AA190;
    case 212u: goto L_004AA1A8;
    case 213u: goto L_004AA1D8;
    case 214u: goto L_004AA200;
    case 215u: goto L_004AA240;
    case 216u: goto L_004AA280;
    case 217u: goto L_004AA330;
    case 218u: goto L_004AA34C;
    case 219u: goto L_004AA38C;
    case 220u: goto L_004AA43C;
    case 221u: goto L_004AA450;
    case 222u: goto L_004AA458;
    case 223u: goto L_004AA460;
    case 224u: goto L_004AA488;
    case 225u: goto L_004AA4A4;
    case 226u: goto L_004AA4AC;
    case 227u: goto L_004AA4D4;
    case 228u: goto L_004AA4F4;
    case 229u: goto L_004AA504;
    case 230u: goto L_004AA520;
    case 231u: goto L_004AA528;
    case 232u: goto L_004AA538;
    case 233u: goto L_004AA540;
    case 234u: goto L_004AA548;
    case 235u: goto L_004AA564;
    case 236u: goto L_004AA574;
    case 237u: goto L_004AA588;
    case 238u: goto L_004AA598;
    case 239u: goto L_004AA5A8;
    case 240u: goto L_004AA5B8;
    case 241u: goto L_004AA5C4;
    case 242u: goto L_004AA5F0;
    case 243u: goto L_004AA600;
    case 244u: goto L_004AA694;
    case 245u: goto L_004AA6C4;
    case 246u: goto L_004AA6D0;
    case 247u: goto L_004AA6E8;
    case 248u: goto L_004AA700;
    case 249u: goto L_004AA724;
    case 250u: goto L_004AA76C;
    case 251u: goto L_004AA780;
    case 252u: goto L_004AA794;
    case 253u: goto L_004AA7B4;
    case 254u: goto L_004AA7C8;
    case 255u: goto L_004AA7E0;
    case 256u: goto L_004AA7F8;
    case 257u: goto L_004AA840;
    case 258u: goto L_004AA890;
    case 259u: goto L_004AA8B4;
    case 260u: goto L_004AA8D0;
    case 261u: goto L_004AA8F4;
    case 262u: goto L_004AA90C;
    case 263u: goto L_004AA930;
    case 264u: goto L_004AA940;
    case 265u: goto L_004AA964;
    case 266u: goto L_004AA970;
    case 267u: goto L_004AA980;
    case 268u: goto L_004AA990;
    case 269u: goto L_004AA9B8;
    case 270u: goto L_004AAA10;
    case 271u: goto L_004AAAEC;
    case 272u: goto L_004AAB04;
    case 273u: goto L_004AAB2C;
    case 274u: goto L_004AABA8;
    case 275u: goto L_004AABB0;
    case 276u: goto L_004AABD0;
    case 277u: goto L_004AAC88;
    case 278u: goto L_004AAD08;
    case 279u: goto L_004AAD10;
    case 280u: goto L_004AAD3C;
    case 281u: goto L_004AADF0;
    case 282u: goto L_004AAE14;
    case 283u: goto L_004AAE40;
    case 284u: goto L_004AAE64;
    case 285u: goto L_004AAECC;
    case 286u: goto L_004AAEE0;
    case 287u: goto L_004AAF28;
    case 288u: goto L_004AAF3C;
    case 289u: goto L_004AAF48;
    case 290u: goto L_004AAF54;
    case 291u: goto L_004AAF5C;
    case 292u: goto L_004AAF6C;
    case 293u: goto L_004AAF8C;
    case 294u: goto L_004AAFA0;
    case 295u: goto L_004AAFAC;
    case 296u: goto L_004AAFB8;
    case 297u: goto L_004AAFC0;
    case 298u: goto L_004AAFD0;
    case 299u: goto L_004AAFDC;
    case 300u: goto L_004AAFE4;
    case 301u: goto L_004AAFF4;
    case 302u: goto L_004AB020;
    case 303u: goto L_004AB034;
    case 304u: goto L_004AB040;
    case 305u: goto L_004AB04C;
    case 306u: goto L_004AB054;
    case 307u: goto L_004AB064;
    case 308u: goto L_004AB084;
    case 309u: goto L_004AB098;
    case 310u: goto L_004AB0A4;
    case 311u: goto L_004AB0B0;
    case 312u: goto L_004AB0B8;
    case 313u: goto L_004AB0C8;
    case 314u: goto L_004AB0D4;
    case 315u: goto L_004AB0DC;
    case 316u: goto L_004AB0EC;
    case 317u: goto L_004AB0FC;
    case 318u: goto L_004AB120;
    case 319u: goto L_004AB134;
    case 320u: goto L_004AB140;
    case 321u: goto L_004AB150;
    case 322u: goto L_004AB160;
    case 323u: goto L_004AB170;
    case 324u: goto L_004AB1A0;
    case 325u: goto L_004AB2A0;
    case 326u: goto L_004AB2D8;
    case 327u: goto L_004AB2F8;
    case 328u: goto L_004AB3A0;
    case 329u: goto L_004AB3F8;
    case 330u: goto L_004AB400;
    case 331u: goto L_004AB40C;
    case 332u: goto L_004AB46C;
    case 333u: goto L_004AB4A0;
    case 334u: goto L_004AB4B0;
    case 335u: goto L_004AB4C0;
    case 336u: goto L_004AB4D0;
    case 337u: goto L_004AB4E0;
    case 338u: goto L_004AB4F0;
    case 339u: goto L_004AB500;
    case 340u: goto L_004AB510;
    case 341u: goto L_004AB520;
    case 342u: goto L_004AB530;
    case 343u: goto L_004AB540;
    case 344u: goto L_004AB588;
    case 345u: goto L_004AB5A0;
    case 346u: goto L_004AB5C0;
    case 347u: goto L_004AB5EC;
    case 348u: goto L_004AB5F8;
    case 349u: goto L_004AB610;
    case 350u: goto L_004AB63C;
    case 351u: goto L_004AB668;
    case 352u: goto L_004AB684;
    case 353u: goto L_004AB690;
    case 354u: goto L_004AB6A0;
    case 355u: goto L_004AB6AC;
    case 356u: goto L_004AB6F0;
    case 357u: goto L_004AB6F8;
    case 358u: goto L_004AB708;
    case 359u: goto L_004AB714;
    case 360u: goto L_004AB730;
    case 361u: goto L_004AB744;
    case 362u: goto L_004AB760;
    case 363u: goto L_004AB76C;
    case 364u: goto L_004AB780;
    case 365u: goto L_004AB7A4;
    case 366u: goto L_004AB7C0;
    case 367u: goto L_004AB7E4;
    case 368u: goto L_004AB7FC;
    case 369u: goto L_004AB820;
    case 370u: goto L_004AB830;
    case 371u: goto L_004AB854;
    case 372u: goto L_004AB860;
    case 373u: goto L_004AB870;
    case 374u: goto L_004AB894;
    case 375u: goto L_004AB8A0;
    case 376u: goto L_004AB8B0;
    case 377u: goto L_004AB8C0;
    case 378u: goto L_004AB8D0;
    case 379u: goto L_004AB8E0;
    case 380u: goto L_004AB8F0;
    case 381u: goto L_004AB900;
    case 382u: goto L_004AB910;
    case 383u: goto L_004AB920;
    case 384u: goto L_004AB930;
    case 385u: goto L_004AB944;
    case 386u: goto L_004AB960;
    case 387u: goto L_004AB988;
    case 388u: goto L_004AB9A0;
    case 389u: goto L_004AB9B0;
    case 390u: goto L_004AB9C8;
    case 391u: goto L_004AB9E0;
    case 392u: goto L_004ABA2C;
    case 393u: goto L_004ABA44;
    case 394u: goto L_004ABA60;
    case 395u: goto L_004ABA74;
    case 396u: goto L_004ABA7C;
    case 397u: goto L_004ABA84;
    case 398u: goto L_004ABA98;
    case 399u: goto L_004ABAB0;
    case 400u: goto L_004ABAD4;
    case 401u: goto L_004ABAEC;
    case 402u: goto L_004ABB10;
    case 403u: goto L_004ABB34;
    case 404u: goto L_004ABB4C;
    case 405u: goto L_004ABB70;
    case 406u: goto L_004ABBC4;
    case 407u: goto L_004ABBEC;
    case 408u: goto L_004ABBFC;
    case 409u: goto L_004ABC10;
    case 410u: goto L_004ABC2C;
    case 411u: goto L_004ABC64;
    case 412u: goto L_004ABC8C;
    case 413u: goto L_004ABC9C;
    case 414u: goto L_004ABCB0;
    case 415u: goto L_004ABCCC;
    case 416u: goto L_004ABCF0;
    case 417u: goto L_004ABD70;
    case 418u: goto L_004ABD98;
    case 419u: goto L_004ABDA8;
    case 420u: goto L_004ABDBC;
    case 421u: goto L_004ABDD8;
    case 422u: goto L_004ABE10;
    case 423u: goto L_004ABE38;
    case 424u: goto L_004ABE48;
    case 425u: goto L_004ABE5C;
    case 426u: goto L_004ABE78;
    case 427u: goto L_004ABEB0;
    case 428u: goto L_004ABED8;
    case 429u: goto L_004ABEE8;
    case 430u: goto L_004ABEFC;
    case 431u: goto L_004ABF18;
    case 432u: goto L_004ABF2C;
    case 433u: goto L_004ABF54;
    case 434u: goto L_004ABF64;
    case 435u: goto L_004ABF7C;
    case 436u: goto L_004ABF98;
    case 437u: goto L_004ABFA4;
    case 438u: goto L_004ABFC0;
    case 439u: goto L_004ABFDC;
    default: bad_entry(c, 0x004A8000u); return;
    }
L_004A8000:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A8014; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8010u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A8010u) [[unlikely]] return; }
L_004A8010:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A8014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A8030:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004A8040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A80F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[17].w[0] + 68u);
    set32(c.r[3], c.r[3].w[0] - 26864u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_004A80A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 94u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A80A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004A80A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A80A4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A80A4u) [[unlikely]] return; }
L_004A80A4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004A80DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30400u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A80D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 30368u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A80D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24576u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004A80D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004A80DC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A80F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A80F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A80F0u) [[unlikely]] return; }
L_004A80F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A80F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A8110:
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004A8120:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A819C; } }
    set32(c.r[4], c.r[17].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8178u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8178u) [[unlikely]] return; }
L_004A8178:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 72u);  goto L_004A8194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8190u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A8190u) [[unlikely]] return; }
L_004A8190:
    set32(c.r[2], c.r[17].w[0] + 72u);
    c.budget -= 1;
L_004A8194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004A81C4; } }
L_004A819C:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A81ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A81ACu) [[unlikely]] return; }
L_004A81AC:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A81C0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A81C0u) [[unlikely]] return; }
L_004A81C0:
    st32((c.r[17].w[0] + 72u), c.r[19].w[0]);
    c.budget -= 1;
L_004A81C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A81D0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A81D0u) [[unlikely]] return; }
L_004A81D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A81DCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 67u, depth + 1u); else { c.pc = 0x0048CC30u; return; } if (c.pc != 0x004A81DCu) [[unlikely]] return; }
L_004A81DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004A8204; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A8200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8200u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A8200u) [[unlikely]] return; }
L_004A8200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004A8204:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A8220:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 94u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_004A82A4; } }
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8280u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8280u) [[unlikely]] return; }
L_004A8280:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[16].w[0] + 72u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 72u);  goto L_004A829C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8298u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A8298u) [[unlikely]] return; }
L_004A8298:
    set32(c.r[2], c.r[16].w[0] + 72u);
    c.budget -= 1;
L_004A829C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004A82CC; } }
L_004A82A4:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A82B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A82B4u) [[unlikely]] return; }
L_004A82B4:
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A82C8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A82C8u) [[unlikely]] return; }
L_004A82C8:
    st32((c.r[16].w[0] + 72u), c.r[18].w[0]);
    c.budget -= 1;
L_004A82CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A82D8u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_00E3(c, 219u, depth + 1u); else { c.pc = 0x0048E0A0u; return; } if (c.pc != 0x004A82D8u) [[unlikely]] return; }
L_004A82D8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A82E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 407u, depth + 1u); else { c.pc = 0x0048BB10u; return; } if (c.pc != 0x004A82E4u) [[unlikely]] return; }
L_004A82E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A82F4u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A82F4u) [[unlikely]] return; }
L_004A82F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 72u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 94u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 72u)));  goto L_004A8358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8334u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8334u) [[unlikely]] return; }
L_004A8334:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_004A8350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A834Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A834Cu) [[unlikely]] return; }
L_004A834C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_004A8350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_004A8380; } }
L_004A8358:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8368u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A8368u) [[unlikely]] return; }
L_004A8368:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A837Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A837Cu) [[unlikely]] return; }
L_004A837C:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_004A8380:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_004A83E0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A83BCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A83BCu) [[unlikely]] return; }
L_004A83BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004A83D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A83D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A83D4u) [[unlikely]] return; }
L_004A83D4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004A83D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004A8404; } }
L_004A83E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A83ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A83ECu) [[unlikely]] return; }
L_004A83EC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8400u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8400u) [[unlikely]] return; }
L_004A8400:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004A8404:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8418u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A8418u) [[unlikely]] return; }
L_004A8418:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_004A8448; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A844C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8448u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A8448u) [[unlikely]] return; }
L_004A8448:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A844C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004A8470:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    st16((c.r[4].w[0] + 102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A84EC; } }
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A84C8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A84C8u) [[unlikely]] return; }
L_004A84C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 80u);  goto L_004A84E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A84E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A84E0u) [[unlikely]] return; }
L_004A84E0:
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_004A84E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_004A8514; } }
L_004A84EC:
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A84FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A84FCu) [[unlikely]] return; }
L_004A84FC:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8510u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8510u) [[unlikely]] return; }
L_004A8510:
    st32((c.r[17].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 1;
L_004A8514:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8520u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004A8520u) [[unlikely]] return; }
L_004A8520:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A852Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00E3(c, 75u, depth + 1u); else { c.pc = 0x0048CDE0u; return; } if (c.pc != 0x004A852Cu) [[unlikely]] return; }
L_004A852C:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004A8554; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A8550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8550u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004A8550u) [[unlikely]] return; }
L_004A8550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004A8554:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A8570:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[5], c.r[17].w[0] + 4u);
    st16((c.r[4].w[0] + 102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.f[20] = c.f[12];  if (t) { goto L_004A85F4; } }
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A85D0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A85D0u) [[unlikely]] return; }
L_004A85D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 80u);  goto L_004A85EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A85E8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A85E8u) [[unlikely]] return; }
L_004A85E8:
    set32(c.r[2], c.r[16].w[0] + 80u);
    c.budget -= 1;
L_004A85EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_004A861C; } }
L_004A85F4:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8604u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A8604u) [[unlikely]] return; }
L_004A8604:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8618u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8618u) [[unlikely]] return; }
L_004A8618:
    st32((c.r[16].w[0] + 80u), c.r[18].w[0]);
    c.budget -= 1;
L_004A861C:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8628u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_00E3(c, 219u, depth + 1u); else { c.pc = 0x0048E0A0u; return; } if (c.pc != 0x004A8628u) [[unlikely]] return; }
L_004A8628:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8634u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 401u, depth + 1u); else { c.pc = 0x0048B930u; return; } if (c.pc != 0x004A8634u) [[unlikely]] return; }
L_004A8634:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8644u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x004A8644u) [[unlikely]] return; }
L_004A8644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 102u)));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 14;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 80u)));  goto L_004A86A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8684u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8684u) [[unlikely]] return; }
L_004A8684:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 116u);  goto L_004A86A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A869Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A869Cu) [[unlikely]] return; }
L_004A869C:
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 1;
L_004A86A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_004A86D0; } }
L_004A86A8:
    c.r[5].d[0] = 0ull << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A86B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A86B8u) [[unlikely]] return; }
L_004A86B8:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A86CCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A86CCu) [[unlikely]] return; }
L_004A86CC:
    st32((c.r[29].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_004A86D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[19], ld32((c.r[16].w[0] + 72u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_004A8730; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A870Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A870Cu) [[unlikely]] return; }
L_004A870C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004A8728; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8724u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A8724u) [[unlikely]] return; }
L_004A8724:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004A8728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004A8754; } }
L_004A8730:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A873Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A873Cu) [[unlikely]] return; }
L_004A873C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8750u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A8750u) [[unlikely]] return; }
L_004A8750:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004A8754:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8768u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A8768u) [[unlikely]] return; }
L_004A8768:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_004A8798; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A879C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8798u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A8798u) [[unlikely]] return; }
L_004A8798:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A879C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004A87C0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A87E8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004A87E0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004A87E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A87EC; } }
L_004A87E8:
    set32(c.r[2], c.r[2].w[0] - 5544u);
    c.budget -= 1;
L_004A87EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A8800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 5536u);  c.pc = t; return; }
L_004A8810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A8858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8840u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 94u, depth + 1u); else { c.pc = 0x00188FF0u; return; } if (c.pc != 0x004A8840u) [[unlikely]] return; }
L_004A8840:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004A885C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8858u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004A8858u) [[unlikely]] return; }
L_004A8858:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A885C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A8870:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00188BE0u | kUnwind; return; } [[clang::musttail]] return unit_0022(c, 65u, depth); }
L_004A8880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004A88D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A88B4u); set32(c.r[4], 0u + 492u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004A88B4u) [[unlikely]] return; }
L_004A88B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_004A88D0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A88CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 248u, depth + 1u); else { c.pc = 0x004AA700u; return; } if (c.pc != 0x004A88CCu) [[unlikely]] return; }
L_004A88CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004A88D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A88D8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A88D8u) [[unlikely]] return; }
L_004A88D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 5498u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A88F0u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004A88F0u) [[unlikely]] return; }
L_004A88F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004A8948; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_004A8920; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004A8920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8944; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  goto L_004A8934; }
    set32(c.r[4], c.r[29].w[0] + 81u);
    c.budget -= 1;
L_004A8934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A893Cu); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004A893Cu) [[unlikely]] return; }
L_004A893C:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 320u), c.f[0]);
    c.budget -= 2;
L_004A8944:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004A8948:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8958u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 67u, depth + 1u); else { c.pc = 0x00188C30u; return; } if (c.pc != 0x004A8958u) [[unlikely]] return; }
L_004A8958:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A8964u) [[unlikely]] return; }
L_004A8964:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A8990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 312u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A89B8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004A89B8u) [[unlikely]] return; }
L_004A89B8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 316u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A89D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[4].w[0] + 356u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 316u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_004A8B04; } }
L_004A8A1C:
    set32(c.r[5], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8A28u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004A8A28u) [[unlikely]] return; }
L_004A8A28:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 132u)));  goto L_004A8A60; }
    set32(c.r[3], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[4], c.r[20].w[0] + 348u);
    set32(c.r[2], ld32((c.r[20].w[0] + 360u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[28].w[0] - 29624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8A58u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004A8A58u) [[unlikely]] return; }
L_004A8A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_004A8B04; } }
L_004A8A60:
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  goto L_004A8AA8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8A7Cu); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 282u, depth + 1u); else { c.pc = 0x0040A560u; return; } if (c.pc != 0x004A8A7Cu) [[unlikely]] return; }
L_004A8A7C:
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[4], c.r[20].w[0] + 348u);
    set32(c.r[3], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 360u)));
    set32(c.r[7], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8AA0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004A8AA0u) [[unlikely]] return; }
L_004A8AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A8B00; } }
L_004A8AA8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8AB4u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 282u, depth + 1u); else { c.pc = 0x0040A560u; return; } if (c.pc != 0x004A8AB4u) [[unlikely]] return; }
L_004A8AB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = c.f[1] & fp::kAbs;
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_004A8AE0; } }
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.budget -= 2;
L_004A8AE0:
    set32(c.r[3], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[4], c.r[20].w[0] + 348u);
    set32(c.r[2], ld32((c.r[20].w[0] + 360u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8B00u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004A8B00u) [[unlikely]] return; }
L_004A8B00:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004A8B04:
    c.r[1].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8A1Cu | kUnwind; return; } goto L_004A8A1C; }
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 360u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8B28u); set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00EA(c, 268u, depth + 1u); else { c.pc = 0x004AA990u; return; } if (c.pc != 0x004A8B28u) [[unlikely]] return; }
L_004A8B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A8B50:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8BA4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004A8BA4u) [[unlikely]] return; }
L_004A8BA4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8BB0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004A8BB0u) [[unlikely]] return; }
L_004A8BB0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004A8BD4; }
    c.budget -= 2;
    if (c.r[19].sd[0] > 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004A8BF0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A8BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8BDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A8BDCu) [[unlikely]] return; }
L_004A8BDC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8BE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A8BE8u) [[unlikely]] return; }
L_004A8BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_004A92F0; } }
L_004A8BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8BF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A8BF8u) [[unlikely]] return; }
L_004A8BF8:
    set32(c.r[4], c.r[16].w[0] - 1u);
    set32(c.r[2], ld32((c.r[23].w[0] + 320u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[19].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8C20u); set32(c.r[16], c.r[2].w[0] + 396u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004A8C20u) [[unlikely]] return; }
L_004A8C20:
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_004A8C44; }
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8C3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A8C3Cu) [[unlikely]] return; }
L_004A8C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A92EC; } }
L_004A8C44:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 316u)));  goto L_004A8D84; }
    set32(c.r[21], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { set32(c.r[22], c.r[21].w[0] + 36u);  goto L_004A8C6C; }
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8C64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A8C64u) [[unlikely]] return; }
L_004A8C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A92EC; } }
L_004A8C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8C74u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004A8C74u) [[unlikely]] return; }
L_004A8C74:
    set32(c.r[30], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8C84u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004A8C84u) [[unlikely]] return; }
L_004A8C84:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0])));  goto L_004A8CD4; }
    set32(c.r[2], ld32((c.r[30].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004A8CD0; } }
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8CB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x004A8CB4u) [[unlikely]] return; }
L_004A8CB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8CC8u); set32(c.r[5], c.r[5].w[0] - 5481u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A8CC8u) [[unlikely]] return; }
L_004A8CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 240u)));  if (t) { goto L_004A8CF0; } }
L_004A8CD0:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_004A8CD4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[22].w[0] + 1u);  goto L_004A8CE4; }
    set32(c.r[5], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 1;
L_004A8CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8CECu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A8CECu) [[unlikely]] return; }
L_004A8CEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 1;
L_004A8CF0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 241u);  goto L_004A8D00; }
    set32(c.r[6], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_004A8D00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A8D0Cu) [[unlikely]] return; }
L_004A8D0C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 132u)));  goto L_004A8D28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29628u)));  if (t) { goto L_004A8D40; } }
L_004A8D28:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] + 132u);  if (t) { goto L_004A8D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004A8D40; } }
L_004A8D3C:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004A8D40:
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 324u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D50u); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_00EA(c, 283u, depth + 1u); else { c.pc = 0x004AAE40u; return; } if (c.pc != 0x004A8D50u) [[unlikely]] return; }
L_004A8D50:
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 338u, depth + 1u); else { c.pc = 0x0048AC10u; return; } if (c.pc != 0x004A8D60u) [[unlikely]] return; }
L_004A8D60:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D74u); set32(c.r[6], c.r[6].w[0] - 5466u);  if (depth < kMaxDepth) unit_00E2(c, 342u, depth + 1u); else { c.pc = 0x0048AC70u; return; } if (c.pc != 0x004A8D74u) [[unlikely]] return; }
L_004A8D74:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A8D80u) [[unlikely]] return; }
L_004A8D80:
    set32(c.r[3], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 1;
L_004A8D84:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_004A8DD8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_004A8DD0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8DC0u); set32(c.r[6], c.r[20].w[0] + 364u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A8DC0u) [[unlikely]] return; }
L_004A8DC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8DD0u); set32(c.r[6], c.r[20].w[0] + 364u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A8DD0u) [[unlikely]] return; }
L_004A8DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 2u);  if (t) { goto L_004A8E08; } }
L_004A8DD8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004A8E04; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8DF4u); set32(c.r[6], c.r[20].w[0] + 380u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A8DF4u) [[unlikely]] return; }
L_004A8DF4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8E04u); set32(c.r[6], c.r[20].w[0] + 380u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A8E04u) [[unlikely]] return; }
L_004A8E04:
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_004A8E08:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  goto L_004A8E2C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8E28u); set32(c.r[6], c.r[6].w[0] - 5616u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A8E28u) [[unlikely]] return; }
L_004A8E28:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 1;
L_004A8E2C:
    set32(c.r[5], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8E38u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 290u, depth + 1u); else { c.pc = 0x0040A7F0u; return; } if (c.pc != 0x004A8E38u) [[unlikely]] return; }
L_004A8E38:
    set32(c.r[3], ld32((c.r[17].w[0] + 424u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 7u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[17].w[0] + 1200u));  goto L_004A8E74; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_004A9078; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8E6Cu); set32(c.r[6], c.r[6].w[0] - 5446u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A8E6Cu) [[unlikely]] return; }
L_004A8E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_004A9074; } }
L_004A8E74:
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8EB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A9074; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8EA8u); set32(c.r[6], c.r[6].w[0] - 5437u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A8EA8u) [[unlikely]] return; }
L_004A8EA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004A9074; } }
L_004A8EB4:
    c.budget -= 2;
    if (c.r[21].sd[0] <= 0) { set32(c.r[2], ld32((c.r[23].w[0] + 320u)));  goto L_004A8F2C; }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A8F28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004A8EE4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_004A9074; } }
L_004A8EE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[5].w[0] - 5423u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8EF8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A8EF8u) [[unlikely]] return; }
L_004A8EF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 257u);  goto L_004A8F0C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_004A8F0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8F18u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A8F18u) [[unlikely]] return; }
L_004A8F18:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[21].w[0]);  if (t) { goto L_004A9074; } }
L_004A8F28:
    set32(c.r[2], ld32((c.r[23].w[0] + 320u)));
    c.budget -= 1;
L_004A8F2C:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 132u)));  goto L_004A8F84; }
    set32(c.r[6], ld32((c.r[20].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  goto L_004A8F74; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8F6Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 282u, depth + 1u); else { c.pc = 0x0040A560u; return; } if (c.pc != 0x004A8F6Cu) [[unlikely]] return; }
L_004A8F6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_004A8FA0; } }
L_004A8F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8F7Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 282u, depth + 1u); else { c.pc = 0x0040A560u; return; } if (c.pc != 0x004A8F7Cu) [[unlikely]] return; }
L_004A8F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_004A8FA0; } }
L_004A8F84:
    set32(c.r[2], ld32((c.r[20].w[0] + 360u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[20] = c.f[0] & fp::kAbs;
    c.budget -= 7;
L_004A8FA0:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004A8FC8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[30].d[0]) { set32(c.r[2], 0u + 3u);  goto L_004A9070; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A8FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8FD0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A8FD0u) [[unlikely]] return; }
L_004A8FD0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.f[0] = fp::cvt_w_s(c.f[20]);  goto L_004A9060; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8FF0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A8FF0u) [[unlikely]] return; }
L_004A8FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A905C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A9034; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9018u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 99u, depth + 1u); else { c.pc = 0x004B8D90u; return; } if (c.pc != 0x004A9018u) [[unlikely]] return; }
L_004A9018:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004A9034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_004A9034:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004A9048; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 5410u);  if (t) { goto L_004A904C; } }
L_004A9048:
    set32(c.r[6], c.r[6].w[0] - 5407u);
    c.budget -= 1;
L_004A904C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A905Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x004A905Cu) [[unlikely]] return; }
L_004A905C:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.budget -= 1;
L_004A9060:
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
L_004A9070:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_004A9074:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004A9078:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_004A92DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[5].w[0] - 5404u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9094u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A9094u) [[unlikely]] return; }
L_004A9094:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 257u);  goto L_004A90A8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_004A90A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A90B4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A90B4u) [[unlikely]] return; }
L_004A90B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A90C0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A90C0u) [[unlikely]] return; }
L_004A90C0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);  goto L_004A91D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004A9104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A90FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A90FCu) [[unlikely]] return; }
L_004A90FC:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_004A9104:
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[22], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 13;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 212u)));  goto L_004A9168; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9144u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A9144u) [[unlikely]] return; }
L_004A9144:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_004A9160; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A915Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A915Cu) [[unlikely]] return; }
L_004A915C:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_004A9160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004A918C; } }
L_004A9168:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9174u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A9174u) [[unlikely]] return; }
L_004A9174:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9188u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A9188u) [[unlikely]] return; }
L_004A9188:
    st32((c.r[18].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004A918C:
    set32(c.r[25], ld32((c.r[20].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A91A0u); set32(c.r[4], c.r[20].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A91A0u) [[unlikely]] return; }
L_004A91A0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_004A92D4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0] + 4u), c.r[19].w[0]);  goto L_004A92D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A91D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A91D0u) [[unlikely]] return; }
L_004A91D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A92D4; } }
L_004A91D8:
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004A9208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9200u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A9200u) [[unlikely]] return; }
L_004A9200:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_004A9208:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 13;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 180u)));  goto L_004A926C; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9248u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A9248u) [[unlikely]] return; }
L_004A9248:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_004A9264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9260u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A9260u) [[unlikely]] return; }
L_004A9260:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_004A9264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004A9290; } }
L_004A926C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9278u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004A9278u) [[unlikely]] return; }
L_004A9278:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A928Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004A928Cu) [[unlikely]] return; }
L_004A928C:
    st32((c.r[18].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_004A9290:
    set32(c.r[25], ld32((c.r[20].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A92A4u); set32(c.r[4], c.r[20].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A92A4u) [[unlikely]] return; }
L_004A92A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_004A92D4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004A92D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A92D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004A92D4u) [[unlikely]] return; }
L_004A92D4:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004A92D8:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_004A92DC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A92ECu); st32((c.r[16].w[0] + 16u), c.r[30].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A92ECu) [[unlikely]] return; }
L_004A92EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_004A92F0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_004A9320:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A935Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004A935Cu) [[unlikely]] return; }
L_004A935C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9368u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004A9368u) [[unlikely]] return; }
L_004A9368:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004A9390; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A937Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A937Cu) [[unlikely]] return; }
L_004A937C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9388u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A9388u) [[unlikely]] return; }
L_004A9388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004A9670; } }
L_004A9390:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A939Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A939Cu) [[unlikely]] return; }
L_004A939C:
    set32(c.r[3], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A93B8u); set32(c.r[18], c.r[2].w[0] + 396u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x004A93B8u) [[unlikely]] return; }
L_004A93B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 316u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[21], ld32((c.r[2].w[0] + 320u)));  if (t) { goto L_004A93DC; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A93D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A93D4u) [[unlikely]] return; }
L_004A93D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A966C; } }
L_004A93DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004A93F8; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));  goto L_004A9524; }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004A93F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9400u); set32(c.r[16], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004A9400u) [[unlikely]] return; }
L_004A9400:
    set32(c.r[5], ld32((c.r[20].w[0] + 316u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_004A9450; }
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004A944C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9430u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x004A9430u) [[unlikely]] return; }
L_004A9430:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9444u); set32(c.r[5], c.r[5].w[0] - 5481u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A9444u) [[unlikely]] return; }
L_004A9444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_004A946C; } }
L_004A944C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004A9450:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_004A9460; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_004A9460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9468u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004A9468u) [[unlikely]] return; }
L_004A9468:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_004A946C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 129u);  goto L_004A947C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004A947C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9488u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A9488u) [[unlikely]] return; }
L_004A9488:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A949Cu); set32(c.r[6], c.r[6].w[0] - 8816u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A949Cu) [[unlikely]] return; }
L_004A949C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A94B0u); set32(c.r[6], c.r[6].w[0] - 8816u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A94B0u) [[unlikely]] return; }
L_004A94B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A94C4u); set32(c.r[6], c.r[6].w[0] - 8816u);  if (depth < kMaxDepth) unit_00E2(c, 297u, depth + 1u); else { c.pc = 0x0048A690u; return; } if (c.pc != 0x004A94C4u) [[unlikely]] return; }
L_004A94C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 132u);  if (t) { goto L_004A94DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004A94E0; } }
L_004A94DC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004A94E0:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 324u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A94F0u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00EA(c, 283u, depth + 1u); else { c.pc = 0x004AAE40u; return; } if (c.pc != 0x004A94F0u) [[unlikely]] return; }
L_004A94F0:
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9500u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00E2(c, 338u, depth + 1u); else { c.pc = 0x0048AC10u; return; } if (c.pc != 0x004A9500u) [[unlikely]] return; }
L_004A9500:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9514u); set32(c.r[6], c.r[6].w[0] - 5400u);  if (depth < kMaxDepth) unit_00E2(c, 342u, depth + 1u); else { c.pc = 0x0048AC70u; return; } if (c.pc != 0x004A9514u) [[unlikely]] return; }
L_004A9514:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9520u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A9520u) [[unlikely]] return; }
L_004A9520:
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    c.budget -= 1;
L_004A9524:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 316u)));  goto L_004A9554; }
    set32(c.r[2], ld32((c.r[20].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 16u));  if (t) { goto L_004A954C; } }
L_004A9548:
    c.f[20] = 0u;
    c.budget -= 1;
L_004A954C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_w_s(c.f[20]);  if (t) { goto L_004A9570; } }
L_004A9554:
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 28u));  if (t) { goto L_004A956C; } }
L_004A9568:
    c.f[20] = 0u;
    c.budget -= 1;
L_004A956C:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.budget -= 1;
L_004A9570:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[17], c.f[0]);
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004A9594; }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 316u)));  goto L_004A95F4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004A9594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A959Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A959Cu) [[unlikely]] return; }
L_004A959C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A95F0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A95B0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A95B0u) [[unlikely]] return; }
L_004A95B0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A95C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A95C4u) [[unlikely]] return; }
L_004A95C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A95F0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A95D8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004A95D8u) [[unlikely]] return; }
L_004A95D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A95F0u); set32(c.r[6], c.r[6].w[0] - 5379u);  if (depth < kMaxDepth) unit_00EC(c, 170u, depth + 1u); else { c.pc = 0x004B1B40u; return; } if (c.pc != 0x004A95F0u) [[unlikely]] return; }
L_004A95F0:
    set32(c.r[3], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 1;
L_004A95F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 316u)));  goto L_004A9640; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 5378u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A961Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004A961Cu) [[unlikely]] return; }
L_004A961C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 145u);  goto L_004A9630; }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004A9630:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A963Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x004A963Cu) [[unlikely]] return; }
L_004A963C:
    set32(c.r[6], ld32((c.r[20].w[0] + 316u)));
    c.budget -= 1;
L_004A9640:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[6].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A966Cu); st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004A966Cu) [[unlikely]] return; }
L_004A966C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_004A9670:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004A96A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A9768; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 316u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], ld32((c.r[3].w[0] + 52u)));  goto L_004A96E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A976C; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 1;
L_004A96E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 320u)));
    c.r[5].d[0] = c.r[3].d[0] ^ 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004A9768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9700u); set32(c.r[4], c.r[4].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004A9700u) [[unlikely]] return; }
L_004A9700:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = c.r[18].d[0] + 0ull;  goto L_004A9748; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9728u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9728u) [[unlikely]] return; }
L_004A9728:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A973Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A973Cu) [[unlikely]] return; }
L_004A973C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A9768; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A9748:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9758u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9758u) [[unlikely]] return; }
L_004A9758:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9768u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9768u) [[unlikely]] return; }
L_004A9768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A976C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A9780:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A9FEC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 316u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0] + 52u)));  goto L_004A97C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A9FF0; } }
    set32(c.r[17], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 1;
L_004A97C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A9FEC; } }
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_004A97E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A97E0u);  if (depth < kMaxDepth) unit_00EA(c, 76u, depth + 1u); else { c.pc = 0x004A89D0u; return; } if (c.pc != 0x004A97E0u) [[unlikely]] return; }
L_004A97E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004A97E4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_004A996C; }
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_004A9804; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004A981C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_004A9804:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A981C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A981C; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A981C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9834; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_004A983C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9834:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A983C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9844u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9844u) [[unlikely]] return; }
L_004A9844:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A985C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_004A9878; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A985C:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9878; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9878; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9878:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_004A9898; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9890:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9898:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A98A4u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A98A4u) [[unlikely]] return; }
L_004A98A4:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A98BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_004A98D8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A98BC:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A98D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A98D8; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A98D8:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A98F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_004A98F8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A98F0:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A98F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9904u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9904u) [[unlikely]] return; }
L_004A9904:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A991C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_004A9938; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A991C:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9938; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9938; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9938:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_004A9950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_004A9954; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_004A9950:
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_004A9954:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9960u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9960u) [[unlikely]] return; }
L_004A9960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004A9FD4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004A996C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_004A9AF0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_004A998C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004A99A4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_004A998C:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A99A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A99A4; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A99A4:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A99BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_004A99C4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A99BC:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A99C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A99D0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A99D0u) [[unlikely]] return; }
L_004A99D0:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A99E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_004A9A04; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A99E8:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9A04; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9A04; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9A04:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9A1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_004A9A24; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9A1C:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9A2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9A2Cu) [[unlikely]] return; }
L_004A9A2C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9A44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_004A9A60; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9A44:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9A60; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9A60; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9A60:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9A78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_004A9A80; } }
    goto L_004A9A74;
L_004A9A70:
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_004A9A74:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9A78:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9A80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9A8Cu); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9A8Cu) [[unlikely]] return; }
L_004A9A8C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_004A9AC0; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9AA4:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9AC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9AC0; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9AC0:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_004A9AD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_004A9ADC; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_004A9AD8:
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_004A9ADC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9AE8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9AE8u) [[unlikely]] return; }
L_004A9AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A9FD0; } }
L_004A9AF0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { goto L_004A9E00; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  goto L_004A9C88; }
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_004A9B1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004A9B34; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_004A9B1C:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9B34; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9B34; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9B34:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9B4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_004A9B54; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9B4C:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9B54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9B60u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9B60u) [[unlikely]] return; }
L_004A9B60:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9B78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_004A9B94; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9B78:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9B94; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9B94; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9B94:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9BAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_004A9BB4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9BAC:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9BB4:
    set32(c.r[7], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9BC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9BC0u) [[unlikely]] return; }
L_004A9BC0:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9BD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_004A9BF4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9BD8:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9BF4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9BF4; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9BF4:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9C0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_004A9C14; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9C0C:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9C1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9C1Cu) [[unlikely]] return; }
L_004A9C1C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9C34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_004A9C50; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9C34:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9C50; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9C50; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9C50:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] - 1u);  goto L_004A9C68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_004A9C70; } }
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_004A9C68:
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9C70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9C7Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9C7Cu) [[unlikely]] return; }
L_004A9C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A9FD0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_004A9C88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_004A9C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004A9CB4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_004A9C9C:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9CB4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9CB4; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9CB4:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9CCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_004A9CD4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9CCC:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9CD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9CE0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9CE0u) [[unlikely]] return; }
L_004A9CE0:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9CF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_004A9D14; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9CF8:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9D14; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9D14; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9D14:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9D2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_004A9D34; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9D2C:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9D34:
    set32(c.r[7], c.r[17].w[0] - 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9D40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9D40u) [[unlikely]] return; }
L_004A9D40:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9D58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_004A9D74; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9D58:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9D74; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9D74; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9D74:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9D8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_004A9D94; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9D8C:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9D94:
    set32(c.r[7], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9DA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9DA0u) [[unlikely]] return; }
L_004A9DA0:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9DB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_004A9DD4; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9DB8:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9DD4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9DD4; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9DD4:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_004A9DEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_004A9DF0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_004A9DEC:
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_004A9DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9DF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9DF8u) [[unlikely]] return; }
L_004A9DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A9FD0; } }
L_004A9E00:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;  goto L_004A9E60; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9E18u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9E18u) [[unlikely]] return; }
L_004A9E18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9E2Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9E2Cu) [[unlikely]] return; }
L_004A9E2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9E40u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9E40u) [[unlikely]] return; }
L_004A9E40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9E54u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9E54u) [[unlikely]] return; }
L_004A9E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A9FD0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_004A9E60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_004A9E74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004A9E8C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_004A9E74:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9E8C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9E8C; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9E8C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9EA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_004A9EAC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9EA4:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9EAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9EB8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9EB8u) [[unlikely]] return; }
L_004A9EB8:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9ED0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_004A9EEC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9ED0:
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9EEC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9EEC; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9EEC:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9F04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_004A9F0C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9F04:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9F0C:
    set32(c.r[7], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9F18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9F18u) [[unlikely]] return; }
L_004A9F18:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9F30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_004A9F4C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9F30:
    set32(c.r[2], c.r[16].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9F4C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9F4C; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9F4C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_004A9F6C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9F64:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_004A9F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9F74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 138u, depth + 1u); else { c.pc = 0x004A9320u; return; } if (c.pc != 0x004A9F74u) [[unlikely]] return; }
L_004A9F74:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_004A9F8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_004A9FA8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004A9F8C:
    set32(c.r[2], c.r[16].w[0] - 3u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_004A9FA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A9FA8; } }
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.budget -= 1;
L_004A9FA8:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_004A9FC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_004A9FC4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_004A9FC0:
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_004A9FC4:
    set32(c.r[7], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9FD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 85u, depth + 1u); else { c.pc = 0x004A8B50u; return; } if (c.pc != 0x004A9FD0u) [[unlikely]] return; }
L_004A9FD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004A9FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9FDCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004A9FDCu) [[unlikely]] return; }
L_004A9FDC:
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9FECu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x004A9FECu) [[unlikely]] return; }
L_004A9FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A9FF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AA010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 316u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004AA070; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004AA05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA054u);  if (depth < kMaxDepth) unit_00EA(c, 166u, depth + 1u); else { c.pc = 0x004A96A0u; return; } if (c.pc != 0x004AA054u) [[unlikely]] return; }
L_004AA054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AA068; } }
L_004AA05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA064u);  if (depth < kMaxDepth) unit_00EA(c, 172u, depth + 1u); else { c.pc = 0x004A9780u; return; } if (c.pc != 0x004AA064u) [[unlikely]] return; }
L_004AA064:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AA068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA070u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A610u; return; } if (c.pc != 0x004AA070u) [[unlikely]] return; }
L_004AA070:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AA090:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA0B8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x004AA0B8u) [[unlikely]] return; }
L_004AA0B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], 0u + 16u);
    c.f[0] = ld32((c.r[18].w[0] + 320u));
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(0u));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 116u), c.r[4].w[0]);  if (t) { goto L_004AA104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA0FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AA0FCu) [[unlikely]] return; }
L_004AA0FC:
    set32(c.r[2], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_004AA104:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[5], c.r[29].w[0] + 100u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 100u)));  goto L_004AA170; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA14Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AA14Cu) [[unlikely]] return; }
L_004AA14C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004AA168; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA164u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AA164u) [[unlikely]] return; }
L_004AA164:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004AA168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004AA194; } }
L_004AA170:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA17Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004AA17Cu) [[unlikely]] return; }
L_004AA17C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA190u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004AA190u) [[unlikely]] return; }
L_004AA190:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004AA194:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA1A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AA1A8u) [[unlikely]] return; }
L_004AA1A8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 96u), c.r[4].w[0]);  if (t) { goto L_004AA1D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004AA1DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA1D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004AA1D8u) [[unlikely]] return; }
L_004AA1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004AA1DC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004AA200:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[6].w[0] - 5375u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[7].w[0] - 5379u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA240u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004AA240u) [[unlikely]] return; }
L_004AA240:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 129u);  goto L_004AA254; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004AA254:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 200u);
    set32(c.r[5], c.r[5].w[0] - 8256u);
    set32(c.r[7], c.r[29].w[0] + 196u);
    set32(c.r[8], c.r[29].w[0] + 192u);
    set32(c.r[9], c.r[29].w[0] + 188u);
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA280u); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004AA280u) [[unlikely]] return; }
L_004AA280:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 200u));  goto L_004AA2E8; }
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[5] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[4] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 4u, c.f[4], c.f[5]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.f[0] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[0], c.f[5]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[20].w[0] + 364u), c.f[0]);
    st32((c.r[20].w[0] + 368u), c.f[2]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 372u), c.f[3]);  if (t) { goto L_004AA324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 376u), c.f[4]);  if (t) { goto L_004AA324; } }
L_004AA2E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    st32((c.r[20].w[0] + 364u), c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    st32((c.r[20].w[0] + 368u), c.f[1]);
    st32((c.r[20].w[0] + 372u), c.f[2]);
    st32((c.r[20].w[0] + 376u), c.r[2].w[0]);
    c.budget -= 15;
L_004AA324:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA330u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AA330u) [[unlikely]] return; }
L_004AA330:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5355u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA34Cu); set32(c.r[7], c.r[7].w[0] - 5379u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004AA34Cu) [[unlikely]] return; }
L_004AA34C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_004AA360; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004AA360:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[5].w[0] - 8256u);
    set32(c.r[7], c.r[29].w[0] + 180u);
    set32(c.r[8], c.r[29].w[0] + 176u);
    set32(c.r[9], c.r[29].w[0] + 172u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA38Cu); st32((c.r[29].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004AA38Cu) [[unlikely]] return; }
L_004AA38C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 184u));  goto L_004AA3F4; }
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[5] = c.r[2].w[0];
    c.f[3] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 4u, c.f[4], c.f[5]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.f[0] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 3u, c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[0], c.f[5]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[20].w[0] + 380u), c.f[0]);
    st32((c.r[20].w[0] + 384u), c.f[2]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 388u), c.f[3]);  if (t) { goto L_004AA430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 392u), c.f[4]);  if (t) { goto L_004AA430; } }
L_004AA3F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    st32((c.r[20].w[0] + 380u), c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[3]);
    st32((c.r[20].w[0] + 384u), c.f[1]);
    st32((c.r[20].w[0] + 388u), c.f[2]);
    st32((c.r[20].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 15;
L_004AA430:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA43Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AA43Cu) [[unlikely]] return; }
L_004AA43C:
    set32(c.r[19], ld32((c.r[28].w[0] - 22676u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[18], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA450u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004AA450u) [[unlikely]] return; }
L_004AA450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004AA4DC; } }
L_004AA458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA460u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 221u, depth + 1u); else { c.pc = 0x004E5FA0u; return; } if (c.pc != 0x004AA460u) [[unlikely]] return; }
L_004AA460:
    set32(c.r[16], c.r[2].w[0] + 132u);
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[16].w[0] + 1u);  goto L_004AA478; }
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_004AA478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA488u); set32(c.r[5], c.r[5].w[0] - 5331u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004AA488u) [[unlikely]] return; }
L_004AA488:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_004AA49C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004AA49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA4A4u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004AA4A4u) [[unlikely]] return; }
L_004AA4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA4ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x004AA4ACu) [[unlikely]] return; }
L_004AA4AC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_004AA4C4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_004AA4C4:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 324u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA4D4u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_00EA(c, 283u, depth + 1u); else { c.pc = 0x004AAE40u; return; } if (c.pc != 0x004AA4D4u) [[unlikely]] return; }
L_004AA4D4:
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_004AA4DC:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA458u | kUnwind; return; } goto L_004AA458; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA4F4u); set32(c.r[4], c.r[20].w[0] + 348u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004AA4F4u) [[unlikely]] return; }
L_004AA4F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA504u); set32(c.r[5], c.r[5].w[0] - 5314u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004AA504u) [[unlikely]] return; }
L_004AA504:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_004AA518; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_004AA518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA520u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004AA520u) [[unlikely]] return; }
L_004AA520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA528u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 346u, depth + 1u); else { c.pc = 0x001C37F0u; return; } if (c.pc != 0x004AA528u) [[unlikely]] return; }
L_004AA528:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 324u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA538u); set32(c.r[5], c.r[28].w[0] - 29628u);  if (depth < kMaxDepth) unit_00EA(c, 283u, depth + 1u); else { c.pc = 0x004AAE40u; return; } if (c.pc != 0x004AA538u) [[unlikely]] return; }
L_004AA538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA540u); st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00EA(c, 242u, depth + 1u); else { c.pc = 0x004AA5F0u; return; } if (c.pc != 0x004AA540u) [[unlikely]] return; }
L_004AA540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA548u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 312u, depth + 1u); else { c.pc = 0x0040AC50u; return; } if (c.pc != 0x004AA548u) [[unlikely]] return; }
L_004AA548:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_004AA57C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA564u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 205u, depth + 1u); else { c.pc = 0x004AA090u; return; } if (c.pc != 0x004AA564u) [[unlikely]] return; }
L_004AA564:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA574u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00EA(c, 205u, depth + 1u); else { c.pc = 0x004AA090u; return; } if (c.pc != 0x004AA574u) [[unlikely]] return; }
L_004AA574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_004AA5BC; } }
L_004AA57C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA588u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 205u, depth + 1u); else { c.pc = 0x004AA090u; return; } if (c.pc != 0x004AA588u) [[unlikely]] return; }
L_004AA588:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA598u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00EA(c, 205u, depth + 1u); else { c.pc = 0x004AA090u; return; } if (c.pc != 0x004AA598u) [[unlikely]] return; }
L_004AA598:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA5A8u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00EA(c, 205u, depth + 1u); else { c.pc = 0x004AA090u; return; } if (c.pc != 0x004AA5A8u) [[unlikely]] return; }
L_004AA5A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA5B8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00EA(c, 205u, depth + 1u); else { c.pc = 0x004AA090u; return; } if (c.pc != 0x004AA5B8u) [[unlikely]] return; }
L_004AA5B8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_004AA5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA5C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AA5C4u) [[unlikely]] return; }
L_004AA5C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004AA5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));  c.pc = t; return; }
L_004AA600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AA6E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 26784u);
    set32(c.r[2], c.r[2].w[0] - 26760u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26728u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26716u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26692u);
    set32(c.r[2], c.r[17].w[0] + 348u);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 132u), c.r[3].w[0]);  if (t) { goto L_004AA694; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 324u);  goto L_004AA698; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA694; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA694; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AA694; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AA694; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA694u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004AA694u) [[unlikely]] return; }
L_004AA694:
    set32(c.r[4], c.r[17].w[0] + 324u);
    c.budget -= 1;
L_004AA698:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AA6C8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AA6C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AA6C4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004AA6C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA6C4u);  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AA6C4u) [[unlikely]] return; }
L_004AA6C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AA6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA6D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018D0C0u; return; } if (c.pc != 0x004AA6D0u) [[unlikely]] return; }
L_004AA6D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004AA6EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA6E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004AA6E8u) [[unlikely]] return; }
L_004AA6E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AA6EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AA700:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[7], 0u + 8u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA724u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 62u, depth + 1u); else { c.pc = 0x0018D210u; return; } if (c.pc != 0x004AA724u) [[unlikely]] return; }
L_004AA724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26784u);
    set32(c.r[18], c.r[17].w[0] + 324u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26760u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26728u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 26716u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26692u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA76Cu); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004AA76Cu) [[unlikely]] return; }
L_004AA76C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004AA784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA780u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004AA780u) [[unlikely]] return; }
L_004AA780:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004AA784:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  goto L_004AA798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA794u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004AA794u) [[unlikely]] return; }
L_004AA794:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_004AA798:
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[29].w[0] + 76u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA7B4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00EA(c, 323u, depth + 1u); else { c.pc = 0x004AB170u; return; } if (c.pc != 0x004AA7B4u) [[unlikely]] return; }
L_004AA7B4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[17].w[0] + 348u);  if (t) { goto L_004AA7FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA7C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004AA7C8u) [[unlikely]] return; }
L_004AA7C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004AA7E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA7E0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004AA7E0u) [[unlikely]] return; }
L_004AA7E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004AA7E8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0]), c.r[16].w[0]);  goto L_004AA800; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA7F8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004AA7F8u) [[unlikely]] return; }
L_004AA7F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004AA7FC:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_004AA800:
    set32(c.r[6], c.r[17].w[0] + 396u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[3], c.r[17].w[0] + 492u);
    st32((c.r[17].w[0] + 364u), 0u);
    st32((c.r[17].w[0] + 368u), 0u);
    st32((c.r[17].w[0] + 372u), 0u);
    st32((c.r[17].w[0] + 376u), 0u);
    st32((c.r[17].w[0] + 380u), 0u);
    st32((c.r[17].w[0] + 384u), 0u);
    st32((c.r[17].w[0] + 388u), 0u);
    st32((c.r[17].w[0] + 392u), 0u);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 16;
L_004AA840:
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 16u), 0u);
    st32((c.r[6].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 24u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { st32((c.r[6].w[0]), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA840u | kUnwind; return; } goto L_004AA840; }
    st32((c.r[17].w[0] + 320u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 316u), 0u);
    st32((c.r[17].w[0] + 312u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004AA890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29632u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004AA8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004AA8BC; } }
L_004AA8AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA8B4u);  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018D3B0u; return; } if (c.pc != 0x004AA8B4u) [[unlikely]] return; }
L_004AA8B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004AA8BC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AA8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA8F4u); set32(c.r[4], c.r[4].w[0] - 5600u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004AA8F4u) [[unlikely]] return; }
L_004AA8F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AA904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004AA914; } }
L_004AA904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA90Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 71u, depth + 1u); else { c.pc = 0x0018D410u; return; } if (c.pc != 0x004AA90Cu) [[unlikely]] return; }
L_004AA90C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004AA914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AA930:
    set32(c.r[2], ld32((c.r[28].w[0] - 30920u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004AA940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29632u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004AA95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004AA964; } }
L_004AA95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA964u);  if (depth < kMaxDepth) unit_0023(c, 75u, depth + 1u); else { c.pc = 0x0018D4B0u; return; } if (c.pc != 0x004AA964u) [[unlikely]] return; }
L_004AA964:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AA970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29632u)));  c.pc = t; return; }
L_004AA980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 5568u);  c.pc = t; return; }
L_004AA990:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
L_004AA9B8:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004AA9DC; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004AA9DC:
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004AAE24; }
    c.r[1].d[0] = c.r[8].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  goto L_004AAA18; }
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAA10u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00EA(c, 325u, depth + 1u); else { c.pc = 0x004AB2A0u; return; } if (c.pc != 0x004AAA10u) [[unlikely]] return; }
L_004AAA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AAE20; } }
L_004AAA18:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_004AAA2C; } }
    set32(c.r[3], c.r[8].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004AAA2C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29620u)));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_004AAA60; } }
    set32(c.r[4], 0u - 4u);
    c.budget -= 1;
L_004AAA60:
    set32(c.r[3], c.r[8].w[0] << 1);
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004AAA80; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_004AAA80:
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 5u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 29620u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_004AAAC0; } }
    set32(c.r[4], 0u - 4u);
    st32((c.r[28].w[0] - 29620u), c.r[4].w[0]);
    c.budget -= 2;
L_004AAAC0:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = c.r[19].d[0] << 56;
    set32(c.r[16], c.r[2].w[0] - 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAAECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 324u, depth + 1u); else { c.pc = 0x004AB1A0u; return; } if (c.pc != 0x004AAAECu) [[unlikely]] return; }
L_004AAAEC:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[20].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);  if (t) { goto L_004AAB0C; } }
L_004AAB04:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_004AAB0C:
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAB04u | kUnwind; return; } goto L_004AAB04; }
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 2;
L_004AAB2C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[4].d[0] = c.r[6].d[0] ^ c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] << 32;  goto L_004AAB6C; }
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AAB5C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AAB5C:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAB2Cu | kUnwind; return; } goto L_004AAB2C; }
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004AAB6C:
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = c.r[20].d[0] << 32;  goto L_004AAC34; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[8].d[0] = c.r[16].d[0] << 32;
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[20], c.r[5].w[0] + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[1]);  if (t) { goto L_004AABB0; } }
L_004AABA8:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_004AABB0:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AABA8u | kUnwind; return; } goto L_004AABA8; }
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_004AABD0:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[0] = ld32((c.r[5].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[5].w[0] - 4u);  if (t) { goto L_004AABEC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AABEC:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AABD0u | kUnwind; return; } goto L_004AABD0; }
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004AAC30; } }
    c.f[1] = ld32((c.r[6].w[0]));
    set32(c.r[20], c.r[6].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AABB0u | kUnwind; return; } goto L_004AABB0; } }
L_004AAC30:
    c.r[7].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004AAC34:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[2], c.r[7].w[0] - c.r[6].w[0]);  goto L_004AAD94; }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.f[1] = ld32((c.r[7].w[0]));
    set32(c.r[20], c.r[7].w[0] + 4u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[4].w[0] - 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] - 4u);  if (t) { goto L_004AACDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[20].d[0] << 32;  if (t) { goto L_004AAC94; } }
L_004AAC88:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 4u);
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
L_004AAC94:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[20].d[0] << 32;  goto L_004AACB4; }
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAC88u | kUnwind; return; } goto L_004AAC88; }
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004AACB4:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] << 32;  goto L_004AACE0; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 4;
L_004AACDC:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004AACE0:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = c.r[20].d[0] << 32;  goto L_004AAD8C; }
    c.r[7].d[0] = c.r[17].d[0] << 32;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (t) { goto L_004AAD10; } }
L_004AAD08:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[20], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004AAD10:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004AAD30; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AAD30:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAD08u | kUnwind; return; } goto L_004AAD08; }
L_004AAD3C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[0] = ld32((c.r[3].w[0] - 4u));
    set32(c.r[5], c.r[3].w[0] - 4u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAD3Cu | kUnwind; return; } goto L_004AAD3C; } }
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AAD88; } }
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[20], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAD10u | kUnwind; return; } goto L_004AAD10; } }
L_004AAD88:
    c.r[17].d[0] = c.r[20].d[0] << 32;
    c.budget -= 1;
L_004AAD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA9B8u | kUnwind; return; } goto L_004AA9B8; } }
L_004AAD94:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_004AADA4; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004AADA4:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_004AADC8; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_004AADC8:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] << 32;  goto L_004AADFC; }
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AADF0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00EA(c, 268u, depth + 1u); else { c.pc = 0x004AA990u; return; } if (c.pc != 0x004AADF0u) [[unlikely]] return; }
L_004AADF0:
    c.r[17].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA9B8u | kUnwind; return; } goto L_004AA9B8; } }
L_004AADFC:
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAE14u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_00EA(c, 268u, depth + 1u); else { c.pc = 0x004AA990u; return; } if (c.pc != 0x004AAE14u) [[unlikely]] return; }
L_004AAE14:
    c.r[18].d[0] = c.r[20].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA9B8u | kUnwind; return; } goto L_004AA9B8; } }
L_004AAE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004AAE24:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004AAE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[9], c.r[4].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004AAE90; } }
L_004AAE64:
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004AAE80; } }
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004AAE90; } }
L_004AAE80:
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[8].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004AAE90:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[6], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAE64u | kUnwind; return; } goto L_004AAE64; }
    c.budget -= 2;
    if (c.r[10].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_004AAEB8; }
    set32(c.r[3], ld32((c.r[10].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[10].w[0] + 12u);  goto L_004AAED0; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_004AAEB8:
    set32(c.r[8], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAECCu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_00EA(c, 328u, depth + 1u); else { c.pc = 0x004AB3A0u; return; } if (c.pc != 0x004AAECCu) [[unlikely]] return; }
L_004AAECC:
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 1;
L_004AAED0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AAEE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AAFF4; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004AAF70; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004AAF2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF28u);  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AAF28u) [[unlikely]] return; }
L_004AAF28:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004AAF2C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AAF40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AAF3Cu) [[unlikely]] return; }
L_004AAF3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AAF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF48u);  if (depth < kMaxDepth) unit_00EA(c, 322u, depth + 1u); else { c.pc = 0x004AB160u; return; } if (c.pc != 0x004AAF48u) [[unlikely]] return; }
L_004AAF48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF54u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00EA(c, 321u, depth + 1u); else { c.pc = 0x004AB150u; return; } if (c.pc != 0x004AAF54u) [[unlikely]] return; }
L_004AAF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 320u, depth + 1u); else { c.pc = 0x004AB140u; return; } if (c.pc != 0x004AAF5Cu) [[unlikely]] return; }
L_004AAF5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 318u, depth + 1u); else { c.pc = 0x004AB120u; return; } if (c.pc != 0x004AAF6Cu) [[unlikely]] return; }
L_004AAF6C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004AAF70:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AAFD4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004AAF90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AAF8Cu) [[unlikely]] return; }
L_004AAF8C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004AAF90:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AAFA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AAFA0u) [[unlikely]] return; }
L_004AAFA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AAFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFACu);  if (depth < kMaxDepth) unit_00EA(c, 322u, depth + 1u); else { c.pc = 0x004AB160u; return; } if (c.pc != 0x004AAFACu) [[unlikely]] return; }
L_004AAFAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFB8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00EA(c, 321u, depth + 1u); else { c.pc = 0x004AB150u; return; } if (c.pc != 0x004AAFB8u) [[unlikely]] return; }
L_004AAFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 320u, depth + 1u); else { c.pc = 0x004AB140u; return; } if (c.pc != 0x004AAFC0u) [[unlikely]] return; }
L_004AAFC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFD0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 318u, depth + 1u); else { c.pc = 0x004AB120u; return; } if (c.pc != 0x004AAFD0u) [[unlikely]] return; }
L_004AAFD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AAFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFDCu);  if (depth < kMaxDepth) unit_00EA(c, 322u, depth + 1u); else { c.pc = 0x004AB160u; return; } if (c.pc != 0x004AAFDCu) [[unlikely]] return; }
L_004AAFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 320u, depth + 1u); else { c.pc = 0x004AB140u; return; } if (c.pc != 0x004AAFE4u) [[unlikely]] return; }
L_004AAFE4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_004AAFF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004AAFF4u) [[unlikely]] return; }
L_004AAFF4:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004AAFF8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004AB0EC; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004AB068; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004AB024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AB020u) [[unlikely]] return; }
L_004AB020:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004AB024:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AB038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB034u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AB034u) [[unlikely]] return; }
L_004AB034:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AB038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB040u);  if (depth < kMaxDepth) unit_00EA(c, 322u, depth + 1u); else { c.pc = 0x004AB160u; return; } if (c.pc != 0x004AB040u) [[unlikely]] return; }
L_004AB040:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB04Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00EA(c, 321u, depth + 1u); else { c.pc = 0x004AB150u; return; } if (c.pc != 0x004AB04Cu) [[unlikely]] return; }
L_004AB04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB054u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 320u, depth + 1u); else { c.pc = 0x004AB140u; return; } if (c.pc != 0x004AB054u) [[unlikely]] return; }
L_004AB054:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB064u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 318u, depth + 1u); else { c.pc = 0x004AB120u; return; } if (c.pc != 0x004AB064u) [[unlikely]] return; }
L_004AB064:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004AB068:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AB0CC; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004AB088; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AB084u) [[unlikely]] return; }
L_004AB084:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004AB088:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AB09C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB098u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 286u, depth + 1u); else { c.pc = 0x004AAEE0u; return; } if (c.pc != 0x004AB098u) [[unlikely]] return; }
L_004AB098:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AB09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0A4u);  if (depth < kMaxDepth) unit_00EA(c, 322u, depth + 1u); else { c.pc = 0x004AB160u; return; } if (c.pc != 0x004AB0A4u) [[unlikely]] return; }
L_004AB0A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0B0u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00EA(c, 321u, depth + 1u); else { c.pc = 0x004AB150u; return; } if (c.pc != 0x004AB0B0u) [[unlikely]] return; }
L_004AB0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 320u, depth + 1u); else { c.pc = 0x004AB140u; return; } if (c.pc != 0x004AB0B8u) [[unlikely]] return; }
L_004AB0B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00EA(c, 318u, depth + 1u); else { c.pc = 0x004AB120u; return; } if (c.pc != 0x004AB0C8u) [[unlikely]] return; }
L_004AB0C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AB0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0D4u);  if (depth < kMaxDepth) unit_00EA(c, 322u, depth + 1u); else { c.pc = 0x004AB160u; return; } if (c.pc != 0x004AB0D4u) [[unlikely]] return; }
L_004AB0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 320u, depth + 1u); else { c.pc = 0x004AB140u; return; } if (c.pc != 0x004AB0DCu) [[unlikely]] return; }
L_004AB0DC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004AB0EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004AB0ECu) [[unlikely]] return; }
L_004AB0EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004AB100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004AB0FCu) [[unlikely]] return; }
L_004AB0FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004AB100:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004AB120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004AB134; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB134u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004AB134u) [[unlikely]] return; }
L_004AB134:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AB140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_004AB150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AB160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004AB170:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_004AB1A0:
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004AB1B8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AB1B8:
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.f[1] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004AB1DC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004AB1DC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004AB1F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AB298; } }
L_004AB1F0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_004AB224; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004AB224; } }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_004AB298; } }
L_004AB224:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004AB250; } }
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 8;
L_004AB250:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[4].d[0] = c.r[4].d[0] << 32;  goto L_004AB27C; }
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_004AB298; } }
L_004AB27C:
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    c.budget -= 7;
L_004AB298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AB2A0:
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AB398; } }
    set32(c.r[3], c.r[5].w[0] - 4u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AB398; } }
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_004AB384; } }
L_004AB2D8:
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[3].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[7].d[0] = c.r[9].d[0] << 32;  goto L_004AB348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[9].w[0] + 4u);  if (t) { goto L_004AB328; } }
L_004AB2F8:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_004AB320; }
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 2;
L_004AB320:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004AB328:
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] ^ c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[6].d[0] != 0ull) { c.r[7].d[0] = c.r[9].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB2F8u | kUnwind; return; } goto L_004AB2F8; }
    c.r[7].d[0] = c.r[9].d[0] << 32;
    c.budget -= 1;
L_004AB348:
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] << 32;  goto L_004AB37C; }
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[6].w[0]), c.f[1]);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 5;
L_004AB37C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004AB384:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[9].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB2D8u | kUnwind; return; } goto L_004AB2D8; }
L_004AB398:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AB3A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004AB400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB3F8u); set32(c.r[5], c.r[5].w[0] - 5181u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004AB3F8u) [[unlikely]] return; }
L_004AB3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB400u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004AB400u) [[unlikely]] return; }
L_004AB400:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB40Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004AB40Cu) [[unlikely]] return; }
L_004AB40C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_004AB430; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
L_004AB430:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004AB450; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_004AB454; } }
L_004AB450:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_004AB454:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB46Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x004AB46Cu) [[unlikely]] return; }
L_004AB46C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004AB47C; }
    st32((c.r[21].w[0] + 20u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004AB47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004AB4A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA8D0u | kUnwind; return; } goto L_004AA8D0; }
L_004AB4B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA890u | kUnwind; return; } goto L_004AA890; }
L_004AB4C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA930u | kUnwind; return; } goto L_004AA930; }
L_004AB4D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA940u | kUnwind; return; } goto L_004AA940; }
L_004AB4E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA970u | kUnwind; return; } goto L_004AA970; }
L_004AB4F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA600u | kUnwind; return; } goto L_004AA600; }
L_004AB500:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA600u | kUnwind; return; } goto L_004AA600; }
L_004AB510:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA600u | kUnwind; return; } goto L_004AA600; }
L_004AB520:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA600u | kUnwind; return; } goto L_004AA600; }
L_004AB530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 5120u);  c.pc = t; return; }
L_004AB540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AB5A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 26512u);
    set32(c.r[3], c.r[3].w[0] - 26488u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26476u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB588u); st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E8(c, 390u, depth + 1u); else { c.pc = 0x004A3040u; return; } if (c.pc != 0x004AB588u) [[unlikely]] return; }
L_004AB588:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004AB5A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB5A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004AB5A0u) [[unlikely]] return; }
L_004AB5A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004AB5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AB5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004AB5F0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB5ECu); set32(c.r[5], c.r[16].w[0] + 164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB5ECu) [[unlikely]] return; }
L_004AB5EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AB5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB5F8u);  if (depth < kMaxDepth) unit_00E8(c, 310u, depth + 1u); else { c.pc = 0x004A2750u; return; } if (c.pc != 0x004AB5F8u) [[unlikely]] return; }
L_004AB5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AB610:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AB714; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB63Cu); set32(c.r[5], c.r[5].w[0] - 5088u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004AB63Cu) [[unlikely]] return; }
L_004AB63C:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[4], c.r[16].w[0] + 164u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 220u);  if (t) { goto L_004AB658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004AB65C; } }
L_004AB658:
    set32(c.r[17], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004AB65C:
    set32(c.r[4], c.r[4].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB668u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x004AB668u) [[unlikely]] return; }
L_004AB668:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[6].w[0] - 5088u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB684u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x004AB684u) [[unlikely]] return; }
L_004AB684:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AB690u) [[unlikely]] return; }
L_004AB690:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6A0u); set32(c.r[5], c.r[5].w[0] - 5086u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x004AB6A0u) [[unlikely]] return; }
L_004AB6A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6ACu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004AB6ACu) [[unlikely]] return; }
L_004AB6AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 68u)));  goto L_004AB6D4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004AB6D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_004AB700; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 72u)));  goto L_004AB6E8; }
    set32(c.r[5], c.r[29].w[0] + 65u);
    c.budget -= 1;
L_004AB6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6F0u); set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));  if (depth < kMaxDepth) unit_00E8(c, 180u, depth + 1u); else { c.pc = 0x004A1810u; return; } if (c.pc != 0x004AB6F0u) [[unlikely]] return; }
L_004AB6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 373u, depth + 1u); else { c.pc = 0x004AB870u; return; } if (c.pc != 0x004AB6F8u) [[unlikely]] return; }
L_004AB6F8:
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 2;
L_004AB700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AB708u) [[unlikely]] return; }
L_004AB708:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB714u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x004AB714u) [[unlikely]] return; }
L_004AB714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004AB730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB744u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EA(c, 349u, depth + 1u); else { c.pc = 0x004AB610u; return; } if (c.pc != 0x004AB744u) [[unlikely]] return; }
L_004AB744:
    set32(c.r[4], ld32((c.r[16].w[0] + 364u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004AB764; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB760u); set32(c.r[5], c.r[16].w[0] + 164u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB760u) [[unlikely]] return; }
L_004AB760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AB764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB76Cu);  if (depth < kMaxDepth) unit_00E8(c, 388u, depth + 1u); else { c.pc = 0x004A2FE0u; return; } if (c.pc != 0x004AB76Cu) [[unlikely]] return; }
L_004AB76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AB780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29616u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004AB79C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004AB7AC; } }
L_004AB79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB7A4u);  if (depth < kMaxDepth) unit_00E8(c, 430u, depth + 1u); else { c.pc = 0x004A33C0u; return; } if (c.pc != 0x004AB7A4u) [[unlikely]] return; }
L_004AB7A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004AB7AC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AB7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB7E4u); set32(c.r[4], c.r[4].w[0] - 5152u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004AB7E4u) [[unlikely]] return; }
L_004AB7E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004AB7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004AB804; } }
L_004AB7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB7FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 432u, depth + 1u); else { c.pc = 0x004A3400u; return; } if (c.pc != 0x004AB7FCu) [[unlikely]] return; }
L_004AB7FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004AB804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AB820:
    set32(c.r[2], ld32((c.r[28].w[0] - 29636u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004AB830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29616u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004AB84C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004AB854; } }
L_004AB84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB854u);  if (depth < kMaxDepth) unit_00E8(c, 436u, depth + 1u); else { c.pc = 0x004A3470u; return; } if (c.pc != 0x004AB854u) [[unlikely]] return; }
L_004AB854:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AB860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29616u)));  c.pc = t; return; }
L_004AB870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004AB884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004AB894; } }
L_004AB884:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB894u); set32(c.r[5], ld32((c.r[28].w[0] - 29832u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB894u) [[unlikely]] return; }
L_004AB894:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AB8A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB540u | kUnwind; return; } goto L_004AB540; }
L_004AB8B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB7C0u | kUnwind; return; } goto L_004AB7C0; }
L_004AB8C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB780u | kUnwind; return; } goto L_004AB780; }
L_004AB8D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB820u | kUnwind; return; } goto L_004AB820; }
L_004AB8E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB830u | kUnwind; return; } goto L_004AB830; }
L_004AB8F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB860u | kUnwind; return; } goto L_004AB860; }
L_004AB900:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 68u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB540u | kUnwind; return; } goto L_004AB540; }
L_004AB910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4992u);  c.pc = t; return; }
L_004AB920:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 368u));  c.pc = t; return; }
L_004AB930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB944u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 310u, depth + 1u); else { c.pc = 0x004A2750u; return; } if (c.pc != 0x004AB944u) [[unlikely]] return; }
L_004AB944:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004AB9CC; }
    set32(c.r[6], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[5], c.r[3].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB960u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004AB960u) [[unlikely]] return; }
L_004AB960:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_004AB974; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_004AB974:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB988u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB988u) [[unlikely]] return; }
L_004AB988:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_004AB998; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004AB998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB9A0u);  if (depth < kMaxDepth) unit_00E0(c, 311u, depth + 1u); else { c.pc = 0x00482720u; return; } if (c.pc != 0x004AB9A0u) [[unlikely]] return; }
L_004AB9A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB9B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004AB9B0u) [[unlikely]] return; }
L_004AB9B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AB9C8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB9C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB9C8u) [[unlikely]] return; }
L_004AB9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AB9CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AB9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ABA4C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_004ABA34; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_004ABA1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_004ABA48; } }
L_004ABA1C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABA2Cu) [[unlikely]] return; }
L_004ABA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ABA44; } }
L_004ABA34:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABA44u) [[unlikely]] return; }
L_004ABA44:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_004ABA48:
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 1;
L_004ABA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABA60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x004ABA74u) [[unlikely]] return; }
L_004ABA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E9(c, 60u, depth + 1u); else { c.pc = 0x004A4790u; return; } if (c.pc != 0x004ABA7Cu) [[unlikely]] return; }
L_004ABA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA84u);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A5B50u; return; } if (c.pc != 0x004ABA84u) [[unlikely]] return; }
L_004ABA84:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABA98u) [[unlikely]] return; }
L_004ABA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 368u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ABAF4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABAD4u); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3D10u; return; } if (c.pc != 0x004ABAD4u) [[unlikely]] return; }
L_004ABAD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABAECu); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABAECu) [[unlikely]] return; }
L_004ABAEC:
    set32(c.r[3], 0u + 3u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 2;
L_004ABAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 368u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ABB5C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABB34u); st8((c.r[16].w[0] + 368u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0028(c, 261u, depth + 1u); else { c.pc = 0x001A3D10u; return; } if (c.pc != 0x004ABB34u) [[unlikely]] return; }
L_004ABB34:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABB4Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABB4Cu) [[unlikely]] return; }
L_004ABB4C:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 100u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 4;
L_004ABB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABB70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 252u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ABB9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 260u)));  if (t) { goto L_004ABBA0; } }
L_004ABB9C:
    set32(c.r[17], c.r[16].w[0] + 253u);
    c.budget -= 1;
L_004ABBA0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 236u)));  goto L_004ABC30; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004ABC2C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29612u)));
    set32(c.r[5], c.r[3].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABBC4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004ABBC4u) [[unlikely]] return; }
L_004ABBC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_004ABBD8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004ABBD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABBECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABBECu) [[unlikely]] return; }
L_004ABBEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABBFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ABBFCu) [[unlikely]] return; }
L_004ABBFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004ABC2C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABC10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004ABC10u) [[unlikely]] return; }
L_004ABC10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ABC2C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABC2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABC2Cu) [[unlikely]] return; }
L_004ABC2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 1;
L_004ABC30:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 237u);  goto L_004ABC40; }
    set32(c.r[17], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 1;
L_004ABC40:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004ABCD0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004ABCCC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29608u)));
    set32(c.r[5], c.r[3].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABC64u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004ABC64u) [[unlikely]] return; }
L_004ABC64:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004ABC78; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004ABC78:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABC8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABC8Cu) [[unlikely]] return; }
L_004ABC8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABC9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ABC9Cu) [[unlikely]] return; }
L_004ABC9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004ABCCC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABCB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004ABCB0u) [[unlikely]] return; }
L_004ABCB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ABCCC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABCCCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABCCCu) [[unlikely]] return; }
L_004ABCCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004ABCD0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004ABCF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004ABFA8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 136u)));  goto L_004ABD3C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004ABD3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 252u)));  goto L_004ABDE0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 140u)));  goto L_004ABD50; }
    set32(c.r[17], c.r[16].w[0] + 133u);
    c.budget -= 1;
L_004ABD50:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 236u)));  goto L_004ABE7C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ABE78; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29612u)));
    set32(c.r[5], c.r[4].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABD70u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004ABD70u) [[unlikely]] return; }
L_004ABD70:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_004ABD84; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_004ABD84:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABD98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABD98u) [[unlikely]] return; }
L_004ABD98:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABDA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ABDA8u) [[unlikely]] return; }
L_004ABDA8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004ABE78; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABDBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004ABDBCu) [[unlikely]] return; }
L_004ABDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ABE78; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABDD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABDD8u) [[unlikely]] return; }
L_004ABDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ABE78; } }
L_004ABDE0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 253u);  goto L_004ABDF0; }
    set32(c.r[17], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 1;
L_004ABDF0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004ABE78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ABE78; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29612u)));
    set32(c.r[5], c.r[4].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE10u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004ABE10u) [[unlikely]] return; }
L_004ABE10:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_004ABE24; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004ABE24:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABE38u) [[unlikely]] return; }
L_004ABE38:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ABE48u) [[unlikely]] return; }
L_004ABE48:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004ABE78; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004ABE5Cu) [[unlikely]] return; }
L_004ABE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ABE78; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABE78u) [[unlikely]] return; }
L_004ABE78:
    set32(c.r[2], ld32((c.r[16].w[0] + 236u)));
    c.budget -= 1;
L_004ABE7C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 237u);  goto L_004ABE8C; }
    set32(c.r[17], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 1;
L_004ABE8C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 76u)));  goto L_004ABF1C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ABF18; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 29608u)));
    set32(c.r[5], c.r[2].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABEB0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004ABEB0u) [[unlikely]] return; }
L_004ABEB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004ABEC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004ABEC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABED8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABED8u) [[unlikely]] return; }
L_004ABED8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABEE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ABEE8u) [[unlikely]] return; }
L_004ABEE8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004ABF18; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABEFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004ABEFCu) [[unlikely]] return; }
L_004ABEFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ABF18; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABF18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABF18u) [[unlikely]] return; }
L_004ABF18:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004ABF1C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABF2Cu); set32(c.r[5], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004ABF2Cu) [[unlikely]] return; }
L_004ABF2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004ABF40; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004ABF40:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABF54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABF54u) [[unlikely]] return; }
L_004ABF54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABF64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004ABF64u) [[unlikely]] return; }
L_004ABF64:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004ABF9C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 23300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABF7Cu); set32(c.r[5], c.r[5].w[0] - 4947u);  if (depth < kMaxDepth) unit_00E8(c, 180u, depth + 1u); else { c.pc = 0x004A1810u; return; } if (c.pc != 0x004ABF7Cu) [[unlikely]] return; }
L_004ABF7C:
    set32(c.r[3], c.r[16].w[0] + 164u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABF98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABF98u) [[unlikely]] return; }
L_004ABF98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004ABF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABFA4u);  if (depth < kMaxDepth) unit_00E8(c, 388u, depth + 1u); else { c.pc = 0x004A2FE0u; return; } if (c.pc != 0x004ABFA4u) [[unlikely]] return; }
L_004ABFA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004ABFA8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004ABFC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABFDCu); set32(c.r[4], c.r[16].w[0] + 132u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004ABFDCu) [[unlikely]] return; }
L_004ABFDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 133u);  goto L_004ABFF0; }
    set32(c.r[17], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_004ABFF0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  [[clang::musttail]] return unit_00EB(c, 8u, depth); }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00EB(c, 7u, depth); } }
    [[clang::musttail]] return unit_00EB(c, 2u, depth);
}

}
