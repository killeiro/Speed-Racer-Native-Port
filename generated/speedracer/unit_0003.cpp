#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0003[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 276,
    0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309,
    0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0,
    0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351,
    0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0,
    0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0,
    376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0,
    0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411,
    0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0003(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0010C000;
    case 2u: goto L_0010C004;
    case 3u: goto L_0010C014;
    case 4u: goto L_0010C020;
    case 5u: goto L_0010C03C;
    case 6u: goto L_0010C058;
    case 7u: goto L_0010C06C;
    case 8u: goto L_0010C074;
    case 9u: goto L_0010C080;
    case 10u: goto L_0010C0A4;
    case 11u: goto L_0010C0BC;
    case 12u: goto L_0010C0D0;
    case 13u: goto L_0010C0F0;
    case 14u: goto L_0010C110;
    case 15u: goto L_0010C12C;
    case 16u: goto L_0010C140;
    case 17u: goto L_0010C178;
    case 18u: goto L_0010C198;
    case 19u: goto L_0010C1DC;
    case 20u: goto L_0010C1EC;
    case 21u: goto L_0010C244;
    case 22u: goto L_0010C268;
    case 23u: goto L_0010C284;
    case 24u: goto L_0010C29C;
    case 25u: goto L_0010C304;
    case 26u: goto L_0010C318;
    case 27u: goto L_0010C338;
    case 28u: goto L_0010C360;
    case 29u: goto L_0010C3A0;
    case 30u: goto L_0010C404;
    case 31u: goto L_0010C414;
    case 32u: goto L_0010C46C;
    case 33u: goto L_0010C490;
    case 34u: goto L_0010C4AC;
    case 35u: goto L_0010C4C4;
    case 36u: goto L_0010C53C;
    case 37u: goto L_0010C550;
    case 38u: goto L_0010C5B0;
    case 39u: goto L_0010C608;
    case 40u: goto L_0010C628;
    case 41u: goto L_0010C638;
    case 42u: goto L_0010C6DC;
    case 43u: goto L_0010C6F8;
    case 44u: goto L_0010C744;
    case 45u: goto L_0010C770;
    case 46u: goto L_0010C7B4;
    case 47u: goto L_0010C800;
    case 48u: goto L_0010C82C;
    case 49u: goto L_0010C864;
    case 50u: goto L_0010C880;
    case 51u: goto L_0010C89C;
    case 52u: goto L_0010C8F0;
    case 53u: goto L_0010C914;
    case 54u: goto L_0010C934;
    case 55u: goto L_0010C980;
    case 56u: goto L_0010C9D0;
    case 57u: goto L_0010CA1C;
    case 58u: goto L_0010CA24;
    case 59u: goto L_0010CA30;
    case 60u: goto L_0010CB30;
    case 61u: goto L_0010CB44;
    case 62u: goto L_0010CB80;
    case 63u: goto L_0010CB90;
    case 64u: goto L_0010CBA0;
    case 65u: goto L_0010CBC0;
    case 66u: goto L_0010CBCC;
    case 67u: goto L_0010CC10;
    case 68u: goto L_0010CC20;
    case 69u: goto L_0010CC2C;
    case 70u: goto L_0010CC60;
    case 71u: goto L_0010CC74;
    case 72u: goto L_0010CC94;
    case 73u: goto L_0010CCB4;
    case 74u: goto L_0010CCD0;
    case 75u: goto L_0010CCE8;
    case 76u: goto L_0010CD08;
    case 77u: goto L_0010CD14;
    case 78u: goto L_0010CD2C;
    case 79u: goto L_0010CD58;
    case 80u: goto L_0010CD78;
    case 81u: goto L_0010CD84;
    case 82u: goto L_0010CDC8;
    case 83u: goto L_0010CDE8;
    case 84u: goto L_0010CDF4;
    case 85u: goto L_0010CE38;
    case 86u: goto L_0010CE7C;
    case 87u: goto L_0010CEA0;
    case 88u: goto L_0010CED8;
    case 89u: goto L_0010CEE0;
    case 90u: goto L_0010CF38;
    case 91u: goto L_0010CF60;
    case 92u: goto L_0010CF94;
    case 93u: goto L_0010CFB8;
    case 94u: goto L_0010CFD4;
    case 95u: goto L_0010CFEC;
    case 96u: goto L_0010D008;
    case 97u: goto L_0010D054;
    case 98u: goto L_0010D070;
    case 99u: goto L_0010D088;
    case 100u: goto L_0010D0CC;
    case 101u: goto L_0010D0E0;
    case 102u: goto L_0010D0F0;
    case 103u: goto L_0010D110;
    case 104u: goto L_0010D15C;
    case 105u: goto L_0010D178;
    case 106u: goto L_0010D184;
    case 107u: goto L_0010D19C;
    case 108u: goto L_0010D1C0;
    case 109u: goto L_0010D1F4;
    case 110u: goto L_0010D210;
    case 111u: goto L_0010D260;
    case 112u: goto L_0010D294;
    case 113u: goto L_0010D2F4;
    case 114u: goto L_0010D310;
    case 115u: goto L_0010D350;
    case 116u: goto L_0010D36C;
    case 117u: goto L_0010D390;
    case 118u: goto L_0010D3BC;
    case 119u: goto L_0010D3E8;
    case 120u: goto L_0010D414;
    case 121u: goto L_0010D430;
    case 122u: goto L_0010D448;
    case 123u: goto L_0010D470;
    case 124u: goto L_0010D48C;
    case 125u: goto L_0010D4E0;
    case 126u: goto L_0010D534;
    case 127u: goto L_0010D550;
    case 128u: goto L_0010D568;
    case 129u: goto L_0010D5A4;
    case 130u: goto L_0010D5F4;
    case 131u: goto L_0010D610;
    case 132u: goto L_0010D620;
    case 133u: goto L_0010D638;
    case 134u: goto L_0010D658;
    case 135u: goto L_0010D66C;
    case 136u: goto L_0010D688;
    case 137u: goto L_0010D6AC;
    case 138u: goto L_0010D6D8;
    case 139u: goto L_0010D700;
    case 140u: goto L_0010D728;
    case 141u: goto L_0010D74C;
    case 142u: goto L_0010D790;
    case 143u: goto L_0010D7B4;
    case 144u: goto L_0010D7F0;
    case 145u: goto L_0010D844;
    case 146u: goto L_0010D854;
    case 147u: goto L_0010D864;
    case 148u: goto L_0010D8AC;
    case 149u: goto L_0010D8E0;
    case 150u: goto L_0010D928;
    case 151u: goto L_0010D954;
    case 152u: goto L_0010D980;
    case 153u: goto L_0010DA00;
    case 154u: goto L_0010DA34;
    case 155u: goto L_0010DA6C;
    case 156u: goto L_0010DA74;
    case 157u: goto L_0010DAD0;
    case 158u: goto L_0010DB10;
    case 159u: goto L_0010DB58;
    case 160u: goto L_0010DB84;
    case 161u: goto L_0010DBA4;
    case 162u: goto L_0010DC14;
    case 163u: goto L_0010DC3C;
    case 164u: goto L_0010DC64;
    case 165u: goto L_0010DCA0;
    case 166u: goto L_0010DCB0;
    case 167u: goto L_0010DCC8;
    case 168u: goto L_0010DCE4;
    case 169u: goto L_0010DCF4;
    case 170u: goto L_0010DD10;
    case 171u: goto L_0010DD2C;
    case 172u: goto L_0010DD34;
    case 173u: goto L_0010DD48;
    case 174u: goto L_0010DD64;
    case 175u: goto L_0010DD98;
    case 176u: goto L_0010DDB0;
    case 177u: goto L_0010DDC0;
    case 178u: goto L_0010DDD4;
    case 179u: goto L_0010DE0C;
    case 180u: goto L_0010DE18;
    case 181u: goto L_0010DE3C;
    case 182u: goto L_0010DE58;
    case 183u: goto L_0010DE6C;
    case 184u: goto L_0010DE84;
    case 185u: goto L_0010DEA0;
    case 186u: goto L_0010DED0;
    case 187u: goto L_0010DEE0;
    case 188u: goto L_0010DF0C;
    case 189u: goto L_0010DF14;
    case 190u: goto L_0010DF28;
    case 191u: goto L_0010DF30;
    case 192u: goto L_0010DF38;
    case 193u: goto L_0010DF48;
    case 194u: goto L_0010DF74;
    case 195u: goto L_0010DF7C;
    case 196u: goto L_0010DF90;
    case 197u: goto L_0010DFAC;
    case 198u: goto L_0010DFD4;
    case 199u: goto L_0010DFDC;
    case 200u: goto L_0010DFEC;
    case 201u: goto L_0010E024;
    case 202u: goto L_0010E02C;
    case 203u: goto L_0010E04C;
    case 204u: goto L_0010E068;
    case 205u: goto L_0010E088;
    case 206u: goto L_0010E0D0;
    case 207u: goto L_0010E0FC;
    case 208u: goto L_0010E108;
    case 209u: goto L_0010E17C;
    case 210u: goto L_0010E208;
    case 211u: goto L_0010E214;
    case 212u: goto L_0010E22C;
    case 213u: goto L_0010E240;
    case 214u: goto L_0010E258;
    case 215u: goto L_0010E26C;
    case 216u: goto L_0010E280;
    case 217u: goto L_0010E2B0;
    case 218u: goto L_0010E318;
    case 219u: goto L_0010E32C;
    case 220u: goto L_0010E334;
    case 221u: goto L_0010E354;
    case 222u: goto L_0010E37C;
    case 223u: goto L_0010E384;
    case 224u: goto L_0010E3A8;
    case 225u: goto L_0010E3E8;
    case 226u: goto L_0010E400;
    case 227u: goto L_0010E420;
    case 228u: goto L_0010E438;
    case 229u: goto L_0010E444;
    case 230u: goto L_0010E450;
    case 231u: goto L_0010E458;
    case 232u: goto L_0010E464;
    case 233u: goto L_0010E46C;
    case 234u: goto L_0010E498;
    case 235u: goto L_0010E4C0;
    case 236u: goto L_0010E538;
    case 237u: goto L_0010E540;
    case 238u: goto L_0010E550;
    case 239u: goto L_0010E5D0;
    case 240u: goto L_0010E620;
    case 241u: goto L_0010E62C;
    case 242u: goto L_0010E634;
    case 243u: goto L_0010E660;
    case 244u: goto L_0010E6B4;
    case 245u: goto L_0010E6BC;
    case 246u: goto L_0010E6CC;
    case 247u: goto L_0010E6DC;
    case 248u: goto L_0010E704;
    case 249u: goto L_0010E714;
    case 250u: goto L_0010E720;
    case 251u: goto L_0010E740;
    case 252u: goto L_0010E754;
    case 253u: goto L_0010E764;
    case 254u: goto L_0010E770;
    case 255u: goto L_0010E77C;
    case 256u: goto L_0010E78C;
    case 257u: goto L_0010E7A8;
    case 258u: goto L_0010E7E4;
    case 259u: goto L_0010E7EC;
    case 260u: goto L_0010E808;
    case 261u: goto L_0010E834;
    case 262u: goto L_0010E864;
    case 263u: goto L_0010E86C;
    case 264u: goto L_0010E8CC;
    case 265u: goto L_0010E8D4;
    case 266u: goto L_0010E8F8;
    case 267u: goto L_0010E900;
    case 268u: goto L_0010E910;
    case 269u: goto L_0010E978;
    case 270u: goto L_0010E9A0;
    case 271u: goto L_0010E9B0;
    case 272u: goto L_0010E9BC;
    case 273u: goto L_0010E9D8;
    case 274u: goto L_0010E9E8;
    case 275u: goto L_0010E9F0;
    case 276u: goto L_0010E9FC;
    case 277u: goto L_0010EA04;
    case 278u: goto L_0010EA0C;
    case 279u: goto L_0010EA3C;
    case 280u: goto L_0010EA7C;
    case 281u: goto L_0010EA94;
    case 282u: goto L_0010EAA0;
    case 283u: goto L_0010EAC8;
    case 284u: goto L_0010EAF4;
    case 285u: goto L_0010EB38;
    case 286u: goto L_0010EB68;
    case 287u: goto L_0010EB74;
    case 288u: goto L_0010EB94;
    case 289u: goto L_0010EBA4;
    case 290u: goto L_0010EBE0;
    case 291u: goto L_0010EC30;
    case 292u: goto L_0010EC5C;
    case 293u: goto L_0010EC8C;
    case 294u: goto L_0010EC9C;
    case 295u: goto L_0010ECA8;
    case 296u: goto L_0010ED58;
    case 297u: goto L_0010ED88;
    case 298u: goto L_0010EDB0;
    case 299u: goto L_0010EDE0;
    case 300u: goto L_0010EE0C;
    case 301u: goto L_0010EE14;
    case 302u: goto L_0010EE28;
    case 303u: goto L_0010EE44;
    case 304u: goto L_0010EE78;
    case 305u: goto L_0010EE90;
    case 306u: goto L_0010EEA4;
    case 307u: goto L_0010EEB8;
    case 308u: goto L_0010EEF0;
    case 309u: goto L_0010EEFC;
    case 310u: goto L_0010EF14;
    case 311u: goto L_0010EF30;
    case 312u: goto L_0010EF44;
    case 313u: goto L_0010EF70;
    case 314u: goto L_0010EF78;
    case 315u: goto L_0010EF8C;
    case 316u: goto L_0010EF9C;
    case 317u: goto L_0010EFA8;
    case 318u: goto L_0010EFB4;
    case 319u: goto L_0010EFFC;
    case 320u: goto L_0010F014;
    case 321u: goto L_0010F020;
    case 322u: goto L_0010F030;
    case 323u: goto L_0010F034;
    case 324u: goto L_0010F048;
    case 325u: goto L_0010F084;
    case 326u: goto L_0010F098;
    case 327u: goto L_0010F0A4;
    case 328u: goto L_0010F0B0;
    case 329u: goto L_0010F0C4;
    case 330u: goto L_0010F0D8;
    case 331u: goto L_0010F0E4;
    case 332u: goto L_0010F0F0;
    case 333u: goto L_0010F104;
    case 334u: goto L_0010F11C;
    case 335u: goto L_0010F130;
    case 336u: goto L_0010F158;
    case 337u: goto L_0010F16C;
    case 338u: goto L_0010F198;
    case 339u: goto L_0010F1A0;
    case 340u: goto L_0010F1B4;
    case 341u: goto L_0010F1C4;
    case 342u: goto L_0010F1D0;
    case 343u: goto L_0010F1DC;
    case 344u: goto L_0010F224;
    case 345u: goto L_0010F234;
    case 346u: goto L_0010F268;
    case 347u: goto L_0010F294;
    case 348u: goto L_0010F29C;
    case 349u: goto L_0010F2B0;
    case 350u: goto L_0010F2D0;
    case 351u: goto L_0010F2FC;
    case 352u: goto L_0010F304;
    case 353u: goto L_0010F320;
    case 354u: goto L_0010F334;
    case 355u: goto L_0010F360;
    case 356u: goto L_0010F370;
    case 357u: goto L_0010F38C;
    case 358u: goto L_0010F3A0;
    case 359u: goto L_0010F3D8;
    case 360u: goto L_0010F428;
    case 361u: goto L_0010F480;
    case 362u: goto L_0010F4A4;
    case 363u: goto L_0010F4E0;
    case 364u: goto L_0010F4F0;
    case 365u: goto L_0010F4F8;
    case 366u: goto L_0010F50C;
    case 367u: goto L_0010F518;
    case 368u: goto L_0010F524;
    case 369u: goto L_0010F530;
    case 370u: goto L_0010F578;
    case 371u: goto L_0010F588;
    case 372u: goto L_0010F5C4;
    case 373u: goto L_0010F5D8;
    case 374u: goto L_0010F5E4;
    case 375u: goto L_0010F5F4;
    case 376u: goto L_0010F600;
    case 377u: goto L_0010F608;
    case 378u: goto L_0010F620;
    case 379u: goto L_0010F62C;
    case 380u: goto L_0010F634;
    case 381u: goto L_0010F648;
    case 382u: goto L_0010F684;
    case 383u: goto L_0010F6A0;
    case 384u: goto L_0010F6C4;
    case 385u: goto L_0010F6D0;
    case 386u: goto L_0010F6D8;
    case 387u: goto L_0010F6EC;
    case 388u: goto L_0010F6F8;
    case 389u: goto L_0010F704;
    case 390u: goto L_0010F710;
    case 391u: goto L_0010F758;
    case 392u: goto L_0010F768;
    case 393u: goto L_0010F79C;
    case 394u: goto L_0010F7D8;
    case 395u: goto L_0010F7E0;
    case 396u: goto L_0010F7F0;
    case 397u: goto L_0010F840;
    case 398u: goto L_0010F848;
    case 399u: goto L_0010F85C;
    case 400u: goto L_0010F88C;
    case 401u: goto L_0010F89C;
    case 402u: goto L_0010F8AC;
    case 403u: goto L_0010F8F0;
    case 404u: goto L_0010F924;
    case 405u: goto L_0010F938;
    case 406u: goto L_0010F96C;
    case 407u: goto L_0010F984;
    case 408u: goto L_0010F994;
    case 409u: goto L_0010F9A8;
    case 410u: goto L_0010F9EC;
    case 411u: goto L_0010F9FC;
    case 412u: goto L_0010FA0C;
    case 413u: goto L_0010FA24;
    case 414u: goto L_0010FA34;
    case 415u: goto L_0010FA80;
    case 416u: goto L_0010FA9C;
    case 417u: goto L_0010FAA4;
    case 418u: goto L_0010FAC0;
    case 419u: goto L_0010FAF0;
    case 420u: goto L_0010FAF8;
    case 421u: goto L_0010FB14;
    case 422u: goto L_0010FB40;
    case 423u: goto L_0010FB4C;
    case 424u: goto L_0010FB64;
    case 425u: goto L_0010FB6C;
    case 426u: goto L_0010FB88;
    case 427u: goto L_0010FBC4;
    case 428u: goto L_0010FC28;
    case 429u: goto L_0010FC90;
    case 430u: goto L_0010FCAC;
    case 431u: goto L_0010FCF0;
    case 432u: goto L_0010FD24;
    case 433u: goto L_0010FD30;
    case 434u: goto L_0010FD48;
    case 435u: goto L_0010FD54;
    case 436u: goto L_0010FD60;
    case 437u: goto L_0010FD6C;
    case 438u: goto L_0010FD74;
    case 439u: goto L_0010FD84;
    case 440u: goto L_0010FD9C;
    case 441u: goto L_0010FDB4;
    case 442u: goto L_0010FDC0;
    case 443u: goto L_0010FDCC;
    case 444u: goto L_0010FDD8;
    case 445u: goto L_0010FDE0;
    case 446u: goto L_0010FDF0;
    case 447u: goto L_0010FE08;
    case 448u: goto L_0010FE10;
    case 449u: goto L_0010FE2C;
    case 450u: goto L_0010FE38;
    case 451u: goto L_0010FE44;
    case 452u: goto L_0010FE50;
    case 453u: goto L_0010FE58;
    case 454u: goto L_0010FE68;
    case 455u: goto L_0010FE80;
    case 456u: goto L_0010FEA8;
    case 457u: goto L_0010FED0;
    case 458u: goto L_0010FEE0;
    case 459u: goto L_0010FEF0;
    case 460u: goto L_0010FEFC;
    case 461u: goto L_0010FF60;
    case 462u: goto L_0010FF9C;
    case 463u: goto L_0010FFA4;
    default: bad_entry(c, 0x0010C000u); return;
    }
L_0010C000:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0010C004:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 84u)));  goto L_0010C08C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C014u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 425u, depth + 1u); else { c.pc = 0x0010BC40u; return; } if (c.pc != 0x0010C014u) [[unlikely]] return; }
L_0010C014:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C020u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010C020u) [[unlikely]] return; }
L_0010C020:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  goto L_0010C040; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C03Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010C03Cu) [[unlikely]] return; }
L_0010C03C:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_0010C040:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010C058; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C058u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010C058u) [[unlikely]] return; }
L_0010C058:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0010C078; }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C06Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0001(c, 272u, depth + 1u); else { c.pc = 0x00107050u; return; } if (c.pc != 0x0010C06Cu) [[unlikely]] return; }
L_0010C06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010C074u) [[unlikely]] return; }
L_0010C074:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0010C078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C080u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0001(c, 272u, depth + 1u); else { c.pc = 0x00107050u; return; } if (c.pc != 0x0010C080u) [[unlikely]] return; }
L_0010C080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C0D0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 1;
L_0010C08C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0A4u); c.r[5].d[0] = ld32((c.r[17].w[0] + 72u));  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00107150u; return; } if (c.pc != 0x0010C0A4u) [[unlikely]] return; }
L_0010C0A4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C0BCu); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 272u, depth + 1u); else { c.pc = 0x00107050u; return; } if (c.pc != 0x0010C0BCu) [[unlikely]] return; }
L_0010C0BC:
    c.r[3].d[0] = c.r[16].d[0] ^ 114ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 50u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_0010C0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010C0F0:
    set32(c.r[3], c.r[5].w[0] + 2u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0010C110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C12Cu); st32((c.r[6].w[0]), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010C12Cu) [[unlikely]] return; }
L_0010C12C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010C140:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C178u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C178u) [[unlikely]] return; }
L_0010C178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010C1C0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C1A4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 2;
L_0010C198:
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_0010C1A4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[17].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010C1C0:
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_0010C1D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C33C; } }
L_0010C1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C1DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010C1DCu) [[unlikely]] return; }
L_0010C1DC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C1ECu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C1ECu) [[unlikely]] return; }
L_0010C1EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], 0u - 1u);  goto L_0010C234; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C218; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010C218:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[17].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010C234:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C244u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C244u) [[unlikely]] return; }
L_0010C244:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] & 255ull;  goto L_0010C254; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C33C; } }
L_0010C254:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010C274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C268u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010C268u) [[unlikely]] return; }
L_0010C268:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010C2A4; } }
L_0010C274:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010C28C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C284u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010C284u) [[unlikely]] return; }
L_0010C284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld64((c.r[19].w[0] + 8u));  if (t) { goto L_0010C2A8; } }
L_0010C28C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010C2A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C29Cu); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010C29Cu) [[unlikely]] return; }
L_0010C29C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010C2A4:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 8u));
    c.budget -= 1;
L_0010C2A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    mmi::mult(c, 1, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C304u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010C304u) [[unlikely]] return; }
L_0010C304:
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C318u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 215u, depth + 1u); else { c.pc = 0x00106490u; return; } if (c.pc != 0x0010C318u) [[unlikely]] return; }
L_0010C318:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C338u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010C338u) [[unlikely]] return; }
L_0010C338:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0010C33C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010C360:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[21].w[0] + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C3A0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C3A0u) [[unlikely]] return; }
L_0010C3A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010C3E8; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C3CC; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010C3CC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010C3E8:
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0010C3FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C748; } }
L_0010C3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C404u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010C404u) [[unlikely]] return; }
L_0010C404:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C414u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C414u) [[unlikely]] return; }
L_0010C414:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], 0u - 1u);  goto L_0010C45C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C440; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010C440:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010C45C:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C46Cu); set32(c.r[17], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C46Cu) [[unlikely]] return; }
L_0010C46C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] & 255ull;  goto L_0010C47C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C748; } }
L_0010C47C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010C49C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C490u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010C490u) [[unlikely]] return; }
L_0010C490:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010C4CC; } }
L_0010C49C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010C4B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4ACu); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010C4ACu) [[unlikely]] return; }
L_0010C4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[17].w[0] + c.r[20].w[0]);  if (t) { goto L_0010C4D0; } }
L_0010C4B4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010C4CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4C4u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010C4C4u) [[unlikely]] return; }
L_0010C4C4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010C4CC:
    set32(c.r[19], c.r[17].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_0010C4D0:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[17].sd[0] <= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010C734; }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[20].d[0] = c.r[17].d[0] << 32;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[20].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C53Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010C53Cu) [[unlikely]] return; }
L_0010C53C:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C550u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010C550u) [[unlikely]] return; }
L_0010C550:
    c.r[4].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[5].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010C720; } }
L_0010C5B0:
    c.r[16].d[0] = c.r[20].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.r[6].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    mmi::multu(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[7].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[7], c.r[7], c.r[8]);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C608u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 215u, depth + 1u); else { c.pc = 0x00106490u; return; } if (c.pc != 0x0010C608u) [[unlikely]] return; }
L_0010C608:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_0010C618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C748; } }
L_0010C618:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[18].w[0] + 26u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C628u); set32(c.r[22], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010C628u) [[unlikely]] return; }
L_0010C628:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C638u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C638u) [[unlikely]] return; }
L_0010C638:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010C668; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C664; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010C664:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0010C668:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 16u);  goto L_0010C6F0; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010C6EC; } }
    c.r[6].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[7].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::multu(c, 0, c.r[7].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[6].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    c.r[7].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[7], c.r[7], c.r[8]);
    c.r[3].d[0] = c.r[6].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C6DCu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 45u, depth + 1u); else { c.pc = 0x0010C770u; return; } if (c.pc != 0x0010C6DCu) [[unlikely]] return; }
L_0010C6DC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[19], c.r[22].w[0] + c.r[2].w[0]);  goto L_0010C71C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C748; } }
L_0010C6EC:
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 1;
L_0010C6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C6F8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C6F8u) [[unlikely]] return; }
L_0010C6F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[22].w[0] + 2u);  goto L_0010C71C; }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[19], c.r[22].w[0] + 2u);
    c.budget -= 7;
L_0010C71C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0010C720:
    c.r[2].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = ld64((c.r[18].w[0] + 8u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C5B0u | kUnwind; return; } goto L_0010C5B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0010C748; } }
L_0010C734:
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C744u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010C744u) [[unlikely]] return; }
L_0010C744:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0010C748:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010C770:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C7B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C7B4u) [[unlikely]] return; }
L_0010C7B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010C7E4; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C7E0; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010C7E0:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0010C7E4:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[21].w[0] + 16u);  goto L_0010C7F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C9A4; } }
L_0010C7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C800u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C800u) [[unlikely]] return; }
L_0010C800:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 16u);  goto L_0010C824; }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 7;
L_0010C824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C82Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C82Cu) [[unlikely]] return; }
L_0010C82C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], 0u - 1u);  goto L_0010C85C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C858; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010C858:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0010C85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0010C968; } }
L_0010C864:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[22], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C880u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010C880u) [[unlikely]] return; }
L_0010C880:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = ld16((c.r[16].w[0] + 18u));  goto L_0010C894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0010C968; } }
L_0010C894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C89Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010C89Cu) [[unlikely]] return; }
L_0010C89C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0010C968; }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 18u));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[3], 0u + 27u);  goto L_0010C8BC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C968; } }
L_0010C8BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C8F8; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_0010C8D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C914; } }
L_0010C8D8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C8F0u); set32(c.r[6], c.r[23].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 28u, depth + 1u); else { c.pc = 0x0010C360u; return; } if (c.pc != 0x0010C8F0u) [[unlikely]] return; }
L_0010C8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010C914; } }
L_0010C8F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C914u); set32(c.r[6], c.r[23].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 16u, depth + 1u); else { c.pc = 0x0010C140u; return; } if (c.pc != 0x0010C914u) [[unlikely]] return; }
L_0010C914:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  goto L_0010C924; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C9A4; } }
L_0010C924:
    set32(c.r[4], c.r[21].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C934u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C934u) [[unlikely]] return; }
L_0010C934:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], 0u - 1u);  goto L_0010C968; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010C960; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010C960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0010C968; } }
L_0010C968:
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C864u | kUnwind; return; } goto L_0010C864; }
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C980u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010C980u) [[unlikely]] return; }
L_0010C980:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 2u);  goto L_0010C9A4; }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], c.r[19].w[0] + 2u);
    c.budget -= 7;
L_0010C9A4:
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
L_0010C9D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010C9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE84; } }
L_0010C9F8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 48u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 80u));  goto L_0010CA0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE84; } }
L_0010CA0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 16u);  goto L_0010CA28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA1Cu);  if (depth < kMaxDepth) unit_0003(c, 166u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0010CA1Cu) [[unlikely]] return; }
L_0010CA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010CE88; } }
L_0010CA24:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_0010CA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CA30u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CA30u) [[unlikely]] return; }
L_0010CA30:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u - 1u);  goto L_0010CA80; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010CA64; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010CA64:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010CA80:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], 0u + 241u);  goto L_0010CA90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE84; } }
L_0010CA90:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
    set32(c.r[2], 0u + 240u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_0010CD1C; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_0010CCA0; }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 16u);  goto L_0010CB98; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 16u);  goto L_0010CB3C; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0010CB38; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0010CB38; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0010CB38; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_0010CB38; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0010CB38; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0010CB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_0010CC58; } }
L_0010CB20:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CB30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010CB30u) [[unlikely]] return; }
L_0010CB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE84; } }
L_0010CB38:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_0010CB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CB44u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CB44u) [[unlikely]] return; }
L_0010CB44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010CB74; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010CB70; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010CB70:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0010CB74:
    set32(c.r[5], c.r[2].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CB80u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CB80u) [[unlikely]] return; }
L_0010CB80:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CB90u); set32(c.r[6], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 223u, depth + 1u); else { c.pc = 0x00109F50u; return; } if (c.pc != 0x0010CB90u) [[unlikely]] return; }
L_0010CB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
L_0010CB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CBA0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CBA0u) [[unlikely]] return; }
L_0010CBA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010CBFC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010CBE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CBC0u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CBC0u) [[unlikely]] return; }
L_0010CBC0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CBCCu); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CBCCu) [[unlikely]] return; }
L_0010CBCC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010CBF4; } }
L_0010CBE0:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 5;
L_0010CBF4:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0010CBFC:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CC10u) [[unlikely]] return; }
L_0010CC10:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC20u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010CC20u) [[unlikely]] return; }
L_0010CC20:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CC2Cu) [[unlikely]] return; }
L_0010CC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 24u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
L_0010CC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC60u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010CC60u) [[unlikely]] return; }
L_0010CC60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  goto L_0010CC7C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC74u); set32(c.r[4], c.r[4].w[0] - 15872u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010CC74u) [[unlikely]] return; }
L_0010CC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE84; } }
L_0010CC7C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[2].w[0] + 16u));  goto L_0010CC9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC94u); set32(c.r[4], c.r[4].w[0] - 15840u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010CC94u) [[unlikely]] return; }
L_0010CC94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE84; } }
L_0010CC9C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0010CCA0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010CCC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CCB4u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CCB4u) [[unlikely]] return; }
L_0010CCB4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010CCF0; } }
L_0010CCC0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010CCD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CCD0u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010CCD0u) [[unlikely]] return; }
L_0010CCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010CCF4; } }
L_0010CCD8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010CCF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CCE8u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010CCE8u) [[unlikely]] return; }
L_0010CCE8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010CCF0:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010CCF4:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD08u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010CD08u) [[unlikely]] return; }
L_0010CD08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 87u, depth + 1u); else { c.pc = 0x0010CEA0u; return; } if (c.pc != 0x0010CD14u) [[unlikely]] return; }
L_0010CD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010CE84; } }
L_0010CD1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD2Cu); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CD2Cu) [[unlikely]] return; }
L_0010CD2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 16u);  goto L_0010CD50; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 7;
L_0010CD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD58u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CD58u) [[unlikely]] return; }
L_0010CD58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010CDB4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010CD98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD78u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CD78u) [[unlikely]] return; }
L_0010CD78:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD84u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CD84u) [[unlikely]] return; }
L_0010CD84:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010CDAC; } }
L_0010CD98:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 5;
L_0010CDAC:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0010CDB4:
    c.r[17].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDC8u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CDC8u) [[unlikely]] return; }
L_0010CDC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0010CE24; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0010CE08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDE8u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CDE8u) [[unlikely]] return; }
L_0010CDE8:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDF4u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CDF4u) [[unlikely]] return; }
L_0010CDF4:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010CE1C; } }
L_0010CE08:
    set32(c.r[2], c.r[3].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 5;
L_0010CE1C:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 2;
L_0010CE24:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE38u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CE38u) [[unlikely]] return; }
L_0010CE38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_0010CE5C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 7;
L_0010CE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0010CE70; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
L_0010CE70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE7Cu); set32(c.r[4], c.r[4].w[0] - 15790u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010CE7Cu) [[unlikely]] return; }
L_0010CE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CA24u | kUnwind; return; } goto L_0010CA24; } }
L_0010CE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0010CE88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010CEA0:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0010D21C; } }
L_0010CED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CEE0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010CEE0u) [[unlikely]] return; }
L_0010CEE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010CF28; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010CF0C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010CF0C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010CF28:
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF38u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010CF38u) [[unlikely]] return; }
L_0010CF38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[2], 0u + 15u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 15u);  goto L_0010CF6C; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010CF68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF60u); set32(c.r[4], c.r[4].w[0] - 15754u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010CF60u) [[unlikely]] return; }
L_0010CF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010D22C; } }
L_0010CF68:
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_0010CF6C:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0010CF88; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] - 5u);  goto L_0010D020; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0010CF88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010CF94u) [[unlikely]] return; }
L_0010CF94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_0010CFA0; } }
    c.r[17].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 1;
L_0010CFA0:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010CFC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CFB8u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010CFB8u) [[unlikely]] return; }
L_0010CFB8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010CFF4; } }
L_0010CFC4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010CFDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CFD4u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010CFD4u) [[unlikely]] return; }
L_0010CFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010CFF8; } }
L_0010CFDC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010CFF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CFECu); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010CFECu) [[unlikely]] return; }
L_0010CFEC:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010CFF4:
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010CFF8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D008u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 87u, depth + 1u); else { c.pc = 0x0010CEA0u; return; } if (c.pc != 0x0010D008u) [[unlikely]] return; }
L_0010D008:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] & 65535ull;  goto L_0010D018; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010D22C; } }
L_0010D018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0010D218; } }
L_0010D020:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010D208; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 17u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 1ull;  goto L_0010D0B0; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010D060; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D054u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 221u, depth + 1u); else { c.pc = 0x00109EE0u; return; } if (c.pc != 0x0010D054u) [[unlikely]] return; }
L_0010D054:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010D090; } }
L_0010D060:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010D078; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D070u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 359u, depth + 1u); else { c.pc = 0x0010B370u; return; } if (c.pc != 0x0010D070u) [[unlikely]] return; }
L_0010D070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_0010D094; } }
L_0010D078:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0010D090; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D088u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 357u, depth + 1u); else { c.pc = 0x0010B320u; return; } if (c.pc != 0x0010D088u) [[unlikely]] return; }
L_0010D088:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_0010D090:
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_0010D094:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { goto L_0010D0BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]); c.r[18].d[0] = c.lo.d[0];  if (t) { goto L_0010D0BC; } }
L_0010D0B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0010D0C0; }
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0010D0BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010D0C0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D0CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010D0CCu) [[unlikely]] return; }
L_0010D0CC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D0E0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 215u, depth + 1u); else { c.pc = 0x00106490u; return; } if (c.pc != 0x0010D0E0u) [[unlikely]] return; }
L_0010D0E0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D0F0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010D0F0u) [[unlikely]] return; }
L_0010D0F0:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 18u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], 0u + 22u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0010D1E8; }
    set32(c.r[4], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D110u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010D110u) [[unlikely]] return; }
L_0010D110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010D140; }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0010D13C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0010D13C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0010D140:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[21].w[0] + 16u);  goto L_0010D1B8; }
    c.r[5].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D15Cu); c.r[4].d[0] = c.r[4].d[0] >> 32;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0010D15Cu) [[unlikely]] return; }
L_0010D15C:
    c.r[30].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = 0ull + 0ull;
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 32);
    mmi::divu(c, 0, c.r[18].w[0], c.r[30].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_0010D1A4; } }
L_0010D178:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D184u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010D184u) [[unlikely]] return; }
L_0010D184:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D19Cu); set32(c.r[6], c.r[23].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0003(c, 45u, depth + 1u); else { c.pc = 0x0010C770u; return; } if (c.pc != 0x0010D19Cu) [[unlikely]] return; }
L_0010D19C:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0010D1A4:
    c.r[2].d[0] = c.r[22].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D178u | kUnwind; return; } goto L_0010D178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D1E4; } }
L_0010D1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D1C0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010D1C0u) [[unlikely]] return; }
L_0010D1C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 2u);  goto L_0010D1E4; }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[21].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[21].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 7;
L_0010D1E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0010D1E8:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D1F4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010D1F4u) [[unlikely]] return; }
L_0010D1F4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0010D218; } }
L_0010D208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D210u); set32(c.r[4], c.r[4].w[0] - 15754u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010D210u) [[unlikely]] return; }
L_0010D210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010D22C; } }
L_0010D218:
    set32(c.r[20], c.r[20].w[0] - c.r[18].w[0]);
    c.budget -= 1;
L_0010D21C:
    c.budget -= 2;
    if (c.r[20].sd[0] > 0) { set32(c.r[4], c.r[21].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CED8u | kUnwind; return; } goto L_0010CED8; }
    c.r[2].d[0] = c.r[20].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010D22C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0010D260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 50u));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0010D27C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010D2F8; } }
L_0010D27C:
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 20u)));  goto L_0010D29C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D294u);  if (depth < kMaxDepth) unit_0000(c, 342u, depth + 1u); else { c.pc = 0x00103A70u; return; } if (c.pc != 0x0010D294u) [[unlikely]] return; }
L_0010D294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010D2FC; } }
L_0010D29C:
    set32(c.r[5], c.r[29].w[0] + 28u);
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    c.r[6].d[0] = ld16((c.r[4].w[0] + 66u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 56u));
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[7].d[0] - c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D2F4u); set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);  if (depth < kMaxDepth) unit_0000(c, 330u, depth + 1u); else { c.pc = 0x001038E0u; return; } if (c.pc != 0x0010D2F4u) [[unlikely]] return; }
L_0010D2F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010D2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0010D2FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010D310:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[5].w[0] + 26u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D350u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010D350u) [[unlikely]] return; }
L_0010D350:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[2], 0u + 26u);
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D36Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D36Cu) [[unlikely]] return; }
L_0010D36C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 138u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D390u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D390u) [[unlikely]] return; }
L_0010D390:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 1u);  goto L_0010D3CC; }
    st16((c.r[29].w[0] + 134u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3BCu); set32(c.r[5], c.r[29].w[0] + 134u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D3BCu) [[unlikely]] return; }
L_0010D3BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D420; } }
L_0010D3CC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_0010D3F8; }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3E8u); set32(c.r[5], c.r[29].w[0] + 143u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D3E8u) [[unlikely]] return; }
L_0010D3E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D420; } }
L_0010D3F8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[16].d[0] = c.r[16].d[0] & 65535ull;  goto L_0010D424; }
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D414u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D414u) [[unlikely]] return; }
L_0010D414:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0010D420:
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 1;
L_0010D424:
    c.r[22].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0010D49C; } }
L_0010D430:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D448u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D448u) [[unlikely]] return; }
L_0010D448:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[21].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D478; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D470u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D4E0u; return; } if (c.pc != 0x0010D470u) [[unlikely]] return; }
L_0010D470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0010D49C; } }
L_0010D478:
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[4], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D48Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D48Cu) [[unlikely]] return; }
L_0010D48C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[21].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_0010D49C:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D430u | kUnwind; return; } goto L_0010D430; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010D4E0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 23u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 18u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010D52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010D7C4; } }
L_0010D52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0010D764; } }
L_0010D534:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[21], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D550u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010D550u) [[unlikely]] return; }
L_0010D550:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0010D764; }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 18u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D568u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010D568u) [[unlikely]] return; }
L_0010D568:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010D760; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[2].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010D760; } }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { st32((c.r[29].w[0] + 156u), 0u);  goto L_0010D5B8; }
    set32(c.r[2], 0u + 9u);
    set32(c.r[5], c.r[29].w[0] + 172u);
    st16((c.r[29].w[0] + 172u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5A4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D5A4u) [[unlikely]] return; }
L_0010D5A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), 0u);
    c.budget -= 5;
L_0010D5B8:
    set32(c.r[2], 0u + 27u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 18u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_0010D640; }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_0010D5DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D760; } }
L_0010D5DC:
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5F4u); set32(c.r[5], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010D5F4u) [[unlikely]] return; }
L_0010D5F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D610u); st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 165u, depth + 1u); else { c.pc = 0x0010DCA0u; return; } if (c.pc != 0x0010D610u) [[unlikely]] return; }
L_0010D610:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = ld16((c.r[20].w[0] + 8u));  goto L_0010D624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D620u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_000A(c, 210u, depth + 1u); else { c.pc = 0x00129B30u; return; } if (c.pc != 0x0010D620u) [[unlikely]] return; }
L_0010D620:
    c.r[7].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 1;
L_0010D624:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = ld16((c.r[29].w[0] + 152u));
    set32(c.r[6], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D638u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 114u, depth + 1u); else { c.pc = 0x0010D310u; return; } if (c.pc != 0x0010D638u) [[unlikely]] return; }
L_0010D638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D760; } }
L_0010D640:
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D658u); set32(c.r[5], c.r[22].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010D658u) [[unlikely]] return; }
L_0010D658:
    set32(c.r[20], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0010D670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D66Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010D66Cu) [[unlikely]] return; }
L_0010D66C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010D670:
    set32(c.r[2], 0u + 27u);
    set32(c.r[5], c.r[29].w[0] + 166u);
    st16((c.r[29].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D688u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D688u) [[unlikely]] return; }
L_0010D688:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    st16((c.r[29].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6ACu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D6ACu) [[unlikely]] return; }
L_0010D6AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 1u);  goto L_0010D6E8; }
    st16((c.r[29].w[0] + 162u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6D8u); set32(c.r[5], c.r[29].w[0] + 162u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D6D8u) [[unlikely]] return; }
L_0010D6D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D734; } }
L_0010D6E8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_0010D710; }
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D700u); set32(c.r[5], c.r[29].w[0] + 175u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D700u) [[unlikely]] return; }
L_0010D700:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D734; } }
L_0010D710:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[16].d[0] = c.r[21].d[0] << 32;  goto L_0010D738; }
    st32((c.r[29].w[0] + 148u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D728u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D728u) [[unlikely]] return; }
L_0010D728:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0010D734:
    c.r[16].d[0] = c.r[21].d[0] << 32;
    c.budget -= 1;
L_0010D738:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D74Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D74Cu) [[unlikely]] return; }
L_0010D74C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
L_0010D760:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0010D764:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D534u | kUnwind; return; } goto L_0010D534; }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[2], 0u + 28u);  goto L_0010D7A0; }
    st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 170u);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D790u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D790u) [[unlikely]] return; }
L_0010D790:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D7C0; } }
L_0010D7A0:
    set32(c.r[5], c.r[29].w[0] + 168u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D7B4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D7B4u) [[unlikely]] return; }
L_0010D7B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0010D7C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010D7C4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0010D7F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010D830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DAE4; } }
L_0010D830:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010D84C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D844u);  if (depth < kMaxDepth) unit_0000(c, 358u, depth + 1u); else { c.pc = 0x00103CD0u; return; } if (c.pc != 0x0010D844u) [[unlikely]] return; }
L_0010D844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0010DAE8; } }
L_0010D84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D854u);  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010D854u) [[unlikely]] return; }
L_0010D854:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 18u));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010D864u) [[unlikely]] return; }
L_0010D864:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010D874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DAE4; } }
L_0010D874:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[19].w[0]));  goto L_0010D89C; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010D898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DAE4; } }
L_0010D898:
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 1;
L_0010D89C:
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D8ACu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D8ACu) [[unlikely]] return; }
L_0010D8AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 17u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_0010D900; }
    c.r[19].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D8E0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D8E0u) [[unlikely]] return; }
L_0010D8E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010DA54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DAE4; } }
L_0010D900:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 18u));  goto L_0010DA58; }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 1u);  goto L_0010D93C; }
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D928u); set32(c.r[5], c.r[29].w[0] + 122u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D928u) [[unlikely]] return; }
L_0010D928:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D990; } }
L_0010D93C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_0010D968; }
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D954u); set32(c.r[5], c.r[29].w[0] + 127u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D954u) [[unlikely]] return; }
L_0010D954:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010D990; } }
L_0010D968:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_0010D990; }
    st32((c.r[29].w[0] + 116u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D980u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D980u) [[unlikely]] return; }
L_0010D980:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_0010D990:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010DA54; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 17u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[20].d[0] << 32;  goto L_0010DA20; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[8].d[0] = c.r[20].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA00u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010DA00u) [[unlikely]] return; }
L_0010DA00:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010DA54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DAE4; } }
L_0010DA20:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA34u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010DA34u) [[unlikely]] return; }
L_0010DA34:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010DA54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DAE4; } }
L_0010DA54:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 18u));
    c.budget -= 1;
L_0010DA58:
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0010DAE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0010DAD4; } }
L_0010DA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010DA74u) [[unlikely]] return; }
L_0010DA74:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DAD0u); set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 125u, depth + 1u); else { c.pc = 0x0010D4E0u; return; } if (c.pc != 0x0010DAD0u) [[unlikely]] return; }
L_0010DAD0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0010DAD4:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = ld16((c.r[17].w[0] + 26u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DA6Cu | kUnwind; return; } goto L_0010DA6C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DAE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0010DAE8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010DB10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 50u));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010DB40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DC80; } }
L_0010DB40:
    c.r[16].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0010DB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB58u);  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010DB58u) [[unlikely]] return; }
L_0010DB58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 80u));  goto L_0010DB70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DC80; } }
L_0010DB6C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 80u));
    c.budget -= 1;
L_0010DB70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[18].w[0]));  goto L_0010DB94; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB84u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010DB84u) [[unlikely]] return; }
L_0010DB84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st16((c.r[19].w[0] + 64u), static_cast<std::uint16_t>(c.r[18].w[0]));  goto L_0010DBB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DC80; } }
L_0010DB94:
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DBA4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010DBA4u) [[unlikely]] return; }
L_0010DBA4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st16((c.r[19].w[0] + 64u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 4;
L_0010DBB4:
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st64((c.r[19].w[0] + 56u), c.r[3].d[0]);  if (t) { goto L_0010DBE0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0010DBE8; } }
L_0010DBE0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    st16((c.r[19].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0010DBE8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 80u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 50u));  goto L_0010DC74; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 66u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 1u);  goto L_0010DC24; }
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC14u); set32(c.r[5], c.r[29].w[0] + 90u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010DC14u) [[unlikely]] return; }
L_0010DC14:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010DC70; } }
L_0010DC24:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[6], 0u + 4u);  goto L_0010DC4C; }
    st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC3Cu); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010DC3Cu) [[unlikely]] return; }
L_0010DC3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010DC70; } }
L_0010DC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0010DC70; } }
    st32((c.r[29].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC64u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0000(c, 336u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010DC64u) [[unlikely]] return; }
L_0010DC64:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0010DC70:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 50u));
    c.budget -= 1;
L_0010DC74:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[19].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0010DC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010DCA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29236u)));  c.pc = t; return; }
L_0010DCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCC8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 299u, depth + 1u); else { c.pc = 0x0010EDE0u; return; } if (c.pc != 0x0010DCC8u) [[unlikely]] return; }
L_0010DCC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0010DCDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DCF8; } }
L_0010DCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 185u, depth + 1u); else { c.pc = 0x0010DEA0u; return; } if (c.pc != 0x0010DCE4u) [[unlikely]] return; }
L_0010DCE4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010DCF4u) [[unlikely]] return; }
L_0010DCF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010DCF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010DD10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
L_0010DD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD34u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 257u, depth + 1u); else { c.pc = 0x00106E20u; return; } if (c.pc != 0x0010DD34u) [[unlikely]] return; }
L_0010DD34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD48u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010DD48u) [[unlikely]] return; }
L_0010DD48:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010DE2C; }
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD64u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010DD64u) [[unlikely]] return; }
L_0010DD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010DD84; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 6;
L_0010DD84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15595u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD98u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 232u, depth + 1u); else { c.pc = 0x00106890u; return; } if (c.pc != 0x0010DD98u) [[unlikely]] return; }
L_0010DD98:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_0010DDB8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDB0u); set32(c.r[4], c.r[4].w[0] - 15591u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010DDB0u) [[unlikely]] return; }
L_0010DDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DE1C; } }
L_0010DDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDC0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010DDC0u) [[unlikely]] return; }
L_0010DDC0:
    set32(c.r[19], c.r[17].w[0] + 3u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDD4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010DDD4u) [[unlikely]] return; }
L_0010DDD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[17].d[0] + 0ull;  goto L_0010DE00; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
L_0010DE00:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010DE0Cu) [[unlikely]] return; }
L_0010DE0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE18u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010DE18u) [[unlikely]] return; }
L_0010DE18:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0010DE1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DD2Cu | kUnwind; return; } goto L_0010DD2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DE84; } }
L_0010DE2C:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15564u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE3Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010DE3Cu) [[unlikely]] return; }
L_0010DE3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0010DE64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15561u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE58u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010DE58u) [[unlikely]] return; }
L_0010DE58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0010DE7C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0010DE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE6Cu);  if (depth < kMaxDepth) unit_0003(c, 415u, depth + 1u); else { c.pc = 0x0010FA80u; return; } if (c.pc != 0x0010DE6Cu) [[unlikely]] return; }
L_0010DE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DD2Cu | kUnwind; return; } goto L_0010DD2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DE84; } }
L_0010DE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE84u);  if (depth < kMaxDepth) unit_0003(c, 361u, depth + 1u); else { c.pc = 0x0010F480u; return; } if (c.pc != 0x0010DE84u) [[unlikely]] return; }
L_0010DE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010DEA0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DED0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010DED0u) [[unlikely]] return; }
L_0010DED0:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEE0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00105BE0u; return; } if (c.pc != 0x0010DEE0u) [[unlikely]] return; }
L_0010DEE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0])));  goto L_0010DEFC; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = ld16((c.r[2].w[0] + 2u));  goto L_0010DF1C; }
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0010DEFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF0Cu); set32(c.r[5], c.r[5].w[0] - 15558u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0010DF0Cu) [[unlikely]] return; }
L_0010DF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF14u); set32(c.r[4], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010DF14u) [[unlikely]] return; }
L_0010DF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E0AC; } }
L_0010DF1C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010DF28u) [[unlikely]] return; }
L_0010DF28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0010DFA0; } }
L_0010DF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010DF38u) [[unlikely]] return; }
L_0010DF38:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF48u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00105BE0u; return; } if (c.pc != 0x0010DF48u) [[unlikely]] return; }
L_0010DF48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  goto L_0010DF64; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0010DF84; }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0010DF64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF74u); set32(c.r[5], c.r[5].w[0] - 15522u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0010DF74u) [[unlikely]] return; }
L_0010DF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF7Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010DF7Cu) [[unlikely]] return; }
L_0010DF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E0AC; } }
L_0010DF84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF90u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 206u, depth + 1u); else { c.pc = 0x0010E0D0u; return; } if (c.pc != 0x0010DF90u) [[unlikely]] return; }
L_0010DF90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0010DFA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E0AC; } }
L_0010DFA0:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010DFAC; } }
L_0010DFAC:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_0010DFC4; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DFACu | kUnwind; return; } goto L_0010DFAC; }
L_0010DFC4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[20], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DF30u | kUnwind; return; } goto L_0010DF30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0010E07C; } }
L_0010DFD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DFDCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010DFDCu) [[unlikely]] return; }
L_0010DFDC:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DFECu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00105BE0u; return; } if (c.pc != 0x0010DFECu) [[unlikely]] return; }
L_0010DFEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  goto L_0010E014; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0010E038; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0010E034; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0010E014:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E024u); set32(c.r[5], c.r[5].w[0] - 15483u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0010E024u) [[unlikely]] return; }
L_0010E024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E02Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010E02Cu) [[unlikely]] return; }
L_0010E02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E0AC; } }
L_0010E034:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0010E038:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0010E05C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E04Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 185u, depth + 1u); else { c.pc = 0x0010DEA0u; return; } if (c.pc != 0x0010E04Cu) [[unlikely]] return; }
L_0010E04C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0010E07C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E0AC; } }
L_0010E05C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E068u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 206u, depth + 1u); else { c.pc = 0x0010E0D0u; return; } if (c.pc != 0x0010E068u) [[unlikely]] return; }
L_0010E068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010E078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E0AC; } }
L_0010E078:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0010E07C:
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010E088; } }
L_0010E088:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_0010E0A0; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E088u | kUnwind; return; } goto L_0010E088; }
L_0010E0A0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[20], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DFD4u | kUnwind; return; } goto L_0010DFD4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010E0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_0010E0D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = ld16((c.r[6].w[0] + 18u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
L_0010E0FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E108u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010E108u) [[unlikely]] return; }
L_0010E108:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));  goto L_0010E118; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[2].w[0] + 18u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E0FCu | kUnwind; return; } goto L_0010E0FC; } }
L_0010E118:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[19].d[0] & 65535ull;  if (t) { goto L_0010E12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_0010E21C; } }
L_0010E12C:
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0010E1EC; }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010E1E8; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010E1E8; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_0010E174; }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010E170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E208; } }
L_0010E170:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0010E174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E184; } }
L_0010E17C:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0010E184:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E17Cu | kUnwind; return; } goto L_0010E17C; } }
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[20].d[0] = c.r[2].d[0] << 32;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);  if (t) { goto L_0010E21C; } }
L_0010E1E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0010E1EC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010E1FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E200; } }
L_0010E1FC:
    set32(c.r[4], c.r[4].w[0] - 15608u);
    c.budget -= 1;
L_0010E200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E208u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010E208u) [[unlikely]] return; }
L_0010E208:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E214u); set32(c.r[4], c.r[4].w[0] - 15446u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010E214u) [[unlikely]] return; }
L_0010E214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E284; } }
L_0010E21C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E22Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010E22Cu) [[unlikely]] return; }
L_0010E22C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E240u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0010E240u) [[unlikely]] return; }
L_0010E240:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E258u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 217u, depth + 1u); else { c.pc = 0x0010E2B0u; return; } if (c.pc != 0x0010E258u) [[unlikely]] return; }
L_0010E258:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));  goto L_0010E274; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E26Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010E26Cu) [[unlikely]] return; }
L_0010E26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E284; } }
L_0010E274:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E280u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010E280u) [[unlikely]] return; }
L_0010E280:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0010E284:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010E2B0:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] & 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[20].w[0] - 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010EB68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 15712u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0010C000u < 16384u) { entry = entries_0003[(t - 0x0010C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0010E318:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E32Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 290u, depth + 1u); else { c.pc = 0x0010EBE0u; return; } if (c.pc != 0x0010E32Cu) [[unlikely]] return; }
L_0010E32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0010EBAC; } }
L_0010E334:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010E348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E34C; } }
L_0010E348:
    set32(c.r[4], c.r[4].w[0] - 15608u);
    c.budget -= 1;
L_0010E34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E354u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010E354u) [[unlikely]] return; }
L_0010E354:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010E368; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010E374; } }
L_0010E368:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 15608u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0010E374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E37Cu);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0010E37Cu) [[unlikely]] return; }
L_0010E37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010EBA8; } }
L_0010E384:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010E398; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010E3A0; } }
L_0010E398:
    set32(c.r[4], c.r[4].w[0] - 15608u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0010E3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E3A8u);  if (depth < kMaxDepth) unit_0012(c, 380u, depth + 1u); else { c.pc = 0x0014AF00u; return; } if (c.pc != 0x0010E3A8u) [[unlikely]] return; }
L_0010E3A8:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0010E42C; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0010E42C; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[3].d[0]) { st64((c.r[16].w[0]), c.r[2].d[0]);  goto L_0010E40C; }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0010E3E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E42C; } }
L_0010E3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E3E8u);  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x0010E3E8u) [[unlikely]] return; }
L_0010E3E8:
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29236u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_0010E43C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E400u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 210u, depth + 1u); else { c.pc = 0x00129B30u; return; } if (c.pc != 0x0010E400u) [[unlikely]] return; }
L_0010E400:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E43C; } }
L_0010E40C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29236u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 8u);  goto L_0010E43C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E420u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 209u, depth + 1u); else { c.pc = 0x00129AE0u; return; } if (c.pc != 0x0010E420u) [[unlikely]] return; }
L_0010E420:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E43C; } }
L_0010E42C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E438u); set32(c.r[4], c.r[4].w[0] - 15367u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010E438u) [[unlikely]] return; }
L_0010E438:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0010E43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EBA8; } }
L_0010E444:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0010EBA8; } }
L_0010E450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E458u); c.r[5].d[0] = ld16((c.r[17].w[0] + 26u));  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010E458u) [[unlikely]] return; }
L_0010E458:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0010E4B0; } }
L_0010E464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0010E46C; } }
L_0010E46C:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_0010E484; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E46Cu | kUnwind; return; } goto L_0010E46C; }
L_0010E484:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 26u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E498u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 217u, depth + 1u); else { c.pc = 0x0010E2B0u; return; } if (c.pc != 0x0010E498u) [[unlikely]] return; }
L_0010E498:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0010E4A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EBA8; } }
L_0010E4A8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0010E4B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010E4C8; } }
L_0010E4C0:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0010E4C8:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E4C0u | kUnwind; return; } goto L_0010E4C0; } }
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E464u | kUnwind; return; } goto L_0010E464; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[4].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  if (t) { goto L_0010EBA8; } }
L_0010E538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E540u); c.r[5].d[0] = ld16((c.r[17].w[0] + 26u));  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010E540u) [[unlikely]] return; }
L_0010E540:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E558; } }
L_0010E550:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0010E558:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E550u | kUnwind; return; } goto L_0010E550; } }
    st32((c.r[29].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 504u), 0u);  if (t) { goto L_0010E690; } }
    c.r[3].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5D0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010E5D0u) [[unlikely]] return; }
L_0010E5D0:
    st32((c.r[29].w[0] + 504u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[17].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 508u)));
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::mult(c, 1, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E620u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0010E620u) [[unlikely]] return; }
L_0010E620:
    set32(c.r[21], ld32((c.r[29].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0010E678; } }
L_0010E62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0010E634; } }
L_0010E634:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_0010E64C; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E634u | kUnwind; return; } goto L_0010E634; }
L_0010E64C:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 26u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E660u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 217u, depth + 1u); else { c.pc = 0x0010E2B0u; return; } if (c.pc != 0x0010E660u) [[unlikely]] return; }
L_0010E660:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0010E670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EBA8; } }
L_0010E670:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[21], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0010E678:
    set32(c.r[2], ld32((c.r[29].w[0] + 508u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E62Cu | kUnwind; return; } goto L_0010E62C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010E734; } }
L_0010E690:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010E6A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_0010E6AC; } }
L_0010E6A4:
    set32(c.r[5], c.r[5].w[0] - 15608u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 2;
L_0010E6AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6B4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0010E6B4u) [[unlikely]] return; }
L_0010E6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6BCu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 281u, depth + 1u); else { c.pc = 0x0013EBC0u; return; } if (c.pc != 0x0010E6BCu) [[unlikely]] return; }
L_0010E6BC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0010E6CCu) [[unlikely]] return; }
L_0010E6CC:
    set32(c.r[5], c.r[20].w[0] + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010E6DCu) [[unlikely]] return; }
L_0010E6DC:
    st32((c.r[29].w[0] + 504u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010E6F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_0010E6FC; } }
L_0010E6F4:
    set32(c.r[5], c.r[5].w[0] - 15608u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 2;
L_0010E6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E704u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0010E704u) [[unlikely]] return; }
L_0010E704:
    set32(c.r[4], ld32((c.r[29].w[0] + 504u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E714u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 283u, depth + 1u); else { c.pc = 0x0013EC10u; return; } if (c.pc != 0x0010E714u) [[unlikely]] return; }
L_0010E714:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0010E720u) [[unlikely]] return; }
L_0010E720:
    set32(c.r[2], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 508u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_0010E734:
    set32(c.r[5], c.r[29].w[0] + 504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E740u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010E740u) [[unlikely]] return; }
L_0010E740:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E754u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0010E754u) [[unlikely]] return; }
L_0010E754:
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E764u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 173u, depth + 1u); else { c.pc = 0x00105BE0u; return; } if (c.pc != 0x0010E764u) [[unlikely]] return; }
L_0010E764:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 18u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E770u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010E770u) [[unlikely]] return; }
L_0010E770:
    c.r[5].d[0] = ld16((c.r[2].w[0] + 26u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E77Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010E77Cu) [[unlikely]] return; }
L_0010E77C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[22], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0010E7C0; } }
L_0010E78C:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7A8u); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0010E7A8u) [[unlikely]] return; }
L_0010E7A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0010E7C0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
L_0010E7C0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E78Cu | kUnwind; return; } goto L_0010E78C; }
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7E4u); set32(c.r[5], c.r[5].w[0] - 15326u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0010E7E4u) [[unlikely]] return; }
L_0010E7E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0010E870; } }
L_0010E7EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[21], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E808u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0010E808u) [[unlikely]] return; }
L_0010E808:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));  goto L_0010E840; }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29236u)));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[22].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_0010E834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E834u); set32(c.r[4], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_000A(c, 210u, depth + 1u); else { c.pc = 0x00129B30u; return; } if (c.pc != 0x0010E834u) [[unlikely]] return; }
L_0010E834:
    set32(c.r[2], ld32((c.r[29].w[0] + 508u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0010E880; } }
L_0010E840:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0010E870; }
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] - 15319u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E864u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0010E864u) [[unlikely]] return; }
L_0010E864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E86Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010E86Cu) [[unlikely]] return; }
L_0010E86C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0010E870:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E7ECu | kUnwind; return; } goto L_0010E7EC; }
L_0010E880:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 8u));
    set32(c.r[6], ld32((c.r[29].w[0] + 508u)));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[8].d[0] = c.r[3].d[0] << 32;
    set32(c.r[5], ld32((c.r[29].w[0] + 504u)));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    mmi::mult(c, 1, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8CCu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010E8CCu) [[unlikely]] return; }
L_0010E8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0010EBA8; } }
L_0010E8D4:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010E8E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_0010E8F0; } }
L_0010E8E8:
    set32(c.r[5], c.r[5].w[0] - 15608u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 2;
L_0010E8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8F8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0010E8F8u) [[unlikely]] return; }
L_0010E8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E900u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 281u, depth + 1u); else { c.pc = 0x0013EBC0u; return; } if (c.pc != 0x0010E900u) [[unlikely]] return; }
L_0010E900:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E910u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0010E910u) [[unlikely]] return; }
L_0010E910:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[3].d[0] = ld64((c.r[17].w[0] + 8u));  goto L_0010E920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0010EBA8; } }
L_0010E920:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[5].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E978u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 326u, depth + 1u); else { c.pc = 0x001038A0u; return; } if (c.pc != 0x0010E978u) [[unlikely]] return; }
L_0010E978:
    st32((c.r[29].w[0] + 500u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010E990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_0010E998; } }
L_0010E990:
    set32(c.r[5], c.r[5].w[0] - 15608u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_0010E998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9A0u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0010E9A0u) [[unlikely]] return; }
L_0010E9A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9B0u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 283u, depth + 1u); else { c.pc = 0x0013EC10u; return; } if (c.pc != 0x0010E9B0u) [[unlikely]] return; }
L_0010E9B0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0010E9BCu) [[unlikely]] return; }
L_0010E9BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 500u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 500u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9D8u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0010E9D8u) [[unlikely]] return; }
L_0010E9D8:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[5], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9E8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010E9E8u) [[unlikely]] return; }
L_0010E9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0010EBA8; } }
L_0010E9F0:
    set32(c.r[21], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_0010EB50; } }
L_0010E9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[21].w[0])));  if (t) { goto L_0010EA1C; } }
L_0010EA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA0Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0010EA0Cu) [[unlikely]] return; }
L_0010EA0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[20].w[0] + 20u)));  goto L_0010EA1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EA28; } }
L_0010EA1C:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EA04u | kUnwind; return; } goto L_0010EA04; }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010EA28:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_0010EB4C; }
    c.r[5].d[0] = ld16((c.r[21].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010EA3Cu) [[unlikely]] return; }
L_0010EA3C:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 6u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0010EB20; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 4u));
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[30], ld32((c.r[21].w[0] + 8u)));  goto L_0010EA8C; }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 39u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA7Cu); set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 217u, depth + 1u); else { c.pc = 0x0010E2B0u; return; } if (c.pc != 0x0010EA7Cu) [[unlikely]] return; }
L_0010EA7C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0010EB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EBA8; } }
L_0010EA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0010EB08; } }
L_0010EA94:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010EAA0; } }
L_0010EAA0:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 1u);  if (t) { goto L_0010EAB8; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EAA0u | kUnwind; return; } goto L_0010EAA0; }
L_0010EAB8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_0010EB08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0010EAC8; } }
L_0010EAC8:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] - 1u);  if (t) { goto L_0010EAE0; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EAC8u | kUnwind; return; } goto L_0010EAC8; }
L_0010EAE0:
    c.r[6].d[0] = ld16((c.r[21].w[0] + 4u));
    set32(c.r[8], c.r[16].w[0] + c.r[30].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EAF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 217u, depth + 1u); else { c.pc = 0x0010E2B0u; return; } if (c.pc != 0x0010EAF4u) [[unlikely]] return; }
L_0010EAF4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);  goto L_0010EB04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EBA8; } }
L_0010EB04:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0010EB08:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 6u));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EA94u | kUnwind; return; } goto L_0010EA94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EB48; } }
L_0010EB20:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 172u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[21].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB38u); set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 217u, depth + 1u); else { c.pc = 0x0010E2B0u; return; } if (c.pc != 0x0010EB38u) [[unlikely]] return; }
L_0010EB38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0010EB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010EBA8; } }
L_0010EB48:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0010EB4C:
    set32(c.r[21], c.r[21].w[0] + 12u);
    c.budget -= 1;
L_0010EB50:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E9FCu | kUnwind; return; } goto L_0010E9FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0010EBA8; } }
L_0010EB68:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 369u, depth + 1u); else { c.pc = 0x0010B5E0u; return; } if (c.pc != 0x0010EB74u) [[unlikely]] return; }
L_0010EB74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010EB9C; }
    c.r[6].d[0] = ld16((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB94u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 217u, depth + 1u); else { c.pc = 0x0010E2B0u; return; } if (c.pc != 0x0010EB94u) [[unlikely]] return; }
L_0010EB94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EBA8; } }
L_0010EB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EBA4u); set32(c.r[4], c.r[4].w[0] - 15257u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010EBA4u) [[unlikely]] return; }
L_0010EBA4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0010EBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0010EBAC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_0010EBE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0010EC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 37u);  if (t) { goto L_0010EC28; } }
L_0010EC1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 15608u);
    set32(c.r[5], 0u + 37u);
    c.budget -= 3;
L_0010EC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC30u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0010EC30u) [[unlikely]] return; }
L_0010EC30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_0010EC6C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010EC4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010EC54; } }
L_0010EC4C:
    set32(c.r[4], c.r[4].w[0] - 15608u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0010EC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 296u, depth + 1u); else { c.pc = 0x003BAD48u; return; } if (c.pc != 0x0010EC5Cu) [[unlikely]] return; }
L_0010EC5C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_0010ECA8; } }
L_0010EC6C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010EC7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0010EC84; } }
L_0010EC7C:
    set32(c.r[5], c.r[5].w[0] - 15608u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 2;
L_0010EC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC8Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0010EC8Cu) [[unlikely]] return; }
L_0010EC8C:
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC9Cu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 283u, depth + 1u); else { c.pc = 0x0013EC10u; return; } if (c.pc != 0x0010EC9Cu) [[unlikely]] return; }
L_0010EC9C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0010ECA8u) [[unlikely]] return; }
L_0010ECA8:
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[2], 0u + 17u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld16((c.r[18].w[0] + 24u));  goto L_0010ED30; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld16((c.r[18].w[0] + 24u));  goto L_0010ED30; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 4u);  goto L_0010ED30; }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010ED2C; } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 2u);  goto L_0010ED30; }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010ED20; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], 0u + 1u);  goto L_0010ED30; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0010ED14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010ED30; } }
L_0010ED14:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010ED30; } }
L_0010ED20:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010ED30; } }
L_0010ED2C:
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_0010ED30:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0010ED64; }
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 29236u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0010EDB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 211u, depth + 1u); else { c.pc = 0x00129B60u; return; } if (c.pc != 0x0010ED58u) [[unlikely]] return; }
L_0010ED58:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EDB4; } }
L_0010ED64:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010ED94; }
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29236u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 4u);  goto L_0010EDB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 210u, depth + 1u); else { c.pc = 0x00129B30u; return; } if (c.pc != 0x0010ED88u) [[unlikely]] return; }
L_0010ED88:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EDB4; } }
L_0010ED94:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010EDA8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0010EDB4; } }
L_0010EDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EDB0u); set32(c.r[4], c.r[4].w[0] - 15222u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010EDB0u) [[unlikely]] return; }
L_0010EDB0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0010EDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010EDE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
L_0010EE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE14u); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 257u, depth + 1u); else { c.pc = 0x00106E20u; return; } if (c.pc != 0x0010EE14u) [[unlikely]] return; }
L_0010EE14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE28u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010EE28u) [[unlikely]] return; }
L_0010EE28:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EF1C; } }
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE44u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010EE44u) [[unlikely]] return; }
L_0010EE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010EE64; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-4ll);
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 6;
L_0010EE64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15595u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE78u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 232u, depth + 1u); else { c.pc = 0x00106890u; return; } if (c.pc != 0x0010EE78u) [[unlikely]] return; }
L_0010EE78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] >= 0) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0010EE9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE90u); set32(c.r[4], c.r[4].w[0] - 15591u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010EE90u) [[unlikely]] return; }
L_0010EE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010EF00; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_0010EE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEA4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010EEA4u) [[unlikely]] return; }
L_0010EEA4:
    set32(c.r[16], c.r[17].w[0] + 3u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010EEB8u) [[unlikely]] return; }
L_0010EEB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[17].d[0] + 0ull;  goto L_0010EEE4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
L_0010EEE4:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEF0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010EEF0u) [[unlikely]] return; }
L_0010EEF0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEFCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010EEFCu) [[unlikely]] return; }
L_0010EEFC:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0010EF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EE0Cu | kUnwind; return; } goto L_0010EE0C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010EF14u) [[unlikely]] return; }
L_0010EF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F450; } }
L_0010EF1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15182u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF30u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010EF30u) [[unlikely]] return; }
L_0010EF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F144; } }
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF44u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010EF44u) [[unlikely]] return; }
L_0010EF44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 16u);  goto L_0010EF68; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 7;
L_0010EF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010EF70u) [[unlikely]] return; }
L_0010EF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 346u, depth + 1u); else { c.pc = 0x003B7C08u; return; } if (c.pc != 0x0010EF78u) [[unlikely]] return; }
L_0010EF78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], 0u + 1u);  goto L_0010EF9C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF8Cu); set32(c.r[4], c.r[4].w[0] - 15179u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010EF8Cu) [[unlikely]] return; }
L_0010EF8C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010EF9C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0010EF9C:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010EFA8u) [[unlikely]] return; }
L_0010EFA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 345u, depth + 1u); else { c.pc = 0x003B7BF0u; return; } if (c.pc != 0x0010EFB4u) [[unlikely]] return; }
L_0010EFB4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EFC8; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 58ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010EFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EFD8; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 95ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010EFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010EFE8; } }
    c.r[2].d[0] = c.r[16].d[0] ^ 45ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010EFE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EF9Cu | kUnwind; return; } goto L_0010EF9C; }
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010EFFCu) [[unlikely]] return; }
L_0010EFFC:
    set32(c.r[3], 0u + 62u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0010F02C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F014u); set32(c.r[4], c.r[4].w[0] - 15142u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F014u) [[unlikely]] return; }
L_0010F014:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F020u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010F020u) [[unlikely]] return; }
L_0010F020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F450; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_0010F02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F034u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010F034u) [[unlikely]] return; }
    goto L_0010F034;
L_0010F030:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010F034:
    set32(c.r[16], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F048u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F048u) [[unlikely]] return; }
L_0010F048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F070; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 8;
L_0010F070:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_0010F0BC; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F084u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0010F084u) [[unlikely]] return; }
L_0010F084:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0010F128; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F098u); set32(c.r[4], c.r[4].w[0] - 15117u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F098u) [[unlikely]] return; }
L_0010F098:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0A4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F0A4u) [[unlikely]] return; }
L_0010F0A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010F0B0u) [[unlikely]] return; }
L_0010F0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F450; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0010F0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0010F0C4u) [[unlikely]] return; }
L_0010F0C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0010F0FC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0D8u); set32(c.r[4], c.r[4].w[0] - 15096u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F0D8u) [[unlikely]] return; }
L_0010F0D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F0E4u) [[unlikely]] return; }
L_0010F0E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010F0F0u) [[unlikely]] return; }
L_0010F0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F450; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010F0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F104u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F104u) [[unlikely]] return; }
L_0010F104:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F11Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 323u, depth + 1u); else { c.pc = 0x00103860u; return; } if (c.pc != 0x0010F11Cu) [[unlikely]] return; }
L_0010F11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F450; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010F128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F130u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F130u) [[unlikely]] return; }
L_0010F130:
    set32(c.r[18], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EE0Cu | kUnwind; return; } goto L_0010EE0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0010F450; } }
L_0010F144:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15066u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F158u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010F158u) [[unlikely]] return; }
L_0010F158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EE0Cu | kUnwind; return; } goto L_0010EE0C; } }
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F16Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F16Cu) [[unlikely]] return; }
L_0010F16C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 16u);  goto L_0010F190; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 7;
L_0010F190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F198u) [[unlikely]] return; }
L_0010F198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 346u, depth + 1u); else { c.pc = 0x003B7C08u; return; } if (c.pc != 0x0010F1A0u) [[unlikely]] return; }
L_0010F1A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 1u);  goto L_0010F1C4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1B4u); set32(c.r[4], c.r[4].w[0] - 15179u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F1B4u) [[unlikely]] return; }
L_0010F1B4:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F1C4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0010F1C4:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F1D0u) [[unlikely]] return; }
L_0010F1D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 345u, depth + 1u); else { c.pc = 0x003B7BF0u; return; } if (c.pc != 0x0010F1DCu) [[unlikely]] return; }
L_0010F1DC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F1F0; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 58ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F200; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 95ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F210; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 45ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F210:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F1C4u | kUnwind; return; } goto L_0010F1C4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F224u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010F224u) [[unlikely]] return; }
L_0010F224:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F234u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F234u) [[unlikely]] return; }
L_0010F234:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));  goto L_0010F260; }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));
    c.budget -= 9;
L_0010F260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F268u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0010F268u) [[unlikely]] return; }
L_0010F268:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 16u);  goto L_0010F2F4; }
    st32((c.r[16].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F2F0; } }
L_0010F294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F29Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 383u, depth + 1u); else { c.pc = 0x0010F6A0u; return; } if (c.pc != 0x0010F29Cu) [[unlikely]] return; }
L_0010F29C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 16u), c.r[16].w[0]);  goto L_0010F2BC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010F2B0u) [[unlikely]] return; }
L_0010F2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F450; } }
    st32((c.r[2].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_0010F2BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 20u)));  goto L_0010F2D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0010F2F0; } }
L_0010F2D0:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 2;
L_0010F2D8:
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F2D0u | kUnwind; return; } goto L_0010F2D0; } }
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0010F2F0:
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 1;
L_0010F2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F2FCu) [[unlikely]] return; }
L_0010F2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F304u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0010F304u) [[unlikely]] return; }
L_0010F304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F294u | kUnwind; return; } goto L_0010F294; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F320u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010F320u) [[unlikely]] return; }
L_0010F320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F378; } }
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F334u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F334u) [[unlikely]] return; }
L_0010F334:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0010F358; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
L_0010F358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 403u, depth + 1u); else { c.pc = 0x0010F8F0u; return; } if (c.pc != 0x0010F360u) [[unlikely]] return; }
L_0010F360:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F370u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F370u) [[unlikely]] return; }
L_0010F370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0010F3FC; } }
L_0010F378:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 15062u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F38Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010F38Cu) [[unlikely]] return; }
L_0010F38C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F3FC; } }
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F3A0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F3A0u) [[unlikely]] return; }
L_0010F3A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  goto L_0010F3C4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-2ll);
    st64((c.r[20].w[0] + 24u), c.r[2].d[0]);
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 7;
L_0010F3C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 20u)));  goto L_0010F3E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EE0Cu | kUnwind; return; } goto L_0010EE0C; } }
L_0010F3D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 2;
L_0010F3E0:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F3D8u | kUnwind; return; } goto L_0010F3D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EE0Cu | kUnwind; return; } goto L_0010EE0C; } }
L_0010F3FC:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  goto L_0010F414; }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EE0Cu | kUnwind; return; } goto L_0010EE0C; } }
    st32((c.r[16].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_0010F414:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 20u)));  goto L_0010F430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (t) { goto L_0010F448; } }
L_0010F428:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 2;
L_0010F430:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F428u | kUnwind; return; } goto L_0010F428; } }
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_0010F448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EE0Cu | kUnwind; return; } goto L_0010EE0C; } }
L_0010F450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010F480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F4A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F4A4u) [[unlikely]] return; }
L_0010F4A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010F4C8; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010F4C8:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[18].w[0] + 16u);  goto L_0010F4E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F4E0u); set32(c.r[4], c.r[4].w[0] - 15059u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F4E0u) [[unlikely]] return; }
L_0010F4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F688; } }
L_0010F4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F4F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F4F0u) [[unlikely]] return; }
L_0010F4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F4F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 346u, depth + 1u); else { c.pc = 0x003B7C08u; return; } if (c.pc != 0x0010F4F8u) [[unlikely]] return; }
L_0010F4F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 1u);  goto L_0010F518; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F50Cu); set32(c.r[4], c.r[4].w[0] - 15179u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F50Cu) [[unlikely]] return; }
L_0010F50C:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F518; } }
L_0010F518:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F524u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F524u) [[unlikely]] return; }
L_0010F524:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F530u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 345u, depth + 1u); else { c.pc = 0x003B7BF0u; return; } if (c.pc != 0x0010F530u) [[unlikely]] return; }
L_0010F530:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F544; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 58ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F554; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 95ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F564; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 45ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F564:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F518u | kUnwind; return; } goto L_0010F518; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F578u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010F578u) [[unlikely]] return; }
L_0010F578:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F588u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F588u) [[unlikely]] return; }
L_0010F588:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0010F5B4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 9;
L_0010F5B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[17].w[0]);  goto L_0010F620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0010F5C4u) [[unlikely]] return; }
L_0010F5C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0])));  goto L_0010F5EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5D8u); set32(c.r[4], c.r[4].w[0] - 15032u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F5D8u) [[unlikely]] return; }
L_0010F5D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F5E4u) [[unlikely]] return; }
L_0010F5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F688; } }
L_0010F5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F5F4u) [[unlikely]] return; }
L_0010F5F4:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F620; } }
L_0010F600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F608u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 383u, depth + 1u); else { c.pc = 0x0010F6A0u; return; } if (c.pc != 0x0010F608u) [[unlikely]] return; }
L_0010F608:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0010F618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F688; } }
L_0010F618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F620u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010F620u) [[unlikely]] return; }
L_0010F620:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F62Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F62Cu) [[unlikely]] return; }
L_0010F62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F634u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0010F634u) [[unlikely]] return; }
L_0010F634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F600u | kUnwind; return; } goto L_0010F600; } }
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F648u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F648u) [[unlikely]] return; }
L_0010F648:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010F66C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 24u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[18].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010F66C:
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0010F688; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F684u); set32(c.r[4], c.r[4].w[0] - 14983u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F684u) [[unlikely]] return; }
L_0010F684:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010F688:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010F6A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6C4u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 257u, depth + 1u); else { c.pc = 0x00106E20u; return; } if (c.pc != 0x0010F6C4u) [[unlikely]] return; }
L_0010F6C4:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F6D0u) [[unlikely]] return; }
L_0010F6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 346u, depth + 1u); else { c.pc = 0x003B7C08u; return; } if (c.pc != 0x0010F6D8u) [[unlikely]] return; }
L_0010F6D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], 0u + 1u);  goto L_0010F6F8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6ECu); set32(c.r[4], c.r[4].w[0] - 15179u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F6ECu) [[unlikely]] return; }
L_0010F6EC:
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F6F8; } }
L_0010F6F8:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F704u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010F704u) [[unlikely]] return; }
L_0010F704:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F710u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 345u, depth + 1u); else { c.pc = 0x003B7BF0u; return; } if (c.pc != 0x0010F710u) [[unlikely]] return; }
L_0010F710:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F724; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 58ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F734; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 95ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010F744; } }
    c.r[2].d[0] = c.r[17].d[0] ^ 45ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0010F744:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F6F8u | kUnwind; return; } goto L_0010F6F8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F758u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010F758u) [[unlikely]] return; }
L_0010F758:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F768u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F768u) [[unlikely]] return; }
L_0010F768:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0010F794; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 9;
L_0010F794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F79Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F79Cu) [[unlikely]] return; }
L_0010F79C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010F7C0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010F7C0:
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0010F7E8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F7D8u); set32(c.r[4], c.r[4].w[0] - 14955u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F7D8u) [[unlikely]] return; }
L_0010F7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F7E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010F7E0u) [[unlikely]] return; }
L_0010F7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F8D0; } }
L_0010F7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F7F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F7F0u) [[unlikely]] return; }
L_0010F7F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_0010F814; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 7;
L_0010F814:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    set32(c.r[2], 0u + 34u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));  goto L_0010F854; }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0010F850; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F840u); set32(c.r[4], c.r[4].w[0] - 14928u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F840u) [[unlikely]] return; }
L_0010F840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F848u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010F848u) [[unlikely]] return; }
L_0010F848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010F8D0; } }
L_0010F850:
    set32(c.r[5], ld32((c.r[28].w[0] - 29248u)));
    c.budget -= 1;
L_0010F854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F85Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0010F85Cu) [[unlikely]] return; }
L_0010F85C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0010F884; }
    st32((c.r[17].w[0]), c.r[19].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_0010F884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F88Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 403u, depth + 1u); else { c.pc = 0x0010F8F0u; return; } if (c.pc != 0x0010F88Cu) [[unlikely]] return; }
L_0010F88C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F89Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010F89Cu) [[unlikely]] return; }
L_0010F89C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8ACu); st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F8ACu) [[unlikely]] return; }
L_0010F8AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0010F8D0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
L_0010F8D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010F8F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0010F9D4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 14897u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F924u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00106A90u; return; } if (c.pc != 0x0010F924u) [[unlikely]] return; }
L_0010F924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F9D4; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F938u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F938u) [[unlikely]] return; }
L_0010F938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F958; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 9u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-9ll);
    st64((c.r[17].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 6;
L_0010F958:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 14887u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F96Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 232u, depth + 1u); else { c.pc = 0x00106890u; return; } if (c.pc != 0x0010F96Cu) [[unlikely]] return; }
L_0010F96C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0010F98C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F984u); set32(c.r[4], c.r[4].w[0] - 14883u);  if (depth < kMaxDepth) unit_0000(c, 322u, depth + 1u); else { c.pc = 0x00103840u; return; } if (c.pc != 0x0010F984u) [[unlikely]] return; }
L_0010F984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010FA60; } }
L_0010F98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F994u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010F994u) [[unlikely]] return; }
L_0010F994:
    set32(c.r[18], c.r[16].w[0] + 3u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010F9A8u) [[unlikely]] return; }
L_0010F9A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0010FA60; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_0010FA5C; } }
L_0010F9D4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_0010F9E4; }
    set32(c.r[16], 0u + 60u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 2;
L_0010F9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9ECu);  if (depth < kMaxDepth) unit_0001(c, 257u, depth + 1u); else { c.pc = 0x00106E20u; return; } if (c.pc != 0x0010F9ECu) [[unlikely]] return; }
L_0010F9EC:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { goto L_0010FA00; } }
L_0010F9FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0010FA00:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA0Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010FA0Cu) [[unlikely]] return; }
L_0010FA0C:
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F9FCu | kUnwind; return; } goto L_0010F9FC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA24u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 375u, depth + 1u); else { c.pc = 0x0010B690u; return; } if (c.pc != 0x0010FA24u) [[unlikely]] return; }
L_0010FA24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010FA34u) [[unlikely]] return; }
L_0010FA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FA5C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[17].w[0] + 24u), c.r[2].d[0]);
    c.budget -= 8;
L_0010FA5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010FA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 2u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 7;
L_0010FA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FAA4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010FAA4u) [[unlikely]] return; }
L_0010FAA4:
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 62u);  goto L_0010FC10; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FAC0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010FAC0u) [[unlikely]] return; }
L_0010FAC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], 0u + 2u);  goto L_0010FAEC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[17], 0u + 2u);
    c.budget -= 9;
L_0010FAEC:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_0010FAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FAF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010FAF8u) [[unlikely]] return; }
L_0010FAF8:
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 62u);  goto L_0010FBAC; }
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010FB14u) [[unlikely]] return; }
L_0010FB14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], 0u + 2u);  goto L_0010FB40; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[17], 0u + 2u);
    c.budget -= 9;
L_0010FB40:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 250u, depth + 1u); else { c.pc = 0x00106C60u; return; } if (c.pc != 0x0010FB4Cu) [[unlikely]] return; }
L_0010FB4C:
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 62u);  goto L_0010FB74; }
    set32(c.r[5], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB64u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 429u, depth + 1u); else { c.pc = 0x0010FC90u; return; } if (c.pc != 0x0010FB64u) [[unlikely]] return; }
L_0010FB64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 415u, depth + 1u); else { c.pc = 0x0010FA80u; return; } if (c.pc != 0x0010FB6Cu) [[unlikely]] return; }
L_0010FB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0010FB98; } }
L_0010FB74:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0010FB90; }
    set32(c.r[5], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB88u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0003(c, 429u, depth + 1u); else { c.pc = 0x0010FC90u; return; } if (c.pc != 0x0010FB88u) [[unlikely]] return; }
L_0010FB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0010FBA4; } }
L_0010FB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0010FBA0; } }
L_0010FB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FB40u | kUnwind; return; } goto L_0010FB40; } }
L_0010FBA0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010FBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0010FBFC; } }
L_0010FBAC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0010FBF0; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010FBC4u) [[unlikely]] return; }
L_0010FBC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0010FC6C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 24u), c.r[2].d[0]);  if (t) { goto L_0010FC04; } }
L_0010FBF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0010FC04; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0010FBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FAF0u | kUnwind; return; } goto L_0010FAF0; } }
L_0010FC04:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FC6C; } }
L_0010FC10:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0010FC5C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010FC28u) [[unlikely]] return; }
L_0010FC28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0010FC78; }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    st64((c.r[16].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FC78; } }
L_0010FC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010FC6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010FC78; } }
L_0010FC6C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FA9Cu | kUnwind; return; } goto L_0010FA9C; } }
L_0010FC78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010FC90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FCACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106EB0u; return; } if (c.pc != 0x0010FCACu) [[unlikely]] return; }
L_0010FCAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0010FCD8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[4].d[0] = ld64((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    st64((c.r[16].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 9;
L_0010FCD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010FCF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010FEA8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD24u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FD24u) [[unlikely]] return; }
L_0010FD24:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD30u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FD30u) [[unlikely]] return; }
L_0010FD30:
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 12u)));  goto L_0010FDA0; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD48u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FD48u) [[unlikely]] return; }
L_0010FD48:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD54u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FD54u) [[unlikely]] return; }
L_0010FD54:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FD60u) [[unlikely]] return; }
L_0010FD60:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FD6Cu) [[unlikely]] return; }
L_0010FD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_0010FD8C; } }
L_0010FD74:
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FD84u) [[unlikely]] return; }
L_0010FD84:
    st32((c.r[19].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 2;
L_0010FD8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[2].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FD74u | kUnwind; return; } goto L_0010FD74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010FD9Cu) [[unlikely]] return; }
L_0010FD9C:
    set32(c.r[19], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0010FDA0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0010FE88; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDB4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FDB4u) [[unlikely]] return; }
L_0010FDB4:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FDC0u) [[unlikely]] return; }
L_0010FDC0:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FDCCu) [[unlikely]] return; }
L_0010FDCC:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FDD8u) [[unlikely]] return; }
L_0010FDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_0010FDF8; } }
L_0010FDE0:
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FDF0u) [[unlikely]] return; }
L_0010FDF0:
    st32((c.r[19].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 2;
L_0010FDF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[2].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FDE0u | kUnwind; return; } goto L_0010FDE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010FE08u) [[unlikely]] return; }
L_0010FE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010FE84; } }
L_0010FE10:
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[20], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[20].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[19].w[0]);  goto L_0010FE84; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE2Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FE2Cu) [[unlikely]] return; }
L_0010FE2C:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE38u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 325u, depth + 1u); else { c.pc = 0x00103890u; return; } if (c.pc != 0x0010FE38u) [[unlikely]] return; }
L_0010FE38:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FE44u) [[unlikely]] return; }
L_0010FE44:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FE50u) [[unlikely]] return; }
L_0010FE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_0010FE70; } }
L_0010FE58:
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 431u, depth + 1u); else { c.pc = 0x0010FCF0u; return; } if (c.pc != 0x0010FE68u) [[unlikely]] return; }
L_0010FE68:
    st32((c.r[20].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 2;
L_0010FE70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[2].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FE58u | kUnwind; return; } goto L_0010FE58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010FE80u) [[unlikely]] return; }
L_0010FE80:
    st32((c.r[17].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 1;
L_0010FE84:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0010FE88:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[2].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FE10u | kUnwind; return; } goto L_0010FE10; }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0010FEAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FEA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0010FEA8u) [[unlikely]] return; }
L_0010FEA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010FEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010FED0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010FEE0:
    st32((c.r[28].w[0] - 29232u), c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0010FEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0010FEFC:
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    c.r[5].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010FEFCu | kUnwind; return; } goto L_0010FEFC; } }
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[4], c.f[3]);
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010FF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[13];
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[3].d[0] & 3ull;  if (t) { goto L_0010FFF8; } }
L_0010FF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFA4u); c.f[21] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0010FFA4u) [[unlikely]] return; }
L_0010FFA4:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] << 2);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.f[0] = c.r[6].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[21], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[0], c.f[21]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 32u), c.r[17].w[0]);
    c.r[17].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 21;
L_0010FFF8:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 2;
    [[clang::musttail]] return unit_0004(c, 1u, depth);
}

}
